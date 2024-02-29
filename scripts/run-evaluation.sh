SCRIPT_DIR=$( cd $( dirname $0 ) && pwd )
BASE_DIR=$( dirname ${SCRIPT_DIR} )

# assumes that you have fud2 setup
if [ $# -lt 3 ]; then
    echo "USAGE: bash $0 CALYX_DIR BENCH_LIST BENCH_DIR [TRACE_OPT]"
    echo "BENCH_LIST is a txt file containing the list of benchmarks to run"
    echo "BENCH_DIR is the name of the subdirectory in ${BASE_DIR} that contains the benchmarks to run"
    echo "if TRACE_OPT is not --trace (this includes not given), then tracing will not happen"
    exit
fi

DATA_DIR=${SCRIPT_DIR}/data
GENERATED_DATA_DIR=${DATA_DIR}/generated-data
WS=${GENERATED_DATA_DIR}/ws
LOGS=${GENERATED_DATA_DIR}/logs
RESULTS_DIR=${GENERATED_DATA_DIR}/results
PERFORMANCE_CSV=${RESULTS_DIR}/performance.csv
BYTES_OF_SV_CSV=${RESULTS_DIR}/bytes-of-sv.csv
CYCLE_COUNTS_CSV=${RESULTS_DIR}/cycle-counts.csv
MODES=(calyx firrtl@sv firrtl@firrtl)

CALYX_DIR=$1
TEST_LIST=$2 # ${SCRIPT_DIR}/bench-list.txt
BENCH_DIR=${BASE_DIR}/benchmarks/${3}
TRACE_OPT=$4

if [ "${TRACE_OPT}" == "--trace" ]; then
    echo "==Enabling tracing..."
else
    echo "==Disabling tracing..."
fi


source ${SCRIPT_DIR}/helper.sh

if [ ! -d ${CALYX_DIR} ]; then
    echo "${CALYX_DIR} not directory!"
    exit
fi

function backup_old_results() {
    if [ -d ${GENERATED_DATA_DIR} ]; then
        echo "****Moving old results"
        mv ${GENERATED_DATA_DIR} ${DATA_DIR}/generated-data-`date +%Y-%m-%d-%H-%M-%S`
    fi
}

function setup_executables() {
    local bench_name=$1
    local ws=$2
    local logs=$3
    futil_file=${BENCH_DIR}/${bench_name}.futil
    data_file=${BENCH_DIR}/${bench_name}.futil.data
    echo "Setting up executables..."
    (
        set -o xtrace
        # exec from calyx
        fud2 ${futil_file} --to sim --through verilator -s sim.data=${data_file} -o calyx.exe --dir calyx-build --keep
        set +o xtrace
    ) &> ${logs}/gol-build-calyx
    (
        set -o xtrace
        # exec from firrtl with sv primitives
        fud2 ${futil_file} --to sim --through firrtl -s sim.data=${data_file} -o firrtl@sv.exe --dir firrtl@sv-build --keep
        set +o xtrace
    ) &> ${logs}/gol-build-firrtl@sv
    (
        set -o xtrace
        # exec from firrtl with firrtl primitivesm
        fud2 ${futil_file} --to sim --through firrtl-with-primitives -s sim.data=${data_file} -o firrtl@firrtl.exe --dir firrtl@firrtl-build --keep
        set +o xtrace
    ) &> ${logs}/gol-build-firrtl@firrtl
}

function run_executable() {
    local exec_file=$1
    local data_dir=$2
    local log_file=$3
    local trace_file=$4         # output of tracing if tracing is enabled.
    if [ "${TRACE_OPT}" == "--trace" ]; then
        TRACE_ARGS="+NOTRACE=0 +OUT=${trace_file}"
    else
        TRACE_ARGS="+NOTRACE=1"
    fi
    (
        set -o xtrace
        time ./${exec_file} +DATA=${data_dir} +CYCLE_LIMIT=500000000 ${TRACE_ARGS}
        set +o xtrace
    ) &> ${log_file}
}

function run_executables() {
    local bench_name=$1
    local data_dir=$2
    local ws=$3
    local logs=$4
    for mode in "${MODES[@]}"; do
        mode_data_dir=${mode}-data
        cp -r ${data_dir} ${mode_data_dir}
        if [ -f ${mode}.exe ]; then
            echo "Running executable for ${mode}..."
            for num in $( seq 1 10 ); do
                rm -f ${mode_data_dir}/*.out
                run_executable ${mode}.exe ${mode_data_dir} ${logs}/gol-exec-${mode}-${num} ${ws}/${mode}-trace.vcd
            done
            python3 ${CALYX_DIR}/fud2/rsrc/json-dat.py --to-json ${logs}/${mode}-result.json ${mode_data_dir} # just get the result from the last run
        else
            echo ${mode}.exe does not exist!
        fi
    done
}

function setup_data_dir() {
    local bench_name=$1
    echo "Creating data directory..."
    data_file=${BENCH_DIR}/${bench_name}.futil.data
    python3 ${CALYX_DIR}/fud2/rsrc/json-dat.py --from-json ${data_file} sim-data
}

function get_time_from_log() {
    local log=$1
    if [ -f ${log} ]; then
        local t=$(tail ${log} | grep ^real | cut -f2 )
        min=$(echo ${t} | cut -dm -f1)
        sec=$(echo ${t} | cut -d\. -f1 | cut -dm -f2)
        frac=$(echo ${t} | cut -d. -f2 | tr -d 's')
        time=$(echo "scale=3;(((${min} * 60)+${sec}) * 1000)+${frac}" | bc -l) # counting in miliseconds
        echo ${time}
    else
        echo -0                 # something failed.
    fi
}

function get_avg_time_from_logs() {
    local mode=$1
    local logs=$2
    sum_expr_acc=0
    for log_file in $( ls ${logs}/gol-exec-${mode}-* ); do
        runtime=$( get_time_from_log ${log_file} )
        sum_expr_acc="${sum_expr_acc} + ${runtime}"
    done
    round $( echo "(${sum_expr_acc}) / 10" | bc -l ) 0
}

function process_results() {
    local bench_name=$1
    local logs=$2
    # extract all times
    short_name=$( echo "${bench_name}" | sed 's/linear-algebra-//g' )
    time_line="${short_name}"
    for mode in "${MODES[@]}"; do
        mode_time=$( get_avg_time_from_logs ${mode} ${logs} )
        time_line="${time_line},${mode_time}"
    done
    echo "${time_line}" >> ${PERFORMANCE_CSV}
    # extract sv bytes
    bytes_line="${short_name}"
    for mode in "${MODES[@]}"; do
        sv_file=${ws}/${mode}-build/${bench_name}.sv
        if [ -f ${sv_file} ]; then
            mode_bytes=$( cat ${sv_file} | wc -c )
            mode_kb=$( echo "scale=1; ${mode_bytes} / 1000" | bc -l )
            mode_kb=$( round "${mode_kb}" 0 )
        else
            mode_bytes=-0       # something failed.
        fi
        bytes_line="${bytes_line},${mode_kb}"
    done
    echo "${bytes_line}" >> ${BYTES_OF_SV_CSV}
    # extract cycle count
    cycles_line="${short_name}"
    for mode in "${MODES[@]}"; do
        # cycle counts should be the same across all 10 runs?
        first_log=${logs}/gol-exec-${mode}-1
        if [ -f ${first_log} ]; then
            mode_cycles=$( grep ^Simulated ${first_log} | rev | cut -d' ' -f2 | rev )
        else
            mode_cycles=-0
        fi
        cycles_line="${cycles_line},${mode_cycles}"
    done
    echo "${cycles_line}" >> ${CYCLE_COUNTS_CSV}
}

function main () {
    backup_old_results
    mkdir -p ${WS} ${LOGS} ${RESULTS_DIR}
    echo "bench-name,calyx,firrtl@sv,firrtl@firrtl" > ${PERFORMANCE_CSV}
    echo "bench-name,calyx,firrtl@sv,firrtl@firrtl" > ${BYTES_OF_SV_CSV}
    echo "bench-name,calyx,firrtl@sv,firrtl@firrtl" > ${CYCLE_COUNTS_CSV}
    while read name; do
        ws=${WS}/${name}
        logs=${LOGS}/${name}
        mkdir -p ${ws} ${logs}
        (
            echo ====${name}
            cd ${ws}
            setup_executables ${name} ${ws} ${logs}
            setup_data_dir ${name}
            run_executables ${name} sim-data ${ws} ${logs}
            process_results ${name} ${logs}
        )
    done < ${TEST_LIST}
    echo "Performance results: ${PERFORMANCE_CSV}"
    echo "SystemVerilog file size results: ${BYTES_OF_SV_CSV}"
    echo "Cycle counts results: ${CYCLE_COUNTS_CSV}"
}

main

# Script to produce a combined latex table for programs generated by run-evaluation.sh into a latex table.
if [ $# -lt 1 ]; then
    echo "USAGE: bash $0 PAPER_DIR"
    exit
fi

echo ===combination table

PAPER_DIR=$1

SCRIPT_DIR=$( cd $( dirname $0 ) && pwd )

IN_FILE=${SCRIPT_DIR}/data/generated-data/results/performance.csv

if [ ! -f ${IN_FILE} ]; then
    echo "${IN_FILE} does not exist! Exiting..."
    exit 1
fi

projects_list=${SCRIPT_DIR}/bench-list.txt

source ${SCRIPT_DIR}/helper.sh

MACROS_DIR=${PAPER_DIR}/generated-macros
TABLES_DIR=${PAPER_DIR}/tables
TABLES_OUT=${TABLES_DIR}/aggregate_results_table.tex
mkdir -p ${MACROS_DIR}
mkdir -p ${TABLES_DIR}

function make_header() {
    echo "
\begin{table}[t!]
\footnotesize
\caption{Results of preliminary experiments. \runtimeHeader is simulation time in milliseconds, and \filesizeHeader is the size of the emitted \sv in kilobytes.}
\vspace{-3mm}
\begin{center}
\begin{tabular}{lcccccc}
\toprule
\multirow{2}{*}{Benchmark} & \multicolumn{2}{c}{\calyx} & \multicolumn{2}{c}{\firSVPrim} & \multicolumn{2}{c}{\firFirPrim} \\\\
\cmidrule(lr){2-3}\cmidrule(lr){4-5}\cmidrule(lr){6-7}
& \runtimeHeader & \filesizeHeader & \runtimeHeader & \filesizeHeader & \runtimeHeader & \filesizeHeader \\\\
"
echo "\midrule"
}

function make_footer() {
    echo "\bottomrule
\vspace{-12mm}
\end{tabular}
\label{aggregate-results-table}
\end{center}
\end{table}
"
}

function make_body() {
    {
        read
        while IFS=, read name calyx fir_sv fir_fir; do
            bench_macro=$( convert_nums_to_words ${name} )
            echo "\performance${bench_macro}BenchName & \performance${bench_macro}Calyx & \filesize${bench_macro}Calyx & \performance${bench_macro}FirSV & \filesize${bench_macro}FirSV & \performance${bench_macro}FirFir & \filesize${bench_macro}FirFir \\\\"
        done
    } < ${IN_FILE}
}

(
make_header
make_body
make_footer
) > ${TABLES_OUT}

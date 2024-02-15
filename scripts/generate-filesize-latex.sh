# Script to convert performance.csv generated by run-evaluation.sh into a latex table.
if [ $# -lt 1 ]; then
    echo "USAGE: bash $0 PAPER_DIR"
    exit
fi

echo ===filesize table

PAPER_DIR=$1

SCRIPT_DIR=$( cd $( dirname $0 ) && pwd )

IN_FILE=${SCRIPT_DIR}/data/generated-data/results/bytes-of-sv.csv

if [ ! -f ${IN_FILE} ]; then
    echo "${IN_FILE} does not exist! Exiting..."
    exit 1
fi

projects_list=${SCRIPT_DIR}/bench-list.txt

source ${SCRIPT_DIR}/helper.sh

MACROS_IDENT=filesize
file_ident=filesize

MACROS_DIR=${PAPER_DIR}/generated-macros
TABLES_DIR=${PAPER_DIR}/tables
mkdir -p ${MACROS_DIR}
mkdir -p ${TABLES_DIR}

MACROS_FILE_IDENT=${file_ident}_macros
MACROS_OUT=${MACROS_DIR}/${MACROS_FILE_IDENT}.tex
TABLES_OUT=${TABLES_DIR}/${file_ident}_table.tex
>${MACROS_OUT}
>${TABLES_OUT}

# place our macros file in, if it doesn't exist
if ! grep -q generated-macros/${MACROS_FILE_IDENT}} ${MACROS_DIR}/all_macro_files.tex; then
    echo "\input{generated-macros/${MACROS_FILE_IDENT}}" >> ${MACROS_DIR}/all_macro_files.tex
fi

function make_header() {
    echo "
\begin{table}[t!]
\footnotesize
\caption{Filesize of emitted \sv in kilobytes.}
\begin{center}
\begin{tabular}{|l|r|r|r|}
\hline
Benchmark & \calyx & \firSVPrim & \firFirPrim \\\\
"
echo "
\hline"
}

function make_footer() {
    echo "\hline
\end{tabular}
%\end{adjustbox}
\label{tabular:output:filesize}
\end{center}
\end{table}
"
}

function make_body() {
    {
        read
        while IFS=, read name calyx fir_sv fir_fir; do
            bench_macro=$( convert_nums_to_words ${name} )
            macro_header="${MACROS_IDENT}${bench_macro}"
            if [ "${project}" == TOTAL ]; then
                echo "\hline"
                echo "\hline"
            fi
            echo "\\${macro_header}BenchName & \\${macro_header}Calyx & \\${macro_header}FirSV & \\${macro_header}FirFir \\\\"
            echo "\newcommand{\\${macro_header}BenchName}{${name}}" >> ${MACROS_OUT}
            echo "\newcommand{\\${macro_header}Calyx}{${calyx}}" >> ${MACROS_OUT}
            echo "\newcommand{\\${macro_header}FirSV}{${fir_sv}}" >> ${MACROS_OUT}
            echo "\newcommand{\\${macro_header}FirFir}{${fir_fir}}" >> ${MACROS_OUT}
        done
    } < ${IN_FILE}
}

(
make_header
make_body
make_footer
) > ${TABLES_OUT}

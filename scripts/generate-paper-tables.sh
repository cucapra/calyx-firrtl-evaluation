# wrapper script to update all details in paper
if [ $# -lt 1 ]; then
    echo "USAGE: bash $0 PAPER_DIR"
    exit
fi

PAPER_DIR=$1

SCRIPT_DIR=$( cd $( dirname $0 ) && pwd )
bash ${SCRIPT_DIR}/generate-performance-latex.sh ${PAPER_DIR}
bash ${SCRIPT_DIR}/generate-filesize-latex.sh ${PAPER_DIR}

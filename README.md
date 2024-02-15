# Evaluation for Calyx's FIRRTL backend

This repository contains evaluation materials for Calyx's new FIRRTL
backend. They consist of scripts to run Verilator simulation for
SystemVerilog programs compiled from
1. Calyx, using Calyx's original Verilog backend (`calyx`),
2. FIRRTL programs produced by Calyx's FIRRTL backend, using Verilog implementations for Calyx's primitives (`firrtl@sv`),
3. FIRRTL programs produced by Calyx's FIRRTL backend, using FIRRTL implementations for Calyx's primitives (`firrtl@firrtl`).

# Setup

Running the benchmarks require setting up the following tools:
- [Calyx](https://github.com/calyxir/calyx) : Currently, the complete work for the FIRRTL backend is on the `fud2-firrtl-with-primitives` branch.
- [FIRRTL](https://github.com/chipsalliance/firrtl)
- [fud2](https://docs.calyxir.org/running-calyx/fud2.html)
- [Verilator](https://verilator.org/guide/latest/install.html)

## Additional fud2 setup

Edit the `fud2` configuration file by running the following command:
```
fud2 edit-config
```
Add the following fields (if they are not already set):
```
[firrtl]
exe = "<FIRRTL_DIR>/utils/bin/firrtl"
```
where `<FIRRTL_DIR>` is the path to the FIRRTL repository.

# Running benchmarks

The benchmarks can be run via the following commands:
```
cd scripts
bash run-evaluation.sh <CALYX_DIR>
```
where `<CALYX_DIR>` is the path to the Calyx repository. 

Results will be generated in the `data/generated-data/results` directory. This directory will contain three CSV files:
- `performance.csv`: Contains the wall-clock time Verilator simulation time in milliseconds averaged over 10 runs.
- `bytes-of-sv.csv`: Contains the size of compiled SystemVerilog files in bytes.
- `cycle-counts.csv`: Contains the number of cycles taken by Verilator during simulation.

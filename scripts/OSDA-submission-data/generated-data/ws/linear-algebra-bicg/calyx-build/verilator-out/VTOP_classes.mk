# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VTOP.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VTOP \
	VTOP___024root__DepSet_hf053e249__0 \
	VTOP___024root__DepSet_hbaffbf48__0 \
	VTOP_TOP__DepSet_h165605ae__0 \
	VTOP_main__DepSet_hceaa94cb__0 \
	VTOP_std_add__DepSet_hd628e87a__0 \
	VTOP_std_reg__DepSet_hb7327545__0 \
	VTOP_seq_mem_d2__D8_DB8__DepSet_hd5a0a237__0 \
	VTOP_std_add__W4__DepSet_heefb110d__0 \
	VTOP_std_reg__W4__DepSet_h93c021d8__0 \
	VTOP_std_reg__W7__DepSet_ha1e885c6__0 \
	VTOP_std_reg__Wa__DepSet_h8765e74f__0 \
	VTOP_std_reg__W2__DepSet_h5eb5cd9f__0 \
	VTOP_std_add__Wa__DepSet_h18d13697__0 \
	VTOP_std_add__W2__DepSet_h1f3af967__0 \
	VTOP_std_add__W7__DepSet_ha3de505f__0 \
	VTOP_std_reg__W1__DepSet_h7da8479a__0 \
	VTOP_seq_mem_d1__S8__DepSet_h52e67e05__0 \
	VTOP_seq_mem_d1__S8__DepSet_h5d923b0c__0 \
	VTOP_seq_mem_d1__S40_I8__DepSet_h91d2d18e__0 \
	VTOP_seq_mem_d1__S40_I8__DepSet_h9c7e8d81__0 \
	VTOP_std_fp_mult_pipe__I20_F0__DepSet_h83f47f50__0 \
	VTOP_std_fp_mult_pipe__I20_F0__DepSet_h8ea03c3f__0 \
	VTOP__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VTOP___024root__Slow \
	VTOP___024root__DepSet_hf053e249__0__Slow \
	VTOP___024root__DepSet_hbaffbf48__0__Slow \
	VTOP_TOP__Slow \
	VTOP_TOP__DepSet_h165605ae__0__Slow \
	VTOP_TOP__DepSet_ha900f807__0__Slow \
	VTOP_main__Slow \
	VTOP_main__DepSet_hceaa94cb__0__Slow \
	VTOP_main__DepSet_hd1d650c6__0__Slow \
	VTOP_std_mult_pipe__Slow \
	VTOP_std_mult_pipe__DepSet_hbe8d3e15__0__Slow \
	VTOP_std_add__Slow \
	VTOP_std_add__DepSet_hd954c515__0__Slow \
	VTOP_std_reg__Slow \
	VTOP_std_reg__DepSet_h7a5e324c__0__Slow \
	VTOP_seq_mem_d2__D8_DB8__Slow \
	VTOP_seq_mem_d2__D8_DB8__DepSet_hd8cc7eda__0__Slow \
	VTOP_std_add__W4__Slow \
	VTOP_std_add__W4__DepSet_hb1a6ce04__0__Slow \
	VTOP_std_const__Vz1_W4__Slow \
	VTOP_std_const__Vz1_W4__DepSet_hb95c304f__0__Slow \
	VTOP_std_const__Vz2_W4__Slow \
	VTOP_std_const__Vz2_W4__DepSet_hc6edfa10__0__Slow \
	VTOP_std_const__V0__Slow \
	VTOP_std_const__V0__DepSet_h0274b4ec__0__Slow \
	VTOP_std_reg__W4__Slow \
	VTOP_std_reg__W4__DepSet_h9e6bfdb7__0__Slow \
	VTOP_std_reg__W7__Slow \
	VTOP_std_reg__W7__DepSet_h6c9461c9__0__Slow \
	VTOP_std_reg__Wa__Slow \
	VTOP_std_reg__Wa__DepSet_h8a11c442__0__Slow \
	VTOP_std_reg__W2__Slow \
	VTOP_std_reg__W2__DepSet_h61e1a972__0__Slow \
	VTOP_undef__W1__Slow \
	VTOP_undef__W1__DepSet_heef0d4e4__0__Slow \
	VTOP_std_add__Wa__Slow \
	VTOP_std_add__Wa__DepSet_h237cf27a__0__Slow \
	VTOP_std_add__W2__Slow \
	VTOP_std_add__W2__DepSet_h2266b62a__0__Slow \
	VTOP_std_add__W7__Slow \
	VTOP_std_add__W7__DepSet_h6e8a0d32__0__Slow \
	VTOP_std_reg__W1__Slow \
	VTOP_std_reg__W1__DepSet_h40d42375__0__Slow \
	VTOP_std_wire__W1__Slow \
	VTOP_std_wire__W1__DepSet_h98d36270__0__Slow \
	VTOP_seq_mem_d1__S8__Slow \
	VTOP_seq_mem_d1__S8__DepSet_h5d923b0c__0__Slow \
	VTOP_seq_mem_d1__S40_I8__Slow \
	VTOP_seq_mem_d1__S40_I8__DepSet_h91d2d18e__0__Slow \
	VTOP_seq_mem_d1__S40_I8__DepSet_h9c7e8d81__0__Slow \
	VTOP_std_fp_mult_pipe__I20_F0__Slow \
	VTOP_std_fp_mult_pipe__I20_F0__DepSet_h8ea03c3f__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VTOP__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VTOP__Syms \
	VTOP__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-

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
	VTOP_seq_mem_d2__D8_DB8__DepSet_hd5a0a237__0 \
	VTOP_seq_mem_d2__D8_DBc__DepSet_h592db236__0 \
	VTOP_std_le_4__DepSet_h65780459__0 \
	VTOP_std_mult_pipe_32__DepSet_h906d0f7c__0 \
	VTOP_std_mult_pipe_32__DepSet_h9b18ec13__0 \
	VTOP_std_add_4__DepSet_hdf43c769__0 \
	VTOP_std_reg_4__DepSet_h0096f38b__0 \
	VTOP_std_reg_32__DepSet_h1fe281ae__0 \
	VTOP_std_reg_5__DepSet_h86e7783b__0 \
	VTOP_std_reg_2__DepSet_h0f4e05d1__0 \
	VTOP_std_add_32__DepSet_h1b06ecee__0 \
	VTOP_std_reg_1__DepSet_h7df8025b__0 \
	VTOP_seq_mem_d1__I1_S1__DepSet_h734bb07a__0 \
	VTOP_seq_mem_d1__I1_S1__DepSet_h3df76d15__0 \
	VTOP_seq_mem_d1__S40_I8__DepSet_h91d2d18e__0 \
	VTOP_seq_mem_d1__S40_I8__DepSet_h9c7e8d81__0 \
	VTOP_seq_mem_d1__S60_I8__DepSet_hd61e7fbd__0 \
	VTOP_seq_mem_d1__S60_I8__DepSet_hd94a3b54__0 \
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
	VTOP_seq_mem_d2__D8_DB8__Slow \
	VTOP_seq_mem_d2__D8_DB8__DepSet_hd8cc7eda__0__Slow \
	VTOP_seq_mem_d2__D8_DBc__Slow \
	VTOP_seq_mem_d2__D8_DBc__DepSet_h64596ed9__0__Slow \
	VTOP_std_le_4__Slow \
	VTOP_std_le_4__DepSet_h2823e138__0__Slow \
	VTOP_std_mult_pipe_32__Slow \
	VTOP_std_mult_pipe_32__DepSet_h9b18ec13__0__Slow \
	VTOP_std_add_4__Slow \
	VTOP_std_add_4__DepSet_he1efa428__0__Slow \
	VTOP_std_lt_4__Slow \
	VTOP_std_lt_4__DepSet_h033b26e6__0__Slow \
	VTOP_std_reg_4__Slow \
	VTOP_std_reg_4__DepSet_h0bc2af86__0__Slow \
	VTOP_std_reg_32__Slow \
	VTOP_std_reg_32__DepSet_h228e5d61__0__Slow \
	VTOP_std_reg_5__Slow \
	VTOP_std_reg_5__DepSet_h899334d6__0__Slow \
	VTOP_std_reg_2__Slow \
	VTOP_std_reg_2__DepSet_h11f9e1c0__0__Slow \
	VTOP_std_add_32__Slow \
	VTOP_std_add_32__DepSet_h2632c8a1__0__Slow \
	VTOP_std_wire_1__Slow \
	VTOP_std_wire_1__DepSet_hc61d3bfd__0__Slow \
	VTOP_std_reg_1__Slow \
	VTOP_std_reg_1__DepSet_h40a3df36__0__Slow \
	VTOP_std_add_5__Slow \
	VTOP_std_add_5__DepSet_h0cc57072__0__Slow \
	VTOP_seq_mem_d1__I1_S1__Slow \
	VTOP_seq_mem_d1__I1_S1__DepSet_h3df76d15__0__Slow \
	VTOP_seq_mem_d1__S40_I8__Slow \
	VTOP_seq_mem_d1__S40_I8__DepSet_h9c7e8d81__0__Slow \
	VTOP_seq_mem_d1__S60_I8__Slow \
	VTOP_seq_mem_d1__S60_I8__DepSet_hd94a3b54__0__Slow \

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

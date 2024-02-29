// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "VTOP.h"

// INCLUDE MODULE CLASSES
#include "VTOP___024root.h"
#include "VTOP_TOP.h"
#include "VTOP_main.h"
#include "VTOP_seq_mem_d2__D8_DB8.h"
#include "VTOP_seq_mem_d2__D8_DBc.h"
#include "VTOP_std_reg_32.h"
#include "VTOP_std_mult_pipe_32.h"
#include "VTOP_std_reg_3.h"
#include "VTOP_std_reg_5.h"
#include "VTOP_std_add_32.h"
#include "VTOP_std_reg_1.h"
#include "VTOP_std_lt_4.h"
#include "VTOP_std_le_4.h"
#include "VTOP_std_add_4.h"
#include "VTOP_std_reg_4.h"
#include "VTOP_std_wire_1.h"
#include "VTOP_std_add_3.h"
#include "VTOP_seq_mem_d1__I1_S1.h"
#include "VTOP_seq_mem_d1__S40_I8.h"
#include "VTOP_seq_mem_d1__S60_I8.h"

// SYMS CLASS (contains all model state)
class VTOP__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTOP* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTOP___024root                 TOP;
    VTOP_TOP                       TOP__TOP;
    VTOP_seq_mem_d2__D8_DB8        TOP__TOP__A_int;
    VTOP_seq_mem_d1__S40_I8        TOP__TOP__A_int__mem;
    VTOP_seq_mem_d2__D8_DBc        TOP__TOP__B_int;
    VTOP_seq_mem_d1__S60_I8        TOP__TOP__B_int__mem;
    VTOP_seq_mem_d1__I1_S1         TOP__TOP__alpha_int;
    VTOP_main                      TOP__TOP__main;
    VTOP_std_reg_32                TOP__TOP__main__A_int_read0_0;
    VTOP_std_reg_32                TOP__TOP__main__B_i_j_0;
    VTOP_std_reg_32                TOP__TOP__main__B_k_j_0;
    VTOP_std_add_4                 TOP__TOP__main__add0;
    VTOP_std_add_32                TOP__TOP__main__add1;
    VTOP_std_add_3                 TOP__TOP__main__adder;
    VTOP_std_add_3                 TOP__TOP__main__adder0;
    VTOP_std_add_3                 TOP__TOP__main__adder1;
    VTOP_std_add_3                 TOP__TOP__main__adder2;
    VTOP_std_add_3                 TOP__TOP__main__adder3;
    VTOP_std_wire_1                TOP__TOP__main__beg_spl_let3_done;
    VTOP_std_wire_1                TOP__TOP__main__beg_spl_let3_go;
    VTOP_std_wire_1                TOP__TOP__main__beg_spl_let4_done;
    VTOP_std_wire_1                TOP__TOP__main__beg_spl_let4_go;
    VTOP_std_wire_1                TOP__TOP__main__beg_spl_let5_done;
    VTOP_std_wire_1                TOP__TOP__main__beg_spl_let5_go;
    VTOP_std_wire_1                TOP__TOP__main__beg_spl_let7_done;
    VTOP_std_wire_1                TOP__TOP__main__beg_spl_let7_go;
    VTOP_std_wire_1                TOP__TOP__main__beg_spl_let8_done;
    VTOP_std_wire_1                TOP__TOP__main__beg_spl_let8_go;
    VTOP_std_reg_1                 TOP__TOP__main__comb_reg;
    VTOP_std_reg_1                 TOP__TOP__main__comb_reg0;
    VTOP_std_reg_1                 TOP__TOP__main__comb_reg1;
    VTOP_std_wire_1                TOP__TOP__main__early_reset_cond00_done;
    VTOP_std_wire_1                TOP__TOP__main__early_reset_cond00_go;
    VTOP_std_wire_1                TOP__TOP__main__early_reset_cond10_done;
    VTOP_std_wire_1                TOP__TOP__main__early_reset_cond10_go;
    VTOP_std_wire_1                TOP__TOP__main__early_reset_cond20_done;
    VTOP_std_wire_1                TOP__TOP__main__early_reset_cond20_go;
    VTOP_std_wire_1                TOP__TOP__main__early_reset_static_par_done;
    VTOP_std_wire_1                TOP__TOP__main__early_reset_static_par_go;
    VTOP_std_wire_1                TOP__TOP__main__early_reset_static_seq0_done;
    VTOP_std_wire_1                TOP__TOP__main__early_reset_static_seq0_go;
    VTOP_std_reg_3                 TOP__TOP__main__fsm;
    VTOP_std_reg_5                 TOP__TOP__main__fsm0;
    VTOP_std_reg_4                 TOP__TOP__main__i0;
    VTOP_std_wire_1                TOP__TOP__main__invoke0_done;
    VTOP_std_wire_1                TOP__TOP__main__invoke0_go;
    VTOP_std_wire_1                TOP__TOP__main__invoke10_done;
    VTOP_std_wire_1                TOP__TOP__main__invoke10_go;
    VTOP_std_wire_1                TOP__TOP__main__invoke14_done;
    VTOP_std_wire_1                TOP__TOP__main__invoke14_go;
    VTOP_std_wire_1                TOP__TOP__main__invoke1_done;
    VTOP_std_wire_1                TOP__TOP__main__invoke1_go;
    VTOP_std_wire_1                TOP__TOP__main__invoke2_done;
    VTOP_std_wire_1                TOP__TOP__main__invoke2_go;
    VTOP_std_wire_1                TOP__TOP__main__invoke3_done;
    VTOP_std_wire_1                TOP__TOP__main__invoke3_go;
    VTOP_std_wire_1                TOP__TOP__main__invoke4_done;
    VTOP_std_wire_1                TOP__TOP__main__invoke4_go;
    VTOP_std_wire_1                TOP__TOP__main__invoke5_done;
    VTOP_std_wire_1                TOP__TOP__main__invoke5_go;
    VTOP_std_wire_1                TOP__TOP__main__invoke9_done;
    VTOP_std_wire_1                TOP__TOP__main__invoke9_go;
    VTOP_std_reg_4                 TOP__TOP__main__j0;
    VTOP_std_reg_4                 TOP__TOP__main__k_0;
    VTOP_std_le_4                  TOP__TOP__main__le0;
    VTOP_std_lt_4                  TOP__TOP__main__lt0;
    VTOP_std_mult_pipe_32          TOP__TOP__main__mult_pipe0;
    VTOP_std_reg_1                 TOP__TOP__main__signal_reg;
    VTOP_std_wire_1                TOP__TOP__main__tdcc_done;
    VTOP_std_wire_1                TOP__TOP__main__tdcc_go;
    VTOP_std_wire_1                TOP__TOP__main__wrapper_early_reset_cond00_done;
    VTOP_std_wire_1                TOP__TOP__main__wrapper_early_reset_cond00_go;
    VTOP_std_wire_1                TOP__TOP__main__wrapper_early_reset_cond10_done;
    VTOP_std_wire_1                TOP__TOP__main__wrapper_early_reset_cond10_go;
    VTOP_std_wire_1                TOP__TOP__main__wrapper_early_reset_cond20_done;
    VTOP_std_wire_1                TOP__TOP__main__wrapper_early_reset_cond20_go;
    VTOP_std_wire_1                TOP__TOP__main__wrapper_early_reset_static_par_done;
    VTOP_std_wire_1                TOP__TOP__main__wrapper_early_reset_static_par_go;
    VTOP_std_wire_1                TOP__TOP__main__wrapper_early_reset_static_seq0_done;
    VTOP_std_wire_1                TOP__TOP__main__wrapper_early_reset_static_seq0_go;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP__A_int__mem;
    VerilatedScope __Vscope_TOP__B_int__mem;

    // CONSTRUCTORS
    VTOP__Syms(VerilatedContext* contextp, const char* namep, VTOP* modelp);
    ~VTOP__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

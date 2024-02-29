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
#include "VTOP_std_mult_pipe.h"
#include "VTOP_std_add.h"
#include "VTOP_std_reg.h"
#include "VTOP_seq_mem_d2__D8_DB8.h"
#include "VTOP_seq_mem_d2__D8_DBc.h"
#include "VTOP_std_add__W4.h"
#include "VTOP_std_const__V0.h"
#include "VTOP_std_const__Vz1_W4.h"
#include "VTOP_std_const__Vz2_W1.h"
#include "VTOP_std_const__Vz3_W4.h"
#include "VTOP_std_const__Vz4_W4.h"
#include "VTOP_std_const__Vz5_W4.h"
#include "VTOP_std_reg__W4.h"
#include "VTOP_std_le__W4.h"
#include "VTOP_std_lt__W4.h"
#include "VTOP_std_reg__W1.h"
#include "VTOP_std_reg__W5.h"
#include "VTOP_undef__W1.h"
#include "VTOP_std_add__W5.h"
#include "VTOP_std_wire__W1.h"
#include "VTOP_seq_mem_d1__I1_S1.h"
#include "VTOP_seq_mem_d1__S40_I8.h"
#include "VTOP_seq_mem_d1__S60_I8.h"
#include "VTOP_std_fp_mult_pipe__I20_F0.h"

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
    VTOP_main                      TOP__TOP__main;
    VTOP_seq_mem_d2__D8_DB8        TOP__TOP__main__A_int;
    VTOP_seq_mem_d1__S40_I8        TOP__TOP__main__A_int__mem;
    VTOP_std_reg                   TOP__TOP__main__A_int_read0_0;
    VTOP_seq_mem_d2__D8_DBc        TOP__TOP__main__B_int;
    VTOP_seq_mem_d1__S60_I8        TOP__TOP__main__B_int__mem;
    VTOP_std_reg                   TOP__TOP__main__B_int_read0_0;
    VTOP_std_reg                   TOP__TOP__main__C_i_j_0;
    VTOP_seq_mem_d2__D8_DBc        TOP__TOP__main__C_int;
    VTOP_seq_mem_d1__S60_I8        TOP__TOP__main__C_int__mem;
    VTOP_std_add__W4               TOP__TOP__main__add2;
    VTOP_std_add                   TOP__TOP__main__add3;
    VTOP_std_add                   TOP__TOP__main__add4;
    VTOP_std_add__W5               TOP__TOP__main__adder;
    VTOP_std_add__W5               TOP__TOP__main__adder0;
    VTOP_std_add__W5               TOP__TOP__main__adder1;
    VTOP_std_add__W5               TOP__TOP__main__adder2;
    VTOP_std_add__W5               TOP__TOP__main__adder3;
    VTOP_std_add__W5               TOP__TOP__main__adder4;
    VTOP_std_add__W5               TOP__TOP__main__adder5;
    VTOP_seq_mem_d1__I1_S1         TOP__TOP__main__alpha_int;
    VTOP_std_reg                   TOP__TOP__main__alpha_int_read0_0;
    VTOP_seq_mem_d1__I1_S1         TOP__TOP__main__beta_int;
    VTOP_std_reg                   TOP__TOP__main__beta_int_read0_0;
    VTOP_std_reg__W1               TOP__TOP__main__comb_reg;
    VTOP_std_reg__W1               TOP__TOP__main__comb_reg0;
    VTOP_std_reg__W1               TOP__TOP__main__comb_reg1;
    VTOP_std_const__V0             TOP__TOP__main__const0;
    VTOP_std_const__Vz1_W4         TOP__TOP__main__const1;
    VTOP_std_const__Vz2_W1         TOP__TOP__main__const10;
    VTOP_std_const__Vz3_W4         TOP__TOP__main__const11;
    VTOP_std_const__Vz4_W4         TOP__TOP__main__const2;
    VTOP_std_const__Vz5_W4         TOP__TOP__main__const4;
    VTOP_std_const__Vz2_W1         TOP__TOP__main__const9;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_cond00_done;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_cond00_go;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_cond10_done;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_cond10_go;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_cond20_done;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_cond20_go;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_par0_done;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_par0_go;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_par4_done;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_par4_go;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_par_done;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_par_go;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq_done;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq_go;
    VTOP_std_reg__W5               TOP__TOP__main__fsm;
    VTOP_std_reg__W4               TOP__TOP__main__fsm0;
    VTOP_std_reg__W4               TOP__TOP__main__i0;
    VTOP_std_wire__W1              TOP__TOP__main__invoke2_done;
    VTOP_std_wire__W1              TOP__TOP__main__invoke2_go;
    VTOP_std_wire__W1              TOP__TOP__main__invoke33_done;
    VTOP_std_wire__W1              TOP__TOP__main__invoke33_go;
    VTOP_std_reg__W4               TOP__TOP__main__j0;
    VTOP_std_reg__W4               TOP__TOP__main__k_0;
    VTOP_std_le__W4                TOP__TOP__main__le0;
    VTOP_std_lt__W4                TOP__TOP__main__lt0;
    VTOP_std_mult_pipe             TOP__TOP__main__mult_pipe0;
    VTOP_std_fp_mult_pipe__I20_F0  TOP__TOP__main__mult_pipe0__comp;
    VTOP_std_reg__W1               TOP__TOP__main__signal_reg;
    VTOP_std_wire__W1              TOP__TOP__main__tdcc_done;
    VTOP_std_wire__W1              TOP__TOP__main__tdcc_go;
    VTOP_std_reg                   TOP__TOP__main__temp2_0;
    VTOP_undef__W1                 TOP__TOP__main__ud;
    VTOP_undef__W1                 TOP__TOP__main__ud0;
    VTOP_undef__W1                 TOP__TOP__main__ud1;
    VTOP_undef__W1                 TOP__TOP__main__ud2;
    VTOP_undef__W1                 TOP__TOP__main__ud3;
    VTOP_undef__W1                 TOP__TOP__main__ud4;
    VTOP_undef__W1                 TOP__TOP__main__ud5;
    VTOP_std_wire__W1              TOP__TOP__main__while_wrapper_early_reset_static_seq_done;
    VTOP_std_wire__W1              TOP__TOP__main__while_wrapper_early_reset_static_seq_go;
    VTOP_std_wire__W1              TOP__TOP__main__wrapper_early_reset_cond00_done;
    VTOP_std_wire__W1              TOP__TOP__main__wrapper_early_reset_cond00_go;
    VTOP_std_wire__W1              TOP__TOP__main__wrapper_early_reset_cond10_done;
    VTOP_std_wire__W1              TOP__TOP__main__wrapper_early_reset_cond10_go;
    VTOP_std_wire__W1              TOP__TOP__main__wrapper_early_reset_cond20_done;
    VTOP_std_wire__W1              TOP__TOP__main__wrapper_early_reset_cond20_go;
    VTOP_std_wire__W1              TOP__TOP__main__wrapper_early_reset_static_par0_done;
    VTOP_std_wire__W1              TOP__TOP__main__wrapper_early_reset_static_par0_go;
    VTOP_std_wire__W1              TOP__TOP__main__wrapper_early_reset_static_par4_done;
    VTOP_std_wire__W1              TOP__TOP__main__wrapper_early_reset_static_par4_go;
    VTOP_std_wire__W1              TOP__TOP__main__wrapper_early_reset_static_par_done;
    VTOP_std_wire__W1              TOP__TOP__main__wrapper_early_reset_static_par_go;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP__main;
    VerilatedScope __Vscope_TOP__main__A_int__mem;
    VerilatedScope __Vscope_TOP__main__B_int__mem;
    VerilatedScope __Vscope_TOP__main__C_int__mem;
    VerilatedScope __Vscope_TOP__main__alpha_int;
    VerilatedScope __Vscope_TOP__main__beta_int;

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

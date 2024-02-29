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
#include "VTOP_std_add__W4.h"
#include "VTOP_std_const__Vz1_W4.h"
#include "VTOP_std_const__V0.h"
#include "VTOP_std_const__Vz2_W4.h"
#include "VTOP_std_reg__W4.h"
#include "VTOP_std_reg__Wa.h"
#include "VTOP_std_reg__W7.h"
#include "VTOP_std_reg__Wf.h"
#include "VTOP_undef__W1.h"
#include "VTOP_std_add__Wf.h"
#include "VTOP_std_add__Wa.h"
#include "VTOP_std_add__W7.h"
#include "VTOP_std_reg__W1.h"
#include "VTOP_std_wire__W1.h"
#include "VTOP_seq_mem_d1__S40_I8.h"
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
    VTOP_seq_mem_d2__D8_DB8        TOP__TOP__main__B_int;
    VTOP_seq_mem_d1__S40_I8        TOP__TOP__main__B_int__mem;
    VTOP_seq_mem_d2__D8_DB8        TOP__TOP__main__C_int;
    VTOP_seq_mem_d1__S40_I8        TOP__TOP__main__C_int__mem;
    VTOP_seq_mem_d2__D8_DB8        TOP__TOP__main__D_int;
    VTOP_seq_mem_d1__S40_I8        TOP__TOP__main__D_int__mem;
    VTOP_seq_mem_d2__D8_DB8        TOP__TOP__main__E_int;
    VTOP_seq_mem_d1__S40_I8        TOP__TOP__main__E_int__mem;
    VTOP_seq_mem_d2__D8_DB8        TOP__TOP__main__F_int;
    VTOP_seq_mem_d1__S40_I8        TOP__TOP__main__F_int__mem;
    VTOP_seq_mem_d2__D8_DB8        TOP__TOP__main__G_int;
    VTOP_seq_mem_d1__S40_I8        TOP__TOP__main__G_int__mem;
    VTOP_std_add                   TOP__TOP__main__add0;
    VTOP_std_add__W4               TOP__TOP__main__add1;
    VTOP_std_add__Wf               TOP__TOP__main__adder;
    VTOP_std_add__Wa               TOP__TOP__main__adder0;
    VTOP_std_add__W7               TOP__TOP__main__adder1;
    VTOP_std_add__W4               TOP__TOP__main__adder2;
    VTOP_std_add__Wa               TOP__TOP__main__adder3;
    VTOP_std_add__W7               TOP__TOP__main__adder4;
    VTOP_std_add__W4               TOP__TOP__main__adder5;
    VTOP_std_add__Wa               TOP__TOP__main__adder6;
    VTOP_std_add__W7               TOP__TOP__main__adder7;
    VTOP_std_add__W4               TOP__TOP__main__adder8;
    VTOP_std_reg                   TOP__TOP__main__bin_read0_0;
    VTOP_std_const__Vz1_W4         TOP__TOP__main__const0;
    VTOP_std_const__V0             TOP__TOP__main__const14;
    VTOP_std_const__Vz2_W4         TOP__TOP__main__const17;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq0_done;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq0_go;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq11_done;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq11_go;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq16_done;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq16_go;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq17_done;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq17_go;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq19_done;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq19_go;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq1_done;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq1_go;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq3_done;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq3_go;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq8_done;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq8_go;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq9_done;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq9_go;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq_done;
    VTOP_std_wire__W1              TOP__TOP__main__early_reset_static_seq_go;
    VTOP_std_reg__Wa               TOP__TOP__main__fsm;
    VTOP_std_reg__W7               TOP__TOP__main__fsm0;
    VTOP_std_reg__W4               TOP__TOP__main__fsm1;
    VTOP_std_reg__W7               TOP__TOP__main__fsm2;
    VTOP_std_reg__Wf               TOP__TOP__main__fsm3;
    VTOP_std_reg__Wa               TOP__TOP__main__fsm4;
    VTOP_std_reg__W4               TOP__TOP__main__fsm5;
    VTOP_std_reg__Wa               TOP__TOP__main__fsm6;
    VTOP_std_reg__W7               TOP__TOP__main__fsm7;
    VTOP_std_reg__W4               TOP__TOP__main__fsm8;
    VTOP_std_reg__W4               TOP__TOP__main__i0;
    VTOP_std_reg__W4               TOP__TOP__main__j0;
    VTOP_std_reg__W4               TOP__TOP__main__k0;
    VTOP_std_mult_pipe             TOP__TOP__main__mult_pipe0;
    VTOP_std_fp_mult_pipe__I20_F0  TOP__TOP__main__mult_pipe0__comp;
    VTOP_std_reg__W1               TOP__TOP__main__signal_reg;
    VTOP_undef__W1                 TOP__TOP__main__ud;
    VTOP_undef__W1                 TOP__TOP__main__ud0;
    VTOP_undef__W1                 TOP__TOP__main__ud1;
    VTOP_undef__W1                 TOP__TOP__main__ud2;
    VTOP_undef__W1                 TOP__TOP__main__ud3;
    VTOP_undef__W1                 TOP__TOP__main__ud4;
    VTOP_undef__W1                 TOP__TOP__main__ud5;
    VTOP_undef__W1                 TOP__TOP__main__ud6;
    VTOP_undef__W1                 TOP__TOP__main__ud7;
    VTOP_undef__W1                 TOP__TOP__main__ud8;
    VTOP_std_reg                   TOP__TOP__main__v_0;
    VTOP_std_wire__W1              TOP__TOP__main__wrapper_early_reset_static_seq_done;
    VTOP_std_wire__W1              TOP__TOP__main__wrapper_early_reset_static_seq_go;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP__main;
    VerilatedScope __Vscope_TOP__main__A_int__mem;
    VerilatedScope __Vscope_TOP__main__B_int__mem;
    VerilatedScope __Vscope_TOP__main__C_int__mem;
    VerilatedScope __Vscope_TOP__main__D_int__mem;
    VerilatedScope __Vscope_TOP__main__E_int__mem;
    VerilatedScope __Vscope_TOP__main__F_int__mem;
    VerilatedScope __Vscope_TOP__main__G_int__mem;

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

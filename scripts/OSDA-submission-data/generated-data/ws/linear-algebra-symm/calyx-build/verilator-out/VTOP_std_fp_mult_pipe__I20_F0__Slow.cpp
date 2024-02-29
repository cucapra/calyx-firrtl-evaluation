// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_fp_mult_pipe__I20_F0.h"

void VTOP_std_fp_mult_pipe__I20_F0___ctor_var_reset(VTOP_std_fp_mult_pipe__I20_F0* vlSelf);

VTOP_std_fp_mult_pipe__I20_F0::VTOP_std_fp_mult_pipe__I20_F0(VTOP__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTOP_std_fp_mult_pipe__I20_F0___ctor_var_reset(this);
}

void VTOP_std_fp_mult_pipe__I20_F0::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTOP_std_fp_mult_pipe__I20_F0::~VTOP_std_fp_mult_pipe__I20_F0() {
}

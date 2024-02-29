// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg_32.h"

void VTOP_std_reg_32___ctor_var_reset(VTOP_std_reg_32* vlSelf);

VTOP_std_reg_32::VTOP_std_reg_32(VTOP__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTOP_std_reg_32___ctor_var_reset(this);
}

void VTOP_std_reg_32::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTOP_std_reg_32::~VTOP_std_reg_32() {
}

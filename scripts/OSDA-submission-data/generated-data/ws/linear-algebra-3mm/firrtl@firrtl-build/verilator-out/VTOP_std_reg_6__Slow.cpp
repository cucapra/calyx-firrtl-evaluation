// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg_6.h"

void VTOP_std_reg_6___ctor_var_reset(VTOP_std_reg_6* vlSelf);

VTOP_std_reg_6::VTOP_std_reg_6(VTOP__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTOP_std_reg_6___ctor_var_reset(this);
}

void VTOP_std_reg_6::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTOP_std_reg_6::~VTOP_std_reg_6() {
}

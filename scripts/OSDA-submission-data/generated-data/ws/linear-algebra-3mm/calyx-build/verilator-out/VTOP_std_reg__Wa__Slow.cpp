// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg__Wa.h"

void VTOP_std_reg__Wa___ctor_var_reset(VTOP_std_reg__Wa* vlSelf);

VTOP_std_reg__Wa::VTOP_std_reg__Wa(VTOP__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTOP_std_reg__Wa___ctor_var_reset(this);
}

void VTOP_std_reg__Wa::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTOP_std_reg__Wa::~VTOP_std_reg__Wa() {
}

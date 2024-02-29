// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_add.h"

void VTOP_std_add___ctor_var_reset(VTOP_std_add* vlSelf);

VTOP_std_add::VTOP_std_add(VTOP__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTOP_std_add___ctor_var_reset(this);
}

void VTOP_std_add::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTOP_std_add::~VTOP_std_add() {
}

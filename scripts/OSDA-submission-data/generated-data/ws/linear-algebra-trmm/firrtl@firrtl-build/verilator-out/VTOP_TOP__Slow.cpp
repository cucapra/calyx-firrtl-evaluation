// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP_TOP.h"
#include "VTOP__Syms.h"

void VTOP_TOP___ctor_var_reset(VTOP_TOP* vlSelf);

VTOP_TOP::VTOP_TOP(VTOP__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTOP_TOP___ctor_var_reset(this);
}

void VTOP_TOP::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTOP_TOP::~VTOP_TOP() {
}

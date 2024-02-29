// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_undef__W1.h"

void VTOP_undef__W1___ctor_var_reset(VTOP_undef__W1* vlSelf);

VTOP_undef__W1::VTOP_undef__W1(VTOP__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTOP_undef__W1___ctor_var_reset(this);
}

void VTOP_undef__W1::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTOP_undef__W1::~VTOP_undef__W1() {
}

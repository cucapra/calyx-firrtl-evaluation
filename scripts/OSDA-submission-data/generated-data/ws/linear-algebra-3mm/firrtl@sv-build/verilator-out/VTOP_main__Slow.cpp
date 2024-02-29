// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_main.h"

void VTOP_main___ctor_var_reset(VTOP_main* vlSelf);

VTOP_main::VTOP_main(VTOP__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTOP_main___ctor_var_reset(this);
}

void VTOP_main::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTOP_main::~VTOP_main() {
}

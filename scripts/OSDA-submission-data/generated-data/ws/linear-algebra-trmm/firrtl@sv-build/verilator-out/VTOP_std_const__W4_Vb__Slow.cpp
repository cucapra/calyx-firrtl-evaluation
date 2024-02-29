// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_const__W4_Vb.h"

void VTOP_std_const__W4_Vb___ctor_var_reset(VTOP_std_const__W4_Vb* vlSelf);

VTOP_std_const__W4_Vb::VTOP_std_const__W4_Vb(VTOP__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTOP_std_const__W4_Vb___ctor_var_reset(this);
}

void VTOP_std_const__W4_Vb::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTOP_std_const__W4_Vb::~VTOP_std_const__W4_Vb() {
}

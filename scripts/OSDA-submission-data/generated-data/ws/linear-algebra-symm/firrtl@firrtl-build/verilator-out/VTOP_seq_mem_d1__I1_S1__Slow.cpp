// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_seq_mem_d1__I1_S1.h"

void VTOP_seq_mem_d1__I1_S1___ctor_var_reset(VTOP_seq_mem_d1__I1_S1* vlSelf);

VTOP_seq_mem_d1__I1_S1::VTOP_seq_mem_d1__I1_S1(VTOP__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTOP_seq_mem_d1__I1_S1___ctor_var_reset(this);
}

void VTOP_seq_mem_d1__I1_S1::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTOP_seq_mem_d1__I1_S1::~VTOP_seq_mem_d1__I1_S1() {
}

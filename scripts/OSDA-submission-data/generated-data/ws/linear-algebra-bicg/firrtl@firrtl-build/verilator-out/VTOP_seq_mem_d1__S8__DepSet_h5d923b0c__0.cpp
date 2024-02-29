// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP_seq_mem_d1__S8.h"

VL_INLINE_OPT void VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__p_int__1(VTOP_seq_mem_d1__S8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__p_int__1\n"); );
    // Body
    vlSelf->__PVT__read_out = vlSelf->__Vdly__read_out;
}

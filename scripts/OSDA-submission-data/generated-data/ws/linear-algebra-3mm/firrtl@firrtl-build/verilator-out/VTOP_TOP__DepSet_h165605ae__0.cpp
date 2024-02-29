// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP_TOP.h"

VL_INLINE_OPT void VTOP_TOP___nba_sequent__TOP__TOP__0(VTOP_TOP* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTOP_TOP___nba_sequent__TOP__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__cycle_count = vlSelf->__PVT__cycle_count;
    vlSelf->__Vdly__cycle_count = (1ULL + vlSelf->__PVT__cycle_count);
}

VL_INLINE_OPT void VTOP_TOP___nba_sequent__TOP__TOP__1(VTOP_TOP* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTOP_TOP___nba_sequent__TOP__TOP__1\n"); );
    // Body
    vlSelf->__PVT__go = VL_LTES_IQQ(64, 3ULL, vlSelf->__PVT__cycle_count);
    vlSelf->__PVT__reset = VL_GTS_IQQ(64, 3ULL, vlSelf->__PVT__cycle_count);
    vlSelf->__PVT__cycle_count = vlSelf->__Vdly__cycle_count;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_add__W4.h"

VL_INLINE_OPT void VTOP_std_add__W4___act_sequent__TOP__TOP__main__adder2__0(VTOP_std_add__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_add__W4___act_sequent__TOP__TOP__main__adder2__0\n"); );
    // Body
    vlSelf->__PVT__out = (0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                    ? (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)
                                    : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                              ? 1U : 0U)));
}

VL_INLINE_OPT void VTOP_std_add__W4___act_sequent__TOP__TOP__main__adder5__0(VTOP_std_add__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_add__W4___act_sequent__TOP__TOP__main__adder5__0\n"); );
    // Body
    vlSelf->__PVT__out = (0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in)
                                    ? (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)
                                    : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in)
                                              ? 1U : 0U)));
}

VL_INLINE_OPT void VTOP_std_add__W4___act_sequent__TOP__TOP__main__adder8__0(VTOP_std_add__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_add__W4___act_sequent__TOP__TOP__main__adder8__0\n"); );
    // Body
    vlSelf->__PVT__out = (0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)
                                    ? (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)
                                    : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)
                                              ? 1U : 0U)));
}

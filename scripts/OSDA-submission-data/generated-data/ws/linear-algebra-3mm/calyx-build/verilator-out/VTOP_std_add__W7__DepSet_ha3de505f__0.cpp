// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_add__W7.h"

VL_INLINE_OPT void VTOP_std_add__W7___act_sequent__TOP__TOP__main__adder1__0(VTOP_std_add__W7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_add__W7___act_sequent__TOP__TOP__main__adder1__0\n"); );
    // Body
    vlSelf->__PVT__out = (0x7fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                     ? (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)
                                     : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                               ? 1U
                                               : 0U)));
}

VL_INLINE_OPT void VTOP_std_add__W7___act_sequent__TOP__TOP__main__adder4__0(VTOP_std_add__W7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_add__W7___act_sequent__TOP__TOP__main__adder4__0\n"); );
    // Body
    vlSelf->__PVT__out = (0x7fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in)
                                     ? (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)
                                     : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in)
                                               ? 1U
                                               : 0U)));
}

VL_INLINE_OPT void VTOP_std_add__W7___act_sequent__TOP__TOP__main__adder7__0(VTOP_std_add__W7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_add__W7___act_sequent__TOP__TOP__main__adder7__0\n"); );
    // Body
    vlSelf->__PVT__out = (0x7fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in)
                                     ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)
                                     : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in)
                                               ? 1U
                                               : 0U)));
}

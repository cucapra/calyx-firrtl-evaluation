// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg__W4.h"

VL_INLINE_OPT void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__i0__0(VTOP_std_reg__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__i0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__i0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__i0_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard30)
                               ? (0xfU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__TOP__main.__PVT__add1_left)))
                               : 0U);
    }
}

VL_INLINE_OPT void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__j0__0(VTOP_std_reg__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__j0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__j0_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard121)
                               ? (0xfU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__TOP__main.__PVT__add1_left)))
                               : 0U);
    }
}

VL_INLINE_OPT void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__k0__0(VTOP_std_reg__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__k0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__k0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__k0_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard132)
                               ? (0xfU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__TOP__main.__PVT__add1_left)))
                               : 0U);
    }
}

VL_INLINE_OPT void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm1__0(VTOP_std_reg__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm1__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in));
}

VL_INLINE_OPT void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm1__1(VTOP_std_reg__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm1__1\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard257)
                               ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard260)
                                        ? (IData)(vlSymsp->TOP__TOP__main__adder8.__PVT__out)
                                        : 0U));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm5__0(VTOP_std_reg__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm5__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in));
}

VL_INLINE_OPT void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm5__1(VTOP_std_reg__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm5__1\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard222)
                               ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard225)
                                        ? (IData)(vlSymsp->TOP__TOP__main__adder2.__PVT__out)
                                        : 0U));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm8__0(VTOP_std_reg__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm8__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in));
}

VL_INLINE_OPT void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm8__1(VTOP_std_reg__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm8__1\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard240)
                               ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard243)
                                        ? (IData)(vlSymsp->TOP__TOP__main__adder5.__PVT__out)
                                        : 0U));
    }
}

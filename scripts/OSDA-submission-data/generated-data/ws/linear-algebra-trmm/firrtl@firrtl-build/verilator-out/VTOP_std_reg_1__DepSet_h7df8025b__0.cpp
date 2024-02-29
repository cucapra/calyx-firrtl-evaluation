// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg_1.h"

VL_INLINE_OPT void VTOP_std_reg_1___nba_sequent__TOP__TOP__main__comb_reg__0(VTOP_std_reg_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_1___nba_sequent__TOP__TOP__main__comb_reg__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in) 
                                       & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out));
    }
}

VL_INLINE_OPT void VTOP_std_reg_1___nba_sequent__TOP__TOP__main__comb_reg0__0(VTOP_std_reg_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_1___nba_sequent__TOP__TOP__main__comb_reg0__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                                       & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out));
    }
}

VL_INLINE_OPT void VTOP_std_reg_1___nba_sequent__TOP__TOP__main__comb_reg1__0(VTOP_std_reg_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_1___nba_sequent__TOP__TOP__main__comb_reg1__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in) 
                                       & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__internal_reg)
                                            : 0U) < 
                                          ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                            ? 8U : 0U)));
    }
}

VL_INLINE_OPT void VTOP_std_reg_1___nba_sequent__TOP__TOP__main__signal_reg__0(VTOP_std_reg_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_1___nba_sequent__TOP__TOP__main__signal_reg__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_done_in) 
                | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3989696c__0))) {
        vlSelf->__PVT__internal_reg = ((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_done_in)) 
                                       & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3989696c__0));
    }
}

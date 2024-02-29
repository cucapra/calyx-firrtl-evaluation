// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg_4.h"

VL_INLINE_OPT void VTOP_std_reg_4___nba_sequent__TOP__TOP__main__i0__0(VTOP_std_reg_4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_4___nba_sequent__TOP__TOP__main__i0__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__i0_write_en) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke0_go_in)
                                        ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke14_go_in)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0))
                                                 : 0U));
    }
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__i0_write_en));
}

VL_INLINE_OPT void VTOP_std_reg_4___nba_sequent__TOP__TOP__main__j0__0(VTOP_std_reg_4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_4___nba_sequent__TOP__TOP__main__j0__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__j0_write_en) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke1_go_in)
                                        ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hae6fc7c9__0)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0))
                                                 : 0U));
    }
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
}

VL_INLINE_OPT void VTOP_std_reg_4___nba_sequent__TOP__TOP__main__k_0__0(VTOP_std_reg_4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_4___nba_sequent__TOP__TOP__main__k_0__0\n"); );
    // Body
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__k_0_write_en));
}

VL_INLINE_OPT void VTOP_std_reg_4___nba_sequent__TOP__TOP__main__k_0__1(VTOP_std_reg_4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_4___nba_sequent__TOP__TOP__main__k_0__1\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__k_0_write_en) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__PVT__k_0_write_en)
                                        ? (0xfU & (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0))
                                        : 0U);
    }
}

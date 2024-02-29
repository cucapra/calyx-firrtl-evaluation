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
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__i0_write_en));
}

VL_INLINE_OPT void VTOP_std_reg_4___nba_sequent__TOP__TOP__main__i0__1(VTOP_std_reg_4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_4___nba_sequent__TOP__TOP__main__i0__1\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__i0_write_en) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                        ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke33_go_in)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlSymsp->TOP__TOP__main__add2.__PVT___GEN_0))
                                                 : 0U));
    }
}

VL_INLINE_OPT void VTOP_std_reg_4___nba_sequent__TOP__TOP__main__j0__0(VTOP_std_reg_4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_4___nba_sequent__TOP__TOP__main__j0__0\n"); );
    // Body
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__j0_write_en) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke2_go_in)
                                        ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hbbc1670d__0)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlSymsp->TOP__TOP__main__add2.__PVT___GEN_0))
                                                 : 0U));
    }
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
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                        ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h670f5dd8__0)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlSymsp->TOP__TOP__main__add2.__PVT___GEN_0))
                                                 : 0U));
    }
}

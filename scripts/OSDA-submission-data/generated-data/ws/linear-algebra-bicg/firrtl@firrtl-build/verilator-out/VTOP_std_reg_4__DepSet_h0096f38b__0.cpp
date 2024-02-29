// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg_4.h"

VL_INLINE_OPT void VTOP_std_reg_4___nba_sequent__TOP__TOP__main__i1__0(VTOP_std_reg_4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_4___nba_sequent__TOP__TOP__main__i1__0\n"); );
    // Body
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__i1_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__i1_write_en) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5fa391a3__0)
                                        ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h42da30c7__0)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0))
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
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                        ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h96d1a8ed__0)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0))
                                                 : 0U));
    }
}

VL_INLINE_OPT void VTOP_std_reg_4___nba_sequent__TOP__TOP__main__fsm5__0(VTOP_std_reg_4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_4___nba_sequent__TOP__TOP__main__fsm5__0\n"); );
    // Body
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__fsm5_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__fsm5_write_en) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_300)
                                        ? 0xbU : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_heb163d00__0)
                                                   ? 1U
                                                   : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_61)));
    }
}

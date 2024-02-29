// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg__W2.h"

VL_INLINE_OPT void VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm0__0(VTOP_std_reg__W2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in) {
        vlSelf->__PVT__out = vlSymsp->TOP__TOP__main.__PVT__fsm0_in;
    }
}

VL_INLINE_OPT void VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm1__0(VTOP_std_reg__W2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm1__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__fsm1_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__fsm1_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2db91552__0)
                               ? 2U : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_71));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm2__0(VTOP_std_reg__W2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm2__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__fsm2_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__fsm2_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h1832b6c0__0)
                               ? 2U : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_96));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm3__0(VTOP_std_reg__W2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm3__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__fsm3_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__fsm3_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h264338ce__0)
                               ? 2U : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_48));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm4__0(VTOP_std_reg__W2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm4__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__fsm4_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__fsm4_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h14f8c1ab__0)
                               ? 2U : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_75));
    }
}

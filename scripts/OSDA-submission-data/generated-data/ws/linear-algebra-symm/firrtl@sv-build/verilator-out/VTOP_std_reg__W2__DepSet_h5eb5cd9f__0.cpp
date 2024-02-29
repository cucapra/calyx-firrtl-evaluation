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
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__fsm0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__fsm0_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8ee6cc1c__0)
                               ? 2U : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_152));
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
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hecb1f014__0)
                               ? 2U : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_91));
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
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h79b01997__0)
                               ? 2U : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_156));
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
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8f68fe18__0)
                               ? 2U : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_55));
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
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h61ae0439__0)
                               ? 2U : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_95));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm5__0(VTOP_std_reg__W2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm5__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__fsm5_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__fsm5_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hc3e17a86__0)
                               ? 2U : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_59));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm6__0(VTOP_std_reg__W2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm6__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__fsm6_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__fsm6_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_ha4427d2e__0)
                               ? 2U : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_43));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm7__0(VTOP_std_reg__W2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm7__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__fsm7_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__fsm7_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h340200cd__0)
                               ? 2U : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_142));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm8__0(VTOP_std_reg__W2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm8__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__fsm8_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__fsm8_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h641abbc9__0)
                               ? 2U : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_77));
    }
}

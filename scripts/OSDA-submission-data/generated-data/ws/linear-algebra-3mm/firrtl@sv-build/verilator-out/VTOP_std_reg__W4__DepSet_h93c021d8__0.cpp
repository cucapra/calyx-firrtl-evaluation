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
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__i0_write_en) {
        vlSelf->__PVT__out = (((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke0_go_in) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke12_go_in) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__PVT__invoke24_go_in)))
                               ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb1823217__0)
                                        ? (IData)(vlSymsp->TOP__TOP__main__add1.__PVT__out)
                                        : 0U));
    }
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__i0_write_en));
}

VL_INLINE_OPT void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__j0__0(VTOP_std_reg__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__j0__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__j0_write_en) {
        vlSelf->__PVT__out = (((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke13_go_in) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke1_go_in) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__PVT__invoke25_go_in)))
                               ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hdc1723ac__0)
                                        ? (IData)(vlSymsp->TOP__TOP__main__add1.__PVT__out)
                                        : 0U));
    }
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
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
        vlSelf->__PVT__out = (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par3_go_in) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)))
                               ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7564b4ea__0)
                                        ? (IData)(vlSymsp->TOP__TOP__main__add1.__PVT__out)
                                        : 0U));
    }
}

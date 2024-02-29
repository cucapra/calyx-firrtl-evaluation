// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg_5.h"

VL_INLINE_OPT void VTOP_std_reg_5___nba_sequent__TOP__TOP__main__fsm__0(VTOP_std_reg_5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_5___nba_sequent__TOP__TOP__main__fsm__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in) 
                | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                   | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in) 
                      | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in) 
                         | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in) 
                            | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in))))))))) {
        vlSelf->__PVT__internal_reg = vlSymsp->TOP__TOP__main.__PVT__fsm_in;
    }
}

VL_INLINE_OPT void VTOP_std_reg_5___nba_sequent__TOP__TOP__main__fsm9__0(VTOP_std_reg_5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_5___nba_sequent__TOP__TOP__main__fsm9__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if ((((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_507) 
                 | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hdd6bcd42__0) 
                    | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2f620bc1__0) 
                        & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                       | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5aaa8d8d__0) 
                           & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                          | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h902ba0f5__0) 
                             | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hdcf452ea__0) 
                                | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h253d2600__0) 
                                   | ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_536) 
                                      | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_heb2b6ba0__0) 
                                         & (IData)(vlSymsp->TOP__TOP.__PVT__go)))))))))) 
                | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb33aea2c__0) 
                    & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                   | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h582fb65c__0) 
                      | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h47e459e9__0) 
                          | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hac2f5c96__0)) 
                         & (IData)(vlSymsp->TOP__TOP.__PVT__go)))))) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf1a0deb2__0)
                                        ? 9U : ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_536)
                                                 ? 0x11U
                                                 : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_119)));
    }
}

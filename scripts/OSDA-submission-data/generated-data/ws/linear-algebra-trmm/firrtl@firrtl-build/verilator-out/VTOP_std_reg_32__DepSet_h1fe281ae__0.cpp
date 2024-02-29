// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg_32.h"

VL_INLINE_OPT void VTOP_std_reg_32___nba_sequent__TOP__TOP__main__A_int_read0_0__0(VTOP_std_reg_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_32___nba_sequent__TOP__TOP__main__A_int_read0_0__0\n"); );
    // Body
    vlSelf->__Vdly__internal_reg = vlSelf->__PVT__internal_reg;
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__Vdly__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__A_int_read0_0_write_en) {
        vlSelf->__Vdly__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5cffc676__0)
                                         ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp)
                                         : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke9_go_in)
                                             ? vlSymsp->TOP__TOP__B_int__mem.__PVT__read_out
                                             : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke5_go_in)
                                                 ? vlSymsp->TOP__TOP__A_int__mem.__PVT__read_out
                                                 : 0U)));
    }
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_read0_0_write_en));
}

VL_INLINE_OPT void VTOP_std_reg_32___nba_sequent__TOP__TOP__main__B_i_j_0__0(VTOP_std_reg_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_32___nba_sequent__TOP__TOP__main__B_i_j_0__0\n"); );
    // Body
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__B_i_j_0_write_en));
}

VL_INLINE_OPT void VTOP_std_reg_32___nba_sequent__TOP__TOP__main__B_i_j_0__1(VTOP_std_reg_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_32___nba_sequent__TOP__TOP__main__B_i_j_0__1\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__B_i_j_0_write_en) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke3_go_in)
                                        ? vlSymsp->TOP__TOP__B_int__mem.__PVT__read_out
                                        : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke10_go_in)
                                            ? vlSymsp->TOP__TOP__alpha_int.__PVT__read_out
                                            : 0U));
    }
}

VL_INLINE_OPT void VTOP_std_reg_32___nba_sequent__TOP__TOP__main__B_k_j_0__0(VTOP_std_reg_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_32___nba_sequent__TOP__TOP__main__B_k_j_0__0\n"); );
    // Body
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__invoke4_go_in));
}

VL_INLINE_OPT void VTOP_std_reg_32___nba_sequent__TOP__TOP__main__B_k_j_0__1(VTOP_std_reg_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_32___nba_sequent__TOP__TOP__main__B_k_j_0__1\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__invoke4_go_in) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke4_go_in)
                                        ? vlSymsp->TOP__TOP__B_int__mem.__PVT__read_out
                                        : 0U);
    }
}

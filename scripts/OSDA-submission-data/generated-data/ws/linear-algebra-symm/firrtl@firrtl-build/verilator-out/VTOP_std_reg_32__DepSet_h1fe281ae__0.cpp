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
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_read0_0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__A_int_read0_0_write_en) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h97779780__0)
                                        ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp)
                                        : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2938708e__0)
                                            ? vlSymsp->TOP__TOP__A_int__mem.__PVT__read_out
                                            : 0U));
    }
}

VL_INLINE_OPT void VTOP_std_reg_32___nba_sequent__TOP__TOP__main__B_int_read0_0__0(VTOP_std_reg_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_32___nba_sequent__TOP__TOP__main__B_int_read0_0__0\n"); );
    // Body
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_read0_0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__B_int_read0_0_write_en) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h65c8296d__0)
                                        ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp)
                                        : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf619f5a7__0)
                                            ? vlSymsp->TOP__TOP__B_int__mem.__PVT__read_out
                                            : 0U));
    }
}

VL_INLINE_OPT void VTOP_std_reg_32___nba_sequent__TOP__TOP__main__C_i_j_0__0(VTOP_std_reg_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_32___nba_sequent__TOP__TOP__main__C_i_j_0__0\n"); );
    // Body
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__C_i_j_0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__C_i_j_0_write_en) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hedd81b8c__0)
                                        ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp)
                                        : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3b88d25f__0)
                                            ? vlSymsp->TOP__TOP__C_int__mem.__PVT__read_out
                                            : 0U));
    }
}

VL_INLINE_OPT void VTOP_std_reg_32___nba_sequent__TOP__TOP__main__alpha_int_read0_0__0(VTOP_std_reg_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_32___nba_sequent__TOP__TOP__main__alpha_int_read0_0__0\n"); );
    // Body
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read0_0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__alpha_int_read0_0_write_en) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read0_0_write_en)
                                        ? vlSymsp->TOP__TOP__alpha_int.__PVT__read_out
                                        : 0U);
    }
}

VL_INLINE_OPT void VTOP_std_reg_32___nba_sequent__TOP__TOP__main__beta_int_read0_0__0(VTOP_std_reg_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_32___nba_sequent__TOP__TOP__main__beta_int_read0_0__0\n"); );
    // Body
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__invoke20_go_in));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__invoke20_go_in) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke20_go_in)
                                        ? vlSymsp->TOP__TOP__beta_int.__PVT__read_out
                                        : 0U);
    }
}

VL_INLINE_OPT void VTOP_std_reg_32___nba_sequent__TOP__TOP__main__temp2_0__0(VTOP_std_reg_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_32___nba_sequent__TOP__TOP__main__temp2_0__0\n"); );
    // Body
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__temp2_0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__temp2_0_write_en) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7ed1ad7f__0)
                                        ? (IData)(vlSymsp->TOP__TOP__main__add3.__PVT___GEN_0)
                                        : 0U);
    }
}

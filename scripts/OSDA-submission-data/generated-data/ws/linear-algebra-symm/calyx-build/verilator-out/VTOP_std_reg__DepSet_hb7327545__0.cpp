// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg.h"

VL_INLINE_OPT void VTOP_std_reg___nba_sequent__TOP__TOP__main__A_int_read0_0__0(VTOP_std_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg___nba_sequent__TOP__TOP__main__A_int_read0_0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_read0_0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__A_int_read0_0_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard179)
                               ? vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out
                               : (((((9U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                     | (0x10U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                    & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                   | ((0xdU == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                      & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)))
                                   ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                   : 0U));
    }
}

VL_INLINE_OPT void VTOP_std_reg___nba_sequent__TOP__TOP__main__B_int_read0_0__0(VTOP_std_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg___nba_sequent__TOP__TOP__main__B_int_read0_0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_read0_0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__B_int_read0_0_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard179)
                               ? vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out
                               : ((((5U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                    & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                   | ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard825) 
                                      & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)))
                                   ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                   : 0U));
    }
}

VL_INLINE_OPT void VTOP_std_reg___nba_sequent__TOP__TOP__main__C_i_j_0__0(VTOP_std_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg___nba_sequent__TOP__TOP__main__C_i_j_0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__C_i_j_0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__C_i_j_0_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read0_0_write_en)
                               ? vlSymsp->TOP__TOP__main__C_int__mem.__PVT__read_out
                               : (((5U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                   & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in))
                                   ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                   : 0U));
    }
}

VL_INLINE_OPT void VTOP_std_reg___nba_sequent__TOP__TOP__main__alpha_int_read0_0__0(VTOP_std_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg___nba_sequent__TOP__TOP__main__alpha_int_read0_0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read0_0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__alpha_int_read0_0_write_en) {
        vlSelf->__PVT__out = vlSymsp->TOP__TOP__main__alpha_int.__PVT__read_out;
    }
}

VL_INLINE_OPT void VTOP_std_reg___nba_sequent__TOP__TOP__main__beta_int_read0_0__0(VTOP_std_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg___nba_sequent__TOP__TOP__main__beta_int_read0_0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__beta_int_read0_0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__beta_int_read0_0_write_en) {
        vlSelf->__PVT__out = vlSymsp->TOP__TOP__main__beta_int.__PVT__read_out;
    }
}

VL_INLINE_OPT void VTOP_std_reg___nba_sequent__TOP__TOP__main__temp2_0__0(VTOP_std_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg___nba_sequent__TOP__TOP__main__temp2_0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__temp2_0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__temp2_0_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard669)
                               ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard212)
                                        ? vlSymsp->TOP__TOP__main__add3.__PVT__out
                                        : 0U));
    }
}

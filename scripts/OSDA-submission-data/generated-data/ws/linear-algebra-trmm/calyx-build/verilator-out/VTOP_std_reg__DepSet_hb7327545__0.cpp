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
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard113)
                               ? vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out
                               : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard116)
                                   ? vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out
                                   : ((((7U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                       | ((5U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)))
                                       ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                       : 0U)));
    }
}

VL_INLINE_OPT void VTOP_std_reg___nba_sequent__TOP__TOP__main__B_i_j_0__0(VTOP_std_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg___nba_sequent__TOP__TOP__main__B_i_j_0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__B_i_j_0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__B_i_j_0_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard113)
                               ? vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out
                               : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard116)
                                   ? vlSymsp->TOP__TOP__main__alpha_int.__PVT__read_out
                                   : 0U));
    }
}

VL_INLINE_OPT void VTOP_std_reg___nba_sequent__TOP__TOP__main__B_k_j_0__0(VTOP_std_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg___nba_sequent__TOP__TOP__main__B_k_j_0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__B_k_j_0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__B_k_j_0_write_en) {
        vlSelf->__PVT__out = vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out;
    }
}

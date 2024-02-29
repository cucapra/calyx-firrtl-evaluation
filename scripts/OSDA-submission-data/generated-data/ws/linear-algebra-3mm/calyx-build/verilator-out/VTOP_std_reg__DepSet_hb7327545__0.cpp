// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg.h"

VL_INLINE_OPT void VTOP_std_reg___nba_sequent__TOP__TOP__main__bin_read0_0__0(VTOP_std_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg___nba_sequent__TOP__TOP__main__bin_read0_0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__bin_read0_0_write_en));
}

VL_INLINE_OPT void VTOP_std_reg___nba_sequent__TOP__TOP__main__bin_read0_0__1(VTOP_std_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg___nba_sequent__TOP__TOP__main__bin_read0_0__1\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__bin_read0_0_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard60)
                               ? vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out
                               : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard57)
                                   ? vlSymsp->TOP__TOP__main__C_int__mem.__PVT__read_out
                                   : ((((8U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)) 
                                       | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard74))
                                       ? vlSymsp->TOP__TOP__main__E_int__mem.__PVT__read_out
                                       : (((((5U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                             & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)) 
                                            | ((5U 
                                                == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in))) 
                                           | ((5U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                              & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)))
                                           ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                           : (((8U 
                                                == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in))
                                               ? vlSymsp->TOP__TOP__main__G_int__mem.__PVT__read_out
                                               : ((
                                                   (8U 
                                                    == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                                   & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in))
                                                   ? vlSymsp->TOP__TOP__main__F_int__mem.__PVT__read_out
                                                   : 0U))))));
    }
}

VL_INLINE_OPT void VTOP_std_reg___nba_sequent__TOP__TOP__main__v_0__0(VTOP_std_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg___nba_sequent__TOP__TOP__main__v_0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__v_0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__v_0_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard57)
                               ? vlSymsp->TOP__TOP__main__D_int__mem.__PVT__read_out
                               : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard60)
                                   ? vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out
                                   : (((((6U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                         & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)) 
                                        | ((6U == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in))) 
                                       | ((6U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)))
                                       ? vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__out
                                       : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard74)
                                           ? vlSymsp->TOP__TOP__main__F_int__mem.__PVT__read_out
                                           : 0U))));
    }
}

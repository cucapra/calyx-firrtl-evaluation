// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg_32.h"

VL_INLINE_OPT void VTOP_std_reg_32___nba_sequent__TOP__TOP__main__bin_read0_0__0(VTOP_std_reg_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_32___nba_sequent__TOP__TOP__main__bin_read0_0__0\n"); );
    // Body
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__bin_read0_0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__bin_read0_0_write_en) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h77df4bfc__0)
                                        ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp)
                                        : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke32_go_in)
                                            ? vlSymsp->TOP__TOP__G_int__mem.__PVT__read_out
                                            : (((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke27_go_in) 
                                                | (IData)(vlSymsp->TOP__TOP__main.__PVT__invoke8_go_in))
                                                ? vlSymsp->TOP__TOP__E_int__mem.__PVT__read_out
                                                : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke3_go_in)
                                                    ? vlSymsp->TOP__TOP__A_int__mem.__PVT__read_out
                                                    : 
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke20_go_in)
                                                     ? vlSymsp->TOP__TOP__F_int__mem.__PVT__read_out
                                                     : 
                                                    ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke15_go_in)
                                                      ? vlSymsp->TOP__TOP__C_int__mem.__PVT__read_out
                                                      : 0U))))));
    }
}

VL_INLINE_OPT void VTOP_std_reg_32___nba_sequent__TOP__TOP__main__v_0__0(VTOP_std_reg_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_32___nba_sequent__TOP__TOP__main__v_0__0\n"); );
    // Body
    vlSelf->__PVT__done_reg = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__v_0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__v_0_write_en) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2935d36f__0)
                                        ? vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__internal_reg
                                        : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke16_go_in)
                                            ? vlSymsp->TOP__TOP__D_int__mem.__PVT__read_out
                                            : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke4_go_in)
                                                ? vlSymsp->TOP__TOP__B_int__mem.__PVT__read_out
                                                : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke28_go_in)
                                                    ? vlSymsp->TOP__TOP__F_int__mem.__PVT__read_out
                                                    : 0U))));
    }
}

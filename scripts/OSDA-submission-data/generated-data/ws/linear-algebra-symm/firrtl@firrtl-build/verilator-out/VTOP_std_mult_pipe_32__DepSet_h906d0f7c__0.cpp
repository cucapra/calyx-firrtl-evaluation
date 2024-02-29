// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_mult_pipe_32.h"

VL_INLINE_OPT void VTOP_std_mult_pipe_32___nba_sequent__TOP__TOP__main__mult_pipe0__0(VTOP_std_mult_pipe_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_mult_pipe_32___nba_sequent__TOP__TOP__main__mult_pipe0__0\n"); );
    // Body
    vlSelf->__Vdly__out_tmp = vlSelf->__PVT__out_tmp;
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__Vdly__out_tmp = 0ULL;
        vlSelf->__PVT__ltmp = 0U;
        vlSelf->__PVT__rtmp = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go) {
        vlSelf->__Vdly__out_tmp = ((QData)((IData)(vlSelf->__PVT__ltmp)) 
                                   * (QData)((IData)(vlSelf->__PVT__rtmp)));
        vlSelf->__PVT__ltmp = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8fd3bfb4__0)
                                ? vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__internal_reg
                                : (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h043b0fae__0) 
                                    | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h982399be__0) 
                                        | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h62812dbe__0)) 
                                       & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in)))
                                    ? vlSymsp->TOP__TOP__main__alpha_int_read0_0.__PVT__internal_reg
                                    : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd3925d15__0)
                                        ? vlSymsp->TOP__TOP__main__beta_int_read0_0.__PVT__internal_reg
                                        : 0U)));
        vlSelf->__PVT__rtmp = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd3925d15__0)
                                ? vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__internal_reg
                                : (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h043b0fae__0) 
                                    | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h982399be__0) 
                                       & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in)))
                                    ? vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__internal_reg
                                    : (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h62812dbe__0) 
                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in))
                                        ? vlSymsp->TOP__TOP__main__temp2_0.__PVT__internal_reg
                                        : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8fd3bfb4__0)
                                            ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__internal_reg
                                            : 0U))));
    } else {
        vlSelf->__PVT__ltmp = 0U;
        vlSelf->__PVT__rtmp = 0U;
    }
}

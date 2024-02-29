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
    vlSelf->__Vdly__rtmp = vlSelf->__PVT__rtmp;
    vlSelf->__Vdly__ltmp = vlSelf->__PVT__ltmp;
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__Vdly__rtmp = 0U;
        vlSelf->__Vdly__ltmp = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go) {
        if (vlSymsp->TOP__TOP__main.__VdfgTmp_ha8e6ba43__0) {
            vlSelf->__Vdly__rtmp = vlSymsp->TOP__TOP__main__p_int_read0_0.__PVT__internal_reg;
            vlSelf->__Vdly__ltmp = vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__internal_reg;
        } else if (vlSymsp->TOP__TOP__main.__VdfgTmp_hd3925d15__0) {
            vlSelf->__Vdly__rtmp = vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__internal_reg;
            vlSelf->__Vdly__ltmp = vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__internal_reg;
        } else {
            vlSelf->__Vdly__rtmp = 0U;
            vlSelf->__Vdly__ltmp = 0U;
        }
    } else {
        vlSelf->__Vdly__rtmp = 0U;
        vlSelf->__Vdly__ltmp = 0U;
    }
}

VL_INLINE_OPT void VTOP_std_mult_pipe_32___nba_sequent__TOP__TOP__main__mult_pipe0__1(VTOP_std_mult_pipe_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_mult_pipe_32___nba_sequent__TOP__TOP__main__mult_pipe0__1\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out_tmp = 0ULL;
    } else if (vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go) {
        vlSelf->__PVT__out_tmp = ((QData)((IData)(vlSelf->__PVT__ltmp)) 
                                  * (QData)((IData)(vlSelf->__PVT__rtmp)));
    }
    vlSelf->__PVT__ltmp = vlSelf->__Vdly__ltmp;
    vlSelf->__PVT__rtmp = vlSelf->__Vdly__rtmp;
}

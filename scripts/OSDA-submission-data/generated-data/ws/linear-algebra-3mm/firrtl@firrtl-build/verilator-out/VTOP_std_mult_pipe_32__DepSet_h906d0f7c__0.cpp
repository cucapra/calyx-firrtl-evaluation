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
        if (vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go) {
            vlSelf->__PVT__ltmp = vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__internal_reg;
            vlSelf->__PVT__rtmp = vlSymsp->TOP__TOP__main__v_0.__PVT__internal_reg;
        } else {
            vlSelf->__PVT__ltmp = 0U;
            vlSelf->__PVT__rtmp = 0U;
        }
    } else {
        vlSelf->__PVT__ltmp = 0U;
        vlSelf->__PVT__rtmp = 0U;
    }
}

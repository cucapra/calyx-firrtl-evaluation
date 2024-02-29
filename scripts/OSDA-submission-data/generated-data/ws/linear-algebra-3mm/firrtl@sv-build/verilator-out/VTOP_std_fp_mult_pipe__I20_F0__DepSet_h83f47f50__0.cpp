// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_fp_mult_pipe__I20_F0.h"

VL_INLINE_OPT void VTOP_std_fp_mult_pipe__I20_F0___nba_sequent__TOP__TOP__main__mult_pipe0__comp__0(VTOP_std_fp_mult_pipe__I20_F0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_std_fp_mult_pipe__I20_F0___nba_sequent__TOP__TOP__main__mult_pipe0__comp__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvval__done_buf__v0;
    CData/*0:0*/ __Vdlyvval__done_buf__v1;
    // Body
    vlSelf->__Vdly__out_tmp = vlSelf->__PVT__out_tmp;
    __Vdlyvval__done_buf__v0 = vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go;
    __Vdlyvval__done_buf__v1 = ((IData)(vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go) 
                                & vlSelf->__PVT__done_buf
                                [0U]);
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__Vdly__out_tmp = 0ULL;
        vlSelf->__PVT__ltmp = 0U;
        vlSelf->__PVT__rtmp = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go) {
        vlSelf->__Vdly__out_tmp = ((QData)((IData)(vlSelf->__PVT__ltmp)) 
                                   * (QData)((IData)(vlSelf->__PVT__rtmp)));
        if (vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go) {
            vlSelf->__PVT__ltmp = vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__out;
            vlSelf->__PVT__rtmp = vlSymsp->TOP__TOP__main__v_0.__PVT__out;
        } else {
            vlSelf->__PVT__ltmp = 0U;
            vlSelf->__PVT__rtmp = 0U;
        }
    } else {
        vlSelf->__Vdly__out_tmp = vlSelf->__PVT__out_tmp;
        vlSelf->__PVT__ltmp = 0U;
        vlSelf->__PVT__rtmp = 0U;
    }
    vlSelf->__PVT__done_buf[0U] = __Vdlyvval__done_buf__v0;
    vlSelf->__PVT__done_buf[1U] = __Vdlyvval__done_buf__v1;
}

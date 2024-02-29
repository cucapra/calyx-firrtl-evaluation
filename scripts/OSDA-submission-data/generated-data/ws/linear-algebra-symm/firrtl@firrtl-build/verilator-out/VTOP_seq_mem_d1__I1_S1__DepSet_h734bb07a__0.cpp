// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_seq_mem_d1__I1_S1.h"

VL_INLINE_OPT void VTOP_seq_mem_d1__I1_S1___nba_sequent__TOP__TOP__alpha_int__0(VTOP_seq_mem_d1__I1_S1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__I1_S1___nba_sequent__TOP__TOP__alpha_int__0\n"); );
    // Body
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read_en)
                                          ? vlSelf->__PVT__mem
                                         [0U] : vlSelf->__PVT__read_out));
    vlSelf->__PVT__write_done = 0U;
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read_en));
}

VL_INLINE_OPT void VTOP_seq_mem_d1__I1_S1___nba_sequent__TOP__TOP__beta_int__0(VTOP_seq_mem_d1__I1_S1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__I1_S1___nba_sequent__TOP__TOP__beta_int__0\n"); );
    // Body
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let14_go_in)
                                          ? vlSelf->__PVT__mem
                                         [0U] : vlSelf->__PVT__read_out));
    vlSelf->__PVT__write_done = 0U;
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let14_go_in));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_seq_mem_d2__D8_DBc.h"

VL_INLINE_OPT void VTOP_seq_mem_d2__D8_DBc___act_sequent__TOP__TOP__B_int__0(VTOP_seq_mem_d2__D8_DBc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP_seq_mem_d2__D8_DBc___act_sequent__TOP__TOP__B_int__0\n"); );
    // Body
    vlSelf->__PVT__addr = (0xffU & (((IData)(0xcU) 
                                     * ((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let10_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__internal_reg)
                                         : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he5800dc6__0)
                                             ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__internal_reg)
                                             : 0U))) 
                                    + ((IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_read_en)
                                        ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                                        : 0U)));
}

VL_INLINE_OPT void VTOP_seq_mem_d2__D8_DBc___act_sequent__TOP__TOP__C_int__0(VTOP_seq_mem_d2__D8_DBc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP_seq_mem_d2__D8_DBc___act_sequent__TOP__TOP__C_int__0\n"); );
    // Body
    vlSelf->__PVT__addr = (0xffU & (((IData)(0xcU) 
                                     * (((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in) 
                                         | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he143af68__0))
                                         ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__internal_reg)
                                         : (((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let13_go_in) 
                                             | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he45d1117__0))
                                             ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__internal_reg)
                                             : 0U))) 
                                    + (((IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_read_en) 
                                        | (IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_write_en))
                                        ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                                        : 0U)));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_seq_mem_d2__D8_DBc.h"

VL_INLINE_OPT void VTOP_seq_mem_d2__D8_DBc___act_sequent__TOP__TOP__main__B_int__0(VTOP_seq_mem_d2__D8_DBc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d2__D8_DBc___act_sequent__TOP__TOP__main__B_int__0\n"); );
    // Body
    vlSelf->__PVT__addr = (0xffU & (((IData)(0xcU) 
                                     * (((((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                           | (8U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                         | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard182))
                                         ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                         : (((2U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                             & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in))
                                             ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                             : 0U))) 
                                    + (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)));
}

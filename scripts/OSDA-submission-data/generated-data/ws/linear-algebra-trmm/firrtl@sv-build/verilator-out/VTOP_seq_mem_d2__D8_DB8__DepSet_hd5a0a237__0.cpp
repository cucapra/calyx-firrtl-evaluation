// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_seq_mem_d2__D8_DB8.h"

VL_INLINE_OPT void VTOP_seq_mem_d2__D8_DB8___act_sequent__TOP__TOP__A_int__0(VTOP_seq_mem_d2__D8_DB8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP_seq_mem_d2__D8_DB8___act_sequent__TOP__TOP__A_int__0\n"); );
    // Body
    vlSelf->__PVT__addr = (0xffU & ((((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let5_go_in)
                                       ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                       : 0U) << 3U) 
                                    + ((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let5_go_in)
                                        ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                        : 0U)));
}

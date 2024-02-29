// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg__W7.h"

VL_INLINE_OPT void VTOP_std_reg__W7___nba_sequent__TOP__TOP__main__fsm__0(VTOP_std_reg__W7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W7___nba_sequent__TOP__TOP__main__fsm__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard34)
                               ? (IData)(vlSymsp->TOP__TOP__main__adder1.__PVT__out)
                               : 0U);
    }
}

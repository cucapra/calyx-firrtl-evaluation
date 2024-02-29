// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg__W1.h"

VL_INLINE_OPT void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__signal_reg__0(VTOP_std_reg__W1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__signal_reg__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__signal_reg_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__signal_reg_write_en) {
        vlSelf->__PVT__out = vlSymsp->TOP__TOP__main.__PVT__signal_reg_in;
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_add.h"

VL_INLINE_OPT void VTOP_std_add___nba_sequent__TOP__TOP__main__add0__0(VTOP_std_add* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_add___nba_sequent__TOP__TOP__main__add0__0\n"); );
    // Body
    vlSelf->__PVT__out = (vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__out 
                          + vlSymsp->TOP__TOP__main__v_0.__PVT__out);
}

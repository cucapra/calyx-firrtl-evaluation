// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_add__Wa.h"

VL_INLINE_OPT void VTOP_std_add__Wa___act_sequent__TOP__TOP__main__adder__0(VTOP_std_add__Wa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_add__Wa___act_sequent__TOP__TOP__main__adder__0\n"); );
    // Body
    vlSelf->__PVT__out = (0x3ffU & (((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                      ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)
                                      : 0U) + ((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                                ? 1U
                                                : 0U)));
}

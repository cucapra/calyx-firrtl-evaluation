// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_add_4.h"

VL_INLINE_OPT void VTOP_std_add_4___act_sequent__TOP__TOP__main__add0__0(VTOP_std_add_4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_add_4___act_sequent__TOP__TOP__main__add0__0\n"); );
    // Body
    vlSelf->__PVT___GEN_0 = (0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h96d1a8ed__0)
                                        ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                                        : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h42da30c7__0)
                                            ? (IData)(vlSymsp->TOP__TOP__main__i1.__PVT__internal_reg)
                                            : 0U)) 
                                      + (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h42da30c7__0) 
                                          | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h96d1a8ed__0))
                                          ? 1U : 0U)));
}

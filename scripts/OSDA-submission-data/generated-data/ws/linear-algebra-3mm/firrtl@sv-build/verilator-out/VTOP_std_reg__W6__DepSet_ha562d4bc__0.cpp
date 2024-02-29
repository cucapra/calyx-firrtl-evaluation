// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg__W6.h"

VL_INLINE_OPT void VTOP_std_reg__W6___nba_sequent__TOP__TOP__main__fsm6__0(VTOP_std_reg__W6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W6___nba_sequent__TOP__TOP__main__fsm6__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__fsm6_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__fsm6_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h32a14825__0)
                               ? 0x2bU : ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_683)
                                           ? 0x25U : 
                                          ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h614ce3a9__0) 
                                             | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he146a1ad__0)) 
                                            & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                            ? 0x12U
                                            : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6232c48a__0)
                                                ? 1U
                                                : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_122)))));
    }
}

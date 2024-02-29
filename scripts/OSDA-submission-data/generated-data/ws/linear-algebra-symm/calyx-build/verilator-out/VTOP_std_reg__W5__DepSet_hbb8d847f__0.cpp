// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg__W5.h"

VL_INLINE_OPT void VTOP_std_reg__W5___nba_sequent__TOP__TOP__main__fsm__0(VTOP_std_reg__W5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W5___nba_sequent__TOP__TOP__main__fsm__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__fsm_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__fsm_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard93)
                               ? (IData)(vlSymsp->TOP__TOP__main__adder1.__PVT__out)
                               : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard96)
                                   ? (IData)(vlSymsp->TOP__TOP__main__adder.__PVT__out)
                                   : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard99)
                                       ? (IData)(vlSymsp->TOP__TOP__main__adder4.__PVT__out)
                                       : ((((IData)(vlSymsp->TOP__TOP__main.__PVT___guard118) 
                                            | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard121)) 
                                           | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard125))
                                           ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard129)
                                                    ? (IData)(vlSymsp->TOP__TOP__main__adder2.__PVT__out)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard132)
                                                     ? (IData)(vlSymsp->TOP__TOP__main__adder3.__PVT__out)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard135)
                                                      ? (IData)(vlSymsp->TOP__TOP__main__adder5.__PVT__out)
                                                      : 
                                                     ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard138)
                                                       ? (IData)(vlSymsp->TOP__TOP__main__adder0.__PVT__out)
                                                       : 0U))))))));
    }
}

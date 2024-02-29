// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg__W4.h"

VL_INLINE_OPT void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__i0__0(VTOP_std_reg__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__i0__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__i0_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke14_go_in)
                               ? (0xfU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__TOP__main.__PVT__add0_left)))
                               : 0U);
    }
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__i0_write_en));
}

VL_INLINE_OPT void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__j0__0(VTOP_std_reg__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__j0__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__j0_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard58)
                               ? (0xfU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__TOP__main.__PVT__add0_left)))
                               : 0U);
    }
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
}

VL_INLINE_OPT void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__k_0__0(VTOP_std_reg__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__k_0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__k_0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__k_0_write_en) {
        vlSelf->__PVT__out = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__add0_left)));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm__0(VTOP_std_reg__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__fsm_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__fsm_write_en) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard37)
                               ? (IData)(vlSymsp->TOP__TOP__main__adder1.__PVT__out)
                               : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard40)
                                   ? (IData)(vlSymsp->TOP__TOP__main__adder.__PVT__out)
                                   : ((((IData)(vlSymsp->TOP__TOP__main.__PVT___guard51) 
                                        | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard54)) 
                                       | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard58))
                                       ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard62)
                                                ? (IData)(vlSymsp->TOP__TOP__main__adder2.__PVT__out)
                                                : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard65)
                                                    ? (IData)(vlSymsp->TOP__TOP__main__adder3.__PVT__out)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard68)
                                                     ? (IData)(vlSymsp->TOP__TOP__main__adder0.__PVT__out)
                                                     : 0U))))));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm0__0(VTOP_std_reg__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__fsm0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__fsm0_write_en) {
        vlSelf->__PVT__out = vlSymsp->TOP__TOP__main.__PVT__fsm0_in;
    }
}

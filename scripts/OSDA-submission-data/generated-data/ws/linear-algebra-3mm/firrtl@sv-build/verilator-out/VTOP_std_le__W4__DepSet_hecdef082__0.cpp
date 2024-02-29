// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_le__W4.h"

VL_INLINE_OPT void VTOP_std_le__W4___act_sequent__TOP__TOP__main__le0__0(VTOP_std_le__W4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_le__W4___act_sequent__TOP__TOP__main__le0__0\n"); );
    // Body
    vlSelf->__PVT__out = ((((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in) 
                            | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond50_go_in) 
                               | (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond80_go_in)))
                            ? (IData)(vlSymsp->TOP__TOP__main__k0.__PVT__out)
                            : (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                                | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond40_go_in) 
                                   | (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond70_go_in)))
                                ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                : (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in) 
                                    | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond30_go_in) 
                                       | (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond60_go_in)))
                                    ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                    : 0U))) <= ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf21302ed__0)
                                                 ? 7U
                                                 : 0U));
}

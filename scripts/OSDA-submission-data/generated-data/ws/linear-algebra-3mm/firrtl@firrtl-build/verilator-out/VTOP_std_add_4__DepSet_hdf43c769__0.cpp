// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_add_4.h"

VL_INLINE_OPT void VTOP_std_add_4___act_sequent__TOP__TOP__main__add1__0(VTOP_std_add_4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_add_4___act_sequent__TOP__TOP__main__add1__0\n"); );
    // Body
    vlSelf->__PVT___GEN_0 = (0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7564b4ea__0)
                                        ? (IData)(vlSymsp->TOP__TOP__main__k0.__PVT__internal_reg)
                                        : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hdc1723ac__0)
                                            ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                                            : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb1823217__0)
                                                ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__internal_reg)
                                                : 0U))) 
                                      + (((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke10_go_in) 
                                          | ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke11_go_in) 
                                             | ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke22_go_in) 
                                                | ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke23_go_in) 
                                                   | ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke34_go_in) 
                                                      | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in) 
                                                         | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par2_go_in) 
                                                            | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in) 
                                                               | (IData)(vlSymsp->TOP__TOP__main.__PVT__invoke35_go_in)))))))))
                                          ? 1U : 0U)));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_add_32.h"

VL_INLINE_OPT void VTOP_std_add_32___act_sequent__TOP__TOP__main__add0__0(VTOP_std_add_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_add_32___act_sequent__TOP__TOP__main__add0__0\n"); );
    // Body
    vlSelf->__PVT___GEN_0 = (0x1ffffffffULL & ((QData)((IData)(
                                                               ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7564b4ea__0)
                                                                 ? vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__internal_reg
                                                                 : 0U))) 
                                               + (QData)((IData)(
                                                                 ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7564b4ea__0)
                                                                   ? vlSymsp->TOP__TOP__main__v_0.__PVT__internal_reg
                                                                   : 0U)))));
}
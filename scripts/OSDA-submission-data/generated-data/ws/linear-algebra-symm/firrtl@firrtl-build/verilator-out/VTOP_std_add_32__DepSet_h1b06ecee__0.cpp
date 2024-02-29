// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_add_32.h"

VL_INLINE_OPT void VTOP_std_add_32___act_sequent__TOP__TOP__main__add3__0(VTOP_std_add_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_add_32___act_sequent__TOP__TOP__main__add3__0\n"); );
    // Body
    vlSelf->__PVT___GEN_0 = (0x1ffffffffULL & ((QData)((IData)(
                                                               ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he45d1117__0)
                                                                 ? vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__internal_reg
                                                                 : 
                                                                ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7ed1ad7f__0)
                                                                  ? vlSymsp->TOP__TOP__main__temp2_0.__PVT__internal_reg
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he143af68__0)
                                                                   ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__internal_reg
                                                                   : 0U))))) 
                                               + (QData)((IData)(
                                                                 ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he143af68__0)
                                                                   ? vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__internal_reg
                                                                   : 
                                                                  (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7ed1ad7f__0) 
                                                                    | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he45d1117__0))
                                                                    ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__internal_reg
                                                                    : 0U))))));
}

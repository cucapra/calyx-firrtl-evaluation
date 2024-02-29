// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_add.h"

VL_INLINE_OPT void VTOP_std_add___act_sequent__TOP__TOP__main__add3__0(VTOP_std_add* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_add___act_sequent__TOP__TOP__main__add3__0\n"); );
    // Body
    vlSelf->__PVT__out = (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he45d1117__0)
                            ? vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__out
                            : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7ed1ad7f__0)
                                ? vlSymsp->TOP__TOP__main__temp2_0.__PVT__out
                                : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he143af68__0)
                                    ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                    : 0U))) + ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he143af68__0)
                                                ? vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__out
                                                : (
                                                   ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7ed1ad7f__0) 
                                                    | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he45d1117__0))
                                                    ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                                    : 0U)));
}

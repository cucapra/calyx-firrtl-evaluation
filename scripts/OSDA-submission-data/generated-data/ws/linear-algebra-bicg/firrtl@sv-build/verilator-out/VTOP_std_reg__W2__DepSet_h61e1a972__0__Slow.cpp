// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP_std_reg__W2.h"

VL_ATTR_COLD void VTOP_std_reg__W2___ctor_var_reset(VTOP_std_reg__W2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W2___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__in = VL_RAND_RESET_I(2);
    vlSelf->__PVT__write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out = VL_RAND_RESET_I(2);
    vlSelf->__PVT__done = VL_RAND_RESET_I(1);
}

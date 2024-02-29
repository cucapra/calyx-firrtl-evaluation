// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP_TOP.h"

VL_ATTR_COLD void VTOP_TOP___ctor_var_reset(VTOP_TOP* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTOP_TOP___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__go = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cycle_count = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__NOTRACE = 0;
    vlSelf->__PVT__CYCLE_LIMIT = 0;
    vlSelf->__PVT__CODE = 0;
    vlSelf->__Vdly__cycle_count = VL_RAND_RESET_Q(64);
}

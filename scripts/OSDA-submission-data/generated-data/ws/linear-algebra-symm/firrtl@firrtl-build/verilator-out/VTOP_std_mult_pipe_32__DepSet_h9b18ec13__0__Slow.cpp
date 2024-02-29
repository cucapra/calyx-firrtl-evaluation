// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP_std_mult_pipe_32.h"

VL_ATTR_COLD void VTOP_std_mult_pipe_32___ctor_var_reset(VTOP_std_mult_pipe_32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_mult_pipe_32___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__left = VL_RAND_RESET_I(32);
    vlSelf->__PVT__right = VL_RAND_RESET_I(32);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__go = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rtmp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ltmp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__out_tmp = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__out_tmp = VL_RAND_RESET_Q(64);
}

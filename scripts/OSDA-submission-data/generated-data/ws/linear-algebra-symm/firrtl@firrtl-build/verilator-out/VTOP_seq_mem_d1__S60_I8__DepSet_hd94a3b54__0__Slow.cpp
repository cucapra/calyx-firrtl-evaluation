// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP_seq_mem_d1__S60_I8.h"

VL_ATTR_COLD void VTOP_seq_mem_d1__S60_I8___ctor_var_reset(VTOP_seq_mem_d1__S60_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S60_I8___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__read_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__read_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 96; ++__Vi0) {
        vlSelf->__PVT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__read_out = VL_RAND_RESET_I(32);
    vlSelf->__Vlvbound_hf5859631__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__read_out = VL_RAND_RESET_I(32);
}
// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP_main.h"

VL_ATTR_COLD void VTOP_main___ctor_var_reset(VTOP_main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP_main___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__go = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CODE = 0;
    vlSelf->__PVT__A_int_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__A_int_write_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__A_int_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__B_int_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__B_int_write_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__C_int_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__C_int_write_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__C_int_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__D_int_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__D_int_write_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__E_int_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__E_int_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__F_int_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__F_int_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__G_int_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__G_int_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add1_left = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bin_read0_0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__j0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__k0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mult_pipe0_go = VL_RAND_RESET_I(1);
    vlSelf->__PVT__v_0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__signal_reg_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__signal_reg_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__early_reset_static_seq0_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__early_reset_static_seq1_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__early_reset_static_seq3_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__early_reset_static_seq8_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__early_reset_static_seq9_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__early_reset_static_seq11_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__early_reset_static_seq16_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__early_reset_static_seq17_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__early_reset_static_seq19_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wrapper_early_reset_static_seq_done_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard30 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard57 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard60 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard74 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard121 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard132 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard172 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard175 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard179 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard182 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard192 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard195 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard199 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard215 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard222 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard225 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard240 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard243 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard257 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard260 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard264 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard267 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard285 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard299 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard302 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard306 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard341 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard653 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_h5f29b700__0 = 0;
}

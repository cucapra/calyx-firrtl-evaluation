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
    vlSelf->__PVT__A_int_read0_0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__B_i_j_0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__B_int_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__B_int_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__B_k_j_0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add0_left = VL_RAND_RESET_I(4);
    vlSelf->__PVT__alpha_int_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alpha_int_write_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alpha_int_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__j0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__k_0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mult_pipe0_go = VL_RAND_RESET_I(1);
    vlSelf->__PVT__comb_reg1_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fsm_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__signal_reg_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__signal_reg_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fsm0_in = VL_RAND_RESET_I(4);
    vlSelf->__PVT__fsm0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invoke0_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invoke1_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invoke2_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invoke14_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wrapper_early_reset_cond00_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wrapper_early_reset_cond00_done_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wrapper_early_reset_cond10_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wrapper_early_reset_cond20_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__while_wrapper_early_reset_static_seq_done_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wrapper_early_reset_static_par1_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard21 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard37 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard40 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard51 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard54 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard58 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard62 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard65 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard68 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard113 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard116 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard162 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard166 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard182 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard240 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard245 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard248 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard256 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard262 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard267 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard270 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard278 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard284 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard290 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard296 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard302 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard308 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard311 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard320 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard326 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard332 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard335 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard344 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard458 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard463 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard507 = VL_RAND_RESET_I(1);
}

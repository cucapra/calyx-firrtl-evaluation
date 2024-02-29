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
    vlSelf->__PVT__A_i_j_0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__A_int_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__A_int_write_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__A_int_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add0_left = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bin_read0_0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i1_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__j0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mult_pipe0_go = VL_RAND_RESET_I(1);
    vlSelf->__PVT__p_int_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__p_int_write_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__p_int_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__p_int_read0_0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__q0_0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__q_int_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_int_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_int_write_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__s_int_addr0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__s_int_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__signal_reg_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__signal_reg_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__early_reset_static_seq0_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__early_reset_static_seq1_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__early_reset_static_seq3_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wrapper_early_reset_static_seq_done_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard20 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard23 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard34 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard46 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard49 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard124 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard127 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard141 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard144 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard148 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard151 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard159 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard161 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard164 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___guard166 = VL_RAND_RESET_I(1);
}

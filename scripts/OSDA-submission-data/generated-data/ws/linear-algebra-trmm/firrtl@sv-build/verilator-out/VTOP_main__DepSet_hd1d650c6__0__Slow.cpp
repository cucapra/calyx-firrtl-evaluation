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
    vlSelf->__PVT__A_int_addr0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__A_int_addr1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__A_int_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__A_int_write_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__A_int_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__A_int_read_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__A_int_write_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__A_int_read_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__B_int_addr0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__B_int_addr1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__B_int_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__B_int_write_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__B_int_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__B_int_read_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__B_int_write_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__B_int_read_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alpha_int_addr0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alpha_int_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alpha_int_write_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alpha_int_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alpha_int_read_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alpha_int_write_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alpha_int_read_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__A_int_read0_0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__B_i_j_0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__j0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__k_0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mult_pipe0_go = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fsm_in = VL_RAND_RESET_I(3);
    vlSelf->__PVT__fsm_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__signal_reg_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fsm0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beg_spl_let3_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beg_spl_let4_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beg_spl_let5_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beg_spl_let7_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beg_spl_let8_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invoke0_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invoke1_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invoke2_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invoke3_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invoke4_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invoke5_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invoke9_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invoke10_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__invoke14_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wrapper_early_reset_cond00_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wrapper_early_reset_cond00_done_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wrapper_early_reset_cond10_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wrapper_early_reset_cond20_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wrapper_early_reset_static_par_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wrapper_early_reset_static_seq0_go_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_221 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_249 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_311 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_315 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_80 = VL_RAND_RESET_I(5);
    vlSelf->__VdfgTmp_he0e40f0f__0 = 0;
    vlSelf->__VdfgTmp_ha2ac0650__0 = 0;
    vlSelf->__VdfgTmp_h5a0ff7ae__0 = 0;
    vlSelf->__VdfgTmp_h24f850e6__0 = 0;
    vlSelf->__VdfgTmp_h5635cf48__0 = 0;
    vlSelf->__VdfgTmp_h94fdc82f__0 = 0;
    vlSelf->__VdfgTmp_hae6fc7c9__0 = 0;
    vlSelf->__VdfgTmp_h5cffc676__0 = 0;
    vlSelf->__VdfgTmp_h3989696c__0 = 0;
    vlSelf->__VdfgTmp_h2f49b479__0 = 0;
    vlSelf->__VdfgTmp_hcb3812f3__0 = 0;
    vlSelf->__VdfgTmp_h89b6cb23__0 = 0;
    vlSelf->__VdfgTmp_h7f031210__0 = 0;
    vlSelf->__VdfgTmp_h861bc47f__0 = 0;
    vlSelf->__VdfgTmp_haabfc6e7__0 = 0;
    vlSelf->__VdfgTmp_h496a5df7__0 = 0;
    vlSelf->__VdfgTmp_hf7dba21d__0 = 0;
    vlSelf->__VdfgTmp_h9ca55de3__0 = 0;
    vlSelf->__VdfgTmp_hbafba765__0 = 0;
    vlSelf->__VdfgTmp_h4409eb50__0 = 0;
    vlSelf->__VdfgTmp_hd74ea668__0 = 0;
    vlSelf->__VdfgTmp_h8179485d__0 = 0;
    vlSelf->__VdfgTmp_ha515d6f3__0 = 0;
    vlSelf->__VdfgTmp_h1025c6c2__0 = 0;
    vlSelf->__VdfgTmp_h301c5d92__0 = 0;
    vlSelf->__VdfgTmp_had1198b6__0 = 0;
    vlSelf->__VdfgTmp_h2bdf3e9c__0 = 0;
    vlSelf->__VdfgTmp_he35e67f8__0 = 0;
    vlSelf->__VdfgTmp_h12dd2185__0 = 0;
    vlSelf->__VdfgTmp_hd9131b55__0 = 0;
    vlSelf->__VdfgTmp_hf7aba140__0 = 0;
    vlSelf->__VdfgTmp_h50eea2a5__0 = 0;
    vlSelf->__VdfgTmp_hee665582__0 = 0;
}

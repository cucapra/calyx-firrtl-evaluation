// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTOP__Syms.h"


VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+117,"go", false,-1);
    tracep->declBit(c+77,"done", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBus(c+1,"A_int_addr0", false,-1, 3,0);
    tracep->declBus(c+2,"A_int_addr1", false,-1, 3,0);
    tracep->declBus(c+123,"A_int_write_data", false,-1, 31,0);
    tracep->declBus(c+78,"A_int_read_data", false,-1, 31,0);
    tracep->declBit(c+124,"A_int_write_en", false,-1);
    tracep->declBit(c+32,"A_int_read_en", false,-1);
    tracep->declBit(c+79,"A_int_write_done", false,-1);
    tracep->declBit(c+80,"A_int_read_done", false,-1);
    tracep->declBus(c+3,"B_int_addr0", false,-1, 3,0);
    tracep->declBus(c+4,"B_int_addr1", false,-1, 3,0);
    tracep->declBus(c+5,"B_int_write_data", false,-1, 31,0);
    tracep->declBus(c+81,"B_int_read_data", false,-1, 31,0);
    tracep->declBit(c+33,"B_int_write_en", false,-1);
    tracep->declBit(c+34,"B_int_read_en", false,-1);
    tracep->declBit(c+82,"B_int_write_done", false,-1);
    tracep->declBit(c+83,"B_int_read_done", false,-1);
    tracep->declBit(c+124,"alpha_int_addr0", false,-1);
    tracep->declBus(c+123,"alpha_int_write_data", false,-1, 31,0);
    tracep->declBus(c+84,"alpha_int_read_data", false,-1, 31,0);
    tracep->declBit(c+124,"alpha_int_write_en", false,-1);
    tracep->declBit(c+35,"alpha_int_read_en", false,-1);
    tracep->declBit(c+85,"alpha_int_write_done", false,-1);
    tracep->declBit(c+86,"alpha_int_read_done", false,-1);
    tracep->declBus(c+125,"RESET_CYCLES", false,-1, 31,0);
    tracep->declQuad(c+119,"cycle_count", false,-1, 63,0);
    tracep->declBus(c+112,"NOTRACE", false,-1, 31,0);
    tracep->declQuad(c+113,"CYCLE_LIMIT", false,-1, 63,0);
    tracep->declBus(c+115,"CODE", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+117,"go", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBit(c+77,"done", false,-1);
    tracep->declBus(c+1,"A_int_addr0", false,-1, 3,0);
    tracep->declBus(c+2,"A_int_addr1", false,-1, 3,0);
    tracep->declBit(c+124,"A_int_write_en", false,-1);
    tracep->declBus(c+123,"A_int_write_data", false,-1, 31,0);
    tracep->declBit(c+32,"A_int_read_en", false,-1);
    tracep->declBus(c+78,"A_int_read_data", false,-1, 31,0);
    tracep->declBit(c+79,"A_int_write_done", false,-1);
    tracep->declBit(c+80,"A_int_read_done", false,-1);
    tracep->declBus(c+3,"B_int_addr0", false,-1, 3,0);
    tracep->declBus(c+4,"B_int_addr1", false,-1, 3,0);
    tracep->declBit(c+33,"B_int_write_en", false,-1);
    tracep->declBus(c+5,"B_int_write_data", false,-1, 31,0);
    tracep->declBit(c+34,"B_int_read_en", false,-1);
    tracep->declBus(c+81,"B_int_read_data", false,-1, 31,0);
    tracep->declBit(c+82,"B_int_write_done", false,-1);
    tracep->declBit(c+83,"B_int_read_done", false,-1);
    tracep->declBit(c+124,"alpha_int_addr0", false,-1);
    tracep->declBit(c+124,"alpha_int_write_en", false,-1);
    tracep->declBus(c+123,"alpha_int_write_data", false,-1, 31,0);
    tracep->declBit(c+35,"alpha_int_read_en", false,-1);
    tracep->declBus(c+84,"alpha_int_read_data", false,-1, 31,0);
    tracep->declBit(c+85,"alpha_int_write_done", false,-1);
    tracep->declBit(c+86,"alpha_int_read_done", false,-1);
    tracep->declBus(c+6,"A_int_read0_0_in", false,-1, 31,0);
    tracep->declBit(c+36,"A_int_read0_0_write_en", false,-1);
    tracep->declBit(c+111,"A_int_read0_0_clk", false,-1);
    tracep->declBit(c+118,"A_int_read0_0_reset", false,-1);
    tracep->declBus(c+87,"A_int_read0_0_out", false,-1, 31,0);
    tracep->declBit(c+88,"A_int_read0_0_done", false,-1);
    tracep->declBus(c+7,"B_i_j_0_in", false,-1, 31,0);
    tracep->declBit(c+37,"B_i_j_0_write_en", false,-1);
    tracep->declBit(c+111,"B_i_j_0_clk", false,-1);
    tracep->declBit(c+118,"B_i_j_0_reset", false,-1);
    tracep->declBus(c+89,"B_i_j_0_out", false,-1, 31,0);
    tracep->declBit(c+90,"B_i_j_0_done", false,-1);
    tracep->declBus(c+8,"B_k_j_0_in", false,-1, 31,0);
    tracep->declBit(c+38,"B_k_j_0_write_en", false,-1);
    tracep->declBit(c+111,"B_k_j_0_clk", false,-1);
    tracep->declBit(c+118,"B_k_j_0_reset", false,-1);
    tracep->declBus(c+91,"B_k_j_0_out", false,-1, 31,0);
    tracep->declBit(c+92,"B_k_j_0_done", false,-1);
    tracep->declBus(c+9,"add0_left", false,-1, 3,0);
    tracep->declBus(c+39,"add0_right", false,-1, 3,0);
    tracep->declBus(c+40,"add0_out", false,-1, 3,0);
    tracep->declBus(c+10,"add1_left", false,-1, 31,0);
    tracep->declBus(c+11,"add1_right", false,-1, 31,0);
    tracep->declBus(c+12,"add1_out", false,-1, 31,0);
    tracep->declBus(c+41,"i0_in", false,-1, 3,0);
    tracep->declBit(c+42,"i0_write_en", false,-1);
    tracep->declBit(c+111,"i0_clk", false,-1);
    tracep->declBit(c+118,"i0_reset", false,-1);
    tracep->declBus(c+93,"i0_out", false,-1, 3,0);
    tracep->declBit(c+94,"i0_done", false,-1);
    tracep->declBus(c+43,"j0_in", false,-1, 3,0);
    tracep->declBit(c+44,"j0_write_en", false,-1);
    tracep->declBit(c+111,"j0_clk", false,-1);
    tracep->declBit(c+118,"j0_reset", false,-1);
    tracep->declBus(c+95,"j0_out", false,-1, 3,0);
    tracep->declBit(c+96,"j0_done", false,-1);
    tracep->declBus(c+45,"k_0_in", false,-1, 3,0);
    tracep->declBit(c+46,"k_0_write_en", false,-1);
    tracep->declBit(c+111,"k_0_clk", false,-1);
    tracep->declBit(c+118,"k_0_reset", false,-1);
    tracep->declBus(c+97,"k_0_out", false,-1, 3,0);
    tracep->declBit(c+98,"k_0_done", false,-1);
    tracep->declBus(c+13,"le0_left", false,-1, 3,0);
    tracep->declBus(c+47,"le0_right", false,-1, 3,0);
    tracep->declBit(c+48,"le0_out", false,-1);
    tracep->declBus(c+14,"lt0_left", false,-1, 3,0);
    tracep->declBus(c+49,"lt0_right", false,-1, 3,0);
    tracep->declBit(c+15,"lt0_out", false,-1);
    tracep->declBus(c+16,"mult_pipe0_left", false,-1, 31,0);
    tracep->declBus(c+17,"mult_pipe0_right", false,-1, 31,0);
    tracep->declBit(c+118,"mult_pipe0_reset", false,-1);
    tracep->declBit(c+50,"mult_pipe0_go", false,-1);
    tracep->declBit(c+111,"mult_pipe0_clk", false,-1);
    tracep->declBus(c+99,"mult_pipe0_out", false,-1, 31,0);
    tracep->declBit(c+51,"comb_reg_in", false,-1);
    tracep->declBit(c+52,"comb_reg_write_en", false,-1);
    tracep->declBit(c+111,"comb_reg_clk", false,-1);
    tracep->declBit(c+118,"comb_reg_reset", false,-1);
    tracep->declBit(c+100,"comb_reg_out", false,-1);
    tracep->declBit(c+53,"comb_reg0_in", false,-1);
    tracep->declBit(c+54,"comb_reg0_write_en", false,-1);
    tracep->declBit(c+111,"comb_reg0_clk", false,-1);
    tracep->declBit(c+118,"comb_reg0_reset", false,-1);
    tracep->declBit(c+101,"comb_reg0_out", false,-1);
    tracep->declBit(c+18,"comb_reg1_in", false,-1);
    tracep->declBit(c+55,"comb_reg1_write_en", false,-1);
    tracep->declBit(c+111,"comb_reg1_clk", false,-1);
    tracep->declBit(c+118,"comb_reg1_reset", false,-1);
    tracep->declBit(c+102,"comb_reg1_out", false,-1);
    tracep->declBus(c+19,"fsm_in", false,-1, 2,0);
    tracep->declBit(c+56,"fsm_write_en", false,-1);
    tracep->declBit(c+111,"fsm_clk", false,-1);
    tracep->declBit(c+118,"fsm_reset", false,-1);
    tracep->declBus(c+103,"fsm_out", false,-1, 2,0);
    tracep->declBus(c+20,"adder_left", false,-1, 2,0);
    tracep->declBus(c+57,"adder_right", false,-1, 2,0);
    tracep->declBus(c+21,"adder_out", false,-1, 2,0);
    tracep->declBus(c+22,"adder0_left", false,-1, 2,0);
    tracep->declBus(c+58,"adder0_right", false,-1, 2,0);
    tracep->declBus(c+23,"adder0_out", false,-1, 2,0);
    tracep->declBus(c+24,"adder1_left", false,-1, 2,0);
    tracep->declBus(c+59,"adder1_right", false,-1, 2,0);
    tracep->declBus(c+25,"adder1_out", false,-1, 2,0);
    tracep->declBus(c+26,"adder2_left", false,-1, 2,0);
    tracep->declBus(c+60,"adder2_right", false,-1, 2,0);
    tracep->declBus(c+27,"adder2_out", false,-1, 2,0);
    tracep->declBus(c+28,"adder3_left", false,-1, 2,0);
    tracep->declBus(c+61,"adder3_right", false,-1, 2,0);
    tracep->declBus(c+29,"adder3_out", false,-1, 2,0);
    tracep->declBit(c+30,"signal_reg_in", false,-1);
    tracep->declBit(c+31,"signal_reg_write_en", false,-1);
    tracep->declBit(c+111,"signal_reg_clk", false,-1);
    tracep->declBit(c+118,"signal_reg_reset", false,-1);
    tracep->declBit(c+104,"signal_reg_out", false,-1);
    tracep->declBus(c+121,"fsm0_in", false,-1, 4,0);
    tracep->declBit(c+122,"fsm0_write_en", false,-1);
    tracep->declBit(c+111,"fsm0_clk", false,-1);
    tracep->declBit(c+118,"fsm0_reset", false,-1);
    tracep->declBus(c+105,"fsm0_out", false,-1, 4,0);
    tracep->declBit(c+62,"beg_spl_let3_go_in", false,-1);
    tracep->declBit(c+62,"beg_spl_let3_go_out", false,-1);
    tracep->declBit(c+83,"beg_spl_let3_done_in", false,-1);
    tracep->declBit(c+83,"beg_spl_let3_done_out", false,-1);
    tracep->declBit(c+63,"beg_spl_let4_go_in", false,-1);
    tracep->declBit(c+63,"beg_spl_let4_go_out", false,-1);
    tracep->declBit(c+83,"beg_spl_let4_done_in", false,-1);
    tracep->declBit(c+83,"beg_spl_let4_done_out", false,-1);
    tracep->declBit(c+32,"beg_spl_let5_go_in", false,-1);
    tracep->declBit(c+32,"beg_spl_let5_go_out", false,-1);
    tracep->declBit(c+80,"beg_spl_let5_done_in", false,-1);
    tracep->declBit(c+80,"beg_spl_let5_done_out", false,-1);
    tracep->declBit(c+64,"beg_spl_let7_go_in", false,-1);
    tracep->declBit(c+64,"beg_spl_let7_go_out", false,-1);
    tracep->declBit(c+83,"beg_spl_let7_done_in", false,-1);
    tracep->declBit(c+83,"beg_spl_let7_done_out", false,-1);
    tracep->declBit(c+35,"beg_spl_let8_go_in", false,-1);
    tracep->declBit(c+35,"beg_spl_let8_go_out", false,-1);
    tracep->declBit(c+86,"beg_spl_let8_done_in", false,-1);
    tracep->declBit(c+86,"beg_spl_let8_done_out", false,-1);
    tracep->declBit(c+65,"invoke0_go_in", false,-1);
    tracep->declBit(c+65,"invoke0_go_out", false,-1);
    tracep->declBit(c+94,"invoke0_done_in", false,-1);
    tracep->declBit(c+94,"invoke0_done_out", false,-1);
    tracep->declBit(c+66,"invoke1_go_in", false,-1);
    tracep->declBit(c+66,"invoke1_go_out", false,-1);
    tracep->declBit(c+96,"invoke1_done_in", false,-1);
    tracep->declBit(c+96,"invoke1_done_out", false,-1);
    tracep->declBit(c+67,"invoke2_go_in", false,-1);
    tracep->declBit(c+67,"invoke2_go_out", false,-1);
    tracep->declBit(c+98,"invoke2_done_in", false,-1);
    tracep->declBit(c+98,"invoke2_done_out", false,-1);
    tracep->declBit(c+68,"invoke3_go_in", false,-1);
    tracep->declBit(c+68,"invoke3_go_out", false,-1);
    tracep->declBit(c+90,"invoke3_done_in", false,-1);
    tracep->declBit(c+90,"invoke3_done_out", false,-1);
    tracep->declBit(c+38,"invoke4_go_in", false,-1);
    tracep->declBit(c+38,"invoke4_go_out", false,-1);
    tracep->declBit(c+92,"invoke4_done_in", false,-1);
    tracep->declBit(c+92,"invoke4_done_out", false,-1);
    tracep->declBit(c+69,"invoke5_go_in", false,-1);
    tracep->declBit(c+69,"invoke5_go_out", false,-1);
    tracep->declBit(c+88,"invoke5_done_in", false,-1);
    tracep->declBit(c+88,"invoke5_done_out", false,-1);
    tracep->declBit(c+70,"invoke9_go_in", false,-1);
    tracep->declBit(c+70,"invoke9_go_out", false,-1);
    tracep->declBit(c+88,"invoke9_done_in", false,-1);
    tracep->declBit(c+88,"invoke9_done_out", false,-1);
    tracep->declBit(c+71,"invoke10_go_in", false,-1);
    tracep->declBit(c+71,"invoke10_go_out", false,-1);
    tracep->declBit(c+90,"invoke10_done_in", false,-1);
    tracep->declBit(c+90,"invoke10_done_out", false,-1);
    tracep->declBit(c+72,"invoke14_go_in", false,-1);
    tracep->declBit(c+72,"invoke14_go_out", false,-1);
    tracep->declBit(c+94,"invoke14_done_in", false,-1);
    tracep->declBit(c+94,"invoke14_done_out", false,-1);
    tracep->declBit(c+52,"early_reset_cond00_go_in", false,-1);
    tracep->declBit(c+52,"early_reset_cond00_go_out", false,-1);
    tracep->declBit(c+124,"early_reset_cond00_done_in", false,-1);
    tracep->declBit(c+124,"early_reset_cond00_done_out", false,-1);
    tracep->declBit(c+54,"early_reset_cond10_go_in", false,-1);
    tracep->declBit(c+54,"early_reset_cond10_go_out", false,-1);
    tracep->declBit(c+124,"early_reset_cond10_done_in", false,-1);
    tracep->declBit(c+124,"early_reset_cond10_done_out", false,-1);
    tracep->declBit(c+55,"early_reset_cond20_go_in", false,-1);
    tracep->declBit(c+55,"early_reset_cond20_go_out", false,-1);
    tracep->declBit(c+124,"early_reset_cond20_done_in", false,-1);
    tracep->declBit(c+124,"early_reset_cond20_done_out", false,-1);
    tracep->declBit(c+73,"early_reset_static_par_go_in", false,-1);
    tracep->declBit(c+73,"early_reset_static_par_go_out", false,-1);
    tracep->declBit(c+124,"early_reset_static_par_done_in", false,-1);
    tracep->declBit(c+124,"early_reset_static_par_done_out", false,-1);
    tracep->declBit(c+74,"early_reset_static_seq0_go_in", false,-1);
    tracep->declBit(c+74,"early_reset_static_seq0_go_out", false,-1);
    tracep->declBit(c+124,"early_reset_static_seq0_done_in", false,-1);
    tracep->declBit(c+124,"early_reset_static_seq0_done_out", false,-1);
    tracep->declBit(c+52,"wrapper_early_reset_cond00_go_in", false,-1);
    tracep->declBit(c+52,"wrapper_early_reset_cond00_go_out", false,-1);
    tracep->declBit(c+106,"wrapper_early_reset_cond00_done_in", false,-1);
    tracep->declBit(c+106,"wrapper_early_reset_cond00_done_out", false,-1);
    tracep->declBit(c+54,"wrapper_early_reset_cond10_go_in", false,-1);
    tracep->declBit(c+54,"wrapper_early_reset_cond10_go_out", false,-1);
    tracep->declBit(c+106,"wrapper_early_reset_cond10_done_in", false,-1);
    tracep->declBit(c+106,"wrapper_early_reset_cond10_done_out", false,-1);
    tracep->declBit(c+55,"wrapper_early_reset_cond20_go_in", false,-1);
    tracep->declBit(c+55,"wrapper_early_reset_cond20_go_out", false,-1);
    tracep->declBit(c+106,"wrapper_early_reset_cond20_done_in", false,-1);
    tracep->declBit(c+106,"wrapper_early_reset_cond20_done_out", false,-1);
    tracep->declBit(c+73,"wrapper_early_reset_static_par_go_in", false,-1);
    tracep->declBit(c+73,"wrapper_early_reset_static_par_go_out", false,-1);
    tracep->declBit(c+106,"wrapper_early_reset_static_par_done_in", false,-1);
    tracep->declBit(c+106,"wrapper_early_reset_static_par_done_out", false,-1);
    tracep->declBit(c+74,"wrapper_early_reset_static_seq0_go_in", false,-1);
    tracep->declBit(c+74,"wrapper_early_reset_static_seq0_go_out", false,-1);
    tracep->declBit(c+106,"wrapper_early_reset_static_seq0_done_in", false,-1);
    tracep->declBit(c+106,"wrapper_early_reset_static_seq0_done_out", false,-1);
    tracep->declBit(c+117,"tdcc_go_in", false,-1);
    tracep->declBit(c+117,"tdcc_go_out", false,-1);
    tracep->declBit(c+77,"tdcc_done_in", false,-1);
    tracep->declBit(c+77,"tdcc_done_out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__A_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__A_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+126,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+127,"D0_SIZE", false,-1, 31,0);
    tracep->declBus(c+127,"D1_SIZE", false,-1, 31,0);
    tracep->declBus(c+128,"D0_IDX_SIZE", false,-1, 31,0);
    tracep->declBus(c+128,"D1_IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBus(c+1,"addr0", false,-1, 3,0);
    tracep->declBus(c+2,"addr1", false,-1, 3,0);
    tracep->declBit(c+32,"read_en", false,-1);
    tracep->declBus(c+78,"read_data", false,-1, 31,0);
    tracep->declBit(c+80,"read_done", false,-1);
    tracep->declBit(c+124,"write_en", false,-1);
    tracep->declBus(c+123,"write_data", false,-1, 31,0);
    tracep->declBit(c+79,"write_done", false,-1);
    tracep->declBus(c+75,"addr", false,-1, 7,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__B_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__B_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+126,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+127,"D0_SIZE", false,-1, 31,0);
    tracep->declBus(c+129,"D1_SIZE", false,-1, 31,0);
    tracep->declBus(c+128,"D0_IDX_SIZE", false,-1, 31,0);
    tracep->declBus(c+128,"D1_IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBus(c+3,"addr0", false,-1, 3,0);
    tracep->declBus(c+4,"addr1", false,-1, 3,0);
    tracep->declBit(c+34,"read_en", false,-1);
    tracep->declBus(c+81,"read_data", false,-1, 31,0);
    tracep->declBit(c+83,"read_done", false,-1);
    tracep->declBit(c+33,"write_en", false,-1);
    tracep->declBus(c+5,"write_data", false,-1, 31,0);
    tracep->declBit(c+82,"write_done", false,-1);
    tracep->declBus(c+76,"addr", false,-1, 7,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__A_int_read0_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__A_int_read0_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+6,"in", false,-1, 31,0);
    tracep->declBit(c+36,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBus(c+87,"out", false,-1, 31,0);
    tracep->declBit(c+88,"done", false,-1);
    tracep->declBus(c+87,"internal_reg", false,-1, 31,0);
    tracep->declBit(c+88,"done_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__B_i_j_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__B_i_j_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+7,"in", false,-1, 31,0);
    tracep->declBit(c+37,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBus(c+89,"out", false,-1, 31,0);
    tracep->declBit(c+90,"done", false,-1);
    tracep->declBus(c+89,"internal_reg", false,-1, 31,0);
    tracep->declBit(c+90,"done_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__B_k_j_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__B_k_j_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+8,"in", false,-1, 31,0);
    tracep->declBit(c+38,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBus(c+91,"out", false,-1, 31,0);
    tracep->declBit(c+92,"done", false,-1);
    tracep->declBus(c+91,"internal_reg", false,-1, 31,0);
    tracep->declBit(c+92,"done_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+16,"left", false,-1, 31,0);
    tracep->declBus(c+17,"right", false,-1, 31,0);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBit(c+50,"go", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBus(c+99,"out", false,-1, 31,0);
    tracep->declBus(c+107,"rtmp", false,-1, 31,0);
    tracep->declBus(c+108,"ltmp", false,-1, 31,0);
    tracep->declQuad(c+109,"out_tmp", false,-1, 63,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+19,"in", false,-1, 2,0);
    tracep->declBit(c+56,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBus(c+103,"out", false,-1, 2,0);
    tracep->declBus(c+103,"internal_reg", false,-1, 2,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+121,"in", false,-1, 4,0);
    tracep->declBit(c+122,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBus(c+105,"out", false,-1, 4,0);
    tracep->declBus(c+105,"internal_reg", false,-1, 4,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__add1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__add1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+10,"left", false,-1, 31,0);
    tracep->declBus(c+11,"right", false,-1, 31,0);
    tracep->declBus(c+12,"out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+51,"in", false,-1);
    tracep->declBit(c+52,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBit(c+100,"out", false,-1);
    tracep->declBit(c+100,"internal_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+53,"in", false,-1);
    tracep->declBit(c+54,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBit(c+101,"out", false,-1);
    tracep->declBit(c+101,"internal_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+18,"in", false,-1);
    tracep->declBit(c+55,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBit(c+102,"out", false,-1);
    tracep->declBit(c+102,"internal_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__signal_reg__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__signal_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+30,"in", false,-1);
    tracep->declBit(c+31,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBit(c+104,"out", false,-1);
    tracep->declBit(c+104,"internal_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__lt0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__lt0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+14,"left", false,-1, 3,0);
    tracep->declBus(c+49,"right", false,-1, 3,0);
    tracep->declBit(c+15,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__le0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__le0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+13,"left", false,-1, 3,0);
    tracep->declBus(c+47,"right", false,-1, 3,0);
    tracep->declBit(c+48,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__add0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__add0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+9,"left", false,-1, 3,0);
    tracep->declBus(c+39,"right", false,-1, 3,0);
    tracep->declBus(c+40,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__i0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__i0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+41,"in", false,-1, 3,0);
    tracep->declBit(c+42,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBus(c+93,"out", false,-1, 3,0);
    tracep->declBit(c+94,"done", false,-1);
    tracep->declBus(c+93,"internal_reg", false,-1, 3,0);
    tracep->declBit(c+94,"done_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__j0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__j0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+43,"in", false,-1, 3,0);
    tracep->declBit(c+44,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBus(c+95,"out", false,-1, 3,0);
    tracep->declBit(c+96,"done", false,-1);
    tracep->declBus(c+95,"internal_reg", false,-1, 3,0);
    tracep->declBit(c+96,"done_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__k_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__k_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+45,"in", false,-1, 3,0);
    tracep->declBit(c+46,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBus(c+97,"out", false,-1, 3,0);
    tracep->declBit(c+98,"done", false,-1);
    tracep->declBus(c+97,"internal_reg", false,-1, 3,0);
    tracep->declBit(c+98,"done_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let3_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let3_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+62,"in", false,-1);
    tracep->declBit(c+62,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let3_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let3_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+83,"in", false,-1);
    tracep->declBit(c+83,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let4_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let4_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+63,"in", false,-1);
    tracep->declBit(c+63,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let4_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let4_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+83,"in", false,-1);
    tracep->declBit(c+83,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let5_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let5_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+32,"in", false,-1);
    tracep->declBit(c+32,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let5_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let5_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+80,"in", false,-1);
    tracep->declBit(c+80,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let7_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let7_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+64,"in", false,-1);
    tracep->declBit(c+64,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let7_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let7_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+83,"in", false,-1);
    tracep->declBit(c+83,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let8_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let8_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+35,"in", false,-1);
    tracep->declBit(c+35,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let8_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let8_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+86,"in", false,-1);
    tracep->declBit(c+86,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke0_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke0_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+65,"in", false,-1);
    tracep->declBit(c+65,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke0_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke0_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+94,"in", false,-1);
    tracep->declBit(c+94,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke1_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke1_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+66,"in", false,-1);
    tracep->declBit(c+66,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke1_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke1_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+96,"in", false,-1);
    tracep->declBit(c+96,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke2_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke2_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+67,"in", false,-1);
    tracep->declBit(c+67,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke2_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke2_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+98,"in", false,-1);
    tracep->declBit(c+98,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke3_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke3_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+68,"in", false,-1);
    tracep->declBit(c+68,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke3_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke3_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+90,"in", false,-1);
    tracep->declBit(c+90,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke4_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke4_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+38,"in", false,-1);
    tracep->declBit(c+38,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke4_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke4_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+92,"in", false,-1);
    tracep->declBit(c+92,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke5_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke5_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+69,"in", false,-1);
    tracep->declBit(c+69,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke5_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke5_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+88,"in", false,-1);
    tracep->declBit(c+88,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke9_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke9_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+70,"in", false,-1);
    tracep->declBit(c+70,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke9_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke9_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+88,"in", false,-1);
    tracep->declBit(c+88,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke10_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke10_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+71,"in", false,-1);
    tracep->declBit(c+71,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke10_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke10_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+90,"in", false,-1);
    tracep->declBit(c+90,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke14_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke14_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+72,"in", false,-1);
    tracep->declBit(c+72,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke14_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke14_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+94,"in", false,-1);
    tracep->declBit(c+94,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond00_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond00_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+52,"in", false,-1);
    tracep->declBit(c+52,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond00_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond00_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+124,"in", false,-1);
    tracep->declBit(c+124,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+54,"in", false,-1);
    tracep->declBit(c+54,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+124,"in", false,-1);
    tracep->declBit(c+124,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+55,"in", false,-1);
    tracep->declBit(c+55,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+124,"in", false,-1);
    tracep->declBit(c+124,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+73,"in", false,-1);
    tracep->declBit(c+73,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+124,"in", false,-1);
    tracep->declBit(c+124,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+74,"in", false,-1);
    tracep->declBit(c+74,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+124,"in", false,-1);
    tracep->declBit(c+124,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond00_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond00_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+52,"in", false,-1);
    tracep->declBit(c+52,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond00_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond00_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+106,"in", false,-1);
    tracep->declBit(c+106,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+54,"in", false,-1);
    tracep->declBit(c+54,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+106,"in", false,-1);
    tracep->declBit(c+106,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+55,"in", false,-1);
    tracep->declBit(c+55,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+106,"in", false,-1);
    tracep->declBit(c+106,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+73,"in", false,-1);
    tracep->declBit(c+73,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+106,"in", false,-1);
    tracep->declBit(c+106,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq0_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq0_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+74,"in", false,-1);
    tracep->declBit(c+74,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq0_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq0_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+106,"in", false,-1);
    tracep->declBit(c+106,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+117,"in", false,-1);
    tracep->declBit(c+117,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+77,"in", false,-1);
    tracep->declBit(c+77,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+20,"left", false,-1, 2,0);
    tracep->declBus(c+57,"right", false,-1, 2,0);
    tracep->declBus(c+21,"out", false,-1, 2,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+22,"left", false,-1, 2,0);
    tracep->declBus(c+58,"right", false,-1, 2,0);
    tracep->declBus(c+23,"out", false,-1, 2,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+24,"left", false,-1, 2,0);
    tracep->declBus(c+59,"right", false,-1, 2,0);
    tracep->declBus(c+25,"out", false,-1, 2,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder2__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+26,"left", false,-1, 2,0);
    tracep->declBus(c+60,"right", false,-1, 2,0);
    tracep->declBus(c+27,"out", false,-1, 2,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder3__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+28,"left", false,-1, 2,0);
    tracep->declBus(c+61,"right", false,-1, 2,0);
    tracep->declBus(c+29,"out", false,-1, 2,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__alpha_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__alpha_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+126,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+130,"SIZE", false,-1, 31,0);
    tracep->declBus(c+130,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBus(c+124,"addr0", false,-1, 0,0);
    tracep->declBit(c+35,"read_en", false,-1);
    tracep->declBus(c+84,"read_data", false,-1, 31,0);
    tracep->declBit(c+86,"read_done", false,-1);
    tracep->declBus(c+123,"write_data", false,-1, 31,0);
    tracep->declBit(c+124,"write_en", false,-1);
    tracep->declBit(c+85,"write_done", false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+116+i*1,"mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+84,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__A_int__mem__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__A_int__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+126,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+131,"SIZE", false,-1, 31,0);
    tracep->declBus(c+127,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBus(c+75,"addr0", false,-1, 7,0);
    tracep->declBit(c+32,"read_en", false,-1);
    tracep->declBus(c+78,"read_data", false,-1, 31,0);
    tracep->declBit(c+80,"read_done", false,-1);
    tracep->declBus(c+123,"write_data", false,-1, 31,0);
    tracep->declBit(c+124,"write_en", false,-1);
    tracep->declBit(c+79,"write_done", false,-1);
    tracep->declBus(c+78,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__B_int__mem__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__B_int__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+126,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+132,"SIZE", false,-1, 31,0);
    tracep->declBus(c+127,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+118,"reset", false,-1);
    tracep->declBus(c+76,"addr0", false,-1, 7,0);
    tracep->declBit(c+34,"read_en", false,-1);
    tracep->declBus(c+81,"read_data", false,-1, 31,0);
    tracep->declBit(c+83,"read_done", false,-1);
    tracep->declBus(c+5,"write_data", false,-1, 31,0);
    tracep->declBit(c+33,"write_en", false,-1);
    tracep->declBit(c+82,"write_done", false,-1);
    tracep->declBus(c+81,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_top(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_top\n"); );
    // Body
    tracep->pushNamePrefix("TOP ");
    VTOP___024root__trace_init_sub__TOP__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("A_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__A_int__0(vlSelf, tracep);
    tracep->pushNamePrefix("mem ");
    VTOP___024root__trace_init_sub__TOP__TOP__A_int__mem__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("B_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__B_int__0(vlSelf, tracep);
    tracep->pushNamePrefix("mem ");
    VTOP___024root__trace_init_sub__TOP__TOP__B_int__mem__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("alpha_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__alpha_int__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("main ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__0(vlSelf, tracep);
    tracep->pushNamePrefix("A_int_read0_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__A_int_read0_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("B_i_j_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__B_i_j_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("B_k_j_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__B_k_j_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__add0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add1 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__add1__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__adder__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__adder0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder1 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__adder1__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder2 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__adder2__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder3 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__adder3__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("beg_spl_let3_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let3_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("beg_spl_let3_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let3_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("beg_spl_let4_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let4_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("beg_spl_let4_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let4_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("beg_spl_let5_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let5_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("beg_spl_let5_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let5_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("beg_spl_let7_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let7_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("beg_spl_let7_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let7_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("beg_spl_let8_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let8_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("beg_spl_let8_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let8_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("comb_reg ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("comb_reg0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("comb_reg1 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg1__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_cond00_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond00_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_cond00_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond00_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_cond10_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_cond10_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_cond20_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_cond20_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_par_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_par_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq0_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq0_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fsm ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fsm0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__i0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke0_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke0_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke0_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke0_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke10_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke10_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke10_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke10_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke14_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke14_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke14_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke14_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke1_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke1_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke1_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke1_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke2_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke2_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke2_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke2_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke3_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke3_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke3_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke3_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke4_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke4_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke4_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke4_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke5_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke5_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke5_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke5_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke9_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke9_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke9_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke9_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("j0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__j0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("k_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__k_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("le0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__le0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lt0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__lt0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mult_pipe0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("signal_reg ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__signal_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tdcc_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tdcc_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_cond00_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond00_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_cond00_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond00_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_cond10_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_cond10_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_cond20_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_cond20_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_static_par_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_static_par_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_static_seq0_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq0_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_static_seq0_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq0_go__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VTOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTOP___024root__trace_register(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTOP___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTOP___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTOP___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTOP___024root__trace_full_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_full_top_0\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTOP___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTOP___024root__trace_full_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let5_go_in)
                              ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__internal_reg)
                              : 0U)),4);
    bufp->fullCData(oldp+2,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let5_go_in)
                              ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__internal_reg)
                              : 0U)),4);
    bufp->fullCData(oldp+3,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in)
                              ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__internal_reg)
                              : (((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let3_go_in) 
                                  | ((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let7_go_in) 
                                     | (IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en)))
                                  ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__internal_reg)
                                  : 0U))),4);
    bufp->fullCData(oldp+4,((((IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_read_en) 
                              | (IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en))
                              ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                              : 0U)),4);
    bufp->fullIData(oldp+5,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_ha2ac0650__0)
                              ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__internal_reg
                              : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0)
                                  ? (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0)
                                       ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__internal_reg
                                       : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0)
                                                 ? vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__internal_reg
                                                 : 0U))
                                  : 0U))),32);
    bufp->fullIData(oldp+6,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5cffc676__0)
                              ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp)
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke9_go_in)
                                  ? vlSymsp->TOP__TOP__B_int__mem.__PVT__read_out
                                  : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke5_go_in)
                                      ? vlSymsp->TOP__TOP__A_int__mem.__PVT__read_out
                                      : 0U)))),32);
    bufp->fullIData(oldp+7,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke3_go_in)
                              ? vlSymsp->TOP__TOP__B_int__mem.__PVT__read_out
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke10_go_in)
                                  ? vlSymsp->TOP__TOP__alpha_int.__PVT__read_out
                                  : 0U))),32);
    bufp->fullIData(oldp+8,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke4_go_in)
                              ? vlSymsp->TOP__TOP__B_int__mem.__PVT__read_out
                              : 0U)),32);
    bufp->fullCData(oldp+9,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hae6fc7c9__0)
                              ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                              : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h24f850e6__0)
                                  ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__internal_reg)
                                  : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5a0ff7ae__0)
                                      ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__internal_reg)
                                      : 0U)))),4);
    bufp->fullIData(oldp+10,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0)
                               ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__internal_reg
                               : 0U)),32);
    bufp->fullIData(oldp+11,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0)
                               ? vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__internal_reg
                               : 0U)),32);
    bufp->fullIData(oldp+12,((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0)
                                ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__internal_reg
                                : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0)
                                          ? vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__internal_reg
                                          : 0U))),32);
    bufp->fullCData(oldp+13,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                               : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                   ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__internal_reg)
                                   : 0U))),4);
    bufp->fullCData(oldp+14,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__internal_reg)
                               : 0U)),4);
    bufp->fullBit(oldp+15,((((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                              ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__internal_reg)
                              : 0U) < ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                        ? 8U : 0U))));
    bufp->fullIData(oldp+16,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h94fdc82f__0)
                               ? vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__internal_reg
                               : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5635cf48__0)
                                   ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__internal_reg
                                   : 0U))),32);
    bufp->fullIData(oldp+17,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5635cf48__0)
                               ? vlSymsp->TOP__TOP__main__B_k_j_0.__PVT__internal_reg
                               : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h94fdc82f__0)
                                   ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__internal_reg
                                   : 0U))),32);
    bufp->fullBit(oldp+18,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in) 
                            & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__internal_reg)
                                 : 0U) < ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                           ? 8U : 0U)))));
    bufp->fullCData(oldp+19,(((((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)) 
                               | (((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                   & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)) 
                                  | (((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                      & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)) 
                                     | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0) 
                                        | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hae6fc7c9__0)))))
                               ? 0U : (7U & (((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                              & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in))
                                              ? (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                                   ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                                   : 0U) 
                                                 + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in))
                                              : (((5U 
                                                   != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in))
                                                  ? 
                                                 (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in)
                                                    ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                                    : 0U) 
                                                  + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in))
                                                  : 
                                                 (((4U 
                                                    != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                                   & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in))
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                                     ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                                     : 0U) 
                                                   + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in))
                                                   : 
                                                  (((0U 
                                                     != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                                    & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in))
                                                    ? 
                                                   (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                                      ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                                      : 0U) 
                                                    + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in))
                                                    : 
                                                   (((0U 
                                                      != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in))
                                                     ? 
                                                    (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                                       ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                                       : 0U) 
                                                     + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in))
                                                     : 0U)))))))),3);
    bufp->fullCData(oldp+20,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                               : 0U)),3);
    bufp->fullCData(oldp+21,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                      ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                      : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)))),3);
    bufp->fullCData(oldp+22,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                               : 0U)),3);
    bufp->fullCData(oldp+23,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                      ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                      : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)))),3);
    bufp->fullCData(oldp+24,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                               : 0U)),3);
    bufp->fullCData(oldp+25,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                      ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                      : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)))),3);
    bufp->fullCData(oldp+26,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                               : 0U)),3);
    bufp->fullCData(oldp+27,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                      ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                      : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)))),3);
    bufp->fullCData(oldp+28,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                               : 0U)),3);
    bufp->fullCData(oldp+29,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in)
                                      ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                      : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in)))),3);
    bufp->fullBit(oldp+30,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_done_in)) 
                            & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3989696c__0))));
    bufp->fullBit(oldp+31,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_done_in) 
                            | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3989696c__0))));
    bufp->fullBit(oldp+32,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let5_go_in));
    bufp->fullBit(oldp+33,(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en));
    bufp->fullBit(oldp+34,(vlSymsp->TOP__TOP__main.__PVT__B_int_read_en));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let8_go_in));
    bufp->fullBit(oldp+36,(vlSymsp->TOP__TOP__main.__PVT__A_int_read0_0_write_en));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__TOP__main.__PVT__B_i_j_0_write_en));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__TOP__main.__PVT__invoke4_go_in));
    bufp->fullCData(oldp+39,((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5a0ff7ae__0) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h24f850e6__0) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hae6fc7c9__0)))
                               ? 1U : 0U)),4);
    bufp->fullCData(oldp+40,((0xfU & (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0))),4);
    bufp->fullCData(oldp+41,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke0_go_in)
                               ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke14_go_in)
                                        ? (0xfU & (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0))
                                        : 0U))),4);
    bufp->fullBit(oldp+42,(vlSymsp->TOP__TOP__main.__PVT__i0_write_en));
    bufp->fullCData(oldp+43,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke1_go_in)
                               ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hae6fc7c9__0)
                                        ? (0xfU & (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0))
                                        : 0U))),4);
    bufp->fullBit(oldp+44,(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
    bufp->fullCData(oldp+45,(((IData)(vlSymsp->TOP__TOP__main.__PVT__k_0_write_en)
                               ? (0xfU & (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0))
                               : 0U)),4);
    bufp->fullBit(oldp+46,(vlSymsp->TOP__TOP__main.__PVT__k_0_write_en));
    bufp->fullCData(oldp+47,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                               ? 0xbU : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                          ? 7U : 0U))),4);
    bufp->fullBit(oldp+48,(vlSymsp->TOP__TOP__main__le0.__PVT__out));
    bufp->fullCData(oldp+49,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                               ? 8U : 0U)),4);
    bufp->fullBit(oldp+50,(vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go));
    bufp->fullBit(oldp+51,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in) 
                            & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
    bufp->fullBit(oldp+52,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in));
    bufp->fullBit(oldp+53,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                            & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
    bufp->fullBit(oldp+54,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in));
    bufp->fullBit(oldp+55,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in));
    bufp->fullBit(oldp+56,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in) 
                            | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in) 
                                  | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in) 
                                     | (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in)))))));
    bufp->fullCData(oldp+57,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in),3);
    bufp->fullCData(oldp+58,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in),3);
    bufp->fullCData(oldp+59,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in),3);
    bufp->fullCData(oldp+60,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in),3);
    bufp->fullCData(oldp+61,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in),3);
    bufp->fullBit(oldp+62,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let3_go_in));
    bufp->fullBit(oldp+63,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in));
    bufp->fullBit(oldp+64,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let7_go_in));
    bufp->fullBit(oldp+65,(vlSymsp->TOP__TOP__main.__PVT__invoke0_go_in));
    bufp->fullBit(oldp+66,(vlSymsp->TOP__TOP__main.__PVT__invoke1_go_in));
    bufp->fullBit(oldp+67,(vlSymsp->TOP__TOP__main.__PVT__invoke2_go_in));
    bufp->fullBit(oldp+68,(vlSymsp->TOP__TOP__main.__PVT__invoke3_go_in));
    bufp->fullBit(oldp+69,(vlSymsp->TOP__TOP__main.__PVT__invoke5_go_in));
    bufp->fullBit(oldp+70,(vlSymsp->TOP__TOP__main.__PVT__invoke9_go_in));
    bufp->fullBit(oldp+71,(vlSymsp->TOP__TOP__main.__PVT__invoke10_go_in));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__TOP__main.__PVT__invoke14_go_in));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in));
    bufp->fullCData(oldp+75,(vlSymsp->TOP__TOP__A_int.__PVT__addr),8);
    bufp->fullCData(oldp+76,(vlSymsp->TOP__TOP__B_int.__PVT__addr),8);
    bufp->fullBit(oldp+77,((0x16U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg))));
    bufp->fullIData(oldp+78,(vlSymsp->TOP__TOP__A_int__mem.__PVT__read_out),32);
    bufp->fullBit(oldp+79,(vlSymsp->TOP__TOP__A_int__mem.__PVT__write_done));
    bufp->fullBit(oldp+80,(vlSymsp->TOP__TOP__A_int__mem.__PVT__read_done));
    bufp->fullIData(oldp+81,(vlSymsp->TOP__TOP__B_int__mem.__PVT__read_out),32);
    bufp->fullBit(oldp+82,(vlSymsp->TOP__TOP__B_int__mem.__PVT__write_done));
    bufp->fullBit(oldp+83,(vlSymsp->TOP__TOP__B_int__mem.__PVT__read_done));
    bufp->fullIData(oldp+84,(vlSymsp->TOP__TOP__alpha_int.__PVT__read_out),32);
    bufp->fullBit(oldp+85,(vlSymsp->TOP__TOP__alpha_int.__PVT__write_done));
    bufp->fullBit(oldp+86,(vlSymsp->TOP__TOP__alpha_int.__PVT__read_done));
    bufp->fullIData(oldp+87,(vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__internal_reg),32);
    bufp->fullBit(oldp+88,(vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__done_reg));
    bufp->fullIData(oldp+89,(vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__internal_reg),32);
    bufp->fullBit(oldp+90,(vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__done_reg));
    bufp->fullIData(oldp+91,(vlSymsp->TOP__TOP__main__B_k_j_0.__PVT__internal_reg),32);
    bufp->fullBit(oldp+92,(vlSymsp->TOP__TOP__main__B_k_j_0.__PVT__done_reg));
    bufp->fullCData(oldp+93,(vlSymsp->TOP__TOP__main__i0.__PVT__internal_reg),4);
    bufp->fullBit(oldp+94,(vlSymsp->TOP__TOP__main__i0.__PVT__done_reg));
    bufp->fullCData(oldp+95,(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg),4);
    bufp->fullBit(oldp+96,(vlSymsp->TOP__TOP__main__j0.__PVT__done_reg));
    bufp->fullCData(oldp+97,(vlSymsp->TOP__TOP__main__k_0.__PVT__internal_reg),4);
    bufp->fullBit(oldp+98,(vlSymsp->TOP__TOP__main__k_0.__PVT__done_reg));
    bufp->fullIData(oldp+99,((IData)(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp)),32);
    bufp->fullBit(oldp+100,(vlSymsp->TOP__TOP__main__comb_reg.__PVT__internal_reg));
    bufp->fullBit(oldp+101,(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__internal_reg));
    bufp->fullBit(oldp+102,(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__internal_reg));
    bufp->fullCData(oldp+103,(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg),3);
    bufp->fullBit(oldp+104,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__internal_reg));
    bufp->fullCData(oldp+105,(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg),5);
    bufp->fullBit(oldp+106,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_done_in));
    bufp->fullIData(oldp+107,(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__rtmp),32);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__ltmp),32);
    bufp->fullQData(oldp+109,(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp),64);
    bufp->fullBit(oldp+111,(vlSymsp->TOP__TOP.__PVT__clk));
    bufp->fullIData(oldp+112,(vlSymsp->TOP__TOP.__PVT__NOTRACE),32);
    bufp->fullQData(oldp+113,(vlSymsp->TOP__TOP.__PVT__CYCLE_LIMIT),64);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__TOP.__PVT__CODE),32);
    bufp->fullIData(oldp+116,(vlSymsp->TOP__TOP__alpha_int.__PVT__mem[0]),32);
    bufp->fullBit(oldp+117,(vlSymsp->TOP__TOP.__PVT__go));
    bufp->fullBit(oldp+118,(vlSymsp->TOP__TOP.__PVT__reset));
    bufp->fullQData(oldp+119,(vlSymsp->TOP__TOP.__PVT__cycle_count),64);
    bufp->fullCData(oldp+121,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hbafba765__0)
                                ? 9U : ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_311)
                                         ? 0x11U : 
                                        ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h50eea2a5__0) 
                                           | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hee665582__0)) 
                                          & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                          ? 0x14U : 
                                         ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_haabfc6e7__0) 
                                            | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h496a5df7__0)) 
                                           & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                           ? 6U : (
                                                   (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7f031210__0) 
                                                     | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h861bc47f__0)) 
                                                    & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                                    ? 4U
                                                    : 
                                                   ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf7aba140__0) 
                                                      | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he35e67f8__0)) 
                                                     & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                                     ? 0x16U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd9131b55__0)
                                                      ? 0x13U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h12dd2185__0)
                                                       ? 0x15U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd74ea668__0)
                                                        ? 0xbU
                                                        : 
                                                       ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf7dba21d__0)
                                                         ? 7U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h4409eb50__0)
                                                          ? 0xaU
                                                          : 
                                                         ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h9ca55de3__0)
                                                           ? 8U
                                                           : 
                                                          ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2f49b479__0) 
                                                             | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hcb3812f3__0)) 
                                                            & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                                            ? 2U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8179485d__0)
                                                             ? 0xcU
                                                             : 
                                                            ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_249)
                                                              ? 5U
                                                              : 
                                                             ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h1025c6c2__0) 
                                                                | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h301c5d92__0)) 
                                                               & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                                               ? 0xeU
                                                               : 
                                                              ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_ha515d6f3__0)
                                                                ? 0xdU
                                                                : 
                                                               ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h89b6cb23__0)
                                                                 ? 3U
                                                                 : 
                                                                ((0x16U 
                                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg))
                                                                  ? 0U
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2bdf3e9c__0)
                                                                   ? 0x10U
                                                                   : 
                                                                  ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_315)
                                                                    ? 0x12U
                                                                    : 
                                                                   ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_had1198b6__0)
                                                                     ? 0xfU
                                                                     : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_221)))))))))))))))))))))))),5);
    bufp->fullBit(oldp+122,((((((0x16U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg)) 
                                | ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_221) 
                                   | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2f49b479__0) 
                                       & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                      | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hcb3812f3__0) 
                                          & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                         | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h89b6cb23__0) 
                                            | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7f031210__0) 
                                                & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                               | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h861bc47f__0) 
                                                   & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                                  | (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_249)))))))) 
                               | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_haabfc6e7__0) 
                                   & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                  | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h496a5df7__0) 
                                      & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                     | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf7dba21d__0) 
                                        | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h9ca55de3__0) 
                                           | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hbafba765__0) 
                                              | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h4409eb50__0) 
                                                 | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd74ea668__0)))))))) 
                              | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8179485d__0) 
                                 | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_ha515d6f3__0) 
                                    | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h1025c6c2__0) 
                                        & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                       | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h301c5d92__0) 
                                           & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                          | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_had1198b6__0) 
                                             | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2bdf3e9c__0) 
                                                | ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_311) 
                                                   | (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_315))))))))) 
                             | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd9131b55__0) 
                                | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h50eea2a5__0) 
                                    & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                   | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hee665582__0) 
                                       & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                      | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h12dd2185__0) 
                                         | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf7aba140__0) 
                                             | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he35e67f8__0)) 
                                            & (IData)(vlSymsp->TOP__TOP.__PVT__go)))))))));
    bufp->fullIData(oldp+123,(0U),32);
    bufp->fullBit(oldp+124,(0U));
    bufp->fullIData(oldp+125,(3U),32);
    bufp->fullIData(oldp+126,(0x20U),32);
    bufp->fullIData(oldp+127,(8U),32);
    bufp->fullIData(oldp+128,(4U),32);
    bufp->fullIData(oldp+129,(0xcU),32);
    bufp->fullIData(oldp+130,(1U),32);
    bufp->fullIData(oldp+131,(0x40U),32);
    bufp->fullIData(oldp+132,(0x60U),32);
}

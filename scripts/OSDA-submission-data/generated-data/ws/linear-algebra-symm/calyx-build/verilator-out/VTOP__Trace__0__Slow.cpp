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
    tracep->declBit(c+147,"go", false,-1);
    tracep->declBit(c+84,"done", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+151,"RESET_CYCLES", false,-1, 31,0);
    tracep->declQuad(c+149,"cycle_count", false,-1, 63,0);
    tracep->declBus(c+143,"NOTRACE", false,-1, 31,0);
    tracep->declQuad(c+144,"CYCLE_LIMIT", false,-1, 63,0);
    tracep->declBus(c+146,"CODE", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+147,"go", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBit(c+84,"done", false,-1);
    tracep->declBus(c+1,"CODE", false,-1, 31,0);
    tracep->declBit(c+142,"A_int_clk", false,-1);
    tracep->declBit(c+148,"A_int_reset", false,-1);
    tracep->declBus(c+85,"A_int_addr0", false,-1, 3,0);
    tracep->declBus(c+2,"A_int_addr1", false,-1, 3,0);
    tracep->declBit(c+152,"A_int_write_en", false,-1);
    tracep->declBus(c+153,"A_int_write_data", false,-1, 31,0);
    tracep->declBit(c+35,"A_int_read_en", false,-1);
    tracep->declBus(c+86,"A_int_read_data", false,-1, 31,0);
    tracep->declBit(c+87,"A_int_write_done", false,-1);
    tracep->declBit(c+88,"A_int_read_done", false,-1);
    tracep->declBus(c+3,"A_int_read0_0_in", false,-1, 31,0);
    tracep->declBit(c+36,"A_int_read0_0_write_en", false,-1);
    tracep->declBit(c+142,"A_int_read0_0_clk", false,-1);
    tracep->declBit(c+148,"A_int_read0_0_reset", false,-1);
    tracep->declBus(c+89,"A_int_read0_0_out", false,-1, 31,0);
    tracep->declBit(c+90,"A_int_read0_0_done", false,-1);
    tracep->declBit(c+142,"B_int_clk", false,-1);
    tracep->declBit(c+148,"B_int_reset", false,-1);
    tracep->declBus(c+4,"B_int_addr0", false,-1, 3,0);
    tracep->declBus(c+91,"B_int_addr1", false,-1, 3,0);
    tracep->declBit(c+154,"B_int_write_en", false,-1);
    tracep->declBus(c+155,"B_int_write_data", false,-1, 31,0);
    tracep->declBit(c+35,"B_int_read_en", false,-1);
    tracep->declBus(c+92,"B_int_read_data", false,-1, 31,0);
    tracep->declBit(c+93,"B_int_write_done", false,-1);
    tracep->declBit(c+94,"B_int_read_done", false,-1);
    tracep->declBus(c+5,"B_int_read0_0_in", false,-1, 31,0);
    tracep->declBit(c+37,"B_int_read0_0_write_en", false,-1);
    tracep->declBit(c+142,"B_int_read0_0_clk", false,-1);
    tracep->declBit(c+148,"B_int_read0_0_reset", false,-1);
    tracep->declBus(c+95,"B_int_read0_0_out", false,-1, 31,0);
    tracep->declBit(c+96,"B_int_read0_0_done", false,-1);
    tracep->declBus(c+6,"C_i_j_0_in", false,-1, 31,0);
    tracep->declBit(c+38,"C_i_j_0_write_en", false,-1);
    tracep->declBit(c+142,"C_i_j_0_clk", false,-1);
    tracep->declBit(c+148,"C_i_j_0_reset", false,-1);
    tracep->declBus(c+97,"C_i_j_0_out", false,-1, 31,0);
    tracep->declBit(c+98,"C_i_j_0_done", false,-1);
    tracep->declBit(c+142,"C_int_clk", false,-1);
    tracep->declBit(c+148,"C_int_reset", false,-1);
    tracep->declBus(c+7,"C_int_addr0", false,-1, 3,0);
    tracep->declBus(c+91,"C_int_addr1", false,-1, 3,0);
    tracep->declBit(c+39,"C_int_write_en", false,-1);
    tracep->declBus(c+8,"C_int_write_data", false,-1, 31,0);
    tracep->declBit(c+40,"C_int_read_en", false,-1);
    tracep->declBus(c+99,"C_int_read_data", false,-1, 31,0);
    tracep->declBit(c+100,"C_int_write_done", false,-1);
    tracep->declBit(c+101,"C_int_read_done", false,-1);
    tracep->declBus(c+41,"add2_left", false,-1, 3,0);
    tracep->declBus(c+156,"add2_right", false,-1, 3,0);
    tracep->declBus(c+42,"add2_out", false,-1, 3,0);
    tracep->declBus(c+9,"add3_left", false,-1, 31,0);
    tracep->declBus(c+10,"add3_right", false,-1, 31,0);
    tracep->declBus(c+43,"add3_out", false,-1, 31,0);
    tracep->declBus(c+43,"add4_left", false,-1, 31,0);
    tracep->declBus(c+95,"add4_right", false,-1, 31,0);
    tracep->declBus(c+11,"add4_out", false,-1, 31,0);
    tracep->declBit(c+142,"alpha_int_clk", false,-1);
    tracep->declBit(c+148,"alpha_int_reset", false,-1);
    tracep->declBit(c+157,"alpha_int_addr0", false,-1);
    tracep->declBit(c+158,"alpha_int_write_en", false,-1);
    tracep->declBus(c+159,"alpha_int_write_data", false,-1, 31,0);
    tracep->declBit(c+40,"alpha_int_read_en", false,-1);
    tracep->declBus(c+102,"alpha_int_read_data", false,-1, 31,0);
    tracep->declBit(c+103,"alpha_int_write_done", false,-1);
    tracep->declBit(c+104,"alpha_int_read_done", false,-1);
    tracep->declBus(c+102,"alpha_int_read0_0_in", false,-1, 31,0);
    tracep->declBit(c+44,"alpha_int_read0_0_write_en", false,-1);
    tracep->declBit(c+142,"alpha_int_read0_0_clk", false,-1);
    tracep->declBit(c+148,"alpha_int_read0_0_reset", false,-1);
    tracep->declBus(c+105,"alpha_int_read0_0_out", false,-1, 31,0);
    tracep->declBit(c+106,"alpha_int_read0_0_done", false,-1);
    tracep->declBit(c+142,"beta_int_clk", false,-1);
    tracep->declBit(c+148,"beta_int_reset", false,-1);
    tracep->declBit(c+157,"beta_int_addr0", false,-1);
    tracep->declBit(c+160,"beta_int_write_en", false,-1);
    tracep->declBus(c+161,"beta_int_write_data", false,-1, 31,0);
    tracep->declBit(c+45,"beta_int_read_en", false,-1);
    tracep->declBus(c+107,"beta_int_read_data", false,-1, 31,0);
    tracep->declBit(c+108,"beta_int_write_done", false,-1);
    tracep->declBit(c+109,"beta_int_read_done", false,-1);
    tracep->declBus(c+107,"beta_int_read0_0_in", false,-1, 31,0);
    tracep->declBit(c+46,"beta_int_read0_0_write_en", false,-1);
    tracep->declBit(c+142,"beta_int_read0_0_clk", false,-1);
    tracep->declBit(c+148,"beta_int_read0_0_reset", false,-1);
    tracep->declBus(c+110,"beta_int_read0_0_out", false,-1, 31,0);
    tracep->declBit(c+111,"beta_int_read0_0_done", false,-1);
    tracep->declBus(c+162,"const0_out", false,-1, 31,0);
    tracep->declBus(c+163,"const1_out", false,-1, 3,0);
    tracep->declBit(c+164,"const10_out", false,-1);
    tracep->declBus(c+156,"const11_out", false,-1, 3,0);
    tracep->declBus(c+165,"const2_out", false,-1, 3,0);
    tracep->declBus(c+166,"const4_out", false,-1, 3,0);
    tracep->declBit(c+164,"const9_out", false,-1);
    tracep->declBus(c+47,"i0_in", false,-1, 3,0);
    tracep->declBit(c+48,"i0_write_en", false,-1);
    tracep->declBit(c+142,"i0_clk", false,-1);
    tracep->declBit(c+148,"i0_reset", false,-1);
    tracep->declBus(c+85,"i0_out", false,-1, 3,0);
    tracep->declBit(c+112,"i0_done", false,-1);
    tracep->declBus(c+49,"j0_in", false,-1, 3,0);
    tracep->declBit(c+50,"j0_write_en", false,-1);
    tracep->declBit(c+142,"j0_clk", false,-1);
    tracep->declBit(c+148,"j0_reset", false,-1);
    tracep->declBus(c+91,"j0_out", false,-1, 3,0);
    tracep->declBit(c+113,"j0_done", false,-1);
    tracep->declBus(c+51,"k_0_in", false,-1, 3,0);
    tracep->declBit(c+52,"k_0_write_en", false,-1);
    tracep->declBit(c+142,"k_0_clk", false,-1);
    tracep->declBit(c+148,"k_0_reset", false,-1);
    tracep->declBus(c+114,"k_0_out", false,-1, 3,0);
    tracep->declBit(c+115,"k_0_done", false,-1);
    tracep->declBus(c+12,"le0_left", false,-1, 3,0);
    tracep->declBus(c+53,"le0_right", false,-1, 3,0);
    tracep->declBit(c+54,"le0_out", false,-1);
    tracep->declBus(c+13,"lt0_left", false,-1, 3,0);
    tracep->declBus(c+14,"lt0_right", false,-1, 3,0);
    tracep->declBit(c+15,"lt0_out", false,-1);
    tracep->declBit(c+142,"mult_pipe0_clk", false,-1);
    tracep->declBit(c+148,"mult_pipe0_reset", false,-1);
    tracep->declBit(c+55,"mult_pipe0_go", false,-1);
    tracep->declBus(c+16,"mult_pipe0_left", false,-1, 31,0);
    tracep->declBus(c+17,"mult_pipe0_right", false,-1, 31,0);
    tracep->declBus(c+116,"mult_pipe0_out", false,-1, 31,0);
    tracep->declBit(c+117,"mult_pipe0_done", false,-1);
    tracep->declBus(c+56,"temp2_0_in", false,-1, 31,0);
    tracep->declBit(c+57,"temp2_0_write_en", false,-1);
    tracep->declBit(c+142,"temp2_0_clk", false,-1);
    tracep->declBit(c+148,"temp2_0_reset", false,-1);
    tracep->declBus(c+118,"temp2_0_out", false,-1, 31,0);
    tracep->declBit(c+119,"temp2_0_done", false,-1);
    tracep->declBit(c+58,"comb_reg_in", false,-1);
    tracep->declBit(c+59,"comb_reg_write_en", false,-1);
    tracep->declBit(c+142,"comb_reg_clk", false,-1);
    tracep->declBit(c+148,"comb_reg_reset", false,-1);
    tracep->declBit(c+120,"comb_reg_out", false,-1);
    tracep->declBit(c+121,"comb_reg_done", false,-1);
    tracep->declBit(c+60,"comb_reg0_in", false,-1);
    tracep->declBit(c+61,"comb_reg0_write_en", false,-1);
    tracep->declBit(c+142,"comb_reg0_clk", false,-1);
    tracep->declBit(c+148,"comb_reg0_reset", false,-1);
    tracep->declBit(c+122,"comb_reg0_out", false,-1);
    tracep->declBit(c+123,"comb_reg0_done", false,-1);
    tracep->declBit(c+18,"comb_reg1_in", false,-1);
    tracep->declBit(c+62,"comb_reg1_write_en", false,-1);
    tracep->declBit(c+142,"comb_reg1_clk", false,-1);
    tracep->declBit(c+148,"comb_reg1_reset", false,-1);
    tracep->declBit(c+124,"comb_reg1_out", false,-1);
    tracep->declBit(c+125,"comb_reg1_done", false,-1);
    tracep->declBus(c+19,"fsm_in", false,-1, 4,0);
    tracep->declBit(c+63,"fsm_write_en", false,-1);
    tracep->declBit(c+142,"fsm_clk", false,-1);
    tracep->declBit(c+148,"fsm_reset", false,-1);
    tracep->declBus(c+126,"fsm_out", false,-1, 4,0);
    tracep->declBit(c+127,"fsm_done", false,-1);
    tracep->declBit(c+164,"ud_out", false,-1);
    tracep->declBus(c+20,"adder_left", false,-1, 4,0);
    tracep->declBus(c+64,"adder_right", false,-1, 4,0);
    tracep->declBus(c+21,"adder_out", false,-1, 4,0);
    tracep->declBit(c+164,"ud0_out", false,-1);
    tracep->declBus(c+22,"adder0_left", false,-1, 4,0);
    tracep->declBus(c+65,"adder0_right", false,-1, 4,0);
    tracep->declBus(c+23,"adder0_out", false,-1, 4,0);
    tracep->declBit(c+164,"ud1_out", false,-1);
    tracep->declBus(c+24,"adder1_left", false,-1, 4,0);
    tracep->declBus(c+66,"adder1_right", false,-1, 4,0);
    tracep->declBus(c+25,"adder1_out", false,-1, 4,0);
    tracep->declBit(c+164,"ud2_out", false,-1);
    tracep->declBus(c+26,"adder2_left", false,-1, 4,0);
    tracep->declBus(c+67,"adder2_right", false,-1, 4,0);
    tracep->declBus(c+27,"adder2_out", false,-1, 4,0);
    tracep->declBit(c+164,"ud3_out", false,-1);
    tracep->declBus(c+28,"adder3_left", false,-1, 4,0);
    tracep->declBus(c+68,"adder3_right", false,-1, 4,0);
    tracep->declBus(c+29,"adder3_out", false,-1, 4,0);
    tracep->declBit(c+164,"ud4_out", false,-1);
    tracep->declBus(c+30,"adder4_left", false,-1, 4,0);
    tracep->declBus(c+69,"adder4_right", false,-1, 4,0);
    tracep->declBus(c+31,"adder4_out", false,-1, 4,0);
    tracep->declBit(c+164,"ud5_out", false,-1);
    tracep->declBus(c+32,"adder5_left", false,-1, 4,0);
    tracep->declBus(c+70,"adder5_right", false,-1, 4,0);
    tracep->declBus(c+33,"adder5_out", false,-1, 4,0);
    tracep->declBit(c+71,"signal_reg_in", false,-1);
    tracep->declBit(c+72,"signal_reg_write_en", false,-1);
    tracep->declBit(c+142,"signal_reg_clk", false,-1);
    tracep->declBit(c+148,"signal_reg_reset", false,-1);
    tracep->declBit(c+128,"signal_reg_out", false,-1);
    tracep->declBit(c+129,"signal_reg_done", false,-1);
    tracep->declBus(c+34,"fsm0_in", false,-1, 3,0);
    tracep->declBit(c+73,"fsm0_write_en", false,-1);
    tracep->declBit(c+142,"fsm0_clk", false,-1);
    tracep->declBit(c+148,"fsm0_reset", false,-1);
    tracep->declBus(c+130,"fsm0_out", false,-1, 3,0);
    tracep->declBit(c+131,"fsm0_done", false,-1);
    tracep->declBit(c+74,"invoke2_go_in", false,-1);
    tracep->declBit(c+74,"invoke2_go_out", false,-1);
    tracep->declBit(c+113,"invoke2_done_in", false,-1);
    tracep->declBit(c+113,"invoke2_done_out", false,-1);
    tracep->declBit(c+75,"invoke33_go_in", false,-1);
    tracep->declBit(c+75,"invoke33_go_out", false,-1);
    tracep->declBit(c+112,"invoke33_done_in", false,-1);
    tracep->declBit(c+112,"invoke33_done_out", false,-1);
    tracep->declBit(c+59,"early_reset_cond00_go_in", false,-1);
    tracep->declBit(c+59,"early_reset_cond00_go_out", false,-1);
    tracep->declBit(c+157,"early_reset_cond00_done_in", false,-1);
    tracep->declBit(c+157,"early_reset_cond00_done_out", false,-1);
    tracep->declBit(c+61,"early_reset_cond10_go_in", false,-1);
    tracep->declBit(c+61,"early_reset_cond10_go_out", false,-1);
    tracep->declBit(c+157,"early_reset_cond10_done_in", false,-1);
    tracep->declBit(c+157,"early_reset_cond10_done_out", false,-1);
    tracep->declBit(c+76,"early_reset_cond20_go_in", false,-1);
    tracep->declBit(c+76,"early_reset_cond20_go_out", false,-1);
    tracep->declBit(c+157,"early_reset_cond20_done_in", false,-1);
    tracep->declBit(c+157,"early_reset_cond20_done_out", false,-1);
    tracep->declBit(c+77,"early_reset_static_par_go_in", false,-1);
    tracep->declBit(c+77,"early_reset_static_par_go_out", false,-1);
    tracep->declBit(c+157,"early_reset_static_par_done_in", false,-1);
    tracep->declBit(c+157,"early_reset_static_par_done_out", false,-1);
    tracep->declBit(c+78,"early_reset_static_par0_go_in", false,-1);
    tracep->declBit(c+78,"early_reset_static_par0_go_out", false,-1);
    tracep->declBit(c+157,"early_reset_static_par0_done_in", false,-1);
    tracep->declBit(c+157,"early_reset_static_par0_done_out", false,-1);
    tracep->declBit(c+79,"early_reset_static_seq_go_in", false,-1);
    tracep->declBit(c+79,"early_reset_static_seq_go_out", false,-1);
    tracep->declBit(c+157,"early_reset_static_seq_done_in", false,-1);
    tracep->declBit(c+157,"early_reset_static_seq_done_out", false,-1);
    tracep->declBit(c+80,"early_reset_static_par4_go_in", false,-1);
    tracep->declBit(c+80,"early_reset_static_par4_go_out", false,-1);
    tracep->declBit(c+157,"early_reset_static_par4_done_in", false,-1);
    tracep->declBit(c+157,"early_reset_static_par4_done_out", false,-1);
    tracep->declBit(c+77,"wrapper_early_reset_static_par_go_in", false,-1);
    tracep->declBit(c+77,"wrapper_early_reset_static_par_go_out", false,-1);
    tracep->declBit(c+132,"wrapper_early_reset_static_par_done_in", false,-1);
    tracep->declBit(c+132,"wrapper_early_reset_static_par_done_out", false,-1);
    tracep->declBit(c+59,"wrapper_early_reset_cond00_go_in", false,-1);
    tracep->declBit(c+59,"wrapper_early_reset_cond00_go_out", false,-1);
    tracep->declBit(c+132,"wrapper_early_reset_cond00_done_in", false,-1);
    tracep->declBit(c+132,"wrapper_early_reset_cond00_done_out", false,-1);
    tracep->declBit(c+61,"wrapper_early_reset_cond10_go_in", false,-1);
    tracep->declBit(c+61,"wrapper_early_reset_cond10_go_out", false,-1);
    tracep->declBit(c+132,"wrapper_early_reset_cond10_done_in", false,-1);
    tracep->declBit(c+132,"wrapper_early_reset_cond10_done_out", false,-1);
    tracep->declBit(c+78,"wrapper_early_reset_static_par0_go_in", false,-1);
    tracep->declBit(c+78,"wrapper_early_reset_static_par0_go_out", false,-1);
    tracep->declBit(c+132,"wrapper_early_reset_static_par0_done_in", false,-1);
    tracep->declBit(c+132,"wrapper_early_reset_static_par0_done_out", false,-1);
    tracep->declBit(c+76,"wrapper_early_reset_cond20_go_in", false,-1);
    tracep->declBit(c+76,"wrapper_early_reset_cond20_go_out", false,-1);
    tracep->declBit(c+132,"wrapper_early_reset_cond20_done_in", false,-1);
    tracep->declBit(c+132,"wrapper_early_reset_cond20_done_out", false,-1);
    tracep->declBit(c+79,"while_wrapper_early_reset_static_seq_go_in", false,-1);
    tracep->declBit(c+79,"while_wrapper_early_reset_static_seq_go_out", false,-1);
    tracep->declBit(c+133,"while_wrapper_early_reset_static_seq_done_in", false,-1);
    tracep->declBit(c+133,"while_wrapper_early_reset_static_seq_done_out", false,-1);
    tracep->declBit(c+80,"wrapper_early_reset_static_par4_go_in", false,-1);
    tracep->declBit(c+80,"wrapper_early_reset_static_par4_go_out", false,-1);
    tracep->declBit(c+132,"wrapper_early_reset_static_par4_done_in", false,-1);
    tracep->declBit(c+132,"wrapper_early_reset_static_par4_done_out", false,-1);
    tracep->declBit(c+147,"tdcc_go_in", false,-1);
    tracep->declBit(c+147,"tdcc_go_out", false,-1);
    tracep->declBit(c+84,"tdcc_done_in", false,-1);
    tracep->declBit(c+84,"tdcc_done_out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+16,"left", false,-1, 31,0);
    tracep->declBus(c+17,"right", false,-1, 31,0);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBit(c+55,"go", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBus(c+116,"out", false,-1, 31,0);
    tracep->declBit(c+117,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__add3__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__add3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+9,"left", false,-1, 31,0);
    tracep->declBus(c+10,"right", false,-1, 31,0);
    tracep->declBus(c+43,"out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__add4__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__add4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+43,"left", false,-1, 31,0);
    tracep->declBus(c+95,"right", false,-1, 31,0);
    tracep->declBus(c+11,"out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__A_int_read0_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__A_int_read0_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"in", false,-1, 31,0);
    tracep->declBit(c+36,"write_en", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+89,"out", false,-1, 31,0);
    tracep->declBit(c+90,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__B_int_read0_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__B_int_read0_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+5,"in", false,-1, 31,0);
    tracep->declBit(c+37,"write_en", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+95,"out", false,-1, 31,0);
    tracep->declBit(c+96,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__C_i_j_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__C_i_j_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+6,"in", false,-1, 31,0);
    tracep->declBit(c+38,"write_en", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+97,"out", false,-1, 31,0);
    tracep->declBit(c+98,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__alpha_int_read0_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__alpha_int_read0_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+102,"in", false,-1, 31,0);
    tracep->declBit(c+44,"write_en", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+105,"out", false,-1, 31,0);
    tracep->declBit(c+106,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beta_int_read0_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beta_int_read0_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+107,"in", false,-1, 31,0);
    tracep->declBit(c+46,"write_en", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+110,"out", false,-1, 31,0);
    tracep->declBit(c+111,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__temp2_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__temp2_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+56,"in", false,-1, 31,0);
    tracep->declBit(c+57,"write_en", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+118,"out", false,-1, 31,0);
    tracep->declBit(c+119,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+168,"D0_SIZE", false,-1, 31,0);
    tracep->declBus(c+168,"D1_SIZE", false,-1, 31,0);
    tracep->declBus(c+169,"D0_IDX_SIZE", false,-1, 31,0);
    tracep->declBus(c+169,"D1_IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+85,"addr0", false,-1, 3,0);
    tracep->declBus(c+2,"addr1", false,-1, 3,0);
    tracep->declBit(c+35,"read_en", false,-1);
    tracep->declBus(c+86,"read_data", false,-1, 31,0);
    tracep->declBit(c+88,"read_done", false,-1);
    tracep->declBit(c+152,"write_en", false,-1);
    tracep->declBus(c+153,"write_data", false,-1, 31,0);
    tracep->declBit(c+87,"write_done", false,-1);
    tracep->declBus(c+81,"addr", false,-1, 7,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+168,"D0_SIZE", false,-1, 31,0);
    tracep->declBus(c+170,"D1_SIZE", false,-1, 31,0);
    tracep->declBus(c+169,"D0_IDX_SIZE", false,-1, 31,0);
    tracep->declBus(c+169,"D1_IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+4,"addr0", false,-1, 3,0);
    tracep->declBus(c+91,"addr1", false,-1, 3,0);
    tracep->declBit(c+35,"read_en", false,-1);
    tracep->declBus(c+92,"read_data", false,-1, 31,0);
    tracep->declBit(c+94,"read_done", false,-1);
    tracep->declBit(c+154,"write_en", false,-1);
    tracep->declBus(c+155,"write_data", false,-1, 31,0);
    tracep->declBit(c+93,"write_done", false,-1);
    tracep->declBus(c+82,"addr", false,-1, 7,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__C_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__C_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+168,"D0_SIZE", false,-1, 31,0);
    tracep->declBus(c+170,"D1_SIZE", false,-1, 31,0);
    tracep->declBus(c+169,"D0_IDX_SIZE", false,-1, 31,0);
    tracep->declBus(c+169,"D1_IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+7,"addr0", false,-1, 3,0);
    tracep->declBus(c+91,"addr1", false,-1, 3,0);
    tracep->declBit(c+40,"read_en", false,-1);
    tracep->declBus(c+99,"read_data", false,-1, 31,0);
    tracep->declBit(c+101,"read_done", false,-1);
    tracep->declBit(c+39,"write_en", false,-1);
    tracep->declBus(c+8,"write_data", false,-1, 31,0);
    tracep->declBit(c+100,"write_done", false,-1);
    tracep->declBus(c+83,"addr", false,-1, 7,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__add2__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__add2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+169,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+41,"left", false,-1, 3,0);
    tracep->declBus(c+156,"right", false,-1, 3,0);
    tracep->declBus(c+42,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+162,"VALUE", false,-1, 31,0);
    tracep->declBus(c+162,"out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+169,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+163,"VALUE", false,-1, 3,0);
    tracep->declBus(c+163,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const10__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const10__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+164,"VALUE", false,-1, 0,0);
    tracep->declBus(c+164,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const9__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const9__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+164,"VALUE", false,-1, 0,0);
    tracep->declBus(c+164,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const11__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const11__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+169,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+156,"VALUE", false,-1, 3,0);
    tracep->declBus(c+156,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const2__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+169,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+165,"VALUE", false,-1, 3,0);
    tracep->declBus(c+165,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const4__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+169,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+166,"VALUE", false,-1, 3,0);
    tracep->declBus(c+166,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__i0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__i0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+169,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+47,"in", false,-1, 3,0);
    tracep->declBit(c+48,"write_en", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+85,"out", false,-1, 3,0);
    tracep->declBit(c+112,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__j0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__j0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+169,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+49,"in", false,-1, 3,0);
    tracep->declBit(c+50,"write_en", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+91,"out", false,-1, 3,0);
    tracep->declBit(c+113,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__k_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__k_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+169,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+51,"in", false,-1, 3,0);
    tracep->declBit(c+52,"write_en", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+114,"out", false,-1, 3,0);
    tracep->declBit(c+115,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+169,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+34,"in", false,-1, 3,0);
    tracep->declBit(c+73,"write_en", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+130,"out", false,-1, 3,0);
    tracep->declBit(c+131,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__le0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__le0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+169,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"left", false,-1, 3,0);
    tracep->declBus(c+53,"right", false,-1, 3,0);
    tracep->declBit(c+54,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__lt0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__lt0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+169,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+13,"left", false,-1, 3,0);
    tracep->declBus(c+14,"right", false,-1, 3,0);
    tracep->declBit(c+15,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"in", false,-1, 0,0);
    tracep->declBit(c+59,"write_en", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+120,"out", false,-1, 0,0);
    tracep->declBit(c+121,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"in", false,-1, 0,0);
    tracep->declBit(c+61,"write_en", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+122,"out", false,-1, 0,0);
    tracep->declBit(c+123,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+18,"in", false,-1, 0,0);
    tracep->declBit(c+62,"write_en", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+124,"out", false,-1, 0,0);
    tracep->declBit(c+125,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__signal_reg__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__signal_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+71,"in", false,-1, 0,0);
    tracep->declBit(c+72,"write_en", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+128,"out", false,-1, 0,0);
    tracep->declBit(c+129,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+19,"in", false,-1, 4,0);
    tracep->declBit(c+63,"write_en", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+126,"out", false,-1, 4,0);
    tracep->declBit(c+127,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+157,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+157,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+157,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud2__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+157,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud3__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+157,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud4__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+157,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud5__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud5__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+157,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+20,"left", false,-1, 4,0);
    tracep->declBus(c+64,"right", false,-1, 4,0);
    tracep->declBus(c+21,"out", false,-1, 4,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+22,"left", false,-1, 4,0);
    tracep->declBus(c+65,"right", false,-1, 4,0);
    tracep->declBus(c+23,"out", false,-1, 4,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+24,"left", false,-1, 4,0);
    tracep->declBus(c+66,"right", false,-1, 4,0);
    tracep->declBus(c+25,"out", false,-1, 4,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder2__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+26,"left", false,-1, 4,0);
    tracep->declBus(c+67,"right", false,-1, 4,0);
    tracep->declBus(c+27,"out", false,-1, 4,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder3__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+28,"left", false,-1, 4,0);
    tracep->declBus(c+68,"right", false,-1, 4,0);
    tracep->declBus(c+29,"out", false,-1, 4,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder4__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+30,"left", false,-1, 4,0);
    tracep->declBus(c+69,"right", false,-1, 4,0);
    tracep->declBus(c+31,"out", false,-1, 4,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder5__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder5__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+32,"left", false,-1, 4,0);
    tracep->declBus(c+70,"right", false,-1, 4,0);
    tracep->declBus(c+33,"out", false,-1, 4,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke2_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke2_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+74,"in", false,-1, 0,0);
    tracep->declBus(c+74,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke2_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke2_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+113,"in", false,-1, 0,0);
    tracep->declBus(c+113,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke33_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke33_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+75,"in", false,-1, 0,0);
    tracep->declBus(c+75,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke33_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke33_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+112,"in", false,-1, 0,0);
    tracep->declBus(c+112,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond00_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond00_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"in", false,-1, 0,0);
    tracep->declBus(c+59,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond00_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond00_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+157,"in", false,-1, 0,0);
    tracep->declBus(c+157,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"in", false,-1, 0,0);
    tracep->declBus(c+61,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+157,"in", false,-1, 0,0);
    tracep->declBus(c+157,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+76,"in", false,-1, 0,0);
    tracep->declBus(c+76,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+157,"in", false,-1, 0,0);
    tracep->declBus(c+157,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+77,"in", false,-1, 0,0);
    tracep->declBus(c+77,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+157,"in", false,-1, 0,0);
    tracep->declBus(c+157,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par0_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par0_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+78,"in", false,-1, 0,0);
    tracep->declBus(c+78,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par0_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par0_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+157,"in", false,-1, 0,0);
    tracep->declBus(c+157,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+79,"in", false,-1, 0,0);
    tracep->declBus(c+79,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+157,"in", false,-1, 0,0);
    tracep->declBus(c+157,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par4_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par4_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+80,"in", false,-1, 0,0);
    tracep->declBus(c+80,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par4_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par4_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+157,"in", false,-1, 0,0);
    tracep->declBus(c+157,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+77,"in", false,-1, 0,0);
    tracep->declBus(c+77,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+132,"in", false,-1, 0,0);
    tracep->declBus(c+132,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond00_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond00_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"in", false,-1, 0,0);
    tracep->declBus(c+59,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond00_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond00_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+132,"in", false,-1, 0,0);
    tracep->declBus(c+132,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"in", false,-1, 0,0);
    tracep->declBus(c+61,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+132,"in", false,-1, 0,0);
    tracep->declBus(c+132,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par0_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par0_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+78,"in", false,-1, 0,0);
    tracep->declBus(c+78,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par0_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par0_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+132,"in", false,-1, 0,0);
    tracep->declBus(c+132,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+76,"in", false,-1, 0,0);
    tracep->declBus(c+76,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+132,"in", false,-1, 0,0);
    tracep->declBus(c+132,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__while_wrapper_early_reset_static_seq_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__while_wrapper_early_reset_static_seq_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+79,"in", false,-1, 0,0);
    tracep->declBus(c+79,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__while_wrapper_early_reset_static_seq_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__while_wrapper_early_reset_static_seq_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+133,"in", false,-1, 0,0);
    tracep->declBus(c+133,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par4_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par4_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+80,"in", false,-1, 0,0);
    tracep->declBus(c+80,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par4_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par4_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+132,"in", false,-1, 0,0);
    tracep->declBus(c+132,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+147,"in", false,-1, 0,0);
    tracep->declBus(c+147,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+171,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+84,"in", false,-1, 0,0);
    tracep->declBus(c+84,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__alpha_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__alpha_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"SIZE", false,-1, 31,0);
    tracep->declBus(c+171,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+157,"addr0", false,-1, 0,0);
    tracep->declBit(c+40,"read_en", false,-1);
    tracep->declBus(c+102,"read_data", false,-1, 31,0);
    tracep->declBit(c+104,"read_done", false,-1);
    tracep->declBus(c+159,"write_data", false,-1, 31,0);
    tracep->declBit(c+158,"write_en", false,-1);
    tracep->declBit(c+103,"write_done", false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+134+i*1,"mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+102,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beta_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beta_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"SIZE", false,-1, 31,0);
    tracep->declBus(c+171,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+157,"addr0", false,-1, 0,0);
    tracep->declBit(c+45,"read_en", false,-1);
    tracep->declBus(c+107,"read_data", false,-1, 31,0);
    tracep->declBit(c+109,"read_done", false,-1);
    tracep->declBus(c+161,"write_data", false,-1, 31,0);
    tracep->declBit(c+160,"write_en", false,-1);
    tracep->declBit(c+108,"write_done", false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+135+i*1,"mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+107,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__mem__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+173,"SIZE", false,-1, 31,0);
    tracep->declBus(c+168,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+81,"addr0", false,-1, 7,0);
    tracep->declBit(c+35,"read_en", false,-1);
    tracep->declBus(c+86,"read_data", false,-1, 31,0);
    tracep->declBit(c+88,"read_done", false,-1);
    tracep->declBus(c+153,"write_data", false,-1, 31,0);
    tracep->declBit(c+152,"write_en", false,-1);
    tracep->declBit(c+87,"write_done", false,-1);
    tracep->declBus(c+86,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__mem__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+174,"SIZE", false,-1, 31,0);
    tracep->declBus(c+168,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+82,"addr0", false,-1, 7,0);
    tracep->declBit(c+35,"read_en", false,-1);
    tracep->declBus(c+92,"read_data", false,-1, 31,0);
    tracep->declBit(c+94,"read_done", false,-1);
    tracep->declBus(c+155,"write_data", false,-1, 31,0);
    tracep->declBit(c+154,"write_en", false,-1);
    tracep->declBit(c+93,"write_done", false,-1);
    tracep->declBus(c+92,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__C_int__mem__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__C_int__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+174,"SIZE", false,-1, 31,0);
    tracep->declBus(c+168,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+83,"addr0", false,-1, 7,0);
    tracep->declBit(c+40,"read_en", false,-1);
    tracep->declBus(c+99,"read_data", false,-1, 31,0);
    tracep->declBit(c+101,"read_done", false,-1);
    tracep->declBus(c+8,"write_data", false,-1, 31,0);
    tracep->declBit(c+39,"write_en", false,-1);
    tracep->declBit(c+100,"write_done", false,-1);
    tracep->declBus(c+99,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__comp__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__comp__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+167,"INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+175,"FRAC_WIDTH", false,-1, 31,0);
    tracep->declBus(c+175,"SIGNED", false,-1, 31,0);
    tracep->declBus(c+16,"left", false,-1, 31,0);
    tracep->declBus(c+17,"right", false,-1, 31,0);
    tracep->declBit(c+55,"go", false,-1);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+148,"reset", false,-1);
    tracep->declBus(c+116,"out", false,-1, 31,0);
    tracep->declBit(c+117,"done", false,-1);
    tracep->declBus(c+136,"rtmp", false,-1, 31,0);
    tracep->declBus(c+137,"ltmp", false,-1, 31,0);
    tracep->declQuad(c+138,"out_tmp", false,-1, 63,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+140+i*1,"done_buf", true,(i+0));
    }
    tracep->declBit(c+55,"start", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_top(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_top\n"); );
    // Body
    tracep->pushNamePrefix("TOP ");
    VTOP___024root__trace_init_sub__TOP__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("main ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__0(vlSelf, tracep);
    tracep->pushNamePrefix("A_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__0(vlSelf, tracep);
    tracep->pushNamePrefix("mem ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__mem__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("A_int_read0_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__A_int_read0_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("B_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__0(vlSelf, tracep);
    tracep->pushNamePrefix("mem ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__mem__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("B_int_read0_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__B_int_read0_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("C_i_j_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__C_i_j_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("C_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__C_int__0(vlSelf, tracep);
    tracep->pushNamePrefix("mem ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__C_int__mem__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("add2 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__add2__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add3 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__add3__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add4 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__add4__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("adder4 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__adder4__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder5 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__adder5__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alpha_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__alpha_int__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alpha_int_read0_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__alpha_int_read0_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("beta_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__beta_int__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("beta_int_read0_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__beta_int_read0_0__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("const0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__const0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("const1 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__const1__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("const10 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__const10__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("const11 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__const11__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("const2 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__const2__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("const4 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__const4__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("const9 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__const9__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("early_reset_static_par0_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par0_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_par0_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par0_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_par4_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par4_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_par4_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par4_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_par_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_par_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_go__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("invoke2_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke2_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke2_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke2_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke33_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke33_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke33_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke33_go__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("comp ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__comp__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("signal_reg ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__signal_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tdcc_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tdcc_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("temp2_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__temp2_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ud ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__ud__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ud0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__ud0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ud1 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__ud1__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ud2 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__ud2__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ud3 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__ud3__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ud4 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__ud4__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ud5 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__ud5__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("while_wrapper_early_reset_static_seq_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__while_wrapper_early_reset_static_seq_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("while_wrapper_early_reset_static_seq_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__while_wrapper_early_reset_static_seq_go__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("wrapper_early_reset_static_par0_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par0_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_static_par0_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par0_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_static_par4_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par4_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_static_par4_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par4_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_static_par_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_static_par_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_go__0(vlSelf, tracep);
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
    bufp->fullIData(oldp+1,(vlSymsp->TOP__TOP__main.__PVT__CODE),32);
    bufp->fullCData(oldp+2,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beta_int_read_en)
                              ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard14)
                                  ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                  : 0U))),4);
    bufp->fullIData(oldp+3,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard179)
                              ? vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out
                              : (((((9U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                    | (0x10U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                   & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                  | ((0xdU == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)))
                                  ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                  : 0U))),32);
    bufp->fullCData(oldp+4,(((IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_read_en)
                              ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                              : (((0xbU == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in))
                                  ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                  : 0U))),4);
    bufp->fullIData(oldp+5,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard179)
                              ? vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out
                              : ((((5U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                   & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                  | ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard825) 
                                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)))
                                  ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                  : 0U))),32);
    bufp->fullIData(oldp+6,(((IData)(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read0_0_write_en)
                              ? vlSymsp->TOP__TOP__main__C_int__mem.__PVT__read_out
                              : (((5U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in))
                                  ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                  : 0U))),32);
    bufp->fullCData(oldp+7,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard54)
                              ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard59)
                                  ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                  : 0U))),4);
    bufp->fullIData(oldp+8,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard38)
                              ? vlSymsp->TOP__TOP__main__add3.__PVT__out
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard41)
                                  ? (vlSymsp->TOP__TOP__main__add3.__PVT__out 
                                     + vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__out)
                                  : 0U))),32);
    bufp->fullIData(oldp+9,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard38)
                              ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard212)
                                  ? vlSymsp->TOP__TOP__main__temp2_0.__PVT__out
                                  : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard41)
                                      ? vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__out
                                      : 0U)))),32);
    bufp->fullIData(oldp+10,((((IData)(vlSymsp->TOP__TOP__main.__PVT___guard212) 
                               | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard41))
                               ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                               : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard38)
                                   ? vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__out
                                   : 0U))),32);
    bufp->fullIData(oldp+11,((vlSymsp->TOP__TOP__main__add3.__PVT__out 
                              + vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__out)),32);
    bufp->fullCData(oldp+12,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                               : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                   ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                   : 0U))),4);
    bufp->fullCData(oldp+13,(((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                               ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                               : 0U)),4);
    bufp->fullCData(oldp+14,(((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                               ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                               : 0U)),4);
    bufp->fullBit(oldp+15,((((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                              ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                              : 0U) < ((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                        ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                        : 0U))));
    bufp->fullIData(oldp+16,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard569)
                               ? vlSymsp->TOP__TOP__main__beta_int_read0_0.__PVT__out
                               : (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard574) 
                                   | (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard577) 
                                       | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard580)) 
                                      & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)))
                                   ? vlSymsp->TOP__TOP__main__alpha_int_read0_0.__PVT__out
                                   : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard599)
                                       ? vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__out
                                       : 0U)))),32);
    bufp->fullIData(oldp+17,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard599)
                               ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                               : (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard580) 
                                   & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in))
                                   ? vlSymsp->TOP__TOP__main__temp2_0.__PVT__out
                                   : (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard574) 
                                       | ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard577) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)))
                                       ? vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__out
                                       : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard569)
                                           ? vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__out
                                           : 0U))))),32);
    bufp->fullBit(oldp+18,(((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en) 
                            & (((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                 ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                 : 0U) < ((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                           ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                           : 0U)))));
    bufp->fullCData(oldp+19,((0x1fU & (((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in))
                                        ? (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                             ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                             : 0U) 
                                           + ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                               ? 1U
                                               : 0U))
                                        : (((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                            & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in))
                                            ? (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                                 ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                 : 0U) 
                                               + ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                                   ? 1U
                                                   : 0U))
                                            : (((0x12U 
                                                 != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in))
                                                ? (
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                                                     ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                     : 0U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                                                     ? 1U
                                                     : 0U))
                                                : (
                                                   ((((((((0U 
                                                           == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                          & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)) 
                                                         | ((0U 
                                                             == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                            & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in))) 
                                                        | ((0U 
                                                            == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in))) 
                                                       | ((0U 
                                                           == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                          & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in))) 
                                                      | ((0U 
                                                          == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                         & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in))) 
                                                     | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard121)) 
                                                    | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard125))
                                                    ? 0U
                                                    : 
                                                   (((0U 
                                                      != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in))
                                                     ? 
                                                    (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                                       ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                       : 0U) 
                                                     + 
                                                     ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                                       ? 1U
                                                       : 0U))
                                                     : 
                                                    (((0U 
                                                       != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                      & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in))
                                                      ? 
                                                     (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                                        ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                        : 0U) 
                                                      + 
                                                      ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                                        ? 1U
                                                        : 0U))
                                                      : 
                                                     (((0x13U 
                                                        != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                       & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in))
                                                       ? 
                                                      (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)
                                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                         : 0U) 
                                                       + 
                                                       ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)
                                                         ? 1U
                                                         : 0U))
                                                       : 
                                                      (((0U 
                                                         != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in))
                                                        ? 
                                                       (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                                          ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                          : 0U) 
                                                        + 
                                                        ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                                          ? 1U
                                                          : 0U))
                                                        : 0U)))))))))),5);
    bufp->fullCData(oldp+20,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                               : 0U)),5);
    bufp->fullCData(oldp+21,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                         : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                                   ? 1U
                                                   : 0U)))),5);
    bufp->fullCData(oldp+22,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                               : 0U)),5);
    bufp->fullCData(oldp+23,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                         : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                                   ? 1U
                                                   : 0U)))),5);
    bufp->fullCData(oldp+24,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                               : 0U)),5);
    bufp->fullCData(oldp+25,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                         : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                                   ? 1U
                                                   : 0U)))),5);
    bufp->fullCData(oldp+26,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                               : 0U)),5);
    bufp->fullCData(oldp+27,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                         : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                                   ? 1U
                                                   : 0U)))),5);
    bufp->fullCData(oldp+28,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                               : 0U)),5);
    bufp->fullCData(oldp+29,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                         : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                                   ? 1U
                                                   : 0U)))),5);
    bufp->fullCData(oldp+30,(((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                               : 0U)),5);
    bufp->fullCData(oldp+31,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                         : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                                                   ? 1U
                                                   : 0U)))),5);
    bufp->fullCData(oldp+32,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                               : 0U)),5);
    bufp->fullCData(oldp+33,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                         : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)
                                                   ? 1U
                                                   : 0U)))),5);
    bufp->fullCData(oldp+34,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard357)
                               ? 3U : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard379)
                                        ? 5U : (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard365) 
                                                 | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard373))
                                                 ? 4U
                                                 : 
                                                (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard406) 
                                                  | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard415))
                                                  ? 9U
                                                  : 
                                                 ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard421)
                                                   ? 0xaU
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard391)
                                                     ? 7U
                                                     : 
                                                    (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard343) 
                                                      | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard351))
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard385)
                                                       ? 6U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard397)
                                                        ? 8U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard335)
                                                         ? 1U
                                                         : 
                                                        (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard430) 
                                                          | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard439))
                                                          ? 0xbU
                                                          : 0U))))))))))))),4);
    bufp->fullBit(oldp+35,(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en));
    bufp->fullBit(oldp+36,(vlSymsp->TOP__TOP__main.__PVT__A_int_read0_0_write_en));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__TOP__main.__PVT__B_int_read0_0_write_en));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__TOP__main.__PVT__C_i_j_0_write_en));
    bufp->fullBit(oldp+39,(vlSymsp->TOP__TOP__main.__PVT__C_int_write_en));
    bufp->fullBit(oldp+40,(vlSymsp->TOP__TOP__main.__PVT__C_int_read_en));
    bufp->fullCData(oldp+41,(vlSymsp->TOP__TOP__main.__PVT__add2_left),4);
    bufp->fullCData(oldp+42,((0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__add2_left)))),4);
    bufp->fullIData(oldp+43,(vlSymsp->TOP__TOP__main__add3.__PVT__out),32);
    bufp->fullBit(oldp+44,(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read0_0_write_en));
    bufp->fullBit(oldp+45,(vlSymsp->TOP__TOP__main.__PVT__beta_int_read_en));
    bufp->fullBit(oldp+46,(vlSymsp->TOP__TOP__main.__PVT__beta_int_read0_0_write_en));
    bufp->fullCData(oldp+47,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke33_go_in)
                               ? (0xfU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__TOP__main.__PVT__add2_left)))
                               : 0U)),4);
    bufp->fullBit(oldp+48,(vlSymsp->TOP__TOP__main.__PVT__i0_write_en));
    bufp->fullCData(oldp+49,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard125)
                               ? (0xfU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__TOP__main.__PVT__add2_left)))
                               : 0U)),4);
    bufp->fullBit(oldp+50,(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
    bufp->fullCData(oldp+51,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard192)
                               ? (0xfU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__TOP__main.__PVT__add2_left)))
                               : 0U)),4);
    bufp->fullBit(oldp+52,(vlSymsp->TOP__TOP__main.__PVT__k_0_write_en));
    bufp->fullCData(oldp+53,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                               ? 7U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                        ? 0xbU : 0U))),4);
    bufp->fullBit(oldp+54,(vlSymsp->TOP__TOP__main__le0.__PVT__out));
    bufp->fullBit(oldp+55,(vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go));
    bufp->fullIData(oldp+56,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard669)
                               ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard212)
                                        ? vlSymsp->TOP__TOP__main__add3.__PVT__out
                                        : 0U))),32);
    bufp->fullBit(oldp+57,(vlSymsp->TOP__TOP__main.__PVT__temp2_0_write_en));
    bufp->fullBit(oldp+58,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in) 
                            & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
    bufp->fullBit(oldp+59,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in));
    bufp->fullBit(oldp+60,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                            & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in));
    bufp->fullBit(oldp+62,(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en));
    bufp->fullBit(oldp+63,(vlSymsp->TOP__TOP__main.__PVT__fsm_write_en));
    bufp->fullCData(oldp+64,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                               ? 1U : 0U)),5);
    bufp->fullCData(oldp+65,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                               ? 1U : 0U)),5);
    bufp->fullCData(oldp+66,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                               ? 1U : 0U)),5);
    bufp->fullCData(oldp+67,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                               ? 1U : 0U)),5);
    bufp->fullCData(oldp+68,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                               ? 1U : 0U)),5);
    bufp->fullCData(oldp+69,(((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                               ? 1U : 0U)),5);
    bufp->fullCData(oldp+70,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)
                               ? 1U : 0U)),5);
    bufp->fullBit(oldp+71,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_in));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_write_en));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__TOP__main.__PVT__fsm0_write_en));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__TOP__main.__PVT__invoke2_go_in));
    bufp->fullBit(oldp+75,(vlSymsp->TOP__TOP__main.__PVT__invoke33_go_in));
    bufp->fullBit(oldp+76,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in));
    bufp->fullBit(oldp+77,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in));
    bufp->fullBit(oldp+78,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in));
    bufp->fullBit(oldp+79,(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in));
    bufp->fullBit(oldp+80,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in));
    bufp->fullCData(oldp+81,(vlSymsp->TOP__TOP__main__A_int.__PVT__addr),8);
    bufp->fullCData(oldp+82,(vlSymsp->TOP__TOP__main__B_int.__PVT__addr),8);
    bufp->fullCData(oldp+83,(vlSymsp->TOP__TOP__main__C_int.__PVT__addr),8);
    bufp->fullBit(oldp+84,((0xbU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))));
    bufp->fullCData(oldp+85,(vlSymsp->TOP__TOP__main__i0.__PVT__out),4);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out),32);
    bufp->fullBit(oldp+87,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__write_done));
    bufp->fullBit(oldp+88,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_done));
    bufp->fullIData(oldp+89,(vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out),32);
    bufp->fullBit(oldp+90,(vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__done));
    bufp->fullCData(oldp+91,(vlSymsp->TOP__TOP__main__j0.__PVT__out),4);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out),32);
    bufp->fullBit(oldp+93,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__write_done));
    bufp->fullBit(oldp+94,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_done));
    bufp->fullIData(oldp+95,(vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__out),32);
    bufp->fullBit(oldp+96,(vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__done));
    bufp->fullIData(oldp+97,(vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__out),32);
    bufp->fullBit(oldp+98,(vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__done));
    bufp->fullIData(oldp+99,(vlSymsp->TOP__TOP__main__C_int__mem.__PVT__read_out),32);
    bufp->fullBit(oldp+100,(vlSymsp->TOP__TOP__main__C_int__mem.__PVT__write_done));
    bufp->fullBit(oldp+101,(vlSymsp->TOP__TOP__main__C_int__mem.__PVT__read_done));
    bufp->fullIData(oldp+102,(vlSymsp->TOP__TOP__main__alpha_int.__PVT__read_out),32);
    bufp->fullBit(oldp+103,(vlSymsp->TOP__TOP__main__alpha_int.__PVT__write_done));
    bufp->fullBit(oldp+104,(vlSymsp->TOP__TOP__main__alpha_int.__PVT__read_done));
    bufp->fullIData(oldp+105,(vlSymsp->TOP__TOP__main__alpha_int_read0_0.__PVT__out),32);
    bufp->fullBit(oldp+106,(vlSymsp->TOP__TOP__main__alpha_int_read0_0.__PVT__done));
    bufp->fullIData(oldp+107,(vlSymsp->TOP__TOP__main__beta_int.__PVT__read_out),32);
    bufp->fullBit(oldp+108,(vlSymsp->TOP__TOP__main__beta_int.__PVT__write_done));
    bufp->fullBit(oldp+109,(vlSymsp->TOP__TOP__main__beta_int.__PVT__read_done));
    bufp->fullIData(oldp+110,(vlSymsp->TOP__TOP__main__beta_int_read0_0.__PVT__out),32);
    bufp->fullBit(oldp+111,(vlSymsp->TOP__TOP__main__beta_int_read0_0.__PVT__done));
    bufp->fullBit(oldp+112,(vlSymsp->TOP__TOP__main__i0.__PVT__done));
    bufp->fullBit(oldp+113,(vlSymsp->TOP__TOP__main__j0.__PVT__done));
    bufp->fullCData(oldp+114,(vlSymsp->TOP__TOP__main__k_0.__PVT__out),4);
    bufp->fullBit(oldp+115,(vlSymsp->TOP__TOP__main__k_0.__PVT__done));
    bufp->fullIData(oldp+116,((IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)),32);
    bufp->fullBit(oldp+117,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf
                            [1U]));
    bufp->fullIData(oldp+118,(vlSymsp->TOP__TOP__main__temp2_0.__PVT__out),32);
    bufp->fullBit(oldp+119,(vlSymsp->TOP__TOP__main__temp2_0.__PVT__done));
    bufp->fullBit(oldp+120,(vlSymsp->TOP__TOP__main__comb_reg.__PVT__out));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__TOP__main__comb_reg.__PVT__done));
    bufp->fullBit(oldp+122,(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__out));
    bufp->fullBit(oldp+123,(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__done));
    bufp->fullBit(oldp+124,(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__out));
    bufp->fullBit(oldp+125,(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__done));
    bufp->fullCData(oldp+126,(vlSymsp->TOP__TOP__main__fsm.__PVT__out),5);
    bufp->fullBit(oldp+127,(vlSymsp->TOP__TOP__main__fsm.__PVT__done));
    bufp->fullBit(oldp+128,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out));
    bufp->fullBit(oldp+129,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__done));
    bufp->fullCData(oldp+130,(vlSymsp->TOP__TOP__main__fsm0.__PVT__out),4);
    bufp->fullBit(oldp+131,(vlSymsp->TOP__TOP__main__fsm0.__PVT__done));
    bufp->fullBit(oldp+132,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_done_in));
    bufp->fullBit(oldp+133,(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_done_in));
    bufp->fullIData(oldp+134,(vlSymsp->TOP__TOP__main__alpha_int.__PVT__mem[0]),32);
    bufp->fullIData(oldp+135,(vlSymsp->TOP__TOP__main__beta_int.__PVT__mem[0]),32);
    bufp->fullIData(oldp+136,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__rtmp),32);
    bufp->fullIData(oldp+137,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__ltmp),32);
    bufp->fullQData(oldp+138,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp),64);
    bufp->fullBit(oldp+140,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[0]));
    bufp->fullBit(oldp+141,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[1]));
    bufp->fullBit(oldp+142,(vlSymsp->TOP__TOP.__PVT__clk));
    bufp->fullIData(oldp+143,(vlSymsp->TOP__TOP.__PVT__NOTRACE),32);
    bufp->fullQData(oldp+144,(vlSymsp->TOP__TOP.__PVT__CYCLE_LIMIT),64);
    bufp->fullIData(oldp+146,(vlSymsp->TOP__TOP.__PVT__CODE),32);
    bufp->fullBit(oldp+147,(vlSymsp->TOP__TOP.__PVT__go));
    bufp->fullBit(oldp+148,(vlSymsp->TOP__TOP.__PVT__reset));
    bufp->fullQData(oldp+149,(vlSymsp->TOP__TOP.__PVT__cycle_count),64);
    bufp->fullIData(oldp+151,(3U),32);
    bufp->fullBit(oldp+152,(vlSymsp->TOP__TOP__main.__PVT__A_int_write_en));
    bufp->fullIData(oldp+153,(vlSymsp->TOP__TOP__main.__PVT__A_int_write_data),32);
    bufp->fullBit(oldp+154,(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en));
    bufp->fullIData(oldp+155,(vlSymsp->TOP__TOP__main.__PVT__B_int_write_data),32);
    bufp->fullCData(oldp+156,(1U),4);
    bufp->fullBit(oldp+157,(0U));
    bufp->fullBit(oldp+158,(vlSymsp->TOP__TOP__main.__PVT__alpha_int_write_en));
    bufp->fullIData(oldp+159,(vlSymsp->TOP__TOP__main.__PVT__alpha_int_write_data),32);
    bufp->fullBit(oldp+160,(vlSymsp->TOP__TOP__main.__PVT__beta_int_write_en));
    bufp->fullIData(oldp+161,(vlSymsp->TOP__TOP__main.__PVT__beta_int_write_data),32);
    bufp->fullIData(oldp+162,(0U),32);
    bufp->fullCData(oldp+163,(0U),4);
    bufp->fullBit(oldp+164,(0U));
    bufp->fullCData(oldp+165,(7U),4);
    bufp->fullCData(oldp+166,(0xbU),4);
    bufp->fullIData(oldp+167,(0x20U),32);
    bufp->fullIData(oldp+168,(8U),32);
    bufp->fullIData(oldp+169,(4U),32);
    bufp->fullIData(oldp+170,(0xcU),32);
    bufp->fullIData(oldp+171,(1U),32);
    bufp->fullIData(oldp+172,(5U),32);
    bufp->fullIData(oldp+173,(0x40U),32);
    bufp->fullIData(oldp+174,(0x60U),32);
    bufp->fullIData(oldp+175,(0U),32);
}

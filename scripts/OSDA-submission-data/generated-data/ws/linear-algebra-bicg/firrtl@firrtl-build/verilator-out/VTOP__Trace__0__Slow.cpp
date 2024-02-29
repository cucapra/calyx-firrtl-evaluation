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
    tracep->declBit(c+164,"go", false,-1);
    tracep->declBit(c+106,"done", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+1,"A_int_addr0", false,-1, 3,0);
    tracep->declBus(c+2,"A_int_addr1", false,-1, 3,0);
    tracep->declBus(c+206,"A_int_write_data", false,-1, 31,0);
    tracep->declBus(c+107,"A_int_read_data", false,-1, 31,0);
    tracep->declBit(c+207,"A_int_write_en", false,-1);
    tracep->declBit(c+50,"A_int_read_en", false,-1);
    tracep->declBit(c+108,"A_int_write_done", false,-1);
    tracep->declBit(c+109,"A_int_read_done", false,-1);
    tracep->declBus(c+51,"p_int_addr0", false,-1, 3,0);
    tracep->declBus(c+206,"p_int_write_data", false,-1, 31,0);
    tracep->declBus(c+110,"p_int_read_data", false,-1, 31,0);
    tracep->declBit(c+207,"p_int_write_en", false,-1);
    tracep->declBit(c+52,"p_int_read_en", false,-1);
    tracep->declBit(c+111,"p_int_write_done", false,-1);
    tracep->declBit(c+112,"p_int_read_done", false,-1);
    tracep->declBus(c+53,"q_int_addr0", false,-1, 3,0);
    tracep->declBus(c+54,"q_int_write_data", false,-1, 31,0);
    tracep->declBus(c+113,"q_int_read_data", false,-1, 31,0);
    tracep->declBit(c+55,"q_int_write_en", false,-1);
    tracep->declBit(c+56,"q_int_read_en", false,-1);
    tracep->declBit(c+114,"q_int_write_done", false,-1);
    tracep->declBit(c+115,"q_int_read_done", false,-1);
    tracep->declBus(c+57,"r_int_addr0", false,-1, 3,0);
    tracep->declBus(c+206,"r_int_write_data", false,-1, 31,0);
    tracep->declBus(c+116,"r_int_read_data", false,-1, 31,0);
    tracep->declBit(c+207,"r_int_write_en", false,-1);
    tracep->declBit(c+58,"r_int_read_en", false,-1);
    tracep->declBit(c+117,"r_int_write_done", false,-1);
    tracep->declBit(c+118,"r_int_read_done", false,-1);
    tracep->declBus(c+59,"s_int_addr0", false,-1, 3,0);
    tracep->declBus(c+60,"s_int_write_data", false,-1, 31,0);
    tracep->declBus(c+119,"s_int_read_data", false,-1, 31,0);
    tracep->declBit(c+61,"s_int_write_en", false,-1);
    tracep->declBit(c+62,"s_int_read_en", false,-1);
    tracep->declBit(c+120,"s_int_write_done", false,-1);
    tracep->declBit(c+121,"s_int_read_done", false,-1);
    tracep->declBus(c+208,"RESET_CYCLES", false,-1, 31,0);
    tracep->declQuad(c+166,"cycle_count", false,-1, 63,0);
    tracep->declBus(c+185,"NOTRACE", false,-1, 31,0);
    tracep->declQuad(c+186,"CYCLE_LIMIT", false,-1, 63,0);
    tracep->declBus(c+188,"CODE", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+164,"go", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBit(c+106,"done", false,-1);
    tracep->declBus(c+1,"A_int_addr0", false,-1, 3,0);
    tracep->declBus(c+2,"A_int_addr1", false,-1, 3,0);
    tracep->declBit(c+207,"A_int_write_en", false,-1);
    tracep->declBus(c+206,"A_int_write_data", false,-1, 31,0);
    tracep->declBit(c+50,"A_int_read_en", false,-1);
    tracep->declBus(c+107,"A_int_read_data", false,-1, 31,0);
    tracep->declBit(c+108,"A_int_write_done", false,-1);
    tracep->declBit(c+109,"A_int_read_done", false,-1);
    tracep->declBus(c+51,"p_int_addr0", false,-1, 3,0);
    tracep->declBit(c+207,"p_int_write_en", false,-1);
    tracep->declBus(c+206,"p_int_write_data", false,-1, 31,0);
    tracep->declBit(c+52,"p_int_read_en", false,-1);
    tracep->declBus(c+110,"p_int_read_data", false,-1, 31,0);
    tracep->declBit(c+111,"p_int_write_done", false,-1);
    tracep->declBit(c+112,"p_int_read_done", false,-1);
    tracep->declBus(c+53,"q_int_addr0", false,-1, 3,0);
    tracep->declBit(c+55,"q_int_write_en", false,-1);
    tracep->declBus(c+54,"q_int_write_data", false,-1, 31,0);
    tracep->declBit(c+56,"q_int_read_en", false,-1);
    tracep->declBus(c+113,"q_int_read_data", false,-1, 31,0);
    tracep->declBit(c+114,"q_int_write_done", false,-1);
    tracep->declBit(c+115,"q_int_read_done", false,-1);
    tracep->declBus(c+57,"r_int_addr0", false,-1, 3,0);
    tracep->declBit(c+207,"r_int_write_en", false,-1);
    tracep->declBus(c+206,"r_int_write_data", false,-1, 31,0);
    tracep->declBit(c+58,"r_int_read_en", false,-1);
    tracep->declBus(c+116,"r_int_read_data", false,-1, 31,0);
    tracep->declBit(c+117,"r_int_write_done", false,-1);
    tracep->declBit(c+118,"r_int_read_done", false,-1);
    tracep->declBus(c+59,"s_int_addr0", false,-1, 3,0);
    tracep->declBit(c+61,"s_int_write_en", false,-1);
    tracep->declBus(c+60,"s_int_write_data", false,-1, 31,0);
    tracep->declBit(c+62,"s_int_read_en", false,-1);
    tracep->declBus(c+119,"s_int_read_data", false,-1, 31,0);
    tracep->declBit(c+120,"s_int_write_done", false,-1);
    tracep->declBit(c+121,"s_int_read_done", false,-1);
    tracep->declBus(c+3,"A_i_j_0_in", false,-1, 31,0);
    tracep->declBit(c+63,"A_i_j_0_write_en", false,-1);
    tracep->declBit(c+184,"A_i_j_0_clk", false,-1);
    tracep->declBit(c+165,"A_i_j_0_reset", false,-1);
    tracep->declBus(c+122,"A_i_j_0_out", false,-1, 31,0);
    tracep->declBit(c+123,"A_i_j_0_done", false,-1);
    tracep->declBus(c+4,"add0_left", false,-1, 3,0);
    tracep->declBus(c+64,"add0_right", false,-1, 3,0);
    tracep->declBus(c+65,"add0_out", false,-1, 3,0);
    tracep->declBus(c+5,"add1_left", false,-1, 31,0);
    tracep->declBus(c+6,"add1_right", false,-1, 31,0);
    tracep->declBus(c+66,"add1_out", false,-1, 31,0);
    tracep->declBus(c+7,"bin_read0_0_in", false,-1, 31,0);
    tracep->declBit(c+67,"bin_read0_0_write_en", false,-1);
    tracep->declBit(c+184,"bin_read0_0_clk", false,-1);
    tracep->declBit(c+165,"bin_read0_0_reset", false,-1);
    tracep->declBus(c+124,"bin_read0_0_out", false,-1, 31,0);
    tracep->declBit(c+125,"bin_read0_0_done", false,-1);
    tracep->declBus(c+68,"i1_in", false,-1, 3,0);
    tracep->declBit(c+69,"i1_write_en", false,-1);
    tracep->declBit(c+184,"i1_clk", false,-1);
    tracep->declBit(c+165,"i1_reset", false,-1);
    tracep->declBus(c+126,"i1_out", false,-1, 3,0);
    tracep->declBit(c+127,"i1_done", false,-1);
    tracep->declBus(c+70,"j0_in", false,-1, 3,0);
    tracep->declBit(c+71,"j0_write_en", false,-1);
    tracep->declBit(c+184,"j0_clk", false,-1);
    tracep->declBit(c+165,"j0_reset", false,-1);
    tracep->declBus(c+128,"j0_out", false,-1, 3,0);
    tracep->declBit(c+129,"j0_done", false,-1);
    tracep->declBus(c+8,"le0_left", false,-1, 3,0);
    tracep->declBus(c+72,"le0_right", false,-1, 3,0);
    tracep->declBit(c+73,"le0_out", false,-1);
    tracep->declBus(c+9,"mult_pipe0_left", false,-1, 31,0);
    tracep->declBus(c+10,"mult_pipe0_right", false,-1, 31,0);
    tracep->declBit(c+165,"mult_pipe0_reset", false,-1);
    tracep->declBit(c+74,"mult_pipe0_go", false,-1);
    tracep->declBit(c+184,"mult_pipe0_clk", false,-1);
    tracep->declBus(c+130,"mult_pipe0_out", false,-1, 31,0);
    tracep->declBus(c+11,"p_int_read0_0_in", false,-1, 31,0);
    tracep->declBit(c+75,"p_int_read0_0_write_en", false,-1);
    tracep->declBit(c+184,"p_int_read0_0_clk", false,-1);
    tracep->declBit(c+165,"p_int_read0_0_reset", false,-1);
    tracep->declBus(c+131,"p_int_read0_0_out", false,-1, 31,0);
    tracep->declBit(c+132,"p_int_read0_0_done", false,-1);
    tracep->declBus(c+12,"q0_0_in", false,-1, 31,0);
    tracep->declBit(c+76,"q0_0_write_en", false,-1);
    tracep->declBit(c+184,"q0_0_clk", false,-1);
    tracep->declBit(c+165,"q0_0_reset", false,-1);
    tracep->declBus(c+133,"q0_0_out", false,-1, 31,0);
    tracep->declBit(c+134,"q0_0_done", false,-1);
    tracep->declBus(c+13,"s0_0_in", false,-1, 31,0);
    tracep->declBit(c+77,"s0_0_write_en", false,-1);
    tracep->declBit(c+184,"s0_0_clk", false,-1);
    tracep->declBit(c+165,"s0_0_reset", false,-1);
    tracep->declBus(c+135,"s0_0_out", false,-1, 31,0);
    tracep->declBit(c+136,"s0_0_done", false,-1);
    tracep->declBit(c+78,"comb_reg0_in", false,-1);
    tracep->declBit(c+79,"comb_reg0_write_en", false,-1);
    tracep->declBit(c+184,"comb_reg0_clk", false,-1);
    tracep->declBit(c+165,"comb_reg0_reset", false,-1);
    tracep->declBit(c+137,"comb_reg0_out", false,-1);
    tracep->declBit(c+80,"comb_reg1_in", false,-1);
    tracep->declBit(c+81,"comb_reg1_write_en", false,-1);
    tracep->declBit(c+184,"comb_reg1_clk", false,-1);
    tracep->declBit(c+165,"comb_reg1_reset", false,-1);
    tracep->declBit(c+138,"comb_reg1_out", false,-1);
    tracep->declBus(c+14,"fsm_in", false,-1, 4,0);
    tracep->declBit(c+82,"fsm_write_en", false,-1);
    tracep->declBit(c+184,"fsm_clk", false,-1);
    tracep->declBit(c+165,"fsm_reset", false,-1);
    tracep->declBus(c+139,"fsm_out", false,-1, 4,0);
    tracep->declBus(c+15,"fsm0_in", false,-1, 1,0);
    tracep->declBit(c+83,"fsm0_write_en", false,-1);
    tracep->declBit(c+184,"fsm0_clk", false,-1);
    tracep->declBit(c+165,"fsm0_reset", false,-1);
    tracep->declBus(c+140,"fsm0_out", false,-1, 1,0);
    tracep->declBus(c+16,"adder_left", false,-1, 4,0);
    tracep->declBus(c+84,"adder_right", false,-1, 4,0);
    tracep->declBus(c+17,"adder_out", false,-1, 4,0);
    tracep->declBus(c+18,"adder0_left", false,-1, 4,0);
    tracep->declBus(c+85,"adder0_right", false,-1, 4,0);
    tracep->declBus(c+19,"adder0_out", false,-1, 4,0);
    tracep->declBus(c+20,"adder1_left", false,-1, 4,0);
    tracep->declBus(c+86,"adder1_right", false,-1, 4,0);
    tracep->declBus(c+21,"adder1_out", false,-1, 4,0);
    tracep->declBus(c+22,"adder2_left", false,-1, 1,0);
    tracep->declBus(c+87,"adder2_right", false,-1, 1,0);
    tracep->declBus(c+23,"adder2_out", false,-1, 1,0);
    tracep->declBus(c+24,"adder3_left", false,-1, 4,0);
    tracep->declBus(c+88,"adder3_right", false,-1, 4,0);
    tracep->declBus(c+25,"adder3_out", false,-1, 4,0);
    tracep->declBus(c+26,"adder4_left", false,-1, 4,0);
    tracep->declBus(c+89,"adder4_right", false,-1, 4,0);
    tracep->declBus(c+27,"adder4_out", false,-1, 4,0);
    tracep->declBus(c+28,"adder5_left", false,-1, 4,0);
    tracep->declBus(c+90,"adder5_right", false,-1, 4,0);
    tracep->declBus(c+29,"adder5_out", false,-1, 4,0);
    tracep->declBit(c+30,"signal_reg_in", false,-1);
    tracep->declBit(c+31,"signal_reg_write_en", false,-1);
    tracep->declBit(c+184,"signal_reg_clk", false,-1);
    tracep->declBit(c+165,"signal_reg_reset", false,-1);
    tracep->declBit(c+141,"signal_reg_out", false,-1);
    tracep->declBus(c+32,"fsm1_in", false,-1, 1,0);
    tracep->declBit(c+33,"fsm1_write_en", false,-1);
    tracep->declBit(c+184,"fsm1_clk", false,-1);
    tracep->declBit(c+165,"fsm1_reset", false,-1);
    tracep->declBus(c+142,"fsm1_out", false,-1, 1,0);
    tracep->declBit(c+34,"pd_in", false,-1);
    tracep->declBit(c+35,"pd_write_en", false,-1);
    tracep->declBit(c+184,"pd_clk", false,-1);
    tracep->declBit(c+165,"pd_reset", false,-1);
    tracep->declBit(c+143,"pd_out", false,-1);
    tracep->declBus(c+36,"fsm2_in", false,-1, 1,0);
    tracep->declBit(c+37,"fsm2_write_en", false,-1);
    tracep->declBit(c+184,"fsm2_clk", false,-1);
    tracep->declBit(c+165,"fsm2_reset", false,-1);
    tracep->declBus(c+144,"fsm2_out", false,-1, 1,0);
    tracep->declBit(c+38,"pd0_in", false,-1);
    tracep->declBit(c+39,"pd0_write_en", false,-1);
    tracep->declBit(c+184,"pd0_clk", false,-1);
    tracep->declBit(c+165,"pd0_reset", false,-1);
    tracep->declBit(c+145,"pd0_out", false,-1);
    tracep->declBus(c+40,"fsm3_in", false,-1, 1,0);
    tracep->declBit(c+41,"fsm3_write_en", false,-1);
    tracep->declBit(c+184,"fsm3_clk", false,-1);
    tracep->declBit(c+165,"fsm3_reset", false,-1);
    tracep->declBus(c+146,"fsm3_out", false,-1, 1,0);
    tracep->declBit(c+42,"pd1_in", false,-1);
    tracep->declBit(c+43,"pd1_write_en", false,-1);
    tracep->declBit(c+184,"pd1_clk", false,-1);
    tracep->declBit(c+165,"pd1_reset", false,-1);
    tracep->declBit(c+147,"pd1_out", false,-1);
    tracep->declBit(c+44,"pd2_in", false,-1);
    tracep->declBit(c+45,"pd2_write_en", false,-1);
    tracep->declBit(c+184,"pd2_clk", false,-1);
    tracep->declBit(c+165,"pd2_reset", false,-1);
    tracep->declBit(c+148,"pd2_out", false,-1);
    tracep->declBus(c+46,"fsm4_in", false,-1, 1,0);
    tracep->declBit(c+47,"fsm4_write_en", false,-1);
    tracep->declBit(c+184,"fsm4_clk", false,-1);
    tracep->declBit(c+165,"fsm4_reset", false,-1);
    tracep->declBus(c+149,"fsm4_out", false,-1, 1,0);
    tracep->declBit(c+48,"pd3_in", false,-1);
    tracep->declBit(c+49,"pd3_write_en", false,-1);
    tracep->declBit(c+184,"pd3_clk", false,-1);
    tracep->declBit(c+165,"pd3_reset", false,-1);
    tracep->declBit(c+150,"pd3_out", false,-1);
    tracep->declBus(c+205,"fsm5_in", false,-1, 3,0);
    tracep->declBit(c+91,"fsm5_write_en", false,-1);
    tracep->declBit(c+184,"fsm5_clk", false,-1);
    tracep->declBit(c+165,"fsm5_reset", false,-1);
    tracep->declBus(c+151,"fsm5_out", false,-1, 3,0);
    tracep->declBit(c+152,"fsm5_done", false,-1);
    tracep->declBit(c+62,"beg_spl_let3_go_in", false,-1);
    tracep->declBit(c+62,"beg_spl_let3_go_out", false,-1);
    tracep->declBit(c+121,"beg_spl_let3_done_in", false,-1);
    tracep->declBit(c+121,"beg_spl_let3_done_out", false,-1);
    tracep->declBit(c+56,"beg_spl_let4_go_in", false,-1);
    tracep->declBit(c+56,"beg_spl_let4_go_out", false,-1);
    tracep->declBit(c+115,"beg_spl_let4_done_in", false,-1);
    tracep->declBit(c+115,"beg_spl_let4_done_out", false,-1);
    tracep->declBit(c+50,"beg_spl_let5_go_in", false,-1);
    tracep->declBit(c+50,"beg_spl_let5_go_out", false,-1);
    tracep->declBit(c+109,"beg_spl_let5_done_in", false,-1);
    tracep->declBit(c+109,"beg_spl_let5_done_out", false,-1);
    tracep->declBit(c+58,"beg_spl_let6_go_in", false,-1);
    tracep->declBit(c+58,"beg_spl_let6_go_out", false,-1);
    tracep->declBit(c+118,"beg_spl_let6_done_in", false,-1);
    tracep->declBit(c+118,"beg_spl_let6_done_out", false,-1);
    tracep->declBit(c+52,"beg_spl_let8_go_in", false,-1);
    tracep->declBit(c+52,"beg_spl_let8_go_out", false,-1);
    tracep->declBit(c+112,"beg_spl_let8_done_in", false,-1);
    tracep->declBit(c+112,"beg_spl_let8_done_out", false,-1);
    tracep->declBit(c+77,"invoke4_go_in", false,-1);
    tracep->declBit(c+77,"invoke4_go_out", false,-1);
    tracep->declBit(c+136,"invoke4_done_in", false,-1);
    tracep->declBit(c+136,"invoke4_done_out", false,-1);
    tracep->declBit(c+76,"invoke5_go_in", false,-1);
    tracep->declBit(c+76,"invoke5_go_out", false,-1);
    tracep->declBit(c+134,"invoke5_done_in", false,-1);
    tracep->declBit(c+134,"invoke5_done_out", false,-1);
    tracep->declBit(c+92,"invoke6_go_in", false,-1);
    tracep->declBit(c+92,"invoke6_go_out", false,-1);
    tracep->declBit(c+123,"invoke6_done_in", false,-1);
    tracep->declBit(c+123,"invoke6_done_out", false,-1);
    tracep->declBit(c+93,"invoke7_go_in", false,-1);
    tracep->declBit(c+93,"invoke7_go_out", false,-1);
    tracep->declBit(c+125,"invoke7_done_in", false,-1);
    tracep->declBit(c+125,"invoke7_done_out", false,-1);
    tracep->declBit(c+75,"invoke10_go_in", false,-1);
    tracep->declBit(c+75,"invoke10_go_out", false,-1);
    tracep->declBit(c+132,"invoke10_done_in", false,-1);
    tracep->declBit(c+132,"invoke10_done_out", false,-1);
    tracep->declBit(c+94,"invoke14_go_in", false,-1);
    tracep->declBit(c+94,"invoke14_go_out", false,-1);
    tracep->declBit(c+127,"invoke14_done_in", false,-1);
    tracep->declBit(c+127,"invoke14_done_out", false,-1);
    tracep->declBit(c+79,"early_reset_cond10_go_in", false,-1);
    tracep->declBit(c+79,"early_reset_cond10_go_out", false,-1);
    tracep->declBit(c+207,"early_reset_cond10_done_in", false,-1);
    tracep->declBit(c+207,"early_reset_cond10_done_out", false,-1);
    tracep->declBit(c+81,"early_reset_cond20_go_in", false,-1);
    tracep->declBit(c+81,"early_reset_cond20_go_out", false,-1);
    tracep->declBit(c+207,"early_reset_cond20_done_in", false,-1);
    tracep->declBit(c+207,"early_reset_cond20_done_out", false,-1);
    tracep->declBit(c+95,"early_reset_static_seq_go_in", false,-1);
    tracep->declBit(c+95,"early_reset_static_seq_go_out", false,-1);
    tracep->declBit(c+207,"early_reset_static_seq_done_in", false,-1);
    tracep->declBit(c+207,"early_reset_static_seq_done_out", false,-1);
    tracep->declBit(c+83,"early_reset_static_seq0_go_in", false,-1);
    tracep->declBit(c+83,"early_reset_static_seq0_go_out", false,-1);
    tracep->declBit(c+207,"early_reset_static_seq0_done_in", false,-1);
    tracep->declBit(c+207,"early_reset_static_seq0_done_out", false,-1);
    tracep->declBit(c+96,"early_reset_static_par_go_in", false,-1);
    tracep->declBit(c+96,"early_reset_static_par_go_out", false,-1);
    tracep->declBit(c+207,"early_reset_static_par_done_in", false,-1);
    tracep->declBit(c+207,"early_reset_static_par_done_out", false,-1);
    tracep->declBit(c+97,"early_reset_static_seq1_go_in", false,-1);
    tracep->declBit(c+97,"early_reset_static_seq1_go_out", false,-1);
    tracep->declBit(c+207,"early_reset_static_seq1_done_in", false,-1);
    tracep->declBit(c+207,"early_reset_static_seq1_done_out", false,-1);
    tracep->declBit(c+98,"early_reset_static_par0_go_in", false,-1);
    tracep->declBit(c+98,"early_reset_static_par0_go_out", false,-1);
    tracep->declBit(c+207,"early_reset_static_par0_done_in", false,-1);
    tracep->declBit(c+207,"early_reset_static_par0_done_out", false,-1);
    tracep->declBit(c+95,"wrapper_early_reset_static_seq_go_in", false,-1);
    tracep->declBit(c+95,"wrapper_early_reset_static_seq_go_out", false,-1);
    tracep->declBit(c+153,"wrapper_early_reset_static_seq_done_in", false,-1);
    tracep->declBit(c+153,"wrapper_early_reset_static_seq_done_out", false,-1);
    tracep->declBit(c+79,"wrapper_early_reset_cond10_go_in", false,-1);
    tracep->declBit(c+79,"wrapper_early_reset_cond10_go_out", false,-1);
    tracep->declBit(c+153,"wrapper_early_reset_cond10_done_in", false,-1);
    tracep->declBit(c+153,"wrapper_early_reset_cond10_done_out", false,-1);
    tracep->declBit(c+96,"wrapper_early_reset_static_par_go_in", false,-1);
    tracep->declBit(c+96,"wrapper_early_reset_static_par_go_out", false,-1);
    tracep->declBit(c+153,"wrapper_early_reset_static_par_done_in", false,-1);
    tracep->declBit(c+153,"wrapper_early_reset_static_par_done_out", false,-1);
    tracep->declBit(c+81,"wrapper_early_reset_cond20_go_in", false,-1);
    tracep->declBit(c+81,"wrapper_early_reset_cond20_go_out", false,-1);
    tracep->declBit(c+153,"wrapper_early_reset_cond20_done_in", false,-1);
    tracep->declBit(c+153,"wrapper_early_reset_cond20_done_out", false,-1);
    tracep->declBit(c+97,"wrapper_early_reset_static_seq1_go_in", false,-1);
    tracep->declBit(c+97,"wrapper_early_reset_static_seq1_go_out", false,-1);
    tracep->declBit(c+153,"wrapper_early_reset_static_seq1_done_in", false,-1);
    tracep->declBit(c+153,"wrapper_early_reset_static_seq1_done_out", false,-1);
    tracep->declBit(c+98,"wrapper_early_reset_static_par0_go_in", false,-1);
    tracep->declBit(c+98,"wrapper_early_reset_static_par0_go_out", false,-1);
    tracep->declBit(c+153,"wrapper_early_reset_static_par0_done_in", false,-1);
    tracep->declBit(c+153,"wrapper_early_reset_static_par0_done_out", false,-1);
    tracep->declBit(c+99,"par0_go_in", false,-1);
    tracep->declBit(c+99,"par0_go_out", false,-1);
    tracep->declBit(c+154,"par0_done_in", false,-1);
    tracep->declBit(c+154,"par0_done_out", false,-1);
    tracep->declBit(c+100,"tdcc_go_in", false,-1);
    tracep->declBit(c+100,"tdcc_go_out", false,-1);
    tracep->declBit(c+155,"tdcc_done_in", false,-1);
    tracep->declBit(c+155,"tdcc_done_out", false,-1);
    tracep->declBit(c+101,"tdcc0_go_in", false,-1);
    tracep->declBit(c+101,"tdcc0_go_out", false,-1);
    tracep->declBit(c+156,"tdcc0_done_in", false,-1);
    tracep->declBit(c+156,"tdcc0_done_out", false,-1);
    tracep->declBit(c+102,"tdcc1_go_in", false,-1);
    tracep->declBit(c+102,"tdcc1_go_out", false,-1);
    tracep->declBit(c+157,"tdcc1_done_in", false,-1);
    tracep->declBit(c+157,"tdcc1_done_out", false,-1);
    tracep->declBit(c+103,"par1_go_in", false,-1);
    tracep->declBit(c+103,"par1_go_out", false,-1);
    tracep->declBit(c+158,"par1_done_in", false,-1);
    tracep->declBit(c+158,"par1_done_out", false,-1);
    tracep->declBit(c+104,"tdcc2_go_in", false,-1);
    tracep->declBit(c+104,"tdcc2_go_out", false,-1);
    tracep->declBit(c+159,"tdcc2_done_in", false,-1);
    tracep->declBit(c+159,"tdcc2_done_out", false,-1);
    tracep->declBit(c+164,"tdcc3_go_in", false,-1);
    tracep->declBit(c+164,"tdcc3_go_out", false,-1);
    tracep->declBit(c+106,"tdcc3_done_in", false,-1);
    tracep->declBit(c+106,"tdcc3_done_out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__A_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__A_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+209,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+210,"D0_SIZE", false,-1, 31,0);
    tracep->declBus(c+210,"D1_SIZE", false,-1, 31,0);
    tracep->declBus(c+211,"D0_IDX_SIZE", false,-1, 31,0);
    tracep->declBus(c+211,"D1_IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+1,"addr0", false,-1, 3,0);
    tracep->declBus(c+2,"addr1", false,-1, 3,0);
    tracep->declBit(c+50,"read_en", false,-1);
    tracep->declBus(c+107,"read_data", false,-1, 31,0);
    tracep->declBit(c+109,"read_done", false,-1);
    tracep->declBit(c+207,"write_en", false,-1);
    tracep->declBus(c+206,"write_data", false,-1, 31,0);
    tracep->declBit(c+108,"write_done", false,-1);
    tracep->declBus(c+105,"addr", false,-1, 7,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__i1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__i1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+68,"in", false,-1, 3,0);
    tracep->declBit(c+69,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+126,"out", false,-1, 3,0);
    tracep->declBit(c+127,"done", false,-1);
    tracep->declBus(c+126,"internal_reg", false,-1, 3,0);
    tracep->declBit(c+127,"done_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__j0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__j0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+70,"in", false,-1, 3,0);
    tracep->declBit(c+71,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+128,"out", false,-1, 3,0);
    tracep->declBit(c+129,"done", false,-1);
    tracep->declBus(c+128,"internal_reg", false,-1, 3,0);
    tracep->declBit(c+129,"done_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm5__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm5__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+205,"in", false,-1, 3,0);
    tracep->declBit(c+91,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+151,"out", false,-1, 3,0);
    tracep->declBit(c+152,"done", false,-1);
    tracep->declBus(c+151,"internal_reg", false,-1, 3,0);
    tracep->declBit(c+152,"done_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder2__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+22,"left", false,-1, 1,0);
    tracep->declBus(c+87,"right", false,-1, 1,0);
    tracep->declBus(c+23,"out", false,-1, 1,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__A_i_j_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__A_i_j_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3,"in", false,-1, 31,0);
    tracep->declBit(c+63,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+122,"out", false,-1, 31,0);
    tracep->declBit(c+123,"done", false,-1);
    tracep->declBus(c+122,"internal_reg", false,-1, 31,0);
    tracep->declBit(c+123,"done_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__bin_read0_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__bin_read0_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+7,"in", false,-1, 31,0);
    tracep->declBit(c+67,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+124,"out", false,-1, 31,0);
    tracep->declBit(c+125,"done", false,-1);
    tracep->declBus(c+124,"internal_reg", false,-1, 31,0);
    tracep->declBit(c+125,"done_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__p_int_read0_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__p_int_read0_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+11,"in", false,-1, 31,0);
    tracep->declBit(c+75,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+131,"out", false,-1, 31,0);
    tracep->declBit(c+132,"done", false,-1);
    tracep->declBus(c+131,"internal_reg", false,-1, 31,0);
    tracep->declBit(c+132,"done_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__q0_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__q0_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+12,"in", false,-1, 31,0);
    tracep->declBit(c+76,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+133,"out", false,-1, 31,0);
    tracep->declBit(c+134,"done", false,-1);
    tracep->declBus(c+133,"internal_reg", false,-1, 31,0);
    tracep->declBit(c+134,"done_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__s0_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__s0_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+13,"in", false,-1, 31,0);
    tracep->declBit(c+77,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+135,"out", false,-1, 31,0);
    tracep->declBit(c+136,"done", false,-1);
    tracep->declBus(c+135,"internal_reg", false,-1, 31,0);
    tracep->declBit(c+136,"done_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+9,"left", false,-1, 31,0);
    tracep->declBus(c+10,"right", false,-1, 31,0);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBit(c+74,"go", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBus(c+130,"out", false,-1, 31,0);
    tracep->declBus(c+160,"rtmp", false,-1, 31,0);
    tracep->declBus(c+161,"ltmp", false,-1, 31,0);
    tracep->declQuad(c+162,"out_tmp", false,-1, 63,0);
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
    tracep->declBit(c+121,"in", false,-1);
    tracep->declBit(c+121,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let4_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let4_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+56,"in", false,-1);
    tracep->declBit(c+56,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let4_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let4_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+115,"in", false,-1);
    tracep->declBit(c+115,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let5_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let5_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+50,"in", false,-1);
    tracep->declBit(c+50,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let5_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let5_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+109,"in", false,-1);
    tracep->declBit(c+109,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let6_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let6_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+58,"in", false,-1);
    tracep->declBit(c+58,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let6_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let6_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+118,"in", false,-1);
    tracep->declBit(c+118,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let8_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let8_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+52,"in", false,-1);
    tracep->declBit(c+52,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let8_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let8_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+112,"in", false,-1);
    tracep->declBit(c+112,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke4_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke4_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+77,"in", false,-1);
    tracep->declBit(c+77,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke4_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke4_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+136,"in", false,-1);
    tracep->declBit(c+136,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke5_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke5_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+76,"in", false,-1);
    tracep->declBit(c+76,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke5_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke5_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+134,"in", false,-1);
    tracep->declBit(c+134,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke6_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke6_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+92,"in", false,-1);
    tracep->declBit(c+92,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke6_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke6_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+123,"in", false,-1);
    tracep->declBit(c+123,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke7_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke7_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+93,"in", false,-1);
    tracep->declBit(c+93,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke7_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke7_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+125,"in", false,-1);
    tracep->declBit(c+125,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke10_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke10_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+75,"in", false,-1);
    tracep->declBit(c+75,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke10_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke10_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+132,"in", false,-1);
    tracep->declBit(c+132,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke14_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke14_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+94,"in", false,-1);
    tracep->declBit(c+94,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke14_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke14_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+127,"in", false,-1);
    tracep->declBit(c+127,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+79,"in", false,-1);
    tracep->declBit(c+79,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+207,"in", false,-1);
    tracep->declBit(c+207,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+81,"in", false,-1);
    tracep->declBit(c+81,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+207,"in", false,-1);
    tracep->declBit(c+207,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+95,"in", false,-1);
    tracep->declBit(c+95,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+207,"in", false,-1);
    tracep->declBit(c+207,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+83,"in", false,-1);
    tracep->declBit(c+83,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+207,"in", false,-1);
    tracep->declBit(c+207,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+96,"in", false,-1);
    tracep->declBit(c+96,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+207,"in", false,-1);
    tracep->declBit(c+207,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq1_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq1_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+97,"in", false,-1);
    tracep->declBit(c+97,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq1_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq1_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+207,"in", false,-1);
    tracep->declBit(c+207,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par0_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par0_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+98,"in", false,-1);
    tracep->declBit(c+98,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par0_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par0_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+207,"in", false,-1);
    tracep->declBit(c+207,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+95,"in", false,-1);
    tracep->declBit(c+95,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+153,"in", false,-1);
    tracep->declBit(c+153,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+79,"in", false,-1);
    tracep->declBit(c+79,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+153,"in", false,-1);
    tracep->declBit(c+153,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+96,"in", false,-1);
    tracep->declBit(c+96,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+153,"in", false,-1);
    tracep->declBit(c+153,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+81,"in", false,-1);
    tracep->declBit(c+81,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+153,"in", false,-1);
    tracep->declBit(c+153,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq1_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq1_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+97,"in", false,-1);
    tracep->declBit(c+97,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq1_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq1_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+153,"in", false,-1);
    tracep->declBit(c+153,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par0_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par0_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+98,"in", false,-1);
    tracep->declBit(c+98,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par0_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par0_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+153,"in", false,-1);
    tracep->declBit(c+153,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__par0_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__par0_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+99,"in", false,-1);
    tracep->declBit(c+99,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__par0_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__par0_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+154,"in", false,-1);
    tracep->declBit(c+154,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+100,"in", false,-1);
    tracep->declBit(c+100,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+155,"in", false,-1);
    tracep->declBit(c+155,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc0_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc0_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+101,"in", false,-1);
    tracep->declBit(c+101,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc0_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc0_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+156,"in", false,-1);
    tracep->declBit(c+156,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc1_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc1_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+102,"in", false,-1);
    tracep->declBit(c+102,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc1_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc1_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+157,"in", false,-1);
    tracep->declBit(c+157,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__par1_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__par1_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+103,"in", false,-1);
    tracep->declBit(c+103,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__par1_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__par1_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+158,"in", false,-1);
    tracep->declBit(c+158,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc2_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc2_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+104,"in", false,-1);
    tracep->declBit(c+104,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc2_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc2_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+159,"in", false,-1);
    tracep->declBit(c+159,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc3_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc3_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+164,"in", false,-1);
    tracep->declBit(c+164,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc3_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc3_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+106,"in", false,-1);
    tracep->declBit(c+106,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__add1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__add1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+5,"left", false,-1, 31,0);
    tracep->declBus(c+6,"right", false,-1, 31,0);
    tracep->declBus(c+66,"out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+14,"in", false,-1, 4,0);
    tracep->declBit(c+82,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+139,"out", false,-1, 4,0);
    tracep->declBus(c+139,"internal_reg", false,-1, 4,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__le0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__le0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+8,"left", false,-1, 3,0);
    tracep->declBus(c+72,"right", false,-1, 3,0);
    tracep->declBit(c+73,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+15,"in", false,-1, 1,0);
    tracep->declBit(c+83,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+140,"out", false,-1, 1,0);
    tracep->declBus(c+140,"internal_reg", false,-1, 1,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+32,"in", false,-1, 1,0);
    tracep->declBit(c+33,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+142,"out", false,-1, 1,0);
    tracep->declBus(c+142,"internal_reg", false,-1, 1,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm2__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+36,"in", false,-1, 1,0);
    tracep->declBit(c+37,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+144,"out", false,-1, 1,0);
    tracep->declBus(c+144,"internal_reg", false,-1, 1,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm3__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+40,"in", false,-1, 1,0);
    tracep->declBit(c+41,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+146,"out", false,-1, 1,0);
    tracep->declBus(c+146,"internal_reg", false,-1, 1,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm4__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+46,"in", false,-1, 1,0);
    tracep->declBit(c+47,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+149,"out", false,-1, 1,0);
    tracep->declBus(c+149,"internal_reg", false,-1, 1,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__add0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__add0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4,"left", false,-1, 3,0);
    tracep->declBus(c+64,"right", false,-1, 3,0);
    tracep->declBus(c+65,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+78,"in", false,-1);
    tracep->declBit(c+79,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBit(c+137,"out", false,-1);
    tracep->declBit(c+137,"internal_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+80,"in", false,-1);
    tracep->declBit(c+81,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBit(c+138,"out", false,-1);
    tracep->declBit(c+138,"internal_reg", false,-1);
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
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBit(c+141,"out", false,-1);
    tracep->declBit(c+141,"internal_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__pd__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__pd__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+34,"in", false,-1);
    tracep->declBit(c+35,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBit(c+143,"out", false,-1);
    tracep->declBit(c+143,"internal_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__pd0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__pd0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+38,"in", false,-1);
    tracep->declBit(c+39,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBit(c+145,"out", false,-1);
    tracep->declBit(c+145,"internal_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__pd1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__pd1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+42,"in", false,-1);
    tracep->declBit(c+43,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBit(c+147,"out", false,-1);
    tracep->declBit(c+147,"internal_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__pd2__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__pd2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+44,"in", false,-1);
    tracep->declBit(c+45,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBit(c+148,"out", false,-1);
    tracep->declBit(c+148,"internal_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__pd3__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__pd3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+48,"in", false,-1);
    tracep->declBit(c+49,"write_en", false,-1);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBit(c+150,"out", false,-1);
    tracep->declBit(c+150,"internal_reg", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+16,"left", false,-1, 4,0);
    tracep->declBus(c+84,"right", false,-1, 4,0);
    tracep->declBus(c+17,"out", false,-1, 4,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+18,"left", false,-1, 4,0);
    tracep->declBus(c+85,"right", false,-1, 4,0);
    tracep->declBus(c+19,"out", false,-1, 4,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+20,"left", false,-1, 4,0);
    tracep->declBus(c+86,"right", false,-1, 4,0);
    tracep->declBus(c+21,"out", false,-1, 4,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder3__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+24,"left", false,-1, 4,0);
    tracep->declBus(c+88,"right", false,-1, 4,0);
    tracep->declBus(c+25,"out", false,-1, 4,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder4__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+26,"left", false,-1, 4,0);
    tracep->declBus(c+89,"right", false,-1, 4,0);
    tracep->declBus(c+27,"out", false,-1, 4,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder5__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder5__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+28,"left", false,-1, 4,0);
    tracep->declBus(c+90,"right", false,-1, 4,0);
    tracep->declBus(c+29,"out", false,-1, 4,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__p_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__p_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+209,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+210,"SIZE", false,-1, 31,0);
    tracep->declBus(c+211,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+51,"addr0", false,-1, 3,0);
    tracep->declBit(c+52,"read_en", false,-1);
    tracep->declBus(c+110,"read_data", false,-1, 31,0);
    tracep->declBit(c+112,"read_done", false,-1);
    tracep->declBus(c+206,"write_data", false,-1, 31,0);
    tracep->declBit(c+207,"write_en", false,-1);
    tracep->declBit(c+111,"write_done", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+189+i*1,"mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+110,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__q_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__q_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+209,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+210,"SIZE", false,-1, 31,0);
    tracep->declBus(c+211,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+53,"addr0", false,-1, 3,0);
    tracep->declBit(c+56,"read_en", false,-1);
    tracep->declBus(c+113,"read_data", false,-1, 31,0);
    tracep->declBit(c+115,"read_done", false,-1);
    tracep->declBus(c+54,"write_data", false,-1, 31,0);
    tracep->declBit(c+55,"write_en", false,-1);
    tracep->declBit(c+114,"write_done", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+168+i*1,"mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+113,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__r_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__r_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+209,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+210,"SIZE", false,-1, 31,0);
    tracep->declBus(c+211,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+57,"addr0", false,-1, 3,0);
    tracep->declBit(c+58,"read_en", false,-1);
    tracep->declBus(c+116,"read_data", false,-1, 31,0);
    tracep->declBit(c+118,"read_done", false,-1);
    tracep->declBus(c+206,"write_data", false,-1, 31,0);
    tracep->declBit(c+207,"write_en", false,-1);
    tracep->declBit(c+117,"write_done", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+197+i*1,"mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+116,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__s_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__s_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+209,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+210,"SIZE", false,-1, 31,0);
    tracep->declBus(c+211,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+59,"addr0", false,-1, 3,0);
    tracep->declBit(c+62,"read_en", false,-1);
    tracep->declBus(c+119,"read_data", false,-1, 31,0);
    tracep->declBit(c+121,"read_done", false,-1);
    tracep->declBus(c+60,"write_data", false,-1, 31,0);
    tracep->declBit(c+61,"write_en", false,-1);
    tracep->declBit(c+120,"write_done", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+176+i*1,"mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+119,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__A_int__mem__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__A_int__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+209,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+212,"SIZE", false,-1, 31,0);
    tracep->declBus(c+210,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+184,"clk", false,-1);
    tracep->declBit(c+165,"reset", false,-1);
    tracep->declBus(c+105,"addr0", false,-1, 7,0);
    tracep->declBit(c+50,"read_en", false,-1);
    tracep->declBus(c+107,"read_data", false,-1, 31,0);
    tracep->declBit(c+109,"read_done", false,-1);
    tracep->declBus(c+206,"write_data", false,-1, 31,0);
    tracep->declBit(c+207,"write_en", false,-1);
    tracep->declBit(c+108,"write_done", false,-1);
    tracep->declBus(c+107,"read_out", false,-1, 31,0);
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
    tracep->pushNamePrefix("main ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__0(vlSelf, tracep);
    tracep->pushNamePrefix("A_i_j_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__A_i_j_0__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("adder4 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__adder4__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder5 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__adder5__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("beg_spl_let6_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let6_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("beg_spl_let6_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let6_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("beg_spl_let8_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let8_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("beg_spl_let8_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__beg_spl_let8_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bin_read0_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__bin_read0_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("comb_reg0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("comb_reg1 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg1__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("early_reset_static_seq1_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq1_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq1_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq1_go__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("fsm1 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm1__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fsm2 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm2__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fsm3 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm3__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fsm4 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm4__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fsm5 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm5__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i1 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__i1__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("invoke6_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke6_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke6_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke6_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke7_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke7_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke7_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke7_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("j0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__j0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("le0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__le0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mult_pipe0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("p_int_read0_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__p_int_read0_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("par0_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__par0_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("par0_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__par0_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("par1_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__par1_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("par1_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__par1_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pd ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__pd__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pd0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__pd0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pd1 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__pd1__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pd2 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__pd2__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pd3 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__pd3__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("q0_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__q0_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s0_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__s0_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("signal_reg ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__signal_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tdcc0_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc0_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tdcc0_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc0_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tdcc1_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc1_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tdcc1_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc1_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tdcc2_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc2_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tdcc2_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc2_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tdcc3_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc3_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tdcc3_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc3_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tdcc_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tdcc_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_go__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("wrapper_early_reset_static_par_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_static_par_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_static_seq1_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq1_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_static_seq1_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq1_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_static_seq_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_static_seq_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq_go__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("p_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__p_int__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("q_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__q_int__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("r_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__r_int__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__s_int__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
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
                              ? (IData)(vlSymsp->TOP__TOP__main__i1.__PVT__internal_reg)
                              : 0U)),4);
    bufp->fullCData(oldp+2,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let5_go_in)
                              ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                              : 0U)),4);
    bufp->fullIData(oldp+3,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hba0c7352__0)
                              ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp)
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke6_go_in)
                                  ? vlSymsp->TOP__TOP__A_int__mem.__PVT__read_out
                                  : 0U))),32);
    bufp->fullCData(oldp+4,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h96d1a8ed__0)
                              ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                              : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h42da30c7__0)
                                  ? (IData)(vlSymsp->TOP__TOP__main__i1.__PVT__internal_reg)
                                  : 0U))),4);
    bufp->fullIData(oldp+5,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_haf140208__0)
                              ? vlSymsp->TOP__TOP__main__q0_0.__PVT__internal_reg
                              : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd1d86966__0)
                                  ? vlSymsp->TOP__TOP__main__s0_0.__PVT__internal_reg
                                  : 0U))),32);
    bufp->fullIData(oldp+6,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_haf140208__0)
                              ? vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__internal_reg
                              : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd1d86966__0)
                                  ? vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__internal_reg
                                  : 0U))),32);
    bufp->fullIData(oldp+7,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hedd81b8c__0)
                              ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp)
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke7_go_in)
                                  ? vlSymsp->TOP__TOP__r_int.__PVT__read_out
                                  : 0U))),32);
    bufp->fullCData(oldp+8,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                              ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                              : (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he48da90e__0))
                                  ? (IData)(vlSymsp->TOP__TOP__main__i1.__PVT__internal_reg)
                                  : 0U))),4);
    bufp->fullIData(oldp+9,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_ha8e6ba43__0)
                              ? vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__internal_reg
                              : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd3925d15__0)
                                  ? vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__internal_reg
                                  : 0U))),32);
    bufp->fullIData(oldp+10,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_ha8e6ba43__0)
                               ? vlSymsp->TOP__TOP__main__p_int_read0_0.__PVT__internal_reg
                               : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd3925d15__0)
                                   ? vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__internal_reg
                                   : 0U))),32);
    bufp->fullIData(oldp+11,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke10_go_in)
                               ? vlSymsp->TOP__TOP__p_int.__PVT__read_out
                               : 0U)),32);
    bufp->fullIData(oldp+12,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke5_go_in)
                               ? vlSymsp->TOP__TOP__q_int.__PVT__read_out
                               : 0U)),32);
    bufp->fullIData(oldp+13,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke4_go_in)
                               ? vlSymsp->TOP__TOP__s_int.__PVT__read_out
                               : 0U)),32);
    bufp->fullCData(oldp+14,((0x1fU & (((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in))
                                        ? (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                             ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                             : 0U) 
                                           + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in))
                                        : (((4U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                            & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in))
                                            ? (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                                 ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                                 : 0U) 
                                               + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in))
                                            : (((0U 
                                                 != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in))
                                                ? (
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                                     ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                                     : 0U) 
                                                   + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in))
                                                : (
                                                   (((0U 
                                                      == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)) 
                                                    | (((0U 
                                                         == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)) 
                                                       | (((0x1aU 
                                                            == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in)) 
                                                          | (((0U 
                                                               == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                                              & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)) 
                                                             | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd1d86966__0) 
                                                                | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_haf140208__0))))))
                                                    ? 0U
                                                    : 
                                                   (((4U 
                                                      != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in))
                                                     ? 
                                                    (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in)
                                                       ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                                       : 0U) 
                                                     + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in))
                                                     : 
                                                    (((0U 
                                                       != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                                      & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in))
                                                      ? 
                                                     (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                                        ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                                        : 0U) 
                                                      + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in))
                                                      : 
                                                     (((0x1aU 
                                                        != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                                       & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in))
                                                       ? 
                                                      (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in)
                                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                                         : 0U) 
                                                       + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in))
                                                       : 0U))))))))),5);
    bufp->fullCData(oldp+15,((((2U != (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in))
                               ? (3U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                          ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg)
                                          : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)))
                               : 0U)),2);
    bufp->fullCData(oldp+16,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                               : 0U)),5);
    bufp->fullCData(oldp+17,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)))),5);
    bufp->fullCData(oldp+18,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                               : 0U)),5);
    bufp->fullCData(oldp+19,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)))),5);
    bufp->fullCData(oldp+20,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                               : 0U)),5);
    bufp->fullCData(oldp+21,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in)))),5);
    bufp->fullCData(oldp+22,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg)
                               : 0U)),2);
    bufp->fullCData(oldp+23,((3U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                      ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg)
                                      : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)))),2);
    bufp->fullCData(oldp+24,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                               : 0U)),5);
    bufp->fullCData(oldp+25,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)))),5);
    bufp->fullCData(oldp+26,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                               : 0U)),5);
    bufp->fullCData(oldp+27,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in)))),5);
    bufp->fullCData(oldp+28,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                               : 0U)),5);
    bufp->fullCData(oldp+29,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)))),5);
    bufp->fullBit(oldp+30,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_done_in)) 
                            & (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_124))));
    bufp->fullBit(oldp+31,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_done_in) 
                            | (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_124))));
    bufp->fullCData(oldp+32,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2db91552__0)
                               ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__internal_reg)) 
                                       & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h61921a34__0)))),2);
    bufp->fullBit(oldp+33,(((2U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__internal_reg)) 
                            | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h61921a34__0) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2db91552__0)))));
    bufp->fullBit(oldp+34,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in)) 
                            & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7f7c5c20__0))));
    bufp->fullBit(oldp+35,(((IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in) 
                            | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7f7c5c20__0))));
    bufp->fullCData(oldp+36,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h1832b6c0__0)
                               ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__internal_reg)) 
                                       & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf38325f8__0)))),2);
    bufp->fullBit(oldp+37,(((2U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__internal_reg)) 
                            | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf38325f8__0) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h1832b6c0__0)))));
    bufp->fullBit(oldp+38,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in)) 
                            & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h55d88a83__0))));
    bufp->fullBit(oldp+39,(((IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in) 
                            | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h55d88a83__0))));
    bufp->fullCData(oldp+40,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h264338ce__0)
                               ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__internal_reg)) 
                                       & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hc21ebf3d__0)))),2);
    bufp->fullBit(oldp+41,(((2U == (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__internal_reg)) 
                            | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hc21ebf3d__0) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h264338ce__0)))));
    bufp->fullBit(oldp+42,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in)) 
                            & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3e6cce66__0))));
    bufp->fullBit(oldp+43,(((IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in) 
                            | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3e6cce66__0))));
    bufp->fullBit(oldp+44,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par1_done_in)) 
                            & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd40cd495__0))));
    bufp->fullBit(oldp+45,(((IData)(vlSymsp->TOP__TOP__main.__PVT__par1_done_in) 
                            | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd40cd495__0))));
    bufp->fullCData(oldp+46,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h14f8c1ab__0)
                               ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__internal_reg)) 
                                       & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h839cf65c__0)))),2);
    bufp->fullBit(oldp+47,(((2U == (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__internal_reg)) 
                            | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h839cf65c__0) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h14f8c1ab__0)))));
    bufp->fullBit(oldp+48,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par1_done_in)) 
                            & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2276f04a__0))));
    bufp->fullBit(oldp+49,(((IData)(vlSymsp->TOP__TOP__main.__PVT__par1_done_in) 
                            | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2276f04a__0))));
    bufp->fullBit(oldp+50,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let5_go_in));
    bufp->fullCData(oldp+51,(vlSymsp->TOP__TOP__main.__PVT__p_int_addr0),4);
    bufp->fullBit(oldp+52,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let8_go_in));
    bufp->fullCData(oldp+53,(vlSymsp->TOP__TOP__main.__PVT__q_int_addr0),4);
    bufp->fullIData(oldp+54,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                               ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_haf140208__0)
                                        ? (IData)(vlSymsp->TOP__TOP__main__add1.__PVT___GEN_0)
                                        : 0U))),32);
    bufp->fullBit(oldp+55,(vlSymsp->TOP__TOP__main.__PVT__q_int_write_en));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in));
    bufp->fullCData(oldp+57,(vlSymsp->TOP__TOP__main.__PVT__r_int_addr0),4);
    bufp->fullBit(oldp+58,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let6_go_in));
    bufp->fullCData(oldp+59,(vlSymsp->TOP__TOP__main.__PVT__s_int_addr0),4);
    bufp->fullIData(oldp+60,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb17828e6__0)
                               ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd1d86966__0)
                                        ? (IData)(vlSymsp->TOP__TOP__main__add1.__PVT___GEN_0)
                                        : 0U))),32);
    bufp->fullBit(oldp+61,(vlSymsp->TOP__TOP__main.__PVT__s_int_write_en));
    bufp->fullBit(oldp+62,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let3_go_in));
    bufp->fullBit(oldp+63,(vlSymsp->TOP__TOP__main.__PVT__A_i_j_0_write_en));
    bufp->fullCData(oldp+64,((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h42da30c7__0) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h96d1a8ed__0))
                               ? 1U : 0U)),4);
    bufp->fullCData(oldp+65,((0xfU & (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0))),4);
    bufp->fullIData(oldp+66,((IData)(vlSymsp->TOP__TOP__main__add1.__PVT___GEN_0)),32);
    bufp->fullBit(oldp+67,(vlSymsp->TOP__TOP__main.__PVT__bin_read0_0_write_en));
    bufp->fullCData(oldp+68,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5fa391a3__0)
                               ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h42da30c7__0)
                                        ? (0xfU & (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0))
                                        : 0U))),4);
    bufp->fullBit(oldp+69,(vlSymsp->TOP__TOP__main.__PVT__i1_write_en));
    bufp->fullCData(oldp+70,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                               ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h96d1a8ed__0)
                                        ? (0xfU & (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0))
                                        : 0U))),4);
    bufp->fullBit(oldp+71,(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
    bufp->fullCData(oldp+72,((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hacf7e8f8__0) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he48da90e__0))
                               ? 7U : 0U)),4);
    bufp->fullBit(oldp+73,(vlSymsp->TOP__TOP__main__le0.__PVT__out));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go));
    bufp->fullBit(oldp+75,(vlSymsp->TOP__TOP__main.__PVT__invoke10_go_in));
    bufp->fullBit(oldp+76,(vlSymsp->TOP__TOP__main.__PVT__invoke5_go_in));
    bufp->fullBit(oldp+77,(vlSymsp->TOP__TOP__main.__PVT__invoke4_go_in));
    bufp->fullBit(oldp+78,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                            & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
    bufp->fullBit(oldp+79,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in));
    bufp->fullBit(oldp+80,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in) 
                            & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
    bufp->fullBit(oldp+81,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in));
    bufp->fullBit(oldp+82,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hacf7e8f8__0) 
                            | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in) 
                                  | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in) 
                                     | (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in)))))));
    bufp->fullBit(oldp+83,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in));
    bufp->fullCData(oldp+84,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in),5);
    bufp->fullCData(oldp+85,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in),5);
    bufp->fullCData(oldp+86,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in),5);
    bufp->fullCData(oldp+87,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in),2);
    bufp->fullCData(oldp+88,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in),5);
    bufp->fullCData(oldp+89,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in),5);
    bufp->fullCData(oldp+90,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in),5);
    bufp->fullBit(oldp+91,(vlSymsp->TOP__TOP__main.__PVT__fsm5_write_en));
    bufp->fullBit(oldp+92,(vlSymsp->TOP__TOP__main.__PVT__invoke6_go_in));
    bufp->fullBit(oldp+93,(vlSymsp->TOP__TOP__main.__PVT__invoke7_go_in));
    bufp->fullBit(oldp+94,(vlSymsp->TOP__TOP__main.__PVT__invoke14_go_in));
    bufp->fullBit(oldp+95,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in));
    bufp->fullBit(oldp+96,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in));
    bufp->fullBit(oldp+97,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in));
    bufp->fullBit(oldp+98,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in));
    bufp->fullBit(oldp+99,(vlSymsp->TOP__TOP__main.__PVT__par0_go_in));
    bufp->fullBit(oldp+100,(vlSymsp->TOP__TOP__main.__PVT__tdcc_go_in));
    bufp->fullBit(oldp+101,(vlSymsp->TOP__TOP__main.__PVT__tdcc0_go_in));
    bufp->fullBit(oldp+102,(vlSymsp->TOP__TOP__main.__PVT__tdcc1_go_in));
    bufp->fullBit(oldp+103,(vlSymsp->TOP__TOP__main.__PVT__par1_go_in));
    bufp->fullBit(oldp+104,(vlSymsp->TOP__TOP__main.__PVT__tdcc2_go_in));
    bufp->fullCData(oldp+105,(vlSymsp->TOP__TOP__A_int.__PVT__addr),8);
    bufp->fullBit(oldp+106,((0xcU == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__internal_reg))));
    bufp->fullIData(oldp+107,(vlSymsp->TOP__TOP__A_int__mem.__PVT__read_out),32);
    bufp->fullBit(oldp+108,(vlSymsp->TOP__TOP__A_int__mem.__PVT__write_done));
    bufp->fullBit(oldp+109,(vlSymsp->TOP__TOP__A_int__mem.__PVT__read_done));
    bufp->fullIData(oldp+110,(vlSymsp->TOP__TOP__p_int.__PVT__read_out),32);
    bufp->fullBit(oldp+111,(vlSymsp->TOP__TOP__p_int.__PVT__write_done));
    bufp->fullBit(oldp+112,(vlSymsp->TOP__TOP__p_int.__PVT__read_done));
    bufp->fullIData(oldp+113,(vlSymsp->TOP__TOP__q_int.__PVT__read_out),32);
    bufp->fullBit(oldp+114,(vlSymsp->TOP__TOP__q_int.__PVT__write_done));
    bufp->fullBit(oldp+115,(vlSymsp->TOP__TOP__q_int.__PVT__read_done));
    bufp->fullIData(oldp+116,(vlSymsp->TOP__TOP__r_int.__PVT__read_out),32);
    bufp->fullBit(oldp+117,(vlSymsp->TOP__TOP__r_int.__PVT__write_done));
    bufp->fullBit(oldp+118,(vlSymsp->TOP__TOP__r_int.__PVT__read_done));
    bufp->fullIData(oldp+119,(vlSymsp->TOP__TOP__s_int.__PVT__read_out),32);
    bufp->fullBit(oldp+120,(vlSymsp->TOP__TOP__s_int.__PVT__write_done));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__TOP__s_int.__PVT__read_done));
    bufp->fullIData(oldp+122,(vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__internal_reg),32);
    bufp->fullBit(oldp+123,(vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__done_reg));
    bufp->fullIData(oldp+124,(vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__internal_reg),32);
    bufp->fullBit(oldp+125,(vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__done_reg));
    bufp->fullCData(oldp+126,(vlSymsp->TOP__TOP__main__i1.__PVT__internal_reg),4);
    bufp->fullBit(oldp+127,(vlSymsp->TOP__TOP__main__i1.__PVT__done_reg));
    bufp->fullCData(oldp+128,(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg),4);
    bufp->fullBit(oldp+129,(vlSymsp->TOP__TOP__main__j0.__PVT__done_reg));
    bufp->fullIData(oldp+130,((IData)(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp)),32);
    bufp->fullIData(oldp+131,(vlSymsp->TOP__TOP__main__p_int_read0_0.__PVT__internal_reg),32);
    bufp->fullBit(oldp+132,(vlSymsp->TOP__TOP__main__p_int_read0_0.__PVT__done_reg));
    bufp->fullIData(oldp+133,(vlSymsp->TOP__TOP__main__q0_0.__PVT__internal_reg),32);
    bufp->fullBit(oldp+134,(vlSymsp->TOP__TOP__main__q0_0.__PVT__done_reg));
    bufp->fullIData(oldp+135,(vlSymsp->TOP__TOP__main__s0_0.__PVT__internal_reg),32);
    bufp->fullBit(oldp+136,(vlSymsp->TOP__TOP__main__s0_0.__PVT__done_reg));
    bufp->fullBit(oldp+137,(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__internal_reg));
    bufp->fullBit(oldp+138,(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__internal_reg));
    bufp->fullCData(oldp+139,(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg),5);
    bufp->fullCData(oldp+140,(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg),2);
    bufp->fullBit(oldp+141,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__internal_reg));
    bufp->fullCData(oldp+142,(vlSymsp->TOP__TOP__main__fsm1.__PVT__internal_reg),2);
    bufp->fullBit(oldp+143,(vlSymsp->TOP__TOP__main__pd.__PVT__internal_reg));
    bufp->fullCData(oldp+144,(vlSymsp->TOP__TOP__main__fsm2.__PVT__internal_reg),2);
    bufp->fullBit(oldp+145,(vlSymsp->TOP__TOP__main__pd0.__PVT__internal_reg));
    bufp->fullCData(oldp+146,(vlSymsp->TOP__TOP__main__fsm3.__PVT__internal_reg),2);
    bufp->fullBit(oldp+147,(vlSymsp->TOP__TOP__main__pd1.__PVT__internal_reg));
    bufp->fullBit(oldp+148,(vlSymsp->TOP__TOP__main__pd2.__PVT__internal_reg));
    bufp->fullCData(oldp+149,(vlSymsp->TOP__TOP__main__fsm4.__PVT__internal_reg),2);
    bufp->fullBit(oldp+150,(vlSymsp->TOP__TOP__main__pd3.__PVT__internal_reg));
    bufp->fullCData(oldp+151,(vlSymsp->TOP__TOP__main__fsm5.__PVT__internal_reg),4);
    bufp->fullBit(oldp+152,(vlSymsp->TOP__TOP__main__fsm5.__PVT__done_reg));
    bufp->fullBit(oldp+153,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_done_in));
    bufp->fullBit(oldp+154,(vlSymsp->TOP__TOP__main.__PVT__par0_done_in));
    bufp->fullBit(oldp+155,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__internal_reg))));
    bufp->fullBit(oldp+156,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__internal_reg))));
    bufp->fullBit(oldp+157,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__internal_reg))));
    bufp->fullBit(oldp+158,(vlSymsp->TOP__TOP__main.__PVT__par1_done_in));
    bufp->fullBit(oldp+159,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__internal_reg))));
    bufp->fullIData(oldp+160,(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__rtmp),32);
    bufp->fullIData(oldp+161,(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__ltmp),32);
    bufp->fullQData(oldp+162,(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp),64);
    bufp->fullBit(oldp+164,(vlSymsp->TOP__TOP.__PVT__go));
    bufp->fullBit(oldp+165,(vlSymsp->TOP__TOP.__PVT__reset));
    bufp->fullQData(oldp+166,(vlSymsp->TOP__TOP.__PVT__cycle_count),64);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__TOP__q_int.__PVT__mem[0]),32);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__TOP__q_int.__PVT__mem[1]),32);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__TOP__q_int.__PVT__mem[2]),32);
    bufp->fullIData(oldp+171,(vlSymsp->TOP__TOP__q_int.__PVT__mem[3]),32);
    bufp->fullIData(oldp+172,(vlSymsp->TOP__TOP__q_int.__PVT__mem[4]),32);
    bufp->fullIData(oldp+173,(vlSymsp->TOP__TOP__q_int.__PVT__mem[5]),32);
    bufp->fullIData(oldp+174,(vlSymsp->TOP__TOP__q_int.__PVT__mem[6]),32);
    bufp->fullIData(oldp+175,(vlSymsp->TOP__TOP__q_int.__PVT__mem[7]),32);
    bufp->fullIData(oldp+176,(vlSymsp->TOP__TOP__s_int.__PVT__mem[0]),32);
    bufp->fullIData(oldp+177,(vlSymsp->TOP__TOP__s_int.__PVT__mem[1]),32);
    bufp->fullIData(oldp+178,(vlSymsp->TOP__TOP__s_int.__PVT__mem[2]),32);
    bufp->fullIData(oldp+179,(vlSymsp->TOP__TOP__s_int.__PVT__mem[3]),32);
    bufp->fullIData(oldp+180,(vlSymsp->TOP__TOP__s_int.__PVT__mem[4]),32);
    bufp->fullIData(oldp+181,(vlSymsp->TOP__TOP__s_int.__PVT__mem[5]),32);
    bufp->fullIData(oldp+182,(vlSymsp->TOP__TOP__s_int.__PVT__mem[6]),32);
    bufp->fullIData(oldp+183,(vlSymsp->TOP__TOP__s_int.__PVT__mem[7]),32);
    bufp->fullBit(oldp+184,(vlSymsp->TOP__TOP.__PVT__clk));
    bufp->fullIData(oldp+185,(vlSymsp->TOP__TOP.__PVT__NOTRACE),32);
    bufp->fullQData(oldp+186,(vlSymsp->TOP__TOP.__PVT__CYCLE_LIMIT),64);
    bufp->fullIData(oldp+188,(vlSymsp->TOP__TOP.__PVT__CODE),32);
    bufp->fullIData(oldp+189,(vlSymsp->TOP__TOP__p_int.__PVT__mem[0]),32);
    bufp->fullIData(oldp+190,(vlSymsp->TOP__TOP__p_int.__PVT__mem[1]),32);
    bufp->fullIData(oldp+191,(vlSymsp->TOP__TOP__p_int.__PVT__mem[2]),32);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__TOP__p_int.__PVT__mem[3]),32);
    bufp->fullIData(oldp+193,(vlSymsp->TOP__TOP__p_int.__PVT__mem[4]),32);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__TOP__p_int.__PVT__mem[5]),32);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__TOP__p_int.__PVT__mem[6]),32);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__TOP__p_int.__PVT__mem[7]),32);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__TOP__r_int.__PVT__mem[0]),32);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__TOP__r_int.__PVT__mem[1]),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__TOP__r_int.__PVT__mem[2]),32);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__TOP__r_int.__PVT__mem[3]),32);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__TOP__r_int.__PVT__mem[4]),32);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__TOP__r_int.__PVT__mem[5]),32);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__TOP__r_int.__PVT__mem[6]),32);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__TOP__r_int.__PVT__mem[7]),32);
    bufp->fullCData(oldp+205,(((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_300)
                                ? 0xbU : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_heb163d00__0)
                                           ? 1U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb52e9e8f__0)
                                                    ? 8U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h876d1f6f__0)
                                                     ? 6U
                                                     : 
                                                    ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hdb72d658__0) 
                                                       | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hdb8e8070__0)) 
                                                      & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                                      ? 0xcU
                                                      : 
                                                     ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf31f61f5__0) 
                                                        | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf35533c7__0)) 
                                                       & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                                       ? 2U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hddedd61e__0)
                                                        ? 7U
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__internal_reg))
                                                         ? 0U
                                                         : 
                                                        ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he419f59f__0) 
                                                           | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h76af7ad3__0)) 
                                                          & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                                          ? 0xaU
                                                          : 
                                                         ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_ha6ccabc3__0)
                                                           ? 9U
                                                           : 
                                                          ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hafa7f5a2__0) 
                                                             | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3d357af0__0)) 
                                                            & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                                            ? 4U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_268)
                                                             ? 5U
                                                             : 
                                                            ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf7faf697__0)
                                                              ? 3U
                                                              : 0U)))))))))))))),4);
    bufp->fullIData(oldp+206,(0U),32);
    bufp->fullBit(oldp+207,(0U));
    bufp->fullIData(oldp+208,(3U),32);
    bufp->fullIData(oldp+209,(0x20U),32);
    bufp->fullIData(oldp+210,(8U),32);
    bufp->fullIData(oldp+211,(4U),32);
    bufp->fullIData(oldp+212,(0x40U),32);
}

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
    tracep->declBit(c+145,"go", false,-1);
    tracep->declBit(c+77,"done", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+158,"RESET_CYCLES", false,-1, 31,0);
    tracep->declQuad(c+147,"cycle_count", false,-1, 63,0);
    tracep->declBus(c+154,"NOTRACE", false,-1, 31,0);
    tracep->declQuad(c+155,"CYCLE_LIMIT", false,-1, 63,0);
    tracep->declBus(c+157,"CODE", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+145,"go", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBit(c+77,"done", false,-1);
    tracep->declBus(c+1,"CODE", false,-1, 31,0);
    tracep->declBit(c+153,"A_int_clk", false,-1);
    tracep->declBit(c+146,"A_int_reset", false,-1);
    tracep->declBus(c+78,"A_int_addr0", false,-1, 3,0);
    tracep->declBus(c+79,"A_int_addr1", false,-1, 3,0);
    tracep->declBit(c+159,"A_int_write_en", false,-1);
    tracep->declBus(c+160,"A_int_write_data", false,-1, 31,0);
    tracep->declBit(c+36,"A_int_read_en", false,-1);
    tracep->declBus(c+80,"A_int_read_data", false,-1, 31,0);
    tracep->declBit(c+81,"A_int_write_done", false,-1);
    tracep->declBit(c+82,"A_int_read_done", false,-1);
    tracep->declBit(c+153,"B_int_clk", false,-1);
    tracep->declBit(c+146,"B_int_reset", false,-1);
    tracep->declBus(c+79,"B_int_addr0", false,-1, 3,0);
    tracep->declBus(c+83,"B_int_addr1", false,-1, 3,0);
    tracep->declBit(c+161,"B_int_write_en", false,-1);
    tracep->declBus(c+162,"B_int_write_data", false,-1, 31,0);
    tracep->declBit(c+36,"B_int_read_en", false,-1);
    tracep->declBus(c+84,"B_int_read_data", false,-1, 31,0);
    tracep->declBit(c+85,"B_int_write_done", false,-1);
    tracep->declBit(c+86,"B_int_read_done", false,-1);
    tracep->declBit(c+153,"C_int_clk", false,-1);
    tracep->declBit(c+146,"C_int_reset", false,-1);
    tracep->declBus(c+78,"C_int_addr0", false,-1, 3,0);
    tracep->declBus(c+79,"C_int_addr1", false,-1, 3,0);
    tracep->declBit(c+163,"C_int_write_en", false,-1);
    tracep->declBus(c+164,"C_int_write_data", false,-1, 31,0);
    tracep->declBit(c+37,"C_int_read_en", false,-1);
    tracep->declBus(c+87,"C_int_read_data", false,-1, 31,0);
    tracep->declBit(c+88,"C_int_write_done", false,-1);
    tracep->declBit(c+89,"C_int_read_done", false,-1);
    tracep->declBit(c+153,"D_int_clk", false,-1);
    tracep->declBit(c+146,"D_int_reset", false,-1);
    tracep->declBus(c+79,"D_int_addr0", false,-1, 3,0);
    tracep->declBus(c+83,"D_int_addr1", false,-1, 3,0);
    tracep->declBit(c+165,"D_int_write_en", false,-1);
    tracep->declBus(c+166,"D_int_write_data", false,-1, 31,0);
    tracep->declBit(c+37,"D_int_read_en", false,-1);
    tracep->declBus(c+90,"D_int_read_data", false,-1, 31,0);
    tracep->declBit(c+91,"D_int_write_done", false,-1);
    tracep->declBit(c+92,"D_int_read_done", false,-1);
    tracep->declBit(c+153,"E_int_clk", false,-1);
    tracep->declBit(c+146,"E_int_reset", false,-1);
    tracep->declBus(c+78,"E_int_addr0", false,-1, 3,0);
    tracep->declBus(c+2,"E_int_addr1", false,-1, 3,0);
    tracep->declBit(c+38,"E_int_write_en", false,-1);
    tracep->declBus(c+3,"E_int_write_data", false,-1, 31,0);
    tracep->declBit(c+39,"E_int_read_en", false,-1);
    tracep->declBus(c+93,"E_int_read_data", false,-1, 31,0);
    tracep->declBit(c+94,"E_int_write_done", false,-1);
    tracep->declBit(c+95,"E_int_read_done", false,-1);
    tracep->declBit(c+153,"F_int_clk", false,-1);
    tracep->declBit(c+146,"F_int_reset", false,-1);
    tracep->declBus(c+4,"F_int_addr0", false,-1, 3,0);
    tracep->declBus(c+83,"F_int_addr1", false,-1, 3,0);
    tracep->declBit(c+40,"F_int_write_en", false,-1);
    tracep->declBus(c+5,"F_int_write_data", false,-1, 31,0);
    tracep->declBit(c+41,"F_int_read_en", false,-1);
    tracep->declBus(c+96,"F_int_read_data", false,-1, 31,0);
    tracep->declBit(c+97,"F_int_write_done", false,-1);
    tracep->declBit(c+98,"F_int_read_done", false,-1);
    tracep->declBit(c+153,"G_int_clk", false,-1);
    tracep->declBit(c+146,"G_int_reset", false,-1);
    tracep->declBus(c+78,"G_int_addr0", false,-1, 3,0);
    tracep->declBus(c+83,"G_int_addr1", false,-1, 3,0);
    tracep->declBit(c+42,"G_int_write_en", false,-1);
    tracep->declBus(c+6,"G_int_write_data", false,-1, 31,0);
    tracep->declBit(c+43,"G_int_read_en", false,-1);
    tracep->declBus(c+99,"G_int_read_data", false,-1, 31,0);
    tracep->declBit(c+100,"G_int_write_done", false,-1);
    tracep->declBit(c+101,"G_int_read_done", false,-1);
    tracep->declBus(c+102,"add0_left", false,-1, 31,0);
    tracep->declBus(c+103,"add0_right", false,-1, 31,0);
    tracep->declBus(c+104,"add0_out", false,-1, 31,0);
    tracep->declBus(c+44,"add1_left", false,-1, 3,0);
    tracep->declBus(c+167,"add1_right", false,-1, 3,0);
    tracep->declBus(c+45,"add1_out", false,-1, 3,0);
    tracep->declBus(c+7,"bin_read0_0_in", false,-1, 31,0);
    tracep->declBit(c+46,"bin_read0_0_write_en", false,-1);
    tracep->declBit(c+153,"bin_read0_0_clk", false,-1);
    tracep->declBit(c+146,"bin_read0_0_reset", false,-1);
    tracep->declBus(c+102,"bin_read0_0_out", false,-1, 31,0);
    tracep->declBit(c+105,"bin_read0_0_done", false,-1);
    tracep->declBus(c+168,"const0_out", false,-1, 3,0);
    tracep->declBus(c+169,"const14_out", false,-1, 31,0);
    tracep->declBus(c+167,"const17_out", false,-1, 3,0);
    tracep->declBus(c+47,"i0_in", false,-1, 3,0);
    tracep->declBit(c+48,"i0_write_en", false,-1);
    tracep->declBit(c+153,"i0_clk", false,-1);
    tracep->declBit(c+146,"i0_reset", false,-1);
    tracep->declBus(c+78,"i0_out", false,-1, 3,0);
    tracep->declBit(c+106,"i0_done", false,-1);
    tracep->declBus(c+49,"j0_in", false,-1, 3,0);
    tracep->declBit(c+50,"j0_write_en", false,-1);
    tracep->declBit(c+153,"j0_clk", false,-1);
    tracep->declBit(c+146,"j0_reset", false,-1);
    tracep->declBus(c+83,"j0_out", false,-1, 3,0);
    tracep->declBit(c+107,"j0_done", false,-1);
    tracep->declBus(c+51,"k0_in", false,-1, 3,0);
    tracep->declBit(c+52,"k0_write_en", false,-1);
    tracep->declBit(c+153,"k0_clk", false,-1);
    tracep->declBit(c+146,"k0_reset", false,-1);
    tracep->declBus(c+79,"k0_out", false,-1, 3,0);
    tracep->declBit(c+108,"k0_done", false,-1);
    tracep->declBit(c+153,"mult_pipe0_clk", false,-1);
    tracep->declBit(c+146,"mult_pipe0_reset", false,-1);
    tracep->declBit(c+53,"mult_pipe0_go", false,-1);
    tracep->declBus(c+102,"mult_pipe0_left", false,-1, 31,0);
    tracep->declBus(c+103,"mult_pipe0_right", false,-1, 31,0);
    tracep->declBus(c+109,"mult_pipe0_out", false,-1, 31,0);
    tracep->declBit(c+110,"mult_pipe0_done", false,-1);
    tracep->declBus(c+8,"v_0_in", false,-1, 31,0);
    tracep->declBit(c+54,"v_0_write_en", false,-1);
    tracep->declBit(c+153,"v_0_clk", false,-1);
    tracep->declBit(c+146,"v_0_reset", false,-1);
    tracep->declBus(c+103,"v_0_out", false,-1, 31,0);
    tracep->declBit(c+111,"v_0_done", false,-1);
    tracep->declBus(c+9,"fsm_in", false,-1, 9,0);
    tracep->declBit(c+55,"fsm_write_en", false,-1);
    tracep->declBit(c+153,"fsm_clk", false,-1);
    tracep->declBit(c+146,"fsm_reset", false,-1);
    tracep->declBus(c+112,"fsm_out", false,-1, 9,0);
    tracep->declBit(c+113,"fsm_done", false,-1);
    tracep->declBus(c+10,"fsm0_in", false,-1, 6,0);
    tracep->declBit(c+56,"fsm0_write_en", false,-1);
    tracep->declBit(c+153,"fsm0_clk", false,-1);
    tracep->declBit(c+146,"fsm0_reset", false,-1);
    tracep->declBus(c+114,"fsm0_out", false,-1, 6,0);
    tracep->declBit(c+115,"fsm0_done", false,-1);
    tracep->declBus(c+11,"fsm1_in", false,-1, 3,0);
    tracep->declBit(c+57,"fsm1_write_en", false,-1);
    tracep->declBit(c+153,"fsm1_clk", false,-1);
    tracep->declBit(c+146,"fsm1_reset", false,-1);
    tracep->declBus(c+116,"fsm1_out", false,-1, 3,0);
    tracep->declBit(c+117,"fsm1_done", false,-1);
    tracep->declBus(c+12,"fsm2_in", false,-1, 6,0);
    tracep->declBit(c+58,"fsm2_write_en", false,-1);
    tracep->declBit(c+153,"fsm2_clk", false,-1);
    tracep->declBit(c+146,"fsm2_reset", false,-1);
    tracep->declBus(c+118,"fsm2_out", false,-1, 6,0);
    tracep->declBit(c+119,"fsm2_done", false,-1);
    tracep->declBus(c+149,"fsm3_in", false,-1, 14,0);
    tracep->declBit(c+145,"fsm3_write_en", false,-1);
    tracep->declBit(c+153,"fsm3_clk", false,-1);
    tracep->declBit(c+146,"fsm3_reset", false,-1);
    tracep->declBus(c+120,"fsm3_out", false,-1, 14,0);
    tracep->declBit(c+121,"fsm3_done", false,-1);
    tracep->declBus(c+13,"fsm4_in", false,-1, 9,0);
    tracep->declBit(c+59,"fsm4_write_en", false,-1);
    tracep->declBit(c+153,"fsm4_clk", false,-1);
    tracep->declBit(c+146,"fsm4_reset", false,-1);
    tracep->declBus(c+122,"fsm4_out", false,-1, 9,0);
    tracep->declBit(c+123,"fsm4_done", false,-1);
    tracep->declBus(c+14,"fsm5_in", false,-1, 3,0);
    tracep->declBit(c+60,"fsm5_write_en", false,-1);
    tracep->declBit(c+153,"fsm5_clk", false,-1);
    tracep->declBit(c+146,"fsm5_reset", false,-1);
    tracep->declBus(c+124,"fsm5_out", false,-1, 3,0);
    tracep->declBit(c+125,"fsm5_done", false,-1);
    tracep->declBus(c+15,"fsm6_in", false,-1, 9,0);
    tracep->declBit(c+61,"fsm6_write_en", false,-1);
    tracep->declBit(c+153,"fsm6_clk", false,-1);
    tracep->declBit(c+146,"fsm6_reset", false,-1);
    tracep->declBus(c+126,"fsm6_out", false,-1, 9,0);
    tracep->declBit(c+127,"fsm6_done", false,-1);
    tracep->declBus(c+16,"fsm7_in", false,-1, 6,0);
    tracep->declBit(c+62,"fsm7_write_en", false,-1);
    tracep->declBit(c+153,"fsm7_clk", false,-1);
    tracep->declBit(c+146,"fsm7_reset", false,-1);
    tracep->declBus(c+128,"fsm7_out", false,-1, 6,0);
    tracep->declBit(c+129,"fsm7_done", false,-1);
    tracep->declBus(c+17,"fsm8_in", false,-1, 3,0);
    tracep->declBit(c+63,"fsm8_write_en", false,-1);
    tracep->declBit(c+153,"fsm8_clk", false,-1);
    tracep->declBit(c+146,"fsm8_reset", false,-1);
    tracep->declBus(c+130,"fsm8_out", false,-1, 3,0);
    tracep->declBit(c+131,"fsm8_done", false,-1);
    tracep->declBit(c+170,"ud_out", false,-1);
    tracep->declBus(c+150,"adder_left", false,-1, 14,0);
    tracep->declBus(c+151,"adder_right", false,-1, 14,0);
    tracep->declBus(c+152,"adder_out", false,-1, 14,0);
    tracep->declBit(c+170,"ud0_out", false,-1);
    tracep->declBus(c+18,"adder0_left", false,-1, 9,0);
    tracep->declBus(c+64,"adder0_right", false,-1, 9,0);
    tracep->declBus(c+19,"adder0_out", false,-1, 9,0);
    tracep->declBit(c+170,"ud1_out", false,-1);
    tracep->declBus(c+20,"adder1_left", false,-1, 6,0);
    tracep->declBus(c+65,"adder1_right", false,-1, 6,0);
    tracep->declBus(c+21,"adder1_out", false,-1, 6,0);
    tracep->declBit(c+170,"ud2_out", false,-1);
    tracep->declBus(c+22,"adder2_left", false,-1, 3,0);
    tracep->declBus(c+66,"adder2_right", false,-1, 3,0);
    tracep->declBus(c+23,"adder2_out", false,-1, 3,0);
    tracep->declBit(c+170,"ud3_out", false,-1);
    tracep->declBus(c+24,"adder3_left", false,-1, 9,0);
    tracep->declBus(c+67,"adder3_right", false,-1, 9,0);
    tracep->declBus(c+25,"adder3_out", false,-1, 9,0);
    tracep->declBit(c+170,"ud4_out", false,-1);
    tracep->declBus(c+26,"adder4_left", false,-1, 6,0);
    tracep->declBus(c+68,"adder4_right", false,-1, 6,0);
    tracep->declBus(c+27,"adder4_out", false,-1, 6,0);
    tracep->declBit(c+170,"ud5_out", false,-1);
    tracep->declBus(c+28,"adder5_left", false,-1, 3,0);
    tracep->declBus(c+69,"adder5_right", false,-1, 3,0);
    tracep->declBus(c+29,"adder5_out", false,-1, 3,0);
    tracep->declBit(c+170,"ud6_out", false,-1);
    tracep->declBus(c+30,"adder6_left", false,-1, 9,0);
    tracep->declBus(c+70,"adder6_right", false,-1, 9,0);
    tracep->declBus(c+31,"adder6_out", false,-1, 9,0);
    tracep->declBit(c+170,"ud7_out", false,-1);
    tracep->declBus(c+32,"adder7_left", false,-1, 6,0);
    tracep->declBus(c+71,"adder7_right", false,-1, 6,0);
    tracep->declBus(c+33,"adder7_out", false,-1, 6,0);
    tracep->declBit(c+170,"ud8_out", false,-1);
    tracep->declBus(c+34,"adder8_left", false,-1, 3,0);
    tracep->declBus(c+72,"adder8_right", false,-1, 3,0);
    tracep->declBus(c+35,"adder8_out", false,-1, 3,0);
    tracep->declBit(c+73,"signal_reg_in", false,-1);
    tracep->declBit(c+74,"signal_reg_write_en", false,-1);
    tracep->declBit(c+153,"signal_reg_clk", false,-1);
    tracep->declBit(c+146,"signal_reg_reset", false,-1);
    tracep->declBit(c+132,"signal_reg_out", false,-1);
    tracep->declBit(c+133,"signal_reg_done", false,-1);
    tracep->declBit(c+145,"early_reset_static_seq_go_in", false,-1);
    tracep->declBit(c+145,"early_reset_static_seq_go_out", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq_done_in", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq_done_out", false,-1);
    tracep->declBit(c+59,"early_reset_static_seq0_go_in", false,-1);
    tracep->declBit(c+59,"early_reset_static_seq0_go_out", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq0_done_in", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq0_done_out", false,-1);
    tracep->declBit(c+58,"early_reset_static_seq1_go_in", false,-1);
    tracep->declBit(c+58,"early_reset_static_seq1_go_out", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq1_done_in", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq1_done_out", false,-1);
    tracep->declBit(c+60,"early_reset_static_seq3_go_in", false,-1);
    tracep->declBit(c+60,"early_reset_static_seq3_go_out", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq3_done_in", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq3_done_out", false,-1);
    tracep->declBit(c+61,"early_reset_static_seq8_go_in", false,-1);
    tracep->declBit(c+61,"early_reset_static_seq8_go_out", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq8_done_in", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq8_done_out", false,-1);
    tracep->declBit(c+62,"early_reset_static_seq9_go_in", false,-1);
    tracep->declBit(c+62,"early_reset_static_seq9_go_out", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq9_done_in", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq9_done_out", false,-1);
    tracep->declBit(c+63,"early_reset_static_seq11_go_in", false,-1);
    tracep->declBit(c+63,"early_reset_static_seq11_go_out", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq11_done_in", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq11_done_out", false,-1);
    tracep->declBit(c+55,"early_reset_static_seq16_go_in", false,-1);
    tracep->declBit(c+55,"early_reset_static_seq16_go_out", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq16_done_in", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq16_done_out", false,-1);
    tracep->declBit(c+56,"early_reset_static_seq17_go_in", false,-1);
    tracep->declBit(c+56,"early_reset_static_seq17_go_out", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq17_done_in", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq17_done_out", false,-1);
    tracep->declBit(c+57,"early_reset_static_seq19_go_in", false,-1);
    tracep->declBit(c+57,"early_reset_static_seq19_go_out", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq19_done_in", false,-1);
    tracep->declBit(c+171,"early_reset_static_seq19_done_out", false,-1);
    tracep->declBit(c+145,"wrapper_early_reset_static_seq_go_in", false,-1);
    tracep->declBit(c+145,"wrapper_early_reset_static_seq_go_out", false,-1);
    tracep->declBit(c+77,"wrapper_early_reset_static_seq_done_in", false,-1);
    tracep->declBit(c+77,"wrapper_early_reset_static_seq_done_out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+102,"left", false,-1, 31,0);
    tracep->declBus(c+103,"right", false,-1, 31,0);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBit(c+53,"go", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBus(c+109,"out", false,-1, 31,0);
    tracep->declBit(c+110,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__add0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__add0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+102,"left", false,-1, 31,0);
    tracep->declBus(c+103,"right", false,-1, 31,0);
    tracep->declBus(c+104,"out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__bin_read0_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__bin_read0_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+7,"in", false,-1, 31,0);
    tracep->declBit(c+46,"write_en", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+102,"out", false,-1, 31,0);
    tracep->declBit(c+105,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__v_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__v_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"in", false,-1, 31,0);
    tracep->declBit(c+54,"write_en", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+103,"out", false,-1, 31,0);
    tracep->declBit(c+111,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+173,"D0_SIZE", false,-1, 31,0);
    tracep->declBus(c+173,"D1_SIZE", false,-1, 31,0);
    tracep->declBus(c+174,"D0_IDX_SIZE", false,-1, 31,0);
    tracep->declBus(c+174,"D1_IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+78,"addr0", false,-1, 3,0);
    tracep->declBus(c+79,"addr1", false,-1, 3,0);
    tracep->declBit(c+36,"read_en", false,-1);
    tracep->declBus(c+80,"read_data", false,-1, 31,0);
    tracep->declBit(c+82,"read_done", false,-1);
    tracep->declBit(c+159,"write_en", false,-1);
    tracep->declBus(c+160,"write_data", false,-1, 31,0);
    tracep->declBit(c+81,"write_done", false,-1);
    tracep->declBus(c+134,"addr", false,-1, 7,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+173,"D0_SIZE", false,-1, 31,0);
    tracep->declBus(c+173,"D1_SIZE", false,-1, 31,0);
    tracep->declBus(c+174,"D0_IDX_SIZE", false,-1, 31,0);
    tracep->declBus(c+174,"D1_IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+79,"addr0", false,-1, 3,0);
    tracep->declBus(c+83,"addr1", false,-1, 3,0);
    tracep->declBit(c+36,"read_en", false,-1);
    tracep->declBus(c+84,"read_data", false,-1, 31,0);
    tracep->declBit(c+86,"read_done", false,-1);
    tracep->declBit(c+161,"write_en", false,-1);
    tracep->declBus(c+162,"write_data", false,-1, 31,0);
    tracep->declBit(c+85,"write_done", false,-1);
    tracep->declBus(c+135,"addr", false,-1, 7,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__C_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__C_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+173,"D0_SIZE", false,-1, 31,0);
    tracep->declBus(c+173,"D1_SIZE", false,-1, 31,0);
    tracep->declBus(c+174,"D0_IDX_SIZE", false,-1, 31,0);
    tracep->declBus(c+174,"D1_IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+78,"addr0", false,-1, 3,0);
    tracep->declBus(c+79,"addr1", false,-1, 3,0);
    tracep->declBit(c+37,"read_en", false,-1);
    tracep->declBus(c+87,"read_data", false,-1, 31,0);
    tracep->declBit(c+89,"read_done", false,-1);
    tracep->declBit(c+163,"write_en", false,-1);
    tracep->declBus(c+164,"write_data", false,-1, 31,0);
    tracep->declBit(c+88,"write_done", false,-1);
    tracep->declBus(c+136,"addr", false,-1, 7,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__D_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__D_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+173,"D0_SIZE", false,-1, 31,0);
    tracep->declBus(c+173,"D1_SIZE", false,-1, 31,0);
    tracep->declBus(c+174,"D0_IDX_SIZE", false,-1, 31,0);
    tracep->declBus(c+174,"D1_IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+79,"addr0", false,-1, 3,0);
    tracep->declBus(c+83,"addr1", false,-1, 3,0);
    tracep->declBit(c+37,"read_en", false,-1);
    tracep->declBus(c+90,"read_data", false,-1, 31,0);
    tracep->declBit(c+92,"read_done", false,-1);
    tracep->declBit(c+165,"write_en", false,-1);
    tracep->declBus(c+166,"write_data", false,-1, 31,0);
    tracep->declBit(c+91,"write_done", false,-1);
    tracep->declBus(c+137,"addr", false,-1, 7,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__E_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__E_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+173,"D0_SIZE", false,-1, 31,0);
    tracep->declBus(c+173,"D1_SIZE", false,-1, 31,0);
    tracep->declBus(c+174,"D0_IDX_SIZE", false,-1, 31,0);
    tracep->declBus(c+174,"D1_IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+78,"addr0", false,-1, 3,0);
    tracep->declBus(c+2,"addr1", false,-1, 3,0);
    tracep->declBit(c+39,"read_en", false,-1);
    tracep->declBus(c+93,"read_data", false,-1, 31,0);
    tracep->declBit(c+95,"read_done", false,-1);
    tracep->declBit(c+38,"write_en", false,-1);
    tracep->declBus(c+3,"write_data", false,-1, 31,0);
    tracep->declBit(c+94,"write_done", false,-1);
    tracep->declBus(c+75,"addr", false,-1, 7,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__F_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__F_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+173,"D0_SIZE", false,-1, 31,0);
    tracep->declBus(c+173,"D1_SIZE", false,-1, 31,0);
    tracep->declBus(c+174,"D0_IDX_SIZE", false,-1, 31,0);
    tracep->declBus(c+174,"D1_IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+4,"addr0", false,-1, 3,0);
    tracep->declBus(c+83,"addr1", false,-1, 3,0);
    tracep->declBit(c+41,"read_en", false,-1);
    tracep->declBus(c+96,"read_data", false,-1, 31,0);
    tracep->declBit(c+98,"read_done", false,-1);
    tracep->declBit(c+40,"write_en", false,-1);
    tracep->declBus(c+5,"write_data", false,-1, 31,0);
    tracep->declBit(c+97,"write_done", false,-1);
    tracep->declBus(c+76,"addr", false,-1, 7,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__G_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__G_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+173,"D0_SIZE", false,-1, 31,0);
    tracep->declBus(c+173,"D1_SIZE", false,-1, 31,0);
    tracep->declBus(c+174,"D0_IDX_SIZE", false,-1, 31,0);
    tracep->declBus(c+174,"D1_IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+78,"addr0", false,-1, 3,0);
    tracep->declBus(c+83,"addr1", false,-1, 3,0);
    tracep->declBit(c+43,"read_en", false,-1);
    tracep->declBus(c+99,"read_data", false,-1, 31,0);
    tracep->declBit(c+101,"read_done", false,-1);
    tracep->declBit(c+42,"write_en", false,-1);
    tracep->declBus(c+6,"write_data", false,-1, 31,0);
    tracep->declBit(c+100,"write_done", false,-1);
    tracep->declBus(c+138,"addr", false,-1, 7,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__add1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__add1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+174,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"left", false,-1, 3,0);
    tracep->declBus(c+167,"right", false,-1, 3,0);
    tracep->declBus(c+45,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder2__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+174,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+22,"left", false,-1, 3,0);
    tracep->declBus(c+66,"right", false,-1, 3,0);
    tracep->declBus(c+23,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder5__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder5__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+174,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+28,"left", false,-1, 3,0);
    tracep->declBus(c+69,"right", false,-1, 3,0);
    tracep->declBus(c+29,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder8__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder8__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+174,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+34,"left", false,-1, 3,0);
    tracep->declBus(c+72,"right", false,-1, 3,0);
    tracep->declBus(c+35,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+174,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+168,"VALUE", false,-1, 3,0);
    tracep->declBus(c+168,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const14__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const14__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+169,"VALUE", false,-1, 31,0);
    tracep->declBus(c+169,"out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const17__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const17__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+174,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+167,"VALUE", false,-1, 3,0);
    tracep->declBus(c+167,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__i0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__i0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+174,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+47,"in", false,-1, 3,0);
    tracep->declBit(c+48,"write_en", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+78,"out", false,-1, 3,0);
    tracep->declBit(c+106,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__j0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__j0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+174,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+49,"in", false,-1, 3,0);
    tracep->declBit(c+50,"write_en", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+83,"out", false,-1, 3,0);
    tracep->declBit(c+107,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__k0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__k0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+174,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+51,"in", false,-1, 3,0);
    tracep->declBit(c+52,"write_en", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+79,"out", false,-1, 3,0);
    tracep->declBit(c+108,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+174,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"in", false,-1, 3,0);
    tracep->declBit(c+57,"write_en", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+116,"out", false,-1, 3,0);
    tracep->declBit(c+117,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm5__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm5__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+174,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+14,"in", false,-1, 3,0);
    tracep->declBit(c+60,"write_en", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+124,"out", false,-1, 3,0);
    tracep->declBit(c+125,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm8__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm8__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+174,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+17,"in", false,-1, 3,0);
    tracep->declBit(c+63,"write_en", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+130,"out", false,-1, 3,0);
    tracep->declBit(c+131,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+175,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+9,"in", false,-1, 9,0);
    tracep->declBit(c+55,"write_en", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+112,"out", false,-1, 9,0);
    tracep->declBit(c+113,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm4__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+175,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+13,"in", false,-1, 9,0);
    tracep->declBit(c+59,"write_en", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+122,"out", false,-1, 9,0);
    tracep->declBit(c+123,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm6__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm6__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+175,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+15,"in", false,-1, 9,0);
    tracep->declBit(c+61,"write_en", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+126,"out", false,-1, 9,0);
    tracep->declBit(c+127,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+176,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"in", false,-1, 6,0);
    tracep->declBit(c+56,"write_en", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+114,"out", false,-1, 6,0);
    tracep->declBit(c+115,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm2__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+176,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"in", false,-1, 6,0);
    tracep->declBit(c+58,"write_en", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+118,"out", false,-1, 6,0);
    tracep->declBit(c+119,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm7__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm7__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+176,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+16,"in", false,-1, 6,0);
    tracep->declBit(c+62,"write_en", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+128,"out", false,-1, 6,0);
    tracep->declBit(c+129,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm3__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+177,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+149,"in", false,-1, 14,0);
    tracep->declBit(c+145,"write_en", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+120,"out", false,-1, 14,0);
    tracep->declBit(c+121,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud2__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud3__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud4__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud5__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud5__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud6__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud6__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud7__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud7__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud8__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud8__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+177,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+150,"left", false,-1, 14,0);
    tracep->declBus(c+151,"right", false,-1, 14,0);
    tracep->declBus(c+152,"out", false,-1, 14,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+175,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+18,"left", false,-1, 9,0);
    tracep->declBus(c+64,"right", false,-1, 9,0);
    tracep->declBus(c+19,"out", false,-1, 9,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder3__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+175,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+24,"left", false,-1, 9,0);
    tracep->declBus(c+67,"right", false,-1, 9,0);
    tracep->declBus(c+25,"out", false,-1, 9,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder6__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder6__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+175,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+30,"left", false,-1, 9,0);
    tracep->declBus(c+70,"right", false,-1, 9,0);
    tracep->declBus(c+31,"out", false,-1, 9,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+176,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+20,"left", false,-1, 6,0);
    tracep->declBus(c+65,"right", false,-1, 6,0);
    tracep->declBus(c+21,"out", false,-1, 6,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder4__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+176,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+26,"left", false,-1, 6,0);
    tracep->declBus(c+68,"right", false,-1, 6,0);
    tracep->declBus(c+27,"out", false,-1, 6,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder7__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder7__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+176,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+32,"left", false,-1, 6,0);
    tracep->declBus(c+71,"right", false,-1, 6,0);
    tracep->declBus(c+33,"out", false,-1, 6,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__signal_reg__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__signal_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+73,"in", false,-1, 0,0);
    tracep->declBit(c+74,"write_en", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+132,"out", false,-1, 0,0);
    tracep->declBit(c+133,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+145,"in", false,-1, 0,0);
    tracep->declBus(c+145,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"in", false,-1, 0,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"in", false,-1, 0,0);
    tracep->declBus(c+59,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"in", false,-1, 0,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq1_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq1_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"in", false,-1, 0,0);
    tracep->declBus(c+58,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq1_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq1_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"in", false,-1, 0,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq3_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq3_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"in", false,-1, 0,0);
    tracep->declBus(c+60,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq3_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq3_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"in", false,-1, 0,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq8_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq8_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"in", false,-1, 0,0);
    tracep->declBus(c+61,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq8_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq8_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"in", false,-1, 0,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq9_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq9_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+62,"in", false,-1, 0,0);
    tracep->declBus(c+62,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq9_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq9_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"in", false,-1, 0,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq11_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq11_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"in", false,-1, 0,0);
    tracep->declBus(c+63,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq11_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq11_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"in", false,-1, 0,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq16_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq16_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+55,"in", false,-1, 0,0);
    tracep->declBus(c+55,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq16_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq16_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"in", false,-1, 0,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq17_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq17_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+56,"in", false,-1, 0,0);
    tracep->declBus(c+56,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq17_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq17_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"in", false,-1, 0,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq19_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq19_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+57,"in", false,-1, 0,0);
    tracep->declBus(c+57,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq19_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq19_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+171,"in", false,-1, 0,0);
    tracep->declBus(c+171,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+145,"in", false,-1, 0,0);
    tracep->declBus(c+145,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+77,"in", false,-1, 0,0);
    tracep->declBus(c+77,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__mem__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+179,"SIZE", false,-1, 31,0);
    tracep->declBus(c+173,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+134,"addr0", false,-1, 7,0);
    tracep->declBit(c+36,"read_en", false,-1);
    tracep->declBus(c+80,"read_data", false,-1, 31,0);
    tracep->declBit(c+82,"read_done", false,-1);
    tracep->declBus(c+160,"write_data", false,-1, 31,0);
    tracep->declBit(c+159,"write_en", false,-1);
    tracep->declBit(c+81,"write_done", false,-1);
    tracep->declBus(c+80,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__mem__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+179,"SIZE", false,-1, 31,0);
    tracep->declBus(c+173,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+135,"addr0", false,-1, 7,0);
    tracep->declBit(c+36,"read_en", false,-1);
    tracep->declBus(c+84,"read_data", false,-1, 31,0);
    tracep->declBit(c+86,"read_done", false,-1);
    tracep->declBus(c+162,"write_data", false,-1, 31,0);
    tracep->declBit(c+161,"write_en", false,-1);
    tracep->declBit(c+85,"write_done", false,-1);
    tracep->declBus(c+84,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__C_int__mem__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__C_int__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+179,"SIZE", false,-1, 31,0);
    tracep->declBus(c+173,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+136,"addr0", false,-1, 7,0);
    tracep->declBit(c+37,"read_en", false,-1);
    tracep->declBus(c+87,"read_data", false,-1, 31,0);
    tracep->declBit(c+89,"read_done", false,-1);
    tracep->declBus(c+164,"write_data", false,-1, 31,0);
    tracep->declBit(c+163,"write_en", false,-1);
    tracep->declBit(c+88,"write_done", false,-1);
    tracep->declBus(c+87,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__D_int__mem__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__D_int__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+179,"SIZE", false,-1, 31,0);
    tracep->declBus(c+173,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+137,"addr0", false,-1, 7,0);
    tracep->declBit(c+37,"read_en", false,-1);
    tracep->declBus(c+90,"read_data", false,-1, 31,0);
    tracep->declBit(c+92,"read_done", false,-1);
    tracep->declBus(c+166,"write_data", false,-1, 31,0);
    tracep->declBit(c+165,"write_en", false,-1);
    tracep->declBit(c+91,"write_done", false,-1);
    tracep->declBus(c+90,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__E_int__mem__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__E_int__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+179,"SIZE", false,-1, 31,0);
    tracep->declBus(c+173,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+75,"addr0", false,-1, 7,0);
    tracep->declBit(c+39,"read_en", false,-1);
    tracep->declBus(c+93,"read_data", false,-1, 31,0);
    tracep->declBit(c+95,"read_done", false,-1);
    tracep->declBus(c+3,"write_data", false,-1, 31,0);
    tracep->declBit(c+38,"write_en", false,-1);
    tracep->declBit(c+94,"write_done", false,-1);
    tracep->declBus(c+93,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__F_int__mem__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__F_int__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+179,"SIZE", false,-1, 31,0);
    tracep->declBus(c+173,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+76,"addr0", false,-1, 7,0);
    tracep->declBit(c+41,"read_en", false,-1);
    tracep->declBus(c+96,"read_data", false,-1, 31,0);
    tracep->declBit(c+98,"read_done", false,-1);
    tracep->declBus(c+5,"write_data", false,-1, 31,0);
    tracep->declBit(c+40,"write_en", false,-1);
    tracep->declBit(c+97,"write_done", false,-1);
    tracep->declBus(c+96,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__G_int__mem__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__G_int__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+179,"SIZE", false,-1, 31,0);
    tracep->declBus(c+173,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+138,"addr0", false,-1, 7,0);
    tracep->declBit(c+43,"read_en", false,-1);
    tracep->declBus(c+99,"read_data", false,-1, 31,0);
    tracep->declBit(c+101,"read_done", false,-1);
    tracep->declBus(c+6,"write_data", false,-1, 31,0);
    tracep->declBit(c+42,"write_en", false,-1);
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
    tracep->declBus(c+172,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+172,"INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"FRAC_WIDTH", false,-1, 31,0);
    tracep->declBus(c+180,"SIGNED", false,-1, 31,0);
    tracep->declBus(c+102,"left", false,-1, 31,0);
    tracep->declBus(c+103,"right", false,-1, 31,0);
    tracep->declBit(c+53,"go", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+109,"out", false,-1, 31,0);
    tracep->declBit(c+110,"done", false,-1);
    tracep->declBus(c+139,"rtmp", false,-1, 31,0);
    tracep->declBus(c+140,"ltmp", false,-1, 31,0);
    tracep->declQuad(c+141,"out_tmp", false,-1, 63,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+143+i*1,"done_buf", true,(i+0));
    }
    tracep->declBit(c+53,"start", false,-1);
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
    tracep->pushNamePrefix("B_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__0(vlSelf, tracep);
    tracep->pushNamePrefix("mem ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__mem__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("C_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__C_int__0(vlSelf, tracep);
    tracep->pushNamePrefix("mem ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__C_int__mem__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("D_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__D_int__0(vlSelf, tracep);
    tracep->pushNamePrefix("mem ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__D_int__mem__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("E_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__E_int__0(vlSelf, tracep);
    tracep->pushNamePrefix("mem ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__E_int__mem__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("F_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__F_int__0(vlSelf, tracep);
    tracep->pushNamePrefix("mem ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__F_int__mem__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("G_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__G_int__0(vlSelf, tracep);
    tracep->pushNamePrefix("mem ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__G_int__mem__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
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
    tracep->pushNamePrefix("adder6 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__adder6__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder7 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__adder7__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder8 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__adder8__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bin_read0_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__bin_read0_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("const0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__const0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("const14 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__const14__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("const17 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__const17__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq0_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq0_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq11_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq11_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq11_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq11_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq16_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq16_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq16_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq16_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq17_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq17_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq17_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq17_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq19_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq19_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq19_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq19_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq1_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq1_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq1_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq1_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq3_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq3_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq3_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq3_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq8_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq8_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq8_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq8_go__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq9_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq9_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq9_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq9_go__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("fsm6 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm6__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fsm7 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm7__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fsm8 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm8__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__i0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("j0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__j0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("k0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__k0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mult_pipe0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__0(vlSelf, tracep);
    tracep->pushNamePrefix("comp ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__comp__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("signal_reg ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__signal_reg__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("ud6 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__ud6__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ud7 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__ud7__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ud8 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__ud8__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("v_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__v_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_static_seq_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_static_seq_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq_go__0(vlSelf, tracep);
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
    bufp->fullCData(oldp+2,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard341)
                              ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                              : (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5f29b700__0))),4);
    bufp->fullIData(oldp+3,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard192)
                              ? vlSymsp->TOP__TOP__main__add0.__PVT__out
                              : 0U)),32);
    bufp->fullCData(oldp+4,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard653)
                              ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                              : (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5f29b700__0))),4);
    bufp->fullIData(oldp+5,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard195)
                              ? vlSymsp->TOP__TOP__main__add0.__PVT__out
                              : 0U)),32);
    bufp->fullIData(oldp+6,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard199)
                              ? vlSymsp->TOP__TOP__main__add0.__PVT__out
                              : 0U)),32);
    bufp->fullIData(oldp+7,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard60)
                              ? vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard57)
                                  ? vlSymsp->TOP__TOP__main__C_int__mem.__PVT__read_out
                                  : ((((8U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                       & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)) 
                                      | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard74))
                                      ? vlSymsp->TOP__TOP__main__E_int__mem.__PVT__read_out
                                      : (((((5U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                            & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)) 
                                           | ((5U == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                              & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in))) 
                                          | ((5U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                             & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)))
                                          ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                          : (((8U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                              & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in))
                                              ? vlSymsp->TOP__TOP__main__G_int__mem.__PVT__read_out
                                              : (((8U 
                                                   == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in))
                                                  ? vlSymsp->TOP__TOP__main__F_int__mem.__PVT__read_out
                                                  : 0U))))))),32);
    bufp->fullIData(oldp+8,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard57)
                              ? vlSymsp->TOP__TOP__main__D_int__mem.__PVT__read_out
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard60)
                                  ? vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out
                                  : (((((6U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)) 
                                       | ((6U == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in))) 
                                      | ((6U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                         & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)))
                                      ? vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__out
                                      : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard74)
                                          ? vlSymsp->TOP__TOP__main__F_int__mem.__PVT__read_out
                                          : 0U))))),32);
    bufp->fullSData(oldp+9,((((0x2e3U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                              & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in))
                              ? 0U : (((0x2e3U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                       & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in))
                                       ? (0x3ffU & 
                                          (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in)
                                             ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                             : 0U) 
                                           + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in)
                                               ? 1U
                                               : 0U)))
                                       : 0U))),10);
    bufp->fullCData(oldp+10,((((0x5bU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in))
                               ? 0U : (((0x5bU != (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in))
                                        ? (0x7fU & 
                                           (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in)
                                              ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)
                                              : 0U) 
                                            + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in)
                                                ? 1U
                                                : 0U)))
                                        : 0U))),7);
    bufp->fullCData(oldp+11,((((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in))
                               ? 0U : (((0xaU != (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in))
                                        ? (0xfU & (
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)
                                                     ? (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)
                                                     : 0U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)
                                                     ? 1U
                                                     : 0U)))
                                        : 0U))),4);
    bufp->fullCData(oldp+12,((((0x5bU != (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in))
                               ? (0x7fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                             ? (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)
                                             : 0U) 
                                           + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                               ? 1U
                                               : 0U)))
                               : 0U)),7);
    bufp->fullSData(oldp+13,((((0x2e3U == (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in))
                               ? 0U : (((0x2e3U != (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)) 
                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in))
                                        ? (0x3ffU & 
                                           (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                              ? (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)
                                              : 0U) 
                                            + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                                ? 1U
                                                : 0U)))
                                        : 0U))),10);
    bufp->fullCData(oldp+14,((((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in))
                               ? 0U : (((0xaU != (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in))
                                        ? (0xfU & (
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                                     ? (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)
                                                     : 0U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                                     ? 1U
                                                     : 0U)))
                                        : 0U))),4);
    bufp->fullSData(oldp+15,((((0x2e3U == (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in))
                               ? 0U : (((0x2e3U != (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)) 
                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in))
                                        ? (0x3ffU & 
                                           (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in)
                                              ? (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)
                                              : 0U) 
                                            + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in)
                                                ? 1U
                                                : 0U)))
                                        : 0U))),10);
    bufp->fullCData(oldp+16,((((0x5bU != (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in))
                               ? (0x7fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in)
                                             ? (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)
                                             : 0U) 
                                           + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in)
                                               ? 1U
                                               : 0U)))
                               : 0U)),7);
    bufp->fullCData(oldp+17,((((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in))
                               ? 0U : (((0xaU != (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in))
                                        ? (0xfU & (
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in)
                                                     ? (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)
                                                     : 0U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in)
                                                     ? 1U
                                                     : 0U)))
                                        : 0U))),4);
    bufp->fullSData(oldp+18,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)
                               : 0U)),10);
    bufp->fullSData(oldp+19,((0x3ffU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                          ? (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)
                                          : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                                    ? 1U
                                                    : 0U)))),10);
    bufp->fullCData(oldp+20,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)
                               : 0U)),7);
    bufp->fullCData(oldp+21,((0x7fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)
                                         : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                                   ? 1U
                                                   : 0U)))),7);
    bufp->fullCData(oldp+22,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)
                               : 0U)),4);
    bufp->fullCData(oldp+23,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                        ? (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)
                                        : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                                  ? 1U
                                                  : 0U)))),4);
    bufp->fullSData(oldp+24,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)
                               : 0U)),10);
    bufp->fullSData(oldp+25,((0x3ffU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in)
                                          ? (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)
                                          : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in)
                                                    ? 1U
                                                    : 0U)))),10);
    bufp->fullCData(oldp+26,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)
                               : 0U)),7);
    bufp->fullCData(oldp+27,((0x7fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)
                                         : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in)
                                                   ? 1U
                                                   : 0U)))),7);
    bufp->fullCData(oldp+28,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)
                               : 0U)),4);
    bufp->fullCData(oldp+29,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in)
                                        ? (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)
                                        : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in)
                                                  ? 1U
                                                  : 0U)))),4);
    bufp->fullSData(oldp+30,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                               : 0U)),10);
    bufp->fullSData(oldp+31,((0x3ffU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in)
                                          ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                          : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in)
                                                    ? 1U
                                                    : 0U)))),10);
    bufp->fullCData(oldp+32,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)
                               : 0U)),7);
    bufp->fullCData(oldp+33,((0x7fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)
                                         : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in)
                                                   ? 1U
                                                   : 0U)))),7);
    bufp->fullCData(oldp+34,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)
                               : 0U)),4);
    bufp->fullCData(oldp+35,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)
                                        ? (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)
                                        : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)
                                                  ? 1U
                                                  : 0U)))),4);
    bufp->fullBit(oldp+36,(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__TOP__main.__PVT__C_int_read_en));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__TOP__main.__PVT__E_int_write_en));
    bufp->fullBit(oldp+39,(vlSymsp->TOP__TOP__main.__PVT__E_int_read_en));
    bufp->fullBit(oldp+40,(vlSymsp->TOP__TOP__main.__PVT__F_int_write_en));
    bufp->fullBit(oldp+41,(vlSymsp->TOP__TOP__main.__PVT__F_int_read_en));
    bufp->fullBit(oldp+42,(vlSymsp->TOP__TOP__main.__PVT__G_int_write_en));
    bufp->fullBit(oldp+43,(vlSymsp->TOP__TOP__main.__PVT__G_int_read_en));
    bufp->fullCData(oldp+44,(vlSymsp->TOP__TOP__main.__PVT__add1_left),4);
    bufp->fullCData(oldp+45,((0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__add1_left)))),4);
    bufp->fullBit(oldp+46,(vlSymsp->TOP__TOP__main.__PVT__bin_read0_0_write_en));
    bufp->fullCData(oldp+47,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard30)
                               ? (0xfU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__TOP__main.__PVT__add1_left)))
                               : 0U)),4);
    bufp->fullBit(oldp+48,(vlSymsp->TOP__TOP__main.__PVT__i0_write_en));
    bufp->fullCData(oldp+49,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard121)
                               ? (0xfU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__TOP__main.__PVT__add1_left)))
                               : 0U)),4);
    bufp->fullBit(oldp+50,(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
    bufp->fullCData(oldp+51,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard132)
                               ? (0xfU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__TOP__main.__PVT__add1_left)))
                               : 0U)),4);
    bufp->fullBit(oldp+52,(vlSymsp->TOP__TOP__main.__PVT__k0_write_en));
    bufp->fullBit(oldp+53,(vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go));
    bufp->fullBit(oldp+54,(vlSymsp->TOP__TOP__main.__PVT__v_0_write_en));
    bufp->fullBit(oldp+55,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in));
    bufp->fullBit(oldp+57,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in));
    bufp->fullBit(oldp+58,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in));
    bufp->fullBit(oldp+59,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in));
    bufp->fullBit(oldp+60,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in));
    bufp->fullBit(oldp+62,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in));
    bufp->fullBit(oldp+63,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in));
    bufp->fullSData(oldp+64,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                               ? 1U : 0U)),10);
    bufp->fullCData(oldp+65,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                               ? 1U : 0U)),7);
    bufp->fullCData(oldp+66,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                               ? 1U : 0U)),4);
    bufp->fullSData(oldp+67,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in)
                               ? 1U : 0U)),10);
    bufp->fullCData(oldp+68,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in)
                               ? 1U : 0U)),7);
    bufp->fullCData(oldp+69,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in)
                               ? 1U : 0U)),4);
    bufp->fullSData(oldp+70,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in)
                               ? 1U : 0U)),10);
    bufp->fullCData(oldp+71,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in)
                               ? 1U : 0U)),7);
    bufp->fullCData(oldp+72,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)
                               ? 1U : 0U)),4);
    bufp->fullBit(oldp+73,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_in));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_write_en));
    bufp->fullCData(oldp+75,(vlSymsp->TOP__TOP__main__E_int.__PVT__addr),8);
    bufp->fullCData(oldp+76,(vlSymsp->TOP__TOP__main__F_int.__PVT__addr),8);
    bufp->fullBit(oldp+77,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_done_in));
    bufp->fullCData(oldp+78,(vlSymsp->TOP__TOP__main__i0.__PVT__out),4);
    bufp->fullCData(oldp+79,(vlSymsp->TOP__TOP__main__k0.__PVT__out),4);
    bufp->fullIData(oldp+80,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out),32);
    bufp->fullBit(oldp+81,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__write_done));
    bufp->fullBit(oldp+82,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_done));
    bufp->fullCData(oldp+83,(vlSymsp->TOP__TOP__main__j0.__PVT__out),4);
    bufp->fullIData(oldp+84,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out),32);
    bufp->fullBit(oldp+85,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__write_done));
    bufp->fullBit(oldp+86,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_done));
    bufp->fullIData(oldp+87,(vlSymsp->TOP__TOP__main__C_int__mem.__PVT__read_out),32);
    bufp->fullBit(oldp+88,(vlSymsp->TOP__TOP__main__C_int__mem.__PVT__write_done));
    bufp->fullBit(oldp+89,(vlSymsp->TOP__TOP__main__C_int__mem.__PVT__read_done));
    bufp->fullIData(oldp+90,(vlSymsp->TOP__TOP__main__D_int__mem.__PVT__read_out),32);
    bufp->fullBit(oldp+91,(vlSymsp->TOP__TOP__main__D_int__mem.__PVT__write_done));
    bufp->fullBit(oldp+92,(vlSymsp->TOP__TOP__main__D_int__mem.__PVT__read_done));
    bufp->fullIData(oldp+93,(vlSymsp->TOP__TOP__main__E_int__mem.__PVT__read_out),32);
    bufp->fullBit(oldp+94,(vlSymsp->TOP__TOP__main__E_int__mem.__PVT__write_done));
    bufp->fullBit(oldp+95,(vlSymsp->TOP__TOP__main__E_int__mem.__PVT__read_done));
    bufp->fullIData(oldp+96,(vlSymsp->TOP__TOP__main__F_int__mem.__PVT__read_out),32);
    bufp->fullBit(oldp+97,(vlSymsp->TOP__TOP__main__F_int__mem.__PVT__write_done));
    bufp->fullBit(oldp+98,(vlSymsp->TOP__TOP__main__F_int__mem.__PVT__read_done));
    bufp->fullIData(oldp+99,(vlSymsp->TOP__TOP__main__G_int__mem.__PVT__read_out),32);
    bufp->fullBit(oldp+100,(vlSymsp->TOP__TOP__main__G_int__mem.__PVT__write_done));
    bufp->fullBit(oldp+101,(vlSymsp->TOP__TOP__main__G_int__mem.__PVT__read_done));
    bufp->fullIData(oldp+102,(vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__out),32);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__TOP__main__v_0.__PVT__out),32);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__TOP__main__add0.__PVT__out),32);
    bufp->fullBit(oldp+105,(vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__done));
    bufp->fullBit(oldp+106,(vlSymsp->TOP__TOP__main__i0.__PVT__done));
    bufp->fullBit(oldp+107,(vlSymsp->TOP__TOP__main__j0.__PVT__done));
    bufp->fullBit(oldp+108,(vlSymsp->TOP__TOP__main__k0.__PVT__done));
    bufp->fullIData(oldp+109,((IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)),32);
    bufp->fullBit(oldp+110,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf
                            [1U]));
    bufp->fullBit(oldp+111,(vlSymsp->TOP__TOP__main__v_0.__PVT__done));
    bufp->fullSData(oldp+112,(vlSymsp->TOP__TOP__main__fsm.__PVT__out),10);
    bufp->fullBit(oldp+113,(vlSymsp->TOP__TOP__main__fsm.__PVT__done));
    bufp->fullCData(oldp+114,(vlSymsp->TOP__TOP__main__fsm0.__PVT__out),7);
    bufp->fullBit(oldp+115,(vlSymsp->TOP__TOP__main__fsm0.__PVT__done));
    bufp->fullCData(oldp+116,(vlSymsp->TOP__TOP__main__fsm1.__PVT__out),4);
    bufp->fullBit(oldp+117,(vlSymsp->TOP__TOP__main__fsm1.__PVT__done));
    bufp->fullCData(oldp+118,(vlSymsp->TOP__TOP__main__fsm2.__PVT__out),7);
    bufp->fullBit(oldp+119,(vlSymsp->TOP__TOP__main__fsm2.__PVT__done));
    bufp->fullSData(oldp+120,(vlSymsp->TOP__TOP__main__fsm3.__PVT__out),15);
    bufp->fullBit(oldp+121,(vlSymsp->TOP__TOP__main__fsm3.__PVT__done));
    bufp->fullSData(oldp+122,(vlSymsp->TOP__TOP__main__fsm4.__PVT__out),10);
    bufp->fullBit(oldp+123,(vlSymsp->TOP__TOP__main__fsm4.__PVT__done));
    bufp->fullCData(oldp+124,(vlSymsp->TOP__TOP__main__fsm5.__PVT__out),4);
    bufp->fullBit(oldp+125,(vlSymsp->TOP__TOP__main__fsm5.__PVT__done));
    bufp->fullSData(oldp+126,(vlSymsp->TOP__TOP__main__fsm6.__PVT__out),10);
    bufp->fullBit(oldp+127,(vlSymsp->TOP__TOP__main__fsm6.__PVT__done));
    bufp->fullCData(oldp+128,(vlSymsp->TOP__TOP__main__fsm7.__PVT__out),7);
    bufp->fullBit(oldp+129,(vlSymsp->TOP__TOP__main__fsm7.__PVT__done));
    bufp->fullCData(oldp+130,(vlSymsp->TOP__TOP__main__fsm8.__PVT__out),4);
    bufp->fullBit(oldp+131,(vlSymsp->TOP__TOP__main__fsm8.__PVT__done));
    bufp->fullBit(oldp+132,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out));
    bufp->fullBit(oldp+133,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__done));
    bufp->fullCData(oldp+134,(vlSymsp->TOP__TOP__main__A_int.__PVT__addr),8);
    bufp->fullCData(oldp+135,(vlSymsp->TOP__TOP__main__B_int.__PVT__addr),8);
    bufp->fullCData(oldp+136,(vlSymsp->TOP__TOP__main__C_int.__PVT__addr),8);
    bufp->fullCData(oldp+137,(vlSymsp->TOP__TOP__main__D_int.__PVT__addr),8);
    bufp->fullCData(oldp+138,(vlSymsp->TOP__TOP__main__G_int.__PVT__addr),8);
    bufp->fullIData(oldp+139,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__rtmp),32);
    bufp->fullIData(oldp+140,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__ltmp),32);
    bufp->fullQData(oldp+141,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp),64);
    bufp->fullBit(oldp+143,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[0]));
    bufp->fullBit(oldp+144,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[1]));
    bufp->fullBit(oldp+145,(vlSymsp->TOP__TOP.__PVT__go));
    bufp->fullBit(oldp+146,(vlSymsp->TOP__TOP.__PVT__reset));
    bufp->fullQData(oldp+147,(vlSymsp->TOP__TOP.__PVT__cycle_count),64);
    bufp->fullSData(oldp+149,((((0x4565U != (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                ? (0x7fffU & (((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                                ? (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)
                                                : 0U) 
                                              + ((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                                  ? 1U
                                                  : 0U)))
                                : 0U)),15);
    bufp->fullSData(oldp+150,(((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                ? (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)
                                : 0U)),15);
    bufp->fullSData(oldp+151,(((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                ? 1U : 0U)),15);
    bufp->fullSData(oldp+152,((0x7fffU & (((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)
                                            : 0U) + 
                                          ((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                            ? 1U : 0U)))),15);
    bufp->fullBit(oldp+153,(vlSymsp->TOP__TOP.__PVT__clk));
    bufp->fullIData(oldp+154,(vlSymsp->TOP__TOP.__PVT__NOTRACE),32);
    bufp->fullQData(oldp+155,(vlSymsp->TOP__TOP.__PVT__CYCLE_LIMIT),64);
    bufp->fullIData(oldp+157,(vlSymsp->TOP__TOP.__PVT__CODE),32);
    bufp->fullIData(oldp+158,(3U),32);
    bufp->fullBit(oldp+159,(vlSymsp->TOP__TOP__main.__PVT__A_int_write_en));
    bufp->fullIData(oldp+160,(vlSymsp->TOP__TOP__main.__PVT__A_int_write_data),32);
    bufp->fullBit(oldp+161,(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en));
    bufp->fullIData(oldp+162,(vlSymsp->TOP__TOP__main.__PVT__B_int_write_data),32);
    bufp->fullBit(oldp+163,(vlSymsp->TOP__TOP__main.__PVT__C_int_write_en));
    bufp->fullIData(oldp+164,(vlSymsp->TOP__TOP__main.__PVT__C_int_write_data),32);
    bufp->fullBit(oldp+165,(vlSymsp->TOP__TOP__main.__PVT__D_int_write_en));
    bufp->fullIData(oldp+166,(vlSymsp->TOP__TOP__main.__PVT__D_int_write_data),32);
    bufp->fullCData(oldp+167,(1U),4);
    bufp->fullCData(oldp+168,(0U),4);
    bufp->fullIData(oldp+169,(0U),32);
    bufp->fullBit(oldp+170,(0U));
    bufp->fullBit(oldp+171,(0U));
    bufp->fullIData(oldp+172,(0x20U),32);
    bufp->fullIData(oldp+173,(8U),32);
    bufp->fullIData(oldp+174,(4U),32);
    bufp->fullIData(oldp+175,(0xaU),32);
    bufp->fullIData(oldp+176,(7U),32);
    bufp->fullIData(oldp+177,(0xfU),32);
    bufp->fullIData(oldp+178,(1U),32);
    bufp->fullIData(oldp+179,(0x40U),32);
    bufp->fullIData(oldp+180,(0U),32);
}

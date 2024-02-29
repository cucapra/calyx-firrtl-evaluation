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
    tracep->declBit(c+116,"go", false,-1);
    tracep->declBit(c+64,"done", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+120,"RESET_CYCLES", false,-1, 31,0);
    tracep->declQuad(c+118,"cycle_count", false,-1, 63,0);
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
    tracep->declBit(c+116,"go", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBit(c+64,"done", false,-1);
    tracep->declBus(c+1,"CODE", false,-1, 31,0);
    tracep->declBit(c+111,"A_int_clk", false,-1);
    tracep->declBit(c+117,"A_int_reset", false,-1);
    tracep->declBus(c+65,"A_int_addr0", false,-1, 3,0);
    tracep->declBus(c+66,"A_int_addr1", false,-1, 3,0);
    tracep->declBit(c+121,"A_int_write_en", false,-1);
    tracep->declBus(c+122,"A_int_write_data", false,-1, 31,0);
    tracep->declBit(c+24,"A_int_read_en", false,-1);
    tracep->declBus(c+67,"A_int_read_data", false,-1, 31,0);
    tracep->declBit(c+68,"A_int_write_done", false,-1);
    tracep->declBit(c+69,"A_int_read_done", false,-1);
    tracep->declBus(c+2,"A_int_read0_0_in", false,-1, 31,0);
    tracep->declBit(c+25,"A_int_read0_0_write_en", false,-1);
    tracep->declBit(c+111,"A_int_read0_0_clk", false,-1);
    tracep->declBit(c+117,"A_int_read0_0_reset", false,-1);
    tracep->declBus(c+70,"A_int_read0_0_out", false,-1, 31,0);
    tracep->declBit(c+71,"A_int_read0_0_done", false,-1);
    tracep->declBus(c+3,"B_i_j_0_in", false,-1, 31,0);
    tracep->declBit(c+26,"B_i_j_0_write_en", false,-1);
    tracep->declBit(c+111,"B_i_j_0_clk", false,-1);
    tracep->declBit(c+117,"B_i_j_0_reset", false,-1);
    tracep->declBus(c+72,"B_i_j_0_out", false,-1, 31,0);
    tracep->declBit(c+73,"B_i_j_0_done", false,-1);
    tracep->declBit(c+111,"B_int_clk", false,-1);
    tracep->declBit(c+117,"B_int_reset", false,-1);
    tracep->declBus(c+4,"B_int_addr0", false,-1, 3,0);
    tracep->declBus(c+74,"B_int_addr1", false,-1, 3,0);
    tracep->declBit(c+27,"B_int_write_en", false,-1);
    tracep->declBus(c+5,"B_int_write_data", false,-1, 31,0);
    tracep->declBit(c+28,"B_int_read_en", false,-1);
    tracep->declBus(c+75,"B_int_read_data", false,-1, 31,0);
    tracep->declBit(c+76,"B_int_write_done", false,-1);
    tracep->declBit(c+77,"B_int_read_done", false,-1);
    tracep->declBus(c+75,"B_k_j_0_in", false,-1, 31,0);
    tracep->declBit(c+29,"B_k_j_0_write_en", false,-1);
    tracep->declBit(c+111,"B_k_j_0_clk", false,-1);
    tracep->declBit(c+117,"B_k_j_0_reset", false,-1);
    tracep->declBus(c+78,"B_k_j_0_out", false,-1, 31,0);
    tracep->declBit(c+79,"B_k_j_0_done", false,-1);
    tracep->declBus(c+30,"add0_left", false,-1, 3,0);
    tracep->declBus(c+123,"add0_right", false,-1, 3,0);
    tracep->declBus(c+31,"add0_out", false,-1, 3,0);
    tracep->declBus(c+70,"add1_left", false,-1, 31,0);
    tracep->declBus(c+72,"add1_right", false,-1, 31,0);
    tracep->declBus(c+80,"add1_out", false,-1, 31,0);
    tracep->declBit(c+111,"alpha_int_clk", false,-1);
    tracep->declBit(c+117,"alpha_int_reset", false,-1);
    tracep->declBit(c+124,"alpha_int_addr0", false,-1);
    tracep->declBit(c+125,"alpha_int_write_en", false,-1);
    tracep->declBus(c+126,"alpha_int_write_data", false,-1, 31,0);
    tracep->declBit(c+32,"alpha_int_read_en", false,-1);
    tracep->declBus(c+81,"alpha_int_read_data", false,-1, 31,0);
    tracep->declBit(c+82,"alpha_int_write_done", false,-1);
    tracep->declBit(c+83,"alpha_int_read_done", false,-1);
    tracep->declBus(c+127,"const0_out", false,-1, 3,0);
    tracep->declBus(c+128,"const1_out", false,-1, 3,0);
    tracep->declBus(c+129,"const3_out", false,-1, 3,0);
    tracep->declBus(c+123,"const4_out", false,-1, 3,0);
    tracep->declBus(c+130,"const5_out", false,-1, 3,0);
    tracep->declBit(c+131,"const7_out", false,-1);
    tracep->declBus(c+33,"i0_in", false,-1, 3,0);
    tracep->declBit(c+34,"i0_write_en", false,-1);
    tracep->declBit(c+111,"i0_clk", false,-1);
    tracep->declBit(c+117,"i0_reset", false,-1);
    tracep->declBus(c+66,"i0_out", false,-1, 3,0);
    tracep->declBit(c+84,"i0_done", false,-1);
    tracep->declBus(c+35,"j0_in", false,-1, 3,0);
    tracep->declBit(c+36,"j0_write_en", false,-1);
    tracep->declBit(c+111,"j0_clk", false,-1);
    tracep->declBit(c+117,"j0_reset", false,-1);
    tracep->declBus(c+74,"j0_out", false,-1, 3,0);
    tracep->declBit(c+85,"j0_done", false,-1);
    tracep->declBus(c+31,"k_0_in", false,-1, 3,0);
    tracep->declBit(c+37,"k_0_write_en", false,-1);
    tracep->declBit(c+111,"k_0_clk", false,-1);
    tracep->declBit(c+117,"k_0_reset", false,-1);
    tracep->declBus(c+65,"k_0_out", false,-1, 3,0);
    tracep->declBit(c+86,"k_0_done", false,-1);
    tracep->declBus(c+6,"le0_left", false,-1, 3,0);
    tracep->declBus(c+38,"le0_right", false,-1, 3,0);
    tracep->declBit(c+39,"le0_out", false,-1);
    tracep->declBus(c+7,"lt0_left", false,-1, 3,0);
    tracep->declBus(c+40,"lt0_right", false,-1, 3,0);
    tracep->declBit(c+8,"lt0_out", false,-1);
    tracep->declBit(c+111,"mult_pipe0_clk", false,-1);
    tracep->declBit(c+117,"mult_pipe0_reset", false,-1);
    tracep->declBit(c+41,"mult_pipe0_go", false,-1);
    tracep->declBus(c+9,"mult_pipe0_left", false,-1, 31,0);
    tracep->declBus(c+10,"mult_pipe0_right", false,-1, 31,0);
    tracep->declBus(c+87,"mult_pipe0_out", false,-1, 31,0);
    tracep->declBit(c+88,"mult_pipe0_done", false,-1);
    tracep->declBit(c+42,"comb_reg_in", false,-1);
    tracep->declBit(c+43,"comb_reg_write_en", false,-1);
    tracep->declBit(c+111,"comb_reg_clk", false,-1);
    tracep->declBit(c+117,"comb_reg_reset", false,-1);
    tracep->declBit(c+89,"comb_reg_out", false,-1);
    tracep->declBit(c+90,"comb_reg_done", false,-1);
    tracep->declBit(c+44,"comb_reg0_in", false,-1);
    tracep->declBit(c+45,"comb_reg0_write_en", false,-1);
    tracep->declBit(c+111,"comb_reg0_clk", false,-1);
    tracep->declBit(c+117,"comb_reg0_reset", false,-1);
    tracep->declBit(c+91,"comb_reg0_out", false,-1);
    tracep->declBit(c+92,"comb_reg0_done", false,-1);
    tracep->declBit(c+11,"comb_reg1_in", false,-1);
    tracep->declBit(c+46,"comb_reg1_write_en", false,-1);
    tracep->declBit(c+111,"comb_reg1_clk", false,-1);
    tracep->declBit(c+117,"comb_reg1_reset", false,-1);
    tracep->declBit(c+93,"comb_reg1_out", false,-1);
    tracep->declBit(c+94,"comb_reg1_done", false,-1);
    tracep->declBus(c+12,"fsm_in", false,-1, 3,0);
    tracep->declBit(c+47,"fsm_write_en", false,-1);
    tracep->declBit(c+111,"fsm_clk", false,-1);
    tracep->declBit(c+117,"fsm_reset", false,-1);
    tracep->declBus(c+95,"fsm_out", false,-1, 3,0);
    tracep->declBit(c+96,"fsm_done", false,-1);
    tracep->declBit(c+131,"ud_out", false,-1);
    tracep->declBus(c+13,"adder_left", false,-1, 3,0);
    tracep->declBus(c+48,"adder_right", false,-1, 3,0);
    tracep->declBus(c+14,"adder_out", false,-1, 3,0);
    tracep->declBit(c+131,"ud0_out", false,-1);
    tracep->declBus(c+15,"adder0_left", false,-1, 3,0);
    tracep->declBus(c+49,"adder0_right", false,-1, 3,0);
    tracep->declBus(c+16,"adder0_out", false,-1, 3,0);
    tracep->declBit(c+131,"ud1_out", false,-1);
    tracep->declBus(c+17,"adder1_left", false,-1, 3,0);
    tracep->declBus(c+50,"adder1_right", false,-1, 3,0);
    tracep->declBus(c+18,"adder1_out", false,-1, 3,0);
    tracep->declBit(c+131,"ud2_out", false,-1);
    tracep->declBus(c+19,"adder2_left", false,-1, 3,0);
    tracep->declBus(c+51,"adder2_right", false,-1, 3,0);
    tracep->declBus(c+20,"adder2_out", false,-1, 3,0);
    tracep->declBit(c+131,"ud3_out", false,-1);
    tracep->declBus(c+21,"adder3_left", false,-1, 3,0);
    tracep->declBus(c+52,"adder3_right", false,-1, 3,0);
    tracep->declBus(c+22,"adder3_out", false,-1, 3,0);
    tracep->declBit(c+53,"signal_reg_in", false,-1);
    tracep->declBit(c+54,"signal_reg_write_en", false,-1);
    tracep->declBit(c+111,"signal_reg_clk", false,-1);
    tracep->declBit(c+117,"signal_reg_reset", false,-1);
    tracep->declBit(c+97,"signal_reg_out", false,-1);
    tracep->declBit(c+98,"signal_reg_done", false,-1);
    tracep->declBus(c+23,"fsm0_in", false,-1, 3,0);
    tracep->declBit(c+55,"fsm0_write_en", false,-1);
    tracep->declBit(c+111,"fsm0_clk", false,-1);
    tracep->declBit(c+117,"fsm0_reset", false,-1);
    tracep->declBus(c+99,"fsm0_out", false,-1, 3,0);
    tracep->declBit(c+100,"fsm0_done", false,-1);
    tracep->declBit(c+56,"invoke0_go_in", false,-1);
    tracep->declBit(c+56,"invoke0_go_out", false,-1);
    tracep->declBit(c+84,"invoke0_done_in", false,-1);
    tracep->declBit(c+84,"invoke0_done_out", false,-1);
    tracep->declBit(c+57,"invoke1_go_in", false,-1);
    tracep->declBit(c+57,"invoke1_go_out", false,-1);
    tracep->declBit(c+85,"invoke1_done_in", false,-1);
    tracep->declBit(c+85,"invoke1_done_out", false,-1);
    tracep->declBit(c+58,"invoke2_go_in", false,-1);
    tracep->declBit(c+58,"invoke2_go_out", false,-1);
    tracep->declBit(c+86,"invoke2_done_in", false,-1);
    tracep->declBit(c+86,"invoke2_done_out", false,-1);
    tracep->declBit(c+59,"invoke14_go_in", false,-1);
    tracep->declBit(c+59,"invoke14_go_out", false,-1);
    tracep->declBit(c+84,"invoke14_done_in", false,-1);
    tracep->declBit(c+84,"invoke14_done_out", false,-1);
    tracep->declBit(c+43,"early_reset_cond00_go_in", false,-1);
    tracep->declBit(c+43,"early_reset_cond00_go_out", false,-1);
    tracep->declBit(c+124,"early_reset_cond00_done_in", false,-1);
    tracep->declBit(c+124,"early_reset_cond00_done_out", false,-1);
    tracep->declBit(c+45,"early_reset_cond10_go_in", false,-1);
    tracep->declBit(c+45,"early_reset_cond10_go_out", false,-1);
    tracep->declBit(c+124,"early_reset_cond10_done_in", false,-1);
    tracep->declBit(c+124,"early_reset_cond10_done_out", false,-1);
    tracep->declBit(c+60,"early_reset_cond20_go_in", false,-1);
    tracep->declBit(c+60,"early_reset_cond20_go_out", false,-1);
    tracep->declBit(c+124,"early_reset_cond20_done_in", false,-1);
    tracep->declBit(c+124,"early_reset_cond20_done_out", false,-1);
    tracep->declBit(c+61,"early_reset_static_seq_go_in", false,-1);
    tracep->declBit(c+61,"early_reset_static_seq_go_out", false,-1);
    tracep->declBit(c+124,"early_reset_static_seq_done_in", false,-1);
    tracep->declBit(c+124,"early_reset_static_seq_done_out", false,-1);
    tracep->declBit(c+62,"early_reset_static_par1_go_in", false,-1);
    tracep->declBit(c+62,"early_reset_static_par1_go_out", false,-1);
    tracep->declBit(c+124,"early_reset_static_par1_done_in", false,-1);
    tracep->declBit(c+124,"early_reset_static_par1_done_out", false,-1);
    tracep->declBit(c+43,"wrapper_early_reset_cond00_go_in", false,-1);
    tracep->declBit(c+43,"wrapper_early_reset_cond00_go_out", false,-1);
    tracep->declBit(c+101,"wrapper_early_reset_cond00_done_in", false,-1);
    tracep->declBit(c+101,"wrapper_early_reset_cond00_done_out", false,-1);
    tracep->declBit(c+45,"wrapper_early_reset_cond10_go_in", false,-1);
    tracep->declBit(c+45,"wrapper_early_reset_cond10_go_out", false,-1);
    tracep->declBit(c+101,"wrapper_early_reset_cond10_done_in", false,-1);
    tracep->declBit(c+101,"wrapper_early_reset_cond10_done_out", false,-1);
    tracep->declBit(c+60,"wrapper_early_reset_cond20_go_in", false,-1);
    tracep->declBit(c+60,"wrapper_early_reset_cond20_go_out", false,-1);
    tracep->declBit(c+101,"wrapper_early_reset_cond20_done_in", false,-1);
    tracep->declBit(c+101,"wrapper_early_reset_cond20_done_out", false,-1);
    tracep->declBit(c+61,"while_wrapper_early_reset_static_seq_go_in", false,-1);
    tracep->declBit(c+61,"while_wrapper_early_reset_static_seq_go_out", false,-1);
    tracep->declBit(c+102,"while_wrapper_early_reset_static_seq_done_in", false,-1);
    tracep->declBit(c+102,"while_wrapper_early_reset_static_seq_done_out", false,-1);
    tracep->declBit(c+62,"wrapper_early_reset_static_par1_go_in", false,-1);
    tracep->declBit(c+62,"wrapper_early_reset_static_par1_go_out", false,-1);
    tracep->declBit(c+101,"wrapper_early_reset_static_par1_done_in", false,-1);
    tracep->declBit(c+101,"wrapper_early_reset_static_par1_done_out", false,-1);
    tracep->declBit(c+116,"tdcc_go_in", false,-1);
    tracep->declBit(c+116,"tdcc_go_out", false,-1);
    tracep->declBit(c+64,"tdcc_done_in", false,-1);
    tracep->declBit(c+64,"tdcc_done_out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+132,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+9,"left", false,-1, 31,0);
    tracep->declBus(c+10,"right", false,-1, 31,0);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBit(c+41,"go", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBus(c+87,"out", false,-1, 31,0);
    tracep->declBit(c+88,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__add1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__add1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+132,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+70,"left", false,-1, 31,0);
    tracep->declBus(c+72,"right", false,-1, 31,0);
    tracep->declBus(c+80,"out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__A_int_read0_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__A_int_read0_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+132,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"in", false,-1, 31,0);
    tracep->declBit(c+25,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+70,"out", false,-1, 31,0);
    tracep->declBit(c+71,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__B_i_j_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__B_i_j_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+132,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"in", false,-1, 31,0);
    tracep->declBit(c+26,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+72,"out", false,-1, 31,0);
    tracep->declBit(c+73,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__B_k_j_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__B_k_j_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+132,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+75,"in", false,-1, 31,0);
    tracep->declBit(c+29,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+78,"out", false,-1, 31,0);
    tracep->declBit(c+79,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+132,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+133,"D0_SIZE", false,-1, 31,0);
    tracep->declBus(c+133,"D1_SIZE", false,-1, 31,0);
    tracep->declBus(c+134,"D0_IDX_SIZE", false,-1, 31,0);
    tracep->declBus(c+134,"D1_IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+65,"addr0", false,-1, 3,0);
    tracep->declBus(c+66,"addr1", false,-1, 3,0);
    tracep->declBit(c+24,"read_en", false,-1);
    tracep->declBus(c+67,"read_data", false,-1, 31,0);
    tracep->declBit(c+69,"read_done", false,-1);
    tracep->declBit(c+121,"write_en", false,-1);
    tracep->declBus(c+122,"write_data", false,-1, 31,0);
    tracep->declBit(c+68,"write_done", false,-1);
    tracep->declBus(c+103,"addr", false,-1, 7,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+132,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+133,"D0_SIZE", false,-1, 31,0);
    tracep->declBus(c+135,"D1_SIZE", false,-1, 31,0);
    tracep->declBus(c+134,"D0_IDX_SIZE", false,-1, 31,0);
    tracep->declBus(c+134,"D1_IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+4,"addr0", false,-1, 3,0);
    tracep->declBus(c+74,"addr1", false,-1, 3,0);
    tracep->declBit(c+28,"read_en", false,-1);
    tracep->declBus(c+75,"read_data", false,-1, 31,0);
    tracep->declBit(c+77,"read_done", false,-1);
    tracep->declBit(c+27,"write_en", false,-1);
    tracep->declBus(c+5,"write_data", false,-1, 31,0);
    tracep->declBit(c+76,"write_done", false,-1);
    tracep->declBus(c+63,"addr", false,-1, 7,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__add0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__add0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+30,"left", false,-1, 3,0);
    tracep->declBus(c+123,"right", false,-1, 3,0);
    tracep->declBus(c+31,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+13,"left", false,-1, 3,0);
    tracep->declBus(c+48,"right", false,-1, 3,0);
    tracep->declBus(c+14,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+15,"left", false,-1, 3,0);
    tracep->declBus(c+49,"right", false,-1, 3,0);
    tracep->declBus(c+16,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+17,"left", false,-1, 3,0);
    tracep->declBus(c+50,"right", false,-1, 3,0);
    tracep->declBus(c+18,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder2__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+19,"left", false,-1, 3,0);
    tracep->declBus(c+51,"right", false,-1, 3,0);
    tracep->declBus(c+20,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder3__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+21,"left", false,-1, 3,0);
    tracep->declBus(c+52,"right", false,-1, 3,0);
    tracep->declBus(c+22,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+127,"VALUE", false,-1, 3,0);
    tracep->declBus(c+127,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+128,"VALUE", false,-1, 3,0);
    tracep->declBus(c+128,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const3__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"VALUE", false,-1, 3,0);
    tracep->declBus(c+129,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const4__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+123,"VALUE", false,-1, 3,0);
    tracep->declBus(c+123,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const5__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const5__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+130,"VALUE", false,-1, 3,0);
    tracep->declBus(c+130,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const7__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const7__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+131,"VALUE", false,-1, 0,0);
    tracep->declBus(c+131,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__i0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__i0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+33,"in", false,-1, 3,0);
    tracep->declBit(c+34,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+66,"out", false,-1, 3,0);
    tracep->declBit(c+84,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__j0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__j0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"in", false,-1, 3,0);
    tracep->declBit(c+36,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+74,"out", false,-1, 3,0);
    tracep->declBit(c+85,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__k_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__k_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+31,"in", false,-1, 3,0);
    tracep->declBit(c+37,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+65,"out", false,-1, 3,0);
    tracep->declBit(c+86,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"in", false,-1, 3,0);
    tracep->declBit(c+47,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+95,"out", false,-1, 3,0);
    tracep->declBit(c+96,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+23,"in", false,-1, 3,0);
    tracep->declBit(c+55,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+99,"out", false,-1, 3,0);
    tracep->declBit(c+100,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__le0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__le0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+6,"left", false,-1, 3,0);
    tracep->declBus(c+38,"right", false,-1, 3,0);
    tracep->declBit(c+39,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__lt0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__lt0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+7,"left", false,-1, 3,0);
    tracep->declBus(c+40,"right", false,-1, 3,0);
    tracep->declBit(c+8,"out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+42,"in", false,-1, 0,0);
    tracep->declBit(c+43,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+89,"out", false,-1, 0,0);
    tracep->declBit(c+90,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"in", false,-1, 0,0);
    tracep->declBit(c+45,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+91,"out", false,-1, 0,0);
    tracep->declBit(c+92,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__comb_reg1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"in", false,-1, 0,0);
    tracep->declBit(c+46,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+93,"out", false,-1, 0,0);
    tracep->declBit(c+94,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__signal_reg__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__signal_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+53,"in", false,-1, 0,0);
    tracep->declBit(c+54,"write_en", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+97,"out", false,-1, 0,0);
    tracep->declBit(c+98,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+124,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+124,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+124,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud2__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+124,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud3__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+124,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke0_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke0_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+56,"in", false,-1, 0,0);
    tracep->declBus(c+56,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke0_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke0_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+84,"in", false,-1, 0,0);
    tracep->declBus(c+84,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke1_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke1_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+57,"in", false,-1, 0,0);
    tracep->declBus(c+57,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke1_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke1_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+85,"in", false,-1, 0,0);
    tracep->declBus(c+85,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke2_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke2_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"in", false,-1, 0,0);
    tracep->declBus(c+58,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke2_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke2_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"in", false,-1, 0,0);
    tracep->declBus(c+86,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke14_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke14_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"in", false,-1, 0,0);
    tracep->declBus(c+59,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__invoke14_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke14_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+84,"in", false,-1, 0,0);
    tracep->declBus(c+84,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond00_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond00_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+43,"in", false,-1, 0,0);
    tracep->declBus(c+43,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond00_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond00_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+124,"in", false,-1, 0,0);
    tracep->declBus(c+124,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+45,"in", false,-1, 0,0);
    tracep->declBus(c+45,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond10_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+124,"in", false,-1, 0,0);
    tracep->declBus(c+124,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"in", false,-1, 0,0);
    tracep->declBus(c+60,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_cond20_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+124,"in", false,-1, 0,0);
    tracep->declBus(c+124,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"in", false,-1, 0,0);
    tracep->declBus(c+61,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+124,"in", false,-1, 0,0);
    tracep->declBus(c+124,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par1_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par1_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+62,"in", false,-1, 0,0);
    tracep->declBus(c+62,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par1_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par1_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+124,"in", false,-1, 0,0);
    tracep->declBus(c+124,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond00_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond00_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+43,"in", false,-1, 0,0);
    tracep->declBus(c+43,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond00_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond00_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+101,"in", false,-1, 0,0);
    tracep->declBus(c+101,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+45,"in", false,-1, 0,0);
    tracep->declBus(c+45,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond10_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+101,"in", false,-1, 0,0);
    tracep->declBus(c+101,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"in", false,-1, 0,0);
    tracep->declBus(c+60,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_cond20_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+101,"in", false,-1, 0,0);
    tracep->declBus(c+101,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__while_wrapper_early_reset_static_seq_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__while_wrapper_early_reset_static_seq_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"in", false,-1, 0,0);
    tracep->declBus(c+61,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__while_wrapper_early_reset_static_seq_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__while_wrapper_early_reset_static_seq_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+102,"in", false,-1, 0,0);
    tracep->declBus(c+102,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par1_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par1_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+62,"in", false,-1, 0,0);
    tracep->declBus(c+62,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par1_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par1_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+101,"in", false,-1, 0,0);
    tracep->declBus(c+101,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+116,"in", false,-1, 0,0);
    tracep->declBus(c+116,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__tdcc_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+64,"in", false,-1, 0,0);
    tracep->declBus(c+64,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__alpha_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__alpha_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+132,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+136,"SIZE", false,-1, 31,0);
    tracep->declBus(c+136,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+124,"addr0", false,-1, 0,0);
    tracep->declBit(c+32,"read_en", false,-1);
    tracep->declBus(c+81,"read_data", false,-1, 31,0);
    tracep->declBit(c+83,"read_done", false,-1);
    tracep->declBus(c+126,"write_data", false,-1, 31,0);
    tracep->declBit(c+125,"write_en", false,-1);
    tracep->declBit(c+82,"write_done", false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+104+i*1,"mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+81,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__mem__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+132,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+137,"SIZE", false,-1, 31,0);
    tracep->declBus(c+133,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+103,"addr0", false,-1, 7,0);
    tracep->declBit(c+24,"read_en", false,-1);
    tracep->declBus(c+67,"read_data", false,-1, 31,0);
    tracep->declBit(c+69,"read_done", false,-1);
    tracep->declBus(c+122,"write_data", false,-1, 31,0);
    tracep->declBit(c+121,"write_en", false,-1);
    tracep->declBit(c+68,"write_done", false,-1);
    tracep->declBus(c+67,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__mem__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+132,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+138,"SIZE", false,-1, 31,0);
    tracep->declBus(c+133,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+63,"addr0", false,-1, 7,0);
    tracep->declBit(c+28,"read_en", false,-1);
    tracep->declBus(c+75,"read_data", false,-1, 31,0);
    tracep->declBit(c+77,"read_done", false,-1);
    tracep->declBus(c+5,"write_data", false,-1, 31,0);
    tracep->declBit(c+27,"write_en", false,-1);
    tracep->declBit(c+76,"write_done", false,-1);
    tracep->declBus(c+75,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__comp__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__comp__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+132,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+132,"INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+139,"FRAC_WIDTH", false,-1, 31,0);
    tracep->declBus(c+139,"SIGNED", false,-1, 31,0);
    tracep->declBus(c+9,"left", false,-1, 31,0);
    tracep->declBus(c+10,"right", false,-1, 31,0);
    tracep->declBit(c+41,"go", false,-1);
    tracep->declBit(c+111,"clk", false,-1);
    tracep->declBit(c+117,"reset", false,-1);
    tracep->declBus(c+87,"out", false,-1, 31,0);
    tracep->declBit(c+88,"done", false,-1);
    tracep->declBus(c+105,"rtmp", false,-1, 31,0);
    tracep->declBus(c+106,"ltmp", false,-1, 31,0);
    tracep->declQuad(c+107,"out_tmp", false,-1, 63,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+109+i*1,"done_buf", true,(i+0));
    }
    tracep->declBit(c+41,"start", false,-1);
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
    tracep->pushNamePrefix("B_i_j_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__B_i_j_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("B_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__0(vlSelf, tracep);
    tracep->pushNamePrefix("mem ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__B_int__mem__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
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
    tracep->pushNamePrefix("alpha_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__alpha_int__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("const3 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__const3__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("const4 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__const4__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("const5 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__const5__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("const7 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__const7__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("early_reset_static_par1_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par1_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_par1_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_par1_go__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("invoke0_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke0_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("invoke0_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__invoke0_go__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("wrapper_early_reset_static_par1_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par1_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrapper_early_reset_static_par1_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_par1_go__0(vlSelf, tracep);
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
    bufp->fullIData(oldp+2,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard113)
                              ? vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard116)
                                  ? vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out
                                  : ((((7U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                       & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                      | ((5U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                         & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)))
                                      ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                      : 0U)))),32);
    bufp->fullIData(oldp+3,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard113)
                              ? vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard116)
                                  ? vlSymsp->TOP__TOP__main__alpha_int.__PVT__read_out
                                  : 0U))),32);
    bufp->fullCData(oldp+4,((((((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                | (8U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                              | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard182))
                              ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                              : (((2U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in))
                                  ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                  : 0U))),4);
    bufp->fullIData(oldp+5,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard21)
                              ? (vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out 
                                 + vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__out)
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard162)
                                  ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                  : 0U))),32);
    bufp->fullCData(oldp+6,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                              ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                  : 0U))),4);
    bufp->fullCData(oldp+7,(((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                              ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                              : 0U)),4);
    bufp->fullBit(oldp+8,((((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                             ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                             : 0U) < ((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                       ? 8U : 0U))));
    bufp->fullIData(oldp+9,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard458)
                              ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard463)
                                  ? vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__out
                                  : 0U))),32);
    bufp->fullIData(oldp+10,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard463)
                               ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                               : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard458)
                                   ? vlSymsp->TOP__TOP__main__B_k_j_0.__PVT__out
                                   : 0U))),32);
    bufp->fullBit(oldp+11,(((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en) 
                            & (((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                 ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                 : 0U) < ((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                           ? 8U : 0U)))));
    bufp->fullCData(oldp+12,((0xfU & (((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                       & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in))
                                       ? (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + 
                                          ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                            ? 1U : 0U))
                                       : (((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in))
                                           ? (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                                ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                : 0U) 
                                              + ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                                  ? 1U
                                                  : 0U))
                                           : ((((((
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                   & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)) 
                                                  | ((0U 
                                                      == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in))) 
                                                 | ((0U 
                                                     == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                    & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in))) 
                                                | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard54)) 
                                               | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard58))
                                               ? 0U
                                               : ((
                                                   (9U 
                                                    != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                   & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in))
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                                                     ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                     : 0U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                                                     ? 1U
                                                     : 0U))
                                                   : 
                                                  (((7U 
                                                     != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                    & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in))
                                                    ? 
                                                   (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)
                                                      ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                      : 0U) 
                                                    + 
                                                    ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)
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
                                                     : 0U)))))))),4);
    bufp->fullCData(oldp+13,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                               : 0U)),4);
    bufp->fullCData(oldp+14,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                        ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                        : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                                  ? 1U
                                                  : 0U)))),4);
    bufp->fullCData(oldp+15,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                               : 0U)),4);
    bufp->fullCData(oldp+16,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                        ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                        : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                                  ? 1U
                                                  : 0U)))),4);
    bufp->fullCData(oldp+17,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                               : 0U)),4);
    bufp->fullCData(oldp+18,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                        ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                        : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                                  ? 1U
                                                  : 0U)))),4);
    bufp->fullCData(oldp+19,(((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                               : 0U)),4);
    bufp->fullCData(oldp+20,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                                        ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                        : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                                                  ? 1U
                                                  : 0U)))),4);
    bufp->fullCData(oldp+21,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                               : 0U)),4);
    bufp->fullCData(oldp+22,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)
                                        ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                        : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)
                                                  ? 1U
                                                  : 0U)))),4);
    bufp->fullCData(oldp+23,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard262)
                               ? 3U : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard284)
                                        ? 5U : (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard311) 
                                                 | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard320))
                                                 ? 9U
                                                 : 
                                                (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard270) 
                                                  | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard278))
                                                  ? 4U
                                                  : 
                                                 ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard326)
                                                   ? 0xaU
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard296)
                                                     ? 7U
                                                     : 
                                                    (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard248) 
                                                      | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard256))
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard302)
                                                       ? 8U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard290)
                                                        ? 6U
                                                        : 
                                                       ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard240)
                                                         ? 1U
                                                         : 
                                                        (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard335) 
                                                          | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard344))
                                                          ? 0xbU
                                                          : 0U))))))))))))),4);
    bufp->fullBit(oldp+24,(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en));
    bufp->fullBit(oldp+25,(vlSymsp->TOP__TOP__main.__PVT__A_int_read0_0_write_en));
    bufp->fullBit(oldp+26,(vlSymsp->TOP__TOP__main.__PVT__B_i_j_0_write_en));
    bufp->fullBit(oldp+27,(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en));
    bufp->fullBit(oldp+28,(vlSymsp->TOP__TOP__main.__PVT__B_int_read_en));
    bufp->fullBit(oldp+29,(vlSymsp->TOP__TOP__main.__PVT__B_k_j_0_write_en));
    bufp->fullCData(oldp+30,(vlSymsp->TOP__TOP__main.__PVT__add0_left),4);
    bufp->fullCData(oldp+31,((0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__add0_left)))),4);
    bufp->fullBit(oldp+32,(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read_en));
    bufp->fullCData(oldp+33,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke14_go_in)
                               ? (0xfU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__TOP__main.__PVT__add0_left)))
                               : 0U)),4);
    bufp->fullBit(oldp+34,(vlSymsp->TOP__TOP__main.__PVT__i0_write_en));
    bufp->fullCData(oldp+35,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard58)
                               ? (0xfU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__TOP__main.__PVT__add0_left)))
                               : 0U)),4);
    bufp->fullBit(oldp+36,(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__TOP__main.__PVT__k_0_write_en));
    bufp->fullCData(oldp+38,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                               ? 7U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                        ? 0xbU : 0U))),4);
    bufp->fullBit(oldp+39,(vlSymsp->TOP__TOP__main__le0.__PVT__out));
    bufp->fullCData(oldp+40,(((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                               ? 8U : 0U)),4);
    bufp->fullBit(oldp+41,(vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go));
    bufp->fullBit(oldp+42,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in) 
                            & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
    bufp->fullBit(oldp+43,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in));
    bufp->fullBit(oldp+44,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                            & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
    bufp->fullBit(oldp+45,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in));
    bufp->fullBit(oldp+46,(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en));
    bufp->fullBit(oldp+47,(vlSymsp->TOP__TOP__main.__PVT__fsm_write_en));
    bufp->fullCData(oldp+48,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                               ? 1U : 0U)),4);
    bufp->fullCData(oldp+49,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                               ? 1U : 0U)),4);
    bufp->fullCData(oldp+50,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                               ? 1U : 0U)),4);
    bufp->fullCData(oldp+51,(((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                               ? 1U : 0U)),4);
    bufp->fullCData(oldp+52,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)
                               ? 1U : 0U)),4);
    bufp->fullBit(oldp+53,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_in));
    bufp->fullBit(oldp+54,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_write_en));
    bufp->fullBit(oldp+55,(vlSymsp->TOP__TOP__main.__PVT__fsm0_write_en));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__TOP__main.__PVT__invoke0_go_in));
    bufp->fullBit(oldp+57,(vlSymsp->TOP__TOP__main.__PVT__invoke1_go_in));
    bufp->fullBit(oldp+58,(vlSymsp->TOP__TOP__main.__PVT__invoke2_go_in));
    bufp->fullBit(oldp+59,(vlSymsp->TOP__TOP__main.__PVT__invoke14_go_in));
    bufp->fullBit(oldp+60,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in));
    bufp->fullBit(oldp+62,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in));
    bufp->fullCData(oldp+63,(vlSymsp->TOP__TOP__main__B_int.__PVT__addr),8);
    bufp->fullBit(oldp+64,((0xbU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))));
    bufp->fullCData(oldp+65,(vlSymsp->TOP__TOP__main__k_0.__PVT__out),4);
    bufp->fullCData(oldp+66,(vlSymsp->TOP__TOP__main__i0.__PVT__out),4);
    bufp->fullIData(oldp+67,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out),32);
    bufp->fullBit(oldp+68,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__write_done));
    bufp->fullBit(oldp+69,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_done));
    bufp->fullIData(oldp+70,(vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out),32);
    bufp->fullBit(oldp+71,(vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__done));
    bufp->fullIData(oldp+72,(vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__out),32);
    bufp->fullBit(oldp+73,(vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__done));
    bufp->fullCData(oldp+74,(vlSymsp->TOP__TOP__main__j0.__PVT__out),4);
    bufp->fullIData(oldp+75,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out),32);
    bufp->fullBit(oldp+76,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__write_done));
    bufp->fullBit(oldp+77,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_done));
    bufp->fullIData(oldp+78,(vlSymsp->TOP__TOP__main__B_k_j_0.__PVT__out),32);
    bufp->fullBit(oldp+79,(vlSymsp->TOP__TOP__main__B_k_j_0.__PVT__done));
    bufp->fullIData(oldp+80,((vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out 
                              + vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__out)),32);
    bufp->fullIData(oldp+81,(vlSymsp->TOP__TOP__main__alpha_int.__PVT__read_out),32);
    bufp->fullBit(oldp+82,(vlSymsp->TOP__TOP__main__alpha_int.__PVT__write_done));
    bufp->fullBit(oldp+83,(vlSymsp->TOP__TOP__main__alpha_int.__PVT__read_done));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__TOP__main__i0.__PVT__done));
    bufp->fullBit(oldp+85,(vlSymsp->TOP__TOP__main__j0.__PVT__done));
    bufp->fullBit(oldp+86,(vlSymsp->TOP__TOP__main__k_0.__PVT__done));
    bufp->fullIData(oldp+87,((IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)),32);
    bufp->fullBit(oldp+88,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf
                           [1U]));
    bufp->fullBit(oldp+89,(vlSymsp->TOP__TOP__main__comb_reg.__PVT__out));
    bufp->fullBit(oldp+90,(vlSymsp->TOP__TOP__main__comb_reg.__PVT__done));
    bufp->fullBit(oldp+91,(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__out));
    bufp->fullBit(oldp+92,(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__done));
    bufp->fullBit(oldp+93,(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__out));
    bufp->fullBit(oldp+94,(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__done));
    bufp->fullCData(oldp+95,(vlSymsp->TOP__TOP__main__fsm.__PVT__out),4);
    bufp->fullBit(oldp+96,(vlSymsp->TOP__TOP__main__fsm.__PVT__done));
    bufp->fullBit(oldp+97,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out));
    bufp->fullBit(oldp+98,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__done));
    bufp->fullCData(oldp+99,(vlSymsp->TOP__TOP__main__fsm0.__PVT__out),4);
    bufp->fullBit(oldp+100,(vlSymsp->TOP__TOP__main__fsm0.__PVT__done));
    bufp->fullBit(oldp+101,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_done_in));
    bufp->fullBit(oldp+102,(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_done_in));
    bufp->fullCData(oldp+103,(vlSymsp->TOP__TOP__main__A_int.__PVT__addr),8);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__TOP__main__alpha_int.__PVT__mem[0]),32);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__rtmp),32);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__ltmp),32);
    bufp->fullQData(oldp+107,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp),64);
    bufp->fullBit(oldp+109,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[0]));
    bufp->fullBit(oldp+110,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[1]));
    bufp->fullBit(oldp+111,(vlSymsp->TOP__TOP.__PVT__clk));
    bufp->fullIData(oldp+112,(vlSymsp->TOP__TOP.__PVT__NOTRACE),32);
    bufp->fullQData(oldp+113,(vlSymsp->TOP__TOP.__PVT__CYCLE_LIMIT),64);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__TOP.__PVT__CODE),32);
    bufp->fullBit(oldp+116,(vlSymsp->TOP__TOP.__PVT__go));
    bufp->fullBit(oldp+117,(vlSymsp->TOP__TOP.__PVT__reset));
    bufp->fullQData(oldp+118,(vlSymsp->TOP__TOP.__PVT__cycle_count),64);
    bufp->fullIData(oldp+120,(3U),32);
    bufp->fullBit(oldp+121,(vlSymsp->TOP__TOP__main.__PVT__A_int_write_en));
    bufp->fullIData(oldp+122,(vlSymsp->TOP__TOP__main.__PVT__A_int_write_data),32);
    bufp->fullCData(oldp+123,(1U),4);
    bufp->fullBit(oldp+124,(0U));
    bufp->fullBit(oldp+125,(vlSymsp->TOP__TOP__main.__PVT__alpha_int_write_en));
    bufp->fullIData(oldp+126,(vlSymsp->TOP__TOP__main.__PVT__alpha_int_write_data),32);
    bufp->fullCData(oldp+127,(0U),4);
    bufp->fullCData(oldp+128,(7U),4);
    bufp->fullCData(oldp+129,(0xbU),4);
    bufp->fullCData(oldp+130,(8U),4);
    bufp->fullBit(oldp+131,(0U));
    bufp->fullIData(oldp+132,(0x20U),32);
    bufp->fullIData(oldp+133,(8U),32);
    bufp->fullIData(oldp+134,(4U),32);
    bufp->fullIData(oldp+135,(0xcU),32);
    bufp->fullIData(oldp+136,(1U),32);
    bufp->fullIData(oldp+137,(0x40U),32);
    bufp->fullIData(oldp+138,(0x60U),32);
    bufp->fullIData(oldp+139,(0U),32);
}

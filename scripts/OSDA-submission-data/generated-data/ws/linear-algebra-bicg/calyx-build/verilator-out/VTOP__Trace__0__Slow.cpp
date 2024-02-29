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
    tracep->declBit(c+125,"go", false,-1);
    tracep->declBit(c+44,"done", false,-1);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+138,"RESET_CYCLES", false,-1, 31,0);
    tracep->declQuad(c+127,"cycle_count", false,-1, 63,0);
    tracep->declBus(c+134,"NOTRACE", false,-1, 31,0);
    tracep->declQuad(c+135,"CYCLE_LIMIT", false,-1, 63,0);
    tracep->declBus(c+137,"CODE", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+125,"go", false,-1);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBit(c+44,"done", false,-1);
    tracep->declBus(c+1,"CODE", false,-1, 31,0);
    tracep->declBus(c+2,"A_i_j_0_in", false,-1, 31,0);
    tracep->declBit(c+17,"A_i_j_0_write_en", false,-1);
    tracep->declBit(c+133,"A_i_j_0_clk", false,-1);
    tracep->declBit(c+126,"A_i_j_0_reset", false,-1);
    tracep->declBus(c+45,"A_i_j_0_out", false,-1, 31,0);
    tracep->declBit(c+46,"A_i_j_0_done", false,-1);
    tracep->declBit(c+133,"A_int_clk", false,-1);
    tracep->declBit(c+126,"A_int_reset", false,-1);
    tracep->declBus(c+47,"A_int_addr0", false,-1, 3,0);
    tracep->declBus(c+48,"A_int_addr1", false,-1, 3,0);
    tracep->declBit(c+139,"A_int_write_en", false,-1);
    tracep->declBus(c+140,"A_int_write_data", false,-1, 31,0);
    tracep->declBit(c+18,"A_int_read_en", false,-1);
    tracep->declBus(c+49,"A_int_read_data", false,-1, 31,0);
    tracep->declBit(c+50,"A_int_write_done", false,-1);
    tracep->declBit(c+51,"A_int_read_done", false,-1);
    tracep->declBus(c+19,"add0_left", false,-1, 3,0);
    tracep->declBus(c+141,"add0_right", false,-1, 3,0);
    tracep->declBus(c+20,"add0_out", false,-1, 3,0);
    tracep->declBus(c+3,"add1_left", false,-1, 31,0);
    tracep->declBus(c+4,"add1_right", false,-1, 31,0);
    tracep->declBus(c+21,"add1_out", false,-1, 31,0);
    tracep->declBus(c+5,"bin_read0_0_in", false,-1, 31,0);
    tracep->declBit(c+22,"bin_read0_0_write_en", false,-1);
    tracep->declBit(c+133,"bin_read0_0_clk", false,-1);
    tracep->declBit(c+126,"bin_read0_0_reset", false,-1);
    tracep->declBus(c+52,"bin_read0_0_out", false,-1, 31,0);
    tracep->declBit(c+53,"bin_read0_0_done", false,-1);
    tracep->declBus(c+142,"const0_out", false,-1, 3,0);
    tracep->declBus(c+141,"const10_out", false,-1, 3,0);
    tracep->declBus(c+143,"const2_out", false,-1, 31,0);
    tracep->declBus(c+23,"i1_in", false,-1, 3,0);
    tracep->declBit(c+24,"i1_write_en", false,-1);
    tracep->declBit(c+133,"i1_clk", false,-1);
    tracep->declBit(c+126,"i1_reset", false,-1);
    tracep->declBus(c+47,"i1_out", false,-1, 3,0);
    tracep->declBit(c+54,"i1_done", false,-1);
    tracep->declBus(c+25,"j0_in", false,-1, 3,0);
    tracep->declBit(c+26,"j0_write_en", false,-1);
    tracep->declBit(c+133,"j0_clk", false,-1);
    tracep->declBit(c+126,"j0_reset", false,-1);
    tracep->declBus(c+48,"j0_out", false,-1, 3,0);
    tracep->declBit(c+55,"j0_done", false,-1);
    tracep->declBit(c+133,"mult_pipe0_clk", false,-1);
    tracep->declBit(c+126,"mult_pipe0_reset", false,-1);
    tracep->declBit(c+27,"mult_pipe0_go", false,-1);
    tracep->declBus(c+6,"mult_pipe0_left", false,-1, 31,0);
    tracep->declBus(c+7,"mult_pipe0_right", false,-1, 31,0);
    tracep->declBus(c+56,"mult_pipe0_out", false,-1, 31,0);
    tracep->declBit(c+57,"mult_pipe0_done", false,-1);
    tracep->declBit(c+133,"p_int_clk", false,-1);
    tracep->declBit(c+126,"p_int_reset", false,-1);
    tracep->declBus(c+48,"p_int_addr0", false,-1, 3,0);
    tracep->declBit(c+144,"p_int_write_en", false,-1);
    tracep->declBus(c+145,"p_int_write_data", false,-1, 31,0);
    tracep->declBit(c+28,"p_int_read_en", false,-1);
    tracep->declBus(c+58,"p_int_read_data", false,-1, 31,0);
    tracep->declBit(c+59,"p_int_write_done", false,-1);
    tracep->declBit(c+60,"p_int_read_done", false,-1);
    tracep->declBus(c+58,"p_int_read0_0_in", false,-1, 31,0);
    tracep->declBit(c+29,"p_int_read0_0_write_en", false,-1);
    tracep->declBit(c+133,"p_int_read0_0_clk", false,-1);
    tracep->declBit(c+126,"p_int_read0_0_reset", false,-1);
    tracep->declBus(c+61,"p_int_read0_0_out", false,-1, 31,0);
    tracep->declBit(c+62,"p_int_read0_0_done", false,-1);
    tracep->declBus(c+63,"q0_0_in", false,-1, 31,0);
    tracep->declBit(c+30,"q0_0_write_en", false,-1);
    tracep->declBit(c+133,"q0_0_clk", false,-1);
    tracep->declBit(c+126,"q0_0_reset", false,-1);
    tracep->declBus(c+64,"q0_0_out", false,-1, 31,0);
    tracep->declBit(c+65,"q0_0_done", false,-1);
    tracep->declBit(c+133,"q_int_clk", false,-1);
    tracep->declBit(c+126,"q_int_reset", false,-1);
    tracep->declBus(c+47,"q_int_addr0", false,-1, 3,0);
    tracep->declBit(c+31,"q_int_write_en", false,-1);
    tracep->declBus(c+32,"q_int_write_data", false,-1, 31,0);
    tracep->declBit(c+18,"q_int_read_en", false,-1);
    tracep->declBus(c+63,"q_int_read_data", false,-1, 31,0);
    tracep->declBit(c+66,"q_int_write_done", false,-1);
    tracep->declBit(c+67,"q_int_read_done", false,-1);
    tracep->declBit(c+133,"r_int_clk", false,-1);
    tracep->declBit(c+126,"r_int_reset", false,-1);
    tracep->declBus(c+47,"r_int_addr0", false,-1, 3,0);
    tracep->declBit(c+146,"r_int_write_en", false,-1);
    tracep->declBus(c+147,"r_int_write_data", false,-1, 31,0);
    tracep->declBit(c+18,"r_int_read_en", false,-1);
    tracep->declBus(c+68,"r_int_read_data", false,-1, 31,0);
    tracep->declBit(c+69,"r_int_write_done", false,-1);
    tracep->declBit(c+70,"r_int_read_done", false,-1);
    tracep->declBus(c+71,"s0_0_in", false,-1, 31,0);
    tracep->declBit(c+30,"s0_0_write_en", false,-1);
    tracep->declBit(c+133,"s0_0_clk", false,-1);
    tracep->declBit(c+126,"s0_0_reset", false,-1);
    tracep->declBus(c+72,"s0_0_out", false,-1, 31,0);
    tracep->declBit(c+73,"s0_0_done", false,-1);
    tracep->declBit(c+133,"s_int_clk", false,-1);
    tracep->declBit(c+126,"s_int_reset", false,-1);
    tracep->declBus(c+33,"s_int_addr0", false,-1, 3,0);
    tracep->declBit(c+34,"s_int_write_en", false,-1);
    tracep->declBus(c+35,"s_int_write_data", false,-1, 31,0);
    tracep->declBit(c+18,"s_int_read_en", false,-1);
    tracep->declBus(c+71,"s_int_read_data", false,-1, 31,0);
    tracep->declBit(c+74,"s_int_write_done", false,-1);
    tracep->declBit(c+75,"s_int_read_done", false,-1);
    tracep->declBus(c+8,"fsm_in", false,-1, 6,0);
    tracep->declBit(c+36,"fsm_write_en", false,-1);
    tracep->declBit(c+133,"fsm_clk", false,-1);
    tracep->declBit(c+126,"fsm_reset", false,-1);
    tracep->declBus(c+76,"fsm_out", false,-1, 6,0);
    tracep->declBit(c+77,"fsm_done", false,-1);
    tracep->declBus(c+129,"fsm0_in", false,-1, 9,0);
    tracep->declBit(c+125,"fsm0_write_en", false,-1);
    tracep->declBit(c+133,"fsm0_clk", false,-1);
    tracep->declBit(c+126,"fsm0_reset", false,-1);
    tracep->declBus(c+78,"fsm0_out", false,-1, 9,0);
    tracep->declBit(c+79,"fsm0_done", false,-1);
    tracep->declBus(c+9,"fsm1_in", false,-1, 1,0);
    tracep->declBit(c+37,"fsm1_write_en", false,-1);
    tracep->declBit(c+133,"fsm1_clk", false,-1);
    tracep->declBit(c+126,"fsm1_reset", false,-1);
    tracep->declBus(c+80,"fsm1_out", false,-1, 1,0);
    tracep->declBit(c+81,"fsm1_done", false,-1);
    tracep->declBus(c+10,"fsm2_in", false,-1, 3,0);
    tracep->declBit(c+38,"fsm2_write_en", false,-1);
    tracep->declBit(c+133,"fsm2_clk", false,-1);
    tracep->declBit(c+126,"fsm2_reset", false,-1);
    tracep->declBus(c+82,"fsm2_out", false,-1, 3,0);
    tracep->declBit(c+83,"fsm2_done", false,-1);
    tracep->declBit(c+148,"ud_out", false,-1);
    tracep->declBus(c+130,"adder_left", false,-1, 9,0);
    tracep->declBus(c+131,"adder_right", false,-1, 9,0);
    tracep->declBus(c+132,"adder_out", false,-1, 9,0);
    tracep->declBit(c+148,"ud0_out", false,-1);
    tracep->declBus(c+11,"adder0_left", false,-1, 1,0);
    tracep->declBus(c+39,"adder0_right", false,-1, 1,0);
    tracep->declBus(c+12,"adder0_out", false,-1, 1,0);
    tracep->declBit(c+148,"ud1_out", false,-1);
    tracep->declBus(c+13,"adder1_left", false,-1, 6,0);
    tracep->declBus(c+40,"adder1_right", false,-1, 6,0);
    tracep->declBus(c+14,"adder1_out", false,-1, 6,0);
    tracep->declBit(c+148,"ud2_out", false,-1);
    tracep->declBus(c+15,"adder2_left", false,-1, 3,0);
    tracep->declBus(c+41,"adder2_right", false,-1, 3,0);
    tracep->declBus(c+16,"adder2_out", false,-1, 3,0);
    tracep->declBit(c+42,"signal_reg_in", false,-1);
    tracep->declBit(c+43,"signal_reg_write_en", false,-1);
    tracep->declBit(c+133,"signal_reg_clk", false,-1);
    tracep->declBit(c+126,"signal_reg_reset", false,-1);
    tracep->declBit(c+84,"signal_reg_out", false,-1);
    tracep->declBit(c+85,"signal_reg_done", false,-1);
    tracep->declBit(c+125,"early_reset_static_seq_go_in", false,-1);
    tracep->declBit(c+125,"early_reset_static_seq_go_out", false,-1);
    tracep->declBit(c+149,"early_reset_static_seq_done_in", false,-1);
    tracep->declBit(c+149,"early_reset_static_seq_done_out", false,-1);
    tracep->declBit(c+37,"early_reset_static_seq0_go_in", false,-1);
    tracep->declBit(c+37,"early_reset_static_seq0_go_out", false,-1);
    tracep->declBit(c+149,"early_reset_static_seq0_done_in", false,-1);
    tracep->declBit(c+149,"early_reset_static_seq0_done_out", false,-1);
    tracep->declBit(c+36,"early_reset_static_seq1_go_in", false,-1);
    tracep->declBit(c+36,"early_reset_static_seq1_go_out", false,-1);
    tracep->declBit(c+149,"early_reset_static_seq1_done_in", false,-1);
    tracep->declBit(c+149,"early_reset_static_seq1_done_out", false,-1);
    tracep->declBit(c+38,"early_reset_static_seq3_go_in", false,-1);
    tracep->declBit(c+38,"early_reset_static_seq3_go_out", false,-1);
    tracep->declBit(c+149,"early_reset_static_seq3_done_in", false,-1);
    tracep->declBit(c+149,"early_reset_static_seq3_done_out", false,-1);
    tracep->declBit(c+125,"wrapper_early_reset_static_seq_go_in", false,-1);
    tracep->declBit(c+125,"wrapper_early_reset_static_seq_go_out", false,-1);
    tracep->declBit(c+44,"wrapper_early_reset_static_seq_done_in", false,-1);
    tracep->declBit(c+44,"wrapper_early_reset_static_seq_done_out", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+6,"left", false,-1, 31,0);
    tracep->declBus(c+7,"right", false,-1, 31,0);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBit(c+27,"go", false,-1);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBus(c+56,"out", false,-1, 31,0);
    tracep->declBit(c+57,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__add1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__add1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"left", false,-1, 31,0);
    tracep->declBus(c+4,"right", false,-1, 31,0);
    tracep->declBus(c+21,"out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__A_i_j_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__A_i_j_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"in", false,-1, 31,0);
    tracep->declBit(c+17,"write_en", false,-1);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+45,"out", false,-1, 31,0);
    tracep->declBit(c+46,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__bin_read0_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__bin_read0_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+5,"in", false,-1, 31,0);
    tracep->declBit(c+22,"write_en", false,-1);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+52,"out", false,-1, 31,0);
    tracep->declBit(c+53,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__p_int_read0_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__p_int_read0_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"in", false,-1, 31,0);
    tracep->declBit(c+29,"write_en", false,-1);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+61,"out", false,-1, 31,0);
    tracep->declBit(c+62,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__q0_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__q0_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"in", false,-1, 31,0);
    tracep->declBit(c+30,"write_en", false,-1);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+64,"out", false,-1, 31,0);
    tracep->declBit(c+65,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__s0_0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__s0_0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+71,"in", false,-1, 31,0);
    tracep->declBit(c+30,"write_en", false,-1);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+72,"out", false,-1, 31,0);
    tracep->declBit(c+73,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+151,"D0_SIZE", false,-1, 31,0);
    tracep->declBus(c+151,"D1_SIZE", false,-1, 31,0);
    tracep->declBus(c+152,"D0_IDX_SIZE", false,-1, 31,0);
    tracep->declBus(c+152,"D1_IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+47,"addr0", false,-1, 3,0);
    tracep->declBus(c+48,"addr1", false,-1, 3,0);
    tracep->declBit(c+18,"read_en", false,-1);
    tracep->declBus(c+49,"read_data", false,-1, 31,0);
    tracep->declBit(c+51,"read_done", false,-1);
    tracep->declBit(c+139,"write_en", false,-1);
    tracep->declBus(c+140,"write_data", false,-1, 31,0);
    tracep->declBit(c+50,"write_done", false,-1);
    tracep->declBus(c+86,"addr", false,-1, 7,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__add0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__add0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+152,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+19,"left", false,-1, 3,0);
    tracep->declBus(c+141,"right", false,-1, 3,0);
    tracep->declBus(c+20,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder2__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+152,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+15,"left", false,-1, 3,0);
    tracep->declBus(c+41,"right", false,-1, 3,0);
    tracep->declBus(c+16,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+152,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+142,"VALUE", false,-1, 3,0);
    tracep->declBus(c+142,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const10__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const10__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+152,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+141,"VALUE", false,-1, 3,0);
    tracep->declBus(c+141,"out", false,-1, 3,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__const2__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__const2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+143,"VALUE", false,-1, 31,0);
    tracep->declBus(c+143,"out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__i1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__i1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+152,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+23,"in", false,-1, 3,0);
    tracep->declBit(c+24,"write_en", false,-1);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+47,"out", false,-1, 3,0);
    tracep->declBit(c+54,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__j0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__j0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+152,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+25,"in", false,-1, 3,0);
    tracep->declBit(c+26,"write_en", false,-1);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+48,"out", false,-1, 3,0);
    tracep->declBit(c+55,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm2__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+152,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"in", false,-1, 3,0);
    tracep->declBit(c+38,"write_en", false,-1);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+82,"out", false,-1, 3,0);
    tracep->declBit(c+83,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"in", false,-1, 6,0);
    tracep->declBit(c+36,"write_en", false,-1);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+76,"out", false,-1, 6,0);
    tracep->declBit(c+77,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+154,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"in", false,-1, 9,0);
    tracep->declBit(c+125,"write_en", false,-1);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+78,"out", false,-1, 9,0);
    tracep->declBit(c+79,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__fsm1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__fsm1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+155,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+9,"in", false,-1, 1,0);
    tracep->declBit(c+37,"write_en", false,-1);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+80,"out", false,-1, 1,0);
    tracep->declBit(c+81,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+149,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+149,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+149,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__ud2__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__ud2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+149,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+154,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+130,"left", false,-1, 9,0);
    tracep->declBus(c+131,"right", false,-1, 9,0);
    tracep->declBus(c+132,"out", false,-1, 9,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder0__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+155,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"left", false,-1, 1,0);
    tracep->declBus(c+39,"right", false,-1, 1,0);
    tracep->declBus(c+12,"out", false,-1, 1,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__adder1__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__adder1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+13,"left", false,-1, 6,0);
    tracep->declBus(c+40,"right", false,-1, 6,0);
    tracep->declBus(c+14,"out", false,-1, 6,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__signal_reg__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__signal_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+42,"in", false,-1, 0,0);
    tracep->declBit(c+43,"write_en", false,-1);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+84,"out", false,-1, 0,0);
    tracep->declBit(c+85,"done", false,-1);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+125,"in", false,-1, 0,0);
    tracep->declBus(c+125,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+149,"in", false,-1, 0,0);
    tracep->declBus(c+149,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+37,"in", false,-1, 0,0);
    tracep->declBus(c+37,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq0_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+149,"in", false,-1, 0,0);
    tracep->declBus(c+149,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq1_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq1_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+36,"in", false,-1, 0,0);
    tracep->declBus(c+36,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq1_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq1_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+149,"in", false,-1, 0,0);
    tracep->declBus(c+149,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq3_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq3_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+38,"in", false,-1, 0,0);
    tracep->declBus(c+38,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq3_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq3_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+149,"in", false,-1, 0,0);
    tracep->declBus(c+149,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq_go__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq_go__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+125,"in", false,-1, 0,0);
    tracep->declBus(c+125,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq_done__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__wrapper_early_reset_static_seq_done__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"in", false,-1, 0,0);
    tracep->declBus(c+44,"out", false,-1, 0,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__p_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__p_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+151,"SIZE", false,-1, 31,0);
    tracep->declBus(c+152,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+48,"addr0", false,-1, 3,0);
    tracep->declBit(c+28,"read_en", false,-1);
    tracep->declBus(c+58,"read_data", false,-1, 31,0);
    tracep->declBit(c+60,"read_done", false,-1);
    tracep->declBus(c+145,"write_data", false,-1, 31,0);
    tracep->declBit(c+144,"write_en", false,-1);
    tracep->declBit(c+59,"write_done", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+87+i*1,"mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+58,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__q_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__q_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+151,"SIZE", false,-1, 31,0);
    tracep->declBus(c+152,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+47,"addr0", false,-1, 3,0);
    tracep->declBit(c+18,"read_en", false,-1);
    tracep->declBus(c+63,"read_data", false,-1, 31,0);
    tracep->declBit(c+67,"read_done", false,-1);
    tracep->declBus(c+32,"write_data", false,-1, 31,0);
    tracep->declBit(c+31,"write_en", false,-1);
    tracep->declBit(c+66,"write_done", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+95+i*1,"mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+63,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__r_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__r_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+151,"SIZE", false,-1, 31,0);
    tracep->declBus(c+152,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+47,"addr0", false,-1, 3,0);
    tracep->declBit(c+18,"read_en", false,-1);
    tracep->declBus(c+68,"read_data", false,-1, 31,0);
    tracep->declBit(c+70,"read_done", false,-1);
    tracep->declBus(c+147,"write_data", false,-1, 31,0);
    tracep->declBit(c+146,"write_en", false,-1);
    tracep->declBit(c+69,"write_done", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+103+i*1,"mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+68,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__s_int__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__s_int__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+151,"SIZE", false,-1, 31,0);
    tracep->declBus(c+152,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+33,"addr0", false,-1, 3,0);
    tracep->declBit(c+18,"read_en", false,-1);
    tracep->declBus(c+71,"read_data", false,-1, 31,0);
    tracep->declBit(c+75,"read_done", false,-1);
    tracep->declBus(c+35,"write_data", false,-1, 31,0);
    tracep->declBit(c+34,"write_en", false,-1);
    tracep->declBit(c+74,"write_done", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+111+i*1,"mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+71,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__mem__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+157,"SIZE", false,-1, 31,0);
    tracep->declBus(c+151,"IDX_SIZE", false,-1, 31,0);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+86,"addr0", false,-1, 7,0);
    tracep->declBit(c+18,"read_en", false,-1);
    tracep->declBus(c+49,"read_data", false,-1, 31,0);
    tracep->declBit(c+51,"read_done", false,-1);
    tracep->declBus(c+140,"write_data", false,-1, 31,0);
    tracep->declBit(c+139,"write_en", false,-1);
    tracep->declBit(c+50,"write_done", false,-1);
    tracep->declBus(c+49,"read_out", false,-1, 31,0);
}

VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__comp__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__comp__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+150,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+150,"INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+158,"FRAC_WIDTH", false,-1, 31,0);
    tracep->declBus(c+158,"SIGNED", false,-1, 31,0);
    tracep->declBus(c+6,"left", false,-1, 31,0);
    tracep->declBus(c+7,"right", false,-1, 31,0);
    tracep->declBit(c+27,"go", false,-1);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+126,"reset", false,-1);
    tracep->declBus(c+56,"out", false,-1, 31,0);
    tracep->declBit(c+57,"done", false,-1);
    tracep->declBus(c+119,"rtmp", false,-1, 31,0);
    tracep->declBus(c+120,"ltmp", false,-1, 31,0);
    tracep->declQuad(c+121,"out_tmp", false,-1, 63,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+123+i*1,"done_buf", true,(i+0));
    }
    tracep->declBit(c+27,"start", false,-1);
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
    tracep->pushNamePrefix("A_i_j_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__A_i_j_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("A_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__0(vlSelf, tracep);
    tracep->pushNamePrefix("mem ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__A_int__mem__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("bin_read0_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__bin_read0_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("const0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__const0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("const10 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__const10__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("const2 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__const2__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("early_reset_static_seq3_done ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq3_done__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("early_reset_static_seq3_go ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__early_reset_static_seq3_go__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("i1 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__i1__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("j0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__j0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mult_pipe0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__0(vlSelf, tracep);
    tracep->pushNamePrefix("comp ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__mult_pipe0__comp__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("p_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__p_int__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("p_int_read0_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__p_int_read0_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("q0_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__q0_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("q_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__q_int__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("r_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__r_int__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s0_0 ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__s0_0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s_int ");
    VTOP___024root__trace_init_sub__TOP__TOP__main__s_int__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
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
    bufp->fullIData(oldp+2,(((IData)(vlSymsp->TOP__TOP__main.__PVT__q0_0_write_en)
                              ? vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out
                              : (((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in))
                                  ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                  : 0U))),32);
    bufp->fullIData(oldp+3,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard20)
                              ? vlSymsp->TOP__TOP__main__s0_0.__PVT__out
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard23)
                                  ? vlSymsp->TOP__TOP__main__q0_0.__PVT__out
                                  : 0U))),32);
    bufp->fullIData(oldp+4,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard20)
                              ? vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__out
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard23)
                                  ? vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__out
                                  : 0U))),32);
    bufp->fullIData(oldp+5,(((IData)(vlSymsp->TOP__TOP__main.__PVT__q0_0_write_en)
                              ? vlSymsp->TOP__TOP__main__r_int.__PVT__read_out
                              : (((5U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in))
                                  ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                  : 0U))),32);
    bufp->fullIData(oldp+6,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard161)
                              ? vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__out
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard166)
                                  ? vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__out
                                  : 0U))),32);
    bufp->fullIData(oldp+7,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard161)
                              ? vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__out
                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard166)
                                  ? vlSymsp->TOP__TOP__main__p_int_read0_0.__PVT__out
                                  : 0U))),32);
    bufp->fullCData(oldp+8,((((0x6bU != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                              & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in))
                              ? (0x7fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + 
                                          ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                            ? 1U : 0U)))
                              : 0U)),7);
    bufp->fullCData(oldp+9,((((2U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                              & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in))
                              ? 0U : (((2U != (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                       & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in))
                                       ? (3U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)
                                                  : 0U) 
                                                + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                                    ? 1U
                                                    : 0U)))
                                       : 0U))),2);
    bufp->fullCData(oldp+10,((((0xcU == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in))
                               ? 0U : (((0xcU != (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in))
                                        ? (0xfU & (
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                                     ? (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)
                                                     : 0U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                                     ? 1U
                                                     : 0U)))
                                        : 0U))),4);
    bufp->fullCData(oldp+11,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)
                               : 0U)),2);
    bufp->fullCData(oldp+12,((3U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                      ? (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)
                                      : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                                ? 1U
                                                : 0U)))),2);
    bufp->fullCData(oldp+13,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                               : 0U)),7);
    bufp->fullCData(oldp+14,((0x7fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                         : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                                   ? 1U
                                                   : 0U)))),7);
    bufp->fullCData(oldp+15,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                               ? (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)
                               : 0U)),4);
    bufp->fullCData(oldp+16,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                        ? (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)
                                        : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                                  ? 1U
                                                  : 0U)))),4);
    bufp->fullBit(oldp+17,(vlSymsp->TOP__TOP__main.__PVT__A_i_j_0_write_en));
    bufp->fullBit(oldp+18,(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en));
    bufp->fullCData(oldp+19,(vlSymsp->TOP__TOP__main.__PVT__add0_left),4);
    bufp->fullCData(oldp+20,((0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__add0_left)))),4);
    bufp->fullIData(oldp+21,(vlSymsp->TOP__TOP__main__add1.__PVT__out),32);
    bufp->fullBit(oldp+22,(vlSymsp->TOP__TOP__main.__PVT__bin_read0_0_write_en));
    bufp->fullCData(oldp+23,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard46)
                               ? (0xfU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__TOP__main.__PVT__add0_left)))
                               : 0U)),4);
    bufp->fullBit(oldp+24,(vlSymsp->TOP__TOP__main.__PVT__i1_write_en));
    bufp->fullCData(oldp+25,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard49)
                               ? (0xfU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__TOP__main.__PVT__add0_left)))
                               : 0U)),4);
    bufp->fullBit(oldp+26,(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
    bufp->fullBit(oldp+27,(vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go));
    bufp->fullBit(oldp+28,(vlSymsp->TOP__TOP__main.__PVT__p_int_read_en));
    bufp->fullBit(oldp+29,(vlSymsp->TOP__TOP__main.__PVT__p_int_read0_0_write_en));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__TOP__main.__PVT__q0_0_write_en));
    bufp->fullBit(oldp+31,(vlSymsp->TOP__TOP__main.__PVT__q_int_write_en));
    bufp->fullIData(oldp+32,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard23)
                               ? vlSymsp->TOP__TOP__main__add1.__PVT__out
                               : 0U)),32);
    bufp->fullCData(oldp+33,(vlSymsp->TOP__TOP__main.__PVT__s_int_addr0),4);
    bufp->fullBit(oldp+34,(vlSymsp->TOP__TOP__main.__PVT__s_int_write_en));
    bufp->fullIData(oldp+35,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard20)
                               ? vlSymsp->TOP__TOP__main__add1.__PVT__out
                               : 0U)),32);
    bufp->fullBit(oldp+36,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in));
    bufp->fullCData(oldp+39,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                               ? 1U : 0U)),2);
    bufp->fullCData(oldp+40,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                               ? 1U : 0U)),7);
    bufp->fullCData(oldp+41,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                               ? 1U : 0U)),4);
    bufp->fullBit(oldp+42,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_in));
    bufp->fullBit(oldp+43,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_write_en));
    bufp->fullBit(oldp+44,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_done_in));
    bufp->fullIData(oldp+45,(vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__out),32);
    bufp->fullBit(oldp+46,(vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__done));
    bufp->fullCData(oldp+47,(vlSymsp->TOP__TOP__main__i1.__PVT__out),4);
    bufp->fullCData(oldp+48,(vlSymsp->TOP__TOP__main__j0.__PVT__out),4);
    bufp->fullIData(oldp+49,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out),32);
    bufp->fullBit(oldp+50,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__write_done));
    bufp->fullBit(oldp+51,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_done));
    bufp->fullIData(oldp+52,(vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__out),32);
    bufp->fullBit(oldp+53,(vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__done));
    bufp->fullBit(oldp+54,(vlSymsp->TOP__TOP__main__i1.__PVT__done));
    bufp->fullBit(oldp+55,(vlSymsp->TOP__TOP__main__j0.__PVT__done));
    bufp->fullIData(oldp+56,((IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)),32);
    bufp->fullBit(oldp+57,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf
                           [1U]));
    bufp->fullIData(oldp+58,(vlSymsp->TOP__TOP__main__p_int.__PVT__read_out),32);
    bufp->fullBit(oldp+59,(vlSymsp->TOP__TOP__main__p_int.__PVT__write_done));
    bufp->fullBit(oldp+60,(vlSymsp->TOP__TOP__main__p_int.__PVT__read_done));
    bufp->fullIData(oldp+61,(vlSymsp->TOP__TOP__main__p_int_read0_0.__PVT__out),32);
    bufp->fullBit(oldp+62,(vlSymsp->TOP__TOP__main__p_int_read0_0.__PVT__done));
    bufp->fullIData(oldp+63,(vlSymsp->TOP__TOP__main__q_int.__PVT__read_out),32);
    bufp->fullIData(oldp+64,(vlSymsp->TOP__TOP__main__q0_0.__PVT__out),32);
    bufp->fullBit(oldp+65,(vlSymsp->TOP__TOP__main__q0_0.__PVT__done));
    bufp->fullBit(oldp+66,(vlSymsp->TOP__TOP__main__q_int.__PVT__write_done));
    bufp->fullBit(oldp+67,(vlSymsp->TOP__TOP__main__q_int.__PVT__read_done));
    bufp->fullIData(oldp+68,(vlSymsp->TOP__TOP__main__r_int.__PVT__read_out),32);
    bufp->fullBit(oldp+69,(vlSymsp->TOP__TOP__main__r_int.__PVT__write_done));
    bufp->fullBit(oldp+70,(vlSymsp->TOP__TOP__main__r_int.__PVT__read_done));
    bufp->fullIData(oldp+71,(vlSymsp->TOP__TOP__main__s_int.__PVT__read_out),32);
    bufp->fullIData(oldp+72,(vlSymsp->TOP__TOP__main__s0_0.__PVT__out),32);
    bufp->fullBit(oldp+73,(vlSymsp->TOP__TOP__main__s0_0.__PVT__done));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__TOP__main__s_int.__PVT__write_done));
    bufp->fullBit(oldp+75,(vlSymsp->TOP__TOP__main__s_int.__PVT__read_done));
    bufp->fullCData(oldp+76,(vlSymsp->TOP__TOP__main__fsm.__PVT__out),7);
    bufp->fullBit(oldp+77,(vlSymsp->TOP__TOP__main__fsm.__PVT__done));
    bufp->fullSData(oldp+78,(vlSymsp->TOP__TOP__main__fsm0.__PVT__out),10);
    bufp->fullBit(oldp+79,(vlSymsp->TOP__TOP__main__fsm0.__PVT__done));
    bufp->fullCData(oldp+80,(vlSymsp->TOP__TOP__main__fsm1.__PVT__out),2);
    bufp->fullBit(oldp+81,(vlSymsp->TOP__TOP__main__fsm1.__PVT__done));
    bufp->fullCData(oldp+82,(vlSymsp->TOP__TOP__main__fsm2.__PVT__out),4);
    bufp->fullBit(oldp+83,(vlSymsp->TOP__TOP__main__fsm2.__PVT__done));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out));
    bufp->fullBit(oldp+85,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__done));
    bufp->fullCData(oldp+86,(vlSymsp->TOP__TOP__main__A_int.__PVT__addr),8);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__TOP__main__p_int.__PVT__mem[0]),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__TOP__main__p_int.__PVT__mem[1]),32);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__TOP__main__p_int.__PVT__mem[2]),32);
    bufp->fullIData(oldp+90,(vlSymsp->TOP__TOP__main__p_int.__PVT__mem[3]),32);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__TOP__main__p_int.__PVT__mem[4]),32);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__TOP__main__p_int.__PVT__mem[5]),32);
    bufp->fullIData(oldp+93,(vlSymsp->TOP__TOP__main__p_int.__PVT__mem[6]),32);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__TOP__main__p_int.__PVT__mem[7]),32);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__TOP__main__q_int.__PVT__mem[0]),32);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__TOP__main__q_int.__PVT__mem[1]),32);
    bufp->fullIData(oldp+97,(vlSymsp->TOP__TOP__main__q_int.__PVT__mem[2]),32);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__TOP__main__q_int.__PVT__mem[3]),32);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__TOP__main__q_int.__PVT__mem[4]),32);
    bufp->fullIData(oldp+100,(vlSymsp->TOP__TOP__main__q_int.__PVT__mem[5]),32);
    bufp->fullIData(oldp+101,(vlSymsp->TOP__TOP__main__q_int.__PVT__mem[6]),32);
    bufp->fullIData(oldp+102,(vlSymsp->TOP__TOP__main__q_int.__PVT__mem[7]),32);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__TOP__main__r_int.__PVT__mem[0]),32);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__TOP__main__r_int.__PVT__mem[1]),32);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__TOP__main__r_int.__PVT__mem[2]),32);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__TOP__main__r_int.__PVT__mem[3]),32);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__TOP__main__r_int.__PVT__mem[4]),32);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__TOP__main__r_int.__PVT__mem[5]),32);
    bufp->fullIData(oldp+109,(vlSymsp->TOP__TOP__main__r_int.__PVT__mem[6]),32);
    bufp->fullIData(oldp+110,(vlSymsp->TOP__TOP__main__r_int.__PVT__mem[7]),32);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__TOP__main__s_int.__PVT__mem[0]),32);
    bufp->fullIData(oldp+112,(vlSymsp->TOP__TOP__main__s_int.__PVT__mem[1]),32);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__TOP__main__s_int.__PVT__mem[2]),32);
    bufp->fullIData(oldp+114,(vlSymsp->TOP__TOP__main__s_int.__PVT__mem[3]),32);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__TOP__main__s_int.__PVT__mem[4]),32);
    bufp->fullIData(oldp+116,(vlSymsp->TOP__TOP__main__s_int.__PVT__mem[5]),32);
    bufp->fullIData(oldp+117,(vlSymsp->TOP__TOP__main__s_int.__PVT__mem[6]),32);
    bufp->fullIData(oldp+118,(vlSymsp->TOP__TOP__main__s_int.__PVT__mem[7]),32);
    bufp->fullIData(oldp+119,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__rtmp),32);
    bufp->fullIData(oldp+120,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__ltmp),32);
    bufp->fullQData(oldp+121,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp),64);
    bufp->fullBit(oldp+123,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[0]));
    bufp->fullBit(oldp+124,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[1]));
    bufp->fullBit(oldp+125,(vlSymsp->TOP__TOP.__PVT__go));
    bufp->fullBit(oldp+126,(vlSymsp->TOP__TOP.__PVT__reset));
    bufp->fullQData(oldp+127,(vlSymsp->TOP__TOP.__PVT__cycle_count),64);
    bufp->fullSData(oldp+129,((((0x37bU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                ? 0U : (((0x37bU != (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                         & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                         ? (0x3ffU 
                                            & (((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                                 ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)
                                                 : 0U) 
                                               + ((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                                   ? 1U
                                                   : 0U)))
                                         : 0U))),10);
    bufp->fullSData(oldp+130,(((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)
                                : 0U)),10);
    bufp->fullSData(oldp+131,(((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                ? 1U : 0U)),10);
    bufp->fullSData(oldp+132,((0x3ffU & (((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                           ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)
                                           : 0U) + 
                                         ((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                           ? 1U : 0U)))),10);
    bufp->fullBit(oldp+133,(vlSymsp->TOP__TOP.__PVT__clk));
    bufp->fullIData(oldp+134,(vlSymsp->TOP__TOP.__PVT__NOTRACE),32);
    bufp->fullQData(oldp+135,(vlSymsp->TOP__TOP.__PVT__CYCLE_LIMIT),64);
    bufp->fullIData(oldp+137,(vlSymsp->TOP__TOP.__PVT__CODE),32);
    bufp->fullIData(oldp+138,(3U),32);
    bufp->fullBit(oldp+139,(vlSymsp->TOP__TOP__main.__PVT__A_int_write_en));
    bufp->fullIData(oldp+140,(vlSymsp->TOP__TOP__main.__PVT__A_int_write_data),32);
    bufp->fullCData(oldp+141,(1U),4);
    bufp->fullCData(oldp+142,(0U),4);
    bufp->fullIData(oldp+143,(0U),32);
    bufp->fullBit(oldp+144,(vlSymsp->TOP__TOP__main.__PVT__p_int_write_en));
    bufp->fullIData(oldp+145,(vlSymsp->TOP__TOP__main.__PVT__p_int_write_data),32);
    bufp->fullBit(oldp+146,(vlSymsp->TOP__TOP__main.__PVT__r_int_write_en));
    bufp->fullIData(oldp+147,(vlSymsp->TOP__TOP__main.__PVT__r_int_write_data),32);
    bufp->fullBit(oldp+148,(0U));
    bufp->fullBit(oldp+149,(0U));
    bufp->fullIData(oldp+150,(0x20U),32);
    bufp->fullIData(oldp+151,(8U),32);
    bufp->fullIData(oldp+152,(4U),32);
    bufp->fullIData(oldp+153,(7U),32);
    bufp->fullIData(oldp+154,(0xaU),32);
    bufp->fullIData(oldp+155,(2U),32);
    bufp->fullIData(oldp+156,(1U),32);
    bufp->fullIData(oldp+157,(0x40U),32);
    bufp->fullIData(oldp+158,(0U),32);
}

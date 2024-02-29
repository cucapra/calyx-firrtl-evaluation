// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTOP__Syms.h"


void VTOP___024root__trace_chg_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_chg_top_0\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTOP___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VTOP___024root__trace_chg_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__TOP__main.__PVT__CODE),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+1,(((IData)(vlSymsp->TOP__TOP__main.__PVT__q0_0_write_en)
                                 ? vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out
                                 : (((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in))
                                     ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                     : 0U))),32);
        bufp->chgIData(oldp+2,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard20)
                                 ? vlSymsp->TOP__TOP__main__s0_0.__PVT__out
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard23)
                                     ? vlSymsp->TOP__TOP__main__q0_0.__PVT__out
                                     : 0U))),32);
        bufp->chgIData(oldp+3,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard20)
                                 ? vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__out
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard23)
                                     ? vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__out
                                     : 0U))),32);
        bufp->chgIData(oldp+4,(((IData)(vlSymsp->TOP__TOP__main.__PVT__q0_0_write_en)
                                 ? vlSymsp->TOP__TOP__main__r_int.__PVT__read_out
                                 : (((5U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in))
                                     ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                     : 0U))),32);
        bufp->chgIData(oldp+5,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard161)
                                 ? vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__out
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard166)
                                     ? vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__out
                                     : 0U))),32);
        bufp->chgIData(oldp+6,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard161)
                                 ? vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__out
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard166)
                                     ? vlSymsp->TOP__TOP__main__p_int_read0_0.__PVT__out
                                     : 0U))),32);
        bufp->chgCData(oldp+7,((((0x6bU != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                 & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in))
                                 ? (0x7fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                               ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                               : 0U) 
                                             + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                                 ? 1U
                                                 : 0U)))
                                 : 0U)),7);
        bufp->chgCData(oldp+8,((((2U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                 & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in))
                                 ? 0U : (((2U != (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in))
                                          ? (3U & (
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                                     ? (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)
                                                     : 0U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                                     ? 1U
                                                     : 0U)))
                                          : 0U))),2);
        bufp->chgCData(oldp+9,((((0xcU == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                 & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in))
                                 ? 0U : (((0xcU != (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in))
                                          ? (0xfU & 
                                             (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                                ? (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)
                                                : 0U) 
                                              + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                                  ? 1U
                                                  : 0U)))
                                          : 0U))),4);
        bufp->chgCData(oldp+10,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)
                                  : 0U)),2);
        bufp->chgCData(oldp+11,((3U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)
                                         : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                                   ? 1U
                                                   : 0U)))),2);
        bufp->chgCData(oldp+12,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),7);
        bufp->chgCData(oldp+13,((0x7fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + 
                                          ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                            ? 1U : 0U)))),7);
        bufp->chgCData(oldp+14,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)
                                  : 0U)),4);
        bufp->chgCData(oldp+15,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                           ? (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)
                                           : 0U) + 
                                         ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                           ? 1U : 0U)))),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+16,(vlSymsp->TOP__TOP__main.__PVT__A_i_j_0_write_en));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en));
        bufp->chgCData(oldp+18,(vlSymsp->TOP__TOP__main.__PVT__add0_left),4);
        bufp->chgCData(oldp+19,((0xfU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__TOP__main.__PVT__add0_left)))),4);
        bufp->chgIData(oldp+20,(vlSymsp->TOP__TOP__main__add1.__PVT__out),32);
        bufp->chgBit(oldp+21,(vlSymsp->TOP__TOP__main.__PVT__bin_read0_0_write_en));
        bufp->chgCData(oldp+22,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard46)
                                  ? (0xfU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__TOP__main.__PVT__add0_left)))
                                  : 0U)),4);
        bufp->chgBit(oldp+23,(vlSymsp->TOP__TOP__main.__PVT__i1_write_en));
        bufp->chgCData(oldp+24,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard49)
                                  ? (0xfU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__TOP__main.__PVT__add0_left)))
                                  : 0U)),4);
        bufp->chgBit(oldp+25,(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__TOP__main.__PVT__p_int_read_en));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__TOP__main.__PVT__p_int_read0_0_write_en));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__TOP__main.__PVT__q0_0_write_en));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__TOP__main.__PVT__q_int_write_en));
        bufp->chgIData(oldp+31,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard23)
                                  ? vlSymsp->TOP__TOP__main__add1.__PVT__out
                                  : 0U)),32);
        bufp->chgCData(oldp+32,(vlSymsp->TOP__TOP__main.__PVT__s_int_addr0),4);
        bufp->chgBit(oldp+33,(vlSymsp->TOP__TOP__main.__PVT__s_int_write_en));
        bufp->chgIData(oldp+34,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard20)
                                  ? vlSymsp->TOP__TOP__main__add1.__PVT__out
                                  : 0U)),32);
        bufp->chgBit(oldp+35,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in));
        bufp->chgCData(oldp+38,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                  ? 1U : 0U)),2);
        bufp->chgCData(oldp+39,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                  ? 1U : 0U)),7);
        bufp->chgCData(oldp+40,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                  ? 1U : 0U)),4);
        bufp->chgBit(oldp+41,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_in));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_write_en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+43,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_done_in));
        bufp->chgIData(oldp+44,(vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__out),32);
        bufp->chgBit(oldp+45,(vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__done));
        bufp->chgCData(oldp+46,(vlSymsp->TOP__TOP__main__i1.__PVT__out),4);
        bufp->chgCData(oldp+47,(vlSymsp->TOP__TOP__main__j0.__PVT__out),4);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+49,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+51,(vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__out),32);
        bufp->chgBit(oldp+52,(vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__done));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__TOP__main__i1.__PVT__done));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__TOP__main__j0.__PVT__done));
        bufp->chgIData(oldp+55,((IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)),32);
        bufp->chgBit(oldp+56,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf
                              [1U]));
        bufp->chgIData(oldp+57,(vlSymsp->TOP__TOP__main__p_int.__PVT__read_out),32);
        bufp->chgBit(oldp+58,(vlSymsp->TOP__TOP__main__p_int.__PVT__write_done));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__TOP__main__p_int.__PVT__read_done));
        bufp->chgIData(oldp+60,(vlSymsp->TOP__TOP__main__p_int_read0_0.__PVT__out),32);
        bufp->chgBit(oldp+61,(vlSymsp->TOP__TOP__main__p_int_read0_0.__PVT__done));
        bufp->chgIData(oldp+62,(vlSymsp->TOP__TOP__main__q_int.__PVT__read_out),32);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__TOP__main__q0_0.__PVT__out),32);
        bufp->chgBit(oldp+64,(vlSymsp->TOP__TOP__main__q0_0.__PVT__done));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__TOP__main__q_int.__PVT__write_done));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__TOP__main__q_int.__PVT__read_done));
        bufp->chgIData(oldp+67,(vlSymsp->TOP__TOP__main__r_int.__PVT__read_out),32);
        bufp->chgBit(oldp+68,(vlSymsp->TOP__TOP__main__r_int.__PVT__write_done));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__TOP__main__r_int.__PVT__read_done));
        bufp->chgIData(oldp+70,(vlSymsp->TOP__TOP__main__s_int.__PVT__read_out),32);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__TOP__main__s0_0.__PVT__out),32);
        bufp->chgBit(oldp+72,(vlSymsp->TOP__TOP__main__s0_0.__PVT__done));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__TOP__main__s_int.__PVT__write_done));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__TOP__main__s_int.__PVT__read_done));
        bufp->chgCData(oldp+75,(vlSymsp->TOP__TOP__main__fsm.__PVT__out),7);
        bufp->chgBit(oldp+76,(vlSymsp->TOP__TOP__main__fsm.__PVT__done));
        bufp->chgSData(oldp+77,(vlSymsp->TOP__TOP__main__fsm0.__PVT__out),10);
        bufp->chgBit(oldp+78,(vlSymsp->TOP__TOP__main__fsm0.__PVT__done));
        bufp->chgCData(oldp+79,(vlSymsp->TOP__TOP__main__fsm1.__PVT__out),2);
        bufp->chgBit(oldp+80,(vlSymsp->TOP__TOP__main__fsm1.__PVT__done));
        bufp->chgCData(oldp+81,(vlSymsp->TOP__TOP__main__fsm2.__PVT__out),4);
        bufp->chgBit(oldp+82,(vlSymsp->TOP__TOP__main__fsm2.__PVT__done));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__done));
        bufp->chgCData(oldp+85,(vlSymsp->TOP__TOP__main__A_int.__PVT__addr),8);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__TOP__main__p_int.__PVT__mem[0]),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__TOP__main__p_int.__PVT__mem[1]),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__TOP__main__p_int.__PVT__mem[2]),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__TOP__main__p_int.__PVT__mem[3]),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__TOP__main__p_int.__PVT__mem[4]),32);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__TOP__main__p_int.__PVT__mem[5]),32);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__TOP__main__p_int.__PVT__mem[6]),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__TOP__main__p_int.__PVT__mem[7]),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__TOP__main__q_int.__PVT__mem[0]),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__TOP__main__q_int.__PVT__mem[1]),32);
        bufp->chgIData(oldp+96,(vlSymsp->TOP__TOP__main__q_int.__PVT__mem[2]),32);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__TOP__main__q_int.__PVT__mem[3]),32);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__TOP__main__q_int.__PVT__mem[4]),32);
        bufp->chgIData(oldp+99,(vlSymsp->TOP__TOP__main__q_int.__PVT__mem[5]),32);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__TOP__main__q_int.__PVT__mem[6]),32);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__TOP__main__q_int.__PVT__mem[7]),32);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__TOP__main__r_int.__PVT__mem[0]),32);
        bufp->chgIData(oldp+103,(vlSymsp->TOP__TOP__main__r_int.__PVT__mem[1]),32);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__TOP__main__r_int.__PVT__mem[2]),32);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__TOP__main__r_int.__PVT__mem[3]),32);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__TOP__main__r_int.__PVT__mem[4]),32);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__TOP__main__r_int.__PVT__mem[5]),32);
        bufp->chgIData(oldp+108,(vlSymsp->TOP__TOP__main__r_int.__PVT__mem[6]),32);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__TOP__main__r_int.__PVT__mem[7]),32);
        bufp->chgIData(oldp+110,(vlSymsp->TOP__TOP__main__s_int.__PVT__mem[0]),32);
        bufp->chgIData(oldp+111,(vlSymsp->TOP__TOP__main__s_int.__PVT__mem[1]),32);
        bufp->chgIData(oldp+112,(vlSymsp->TOP__TOP__main__s_int.__PVT__mem[2]),32);
        bufp->chgIData(oldp+113,(vlSymsp->TOP__TOP__main__s_int.__PVT__mem[3]),32);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__TOP__main__s_int.__PVT__mem[4]),32);
        bufp->chgIData(oldp+115,(vlSymsp->TOP__TOP__main__s_int.__PVT__mem[5]),32);
        bufp->chgIData(oldp+116,(vlSymsp->TOP__TOP__main__s_int.__PVT__mem[6]),32);
        bufp->chgIData(oldp+117,(vlSymsp->TOP__TOP__main__s_int.__PVT__mem[7]),32);
        bufp->chgIData(oldp+118,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__rtmp),32);
        bufp->chgIData(oldp+119,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__ltmp),32);
        bufp->chgQData(oldp+120,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp),64);
        bufp->chgBit(oldp+122,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[0]));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[1]));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+124,(vlSymsp->TOP__TOP.__PVT__go));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__TOP.__PVT__reset));
        bufp->chgQData(oldp+126,(vlSymsp->TOP__TOP.__PVT__cycle_count),64);
        bufp->chgSData(oldp+128,((((0x37bU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                   & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                   ? 0U : (((0x37bU 
                                             != (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                            & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                            ? (0x3ffU 
                                               & (((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                                    ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)
                                                    : 0U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                                    ? 1U
                                                    : 0U)))
                                            : 0U))),10);
        bufp->chgSData(oldp+129,(((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                   ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)
                                   : 0U)),10);
        bufp->chgSData(oldp+130,(((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                   ? 1U : 0U)),10);
        bufp->chgSData(oldp+131,((0x3ffU & (((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                              ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)
                                              : 0U) 
                                            + ((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                                ? 1U
                                                : 0U)))),10);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+132,(vlSymsp->TOP__TOP.__PVT__clk));
        bufp->chgIData(oldp+133,(vlSymsp->TOP__TOP.__PVT__NOTRACE),32);
        bufp->chgQData(oldp+134,(vlSymsp->TOP__TOP.__PVT__CYCLE_LIMIT),64);
        bufp->chgIData(oldp+136,(vlSymsp->TOP__TOP.__PVT__CODE),32);
    }
}

void VTOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_cleanup\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}

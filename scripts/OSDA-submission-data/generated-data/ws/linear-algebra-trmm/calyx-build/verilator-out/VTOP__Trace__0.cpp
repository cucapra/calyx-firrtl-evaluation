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
        bufp->chgIData(oldp+1,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard113)
                                 ? vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard116)
                                     ? vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out
                                     : ((((7U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                         | ((5U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                            & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)))
                                         ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                         : 0U)))),32);
        bufp->chgIData(oldp+2,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard113)
                                 ? vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard116)
                                     ? vlSymsp->TOP__TOP__main__alpha_int.__PVT__read_out
                                     : 0U))),32);
        bufp->chgCData(oldp+3,((((((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                   | (8U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                 | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard182))
                                 ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                 : (((2U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in))
                                     ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                     : 0U))),4);
        bufp->chgIData(oldp+4,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard21)
                                 ? (vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out 
                                    + vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__out)
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard162)
                                     ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                     : 0U))),32);
        bufp->chgCData(oldp+5,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                     ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                     : 0U))),4);
        bufp->chgCData(oldp+6,(((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                 ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                 : 0U)),4);
        bufp->chgBit(oldp+7,((((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                : 0U) < ((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                          ? 8U : 0U))));
        bufp->chgIData(oldp+8,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard458)
                                 ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard463)
                                     ? vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__out
                                     : 0U))),32);
        bufp->chgIData(oldp+9,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard463)
                                 ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard458)
                                     ? vlSymsp->TOP__TOP__main__B_k_j_0.__PVT__out
                                     : 0U))),32);
        bufp->chgBit(oldp+10,(((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en) 
                               & (((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                    ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                    : 0U) < ((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                              ? 8U : 0U)))));
        bufp->chgCData(oldp+11,((0xfU & (((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
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
                                                 + 
                                                 ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                                   ? 1U
                                                   : 0U))
                                              : (((
                                                   ((((0U 
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
                                                  : 
                                                 (((9U 
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
        bufp->chgCData(oldp+12,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),4);
        bufp->chgCData(oldp+13,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                           ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                           : 0U) + 
                                         ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                           ? 1U : 0U)))),4);
        bufp->chgCData(oldp+14,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),4);
        bufp->chgCData(oldp+15,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                           ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                           : 0U) + 
                                         ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                           ? 1U : 0U)))),4);
        bufp->chgCData(oldp+16,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),4);
        bufp->chgCData(oldp+17,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                           ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                           : 0U) + 
                                         ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                           ? 1U : 0U)))),4);
        bufp->chgCData(oldp+18,(((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),4);
        bufp->chgCData(oldp+19,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                                           ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                           : 0U) + 
                                         ((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                                           ? 1U : 0U)))),4);
        bufp->chgCData(oldp+20,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),4);
        bufp->chgCData(oldp+21,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)
                                           ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                           : 0U) + 
                                         ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)
                                           ? 1U : 0U)))),4);
        bufp->chgCData(oldp+22,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard262)
                                  ? 3U : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard284)
                                           ? 5U : (
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard311) 
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
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+23,(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__TOP__main.__PVT__A_int_read0_0_write_en));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__TOP__main.__PVT__B_i_j_0_write_en));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__TOP__main.__PVT__B_int_read_en));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__TOP__main.__PVT__B_k_j_0_write_en));
        bufp->chgCData(oldp+29,(vlSymsp->TOP__TOP__main.__PVT__add0_left),4);
        bufp->chgCData(oldp+30,((0xfU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__TOP__main.__PVT__add0_left)))),4);
        bufp->chgBit(oldp+31,(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read_en));
        bufp->chgCData(oldp+32,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke14_go_in)
                                  ? (0xfU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__TOP__main.__PVT__add0_left)))
                                  : 0U)),4);
        bufp->chgBit(oldp+33,(vlSymsp->TOP__TOP__main.__PVT__i0_write_en));
        bufp->chgCData(oldp+34,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard58)
                                  ? (0xfU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__TOP__main.__PVT__add0_left)))
                                  : 0U)),4);
        bufp->chgBit(oldp+35,(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__TOP__main.__PVT__k_0_write_en));
        bufp->chgCData(oldp+37,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                  ? 7U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                           ? 0xbU : 0U))),4);
        bufp->chgBit(oldp+38,(vlSymsp->TOP__TOP__main__le0.__PVT__out));
        bufp->chgCData(oldp+39,(((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                  ? 8U : 0U)),4);
        bufp->chgBit(oldp+40,(vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go));
        bufp->chgBit(oldp+41,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in) 
                               & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in));
        bufp->chgBit(oldp+43,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                               & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__TOP__main.__PVT__fsm_write_en));
        bufp->chgCData(oldp+47,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                  ? 1U : 0U)),4);
        bufp->chgCData(oldp+48,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                  ? 1U : 0U)),4);
        bufp->chgCData(oldp+49,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                  ? 1U : 0U)),4);
        bufp->chgCData(oldp+50,(((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                                  ? 1U : 0U)),4);
        bufp->chgCData(oldp+51,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)
                                  ? 1U : 0U)),4);
        bufp->chgBit(oldp+52,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_in));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_write_en));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__TOP__main.__PVT__fsm0_write_en));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__TOP__main.__PVT__invoke0_go_in));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__TOP__main.__PVT__invoke1_go_in));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__TOP__main.__PVT__invoke2_go_in));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__TOP__main.__PVT__invoke14_go_in));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in));
        bufp->chgCData(oldp+62,(vlSymsp->TOP__TOP__main__B_int.__PVT__addr),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+63,((0xbU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))));
        bufp->chgCData(oldp+64,(vlSymsp->TOP__TOP__main__k_0.__PVT__out),4);
        bufp->chgCData(oldp+65,(vlSymsp->TOP__TOP__main__i0.__PVT__out),4);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+69,(vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out),32);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__done));
        bufp->chgIData(oldp+71,(vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__out),32);
        bufp->chgBit(oldp+72,(vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__done));
        bufp->chgCData(oldp+73,(vlSymsp->TOP__TOP__main__j0.__PVT__out),4);
        bufp->chgIData(oldp+74,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+75,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+77,(vlSymsp->TOP__TOP__main__B_k_j_0.__PVT__out),32);
        bufp->chgBit(oldp+78,(vlSymsp->TOP__TOP__main__B_k_j_0.__PVT__done));
        bufp->chgIData(oldp+79,((vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out 
                                 + vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__out)),32);
        bufp->chgIData(oldp+80,(vlSymsp->TOP__TOP__main__alpha_int.__PVT__read_out),32);
        bufp->chgBit(oldp+81,(vlSymsp->TOP__TOP__main__alpha_int.__PVT__write_done));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__TOP__main__alpha_int.__PVT__read_done));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__TOP__main__i0.__PVT__done));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__TOP__main__j0.__PVT__done));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__TOP__main__k_0.__PVT__done));
        bufp->chgIData(oldp+86,((IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)),32);
        bufp->chgBit(oldp+87,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf
                              [1U]));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__TOP__main__comb_reg.__PVT__out));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__TOP__main__comb_reg.__PVT__done));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__out));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__done));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__out));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__done));
        bufp->chgCData(oldp+94,(vlSymsp->TOP__TOP__main__fsm.__PVT__out),4);
        bufp->chgBit(oldp+95,(vlSymsp->TOP__TOP__main__fsm.__PVT__done));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__done));
        bufp->chgCData(oldp+98,(vlSymsp->TOP__TOP__main__fsm0.__PVT__out),4);
        bufp->chgBit(oldp+99,(vlSymsp->TOP__TOP__main__fsm0.__PVT__done));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_done_in));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_done_in));
        bufp->chgCData(oldp+102,(vlSymsp->TOP__TOP__main__A_int.__PVT__addr),8);
        bufp->chgIData(oldp+103,(vlSymsp->TOP__TOP__main__alpha_int.__PVT__mem[0]),32);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__rtmp),32);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__ltmp),32);
        bufp->chgQData(oldp+106,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp),64);
        bufp->chgBit(oldp+108,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[0]));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+110,(vlSymsp->TOP__TOP.__PVT__clk));
        bufp->chgIData(oldp+111,(vlSymsp->TOP__TOP.__PVT__NOTRACE),32);
        bufp->chgQData(oldp+112,(vlSymsp->TOP__TOP.__PVT__CYCLE_LIMIT),64);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__TOP.__PVT__CODE),32);
    }
    bufp->chgBit(oldp+115,(vlSymsp->TOP__TOP.__PVT__go));
    bufp->chgBit(oldp+116,(vlSymsp->TOP__TOP.__PVT__reset));
    bufp->chgQData(oldp+117,(vlSymsp->TOP__TOP.__PVT__cycle_count),64);
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

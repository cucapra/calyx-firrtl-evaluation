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
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+0,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let5_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                 : 0U)),4);
        bufp->chgCData(oldp+1,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let5_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                 : 0U)),4);
        bufp->chgCData(oldp+2,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                 : (((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let3_go_in) 
                                     | ((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let7_go_in) 
                                        | (IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en)))
                                     ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                     : 0U))),4);
        bufp->chgCData(oldp+3,((((IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_read_en) 
                                 | (IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en))
                                 ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                 : 0U)),4);
        bufp->chgIData(oldp+4,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_ha2ac0650__0)
                                 ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                 : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0)
                                     ? (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0)
                                          ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                          : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0)
                                                    ? vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__out
                                                    : 0U))
                                     : 0U))),32);
        bufp->chgIData(oldp+5,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5cffc676__0)
                                 ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke9_go_in)
                                     ? vlSymsp->TOP__TOP__B_int__mem.__PVT__read_out
                                     : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke5_go_in)
                                         ? vlSymsp->TOP__TOP__A_int__mem.__PVT__read_out
                                         : 0U)))),32);
        bufp->chgIData(oldp+6,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke3_go_in)
                                 ? vlSymsp->TOP__TOP__B_int__mem.__PVT__read_out
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke10_go_in)
                                     ? vlSymsp->TOP__TOP__alpha_int.__PVT__read_out
                                     : 0U))),32);
        bufp->chgIData(oldp+7,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke4_go_in)
                                 ? vlSymsp->TOP__TOP__B_int__mem.__PVT__read_out
                                 : 0U)),32);
        bufp->chgCData(oldp+8,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hae6fc7c9__0)
                                 ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                 : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h24f850e6__0)
                                     ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                     : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5a0ff7ae__0)
                                         ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                         : 0U)))),4);
        bufp->chgIData(oldp+9,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0)
                                 ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                 : 0U)),32);
        bufp->chgIData(oldp+10,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0)
                                  ? vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__out
                                  : 0U)),32);
        bufp->chgIData(oldp+11,((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0)
                                   ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                   : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0)
                                             ? vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__out
                                             : 0U))),32);
        bufp->chgCData(oldp+12,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                  : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                      ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                      : 0U))),4);
        bufp->chgCData(oldp+13,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                  : 0U)),4);
        bufp->chgBit(oldp+14,((((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                 : 0U) < ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                           ? 8U : 0U))));
        bufp->chgIData(oldp+15,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h94fdc82f__0)
                                  ? vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__out
                                  : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5635cf48__0)
                                      ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                      : 0U))),32);
        bufp->chgIData(oldp+16,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5635cf48__0)
                                  ? vlSymsp->TOP__TOP__main__B_k_j_0.__PVT__out
                                  : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h94fdc82f__0)
                                      ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                      : 0U))),32);
        bufp->chgBit(oldp+17,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in) 
                               & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                    ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                    : 0U) < ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                              ? 8U : 0U)))));
        bufp->chgCData(oldp+18,(((((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                   & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)) 
                                  | (((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                      & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)) 
                                     | (((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                         & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)) 
                                        | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0) 
                                           | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hae6fc7c9__0)))))
                                  ? 0U : (7U & (((0U 
                                                  != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                 & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in))
                                                 ? 
                                                (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                                   ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                   : 0U) 
                                                 + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in))
                                                 : 
                                                (((5U 
                                                   != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in))
                                                  ? 
                                                 (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in)
                                                    ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                    : 0U) 
                                                  + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in))
                                                  : 
                                                 (((4U 
                                                    != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                   & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in))
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                                     ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                     : 0U) 
                                                   + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in))
                                                   : 
                                                  (((0U 
                                                     != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                    & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in))
                                                    ? 
                                                   (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                                      ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                      : 0U) 
                                                    + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in))
                                                    : 
                                                   (((0U 
                                                      != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in))
                                                     ? 
                                                    (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                                       ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                       : 0U) 
                                                     + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in))
                                                     : 0U)))))))),3);
        bufp->chgCData(oldp+19,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),3);
        bufp->chgCData(oldp+20,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)))),3);
        bufp->chgCData(oldp+21,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),3);
        bufp->chgCData(oldp+22,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)))),3);
        bufp->chgCData(oldp+23,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),3);
        bufp->chgCData(oldp+24,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)))),3);
        bufp->chgCData(oldp+25,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),3);
        bufp->chgCData(oldp+26,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)))),3);
        bufp->chgCData(oldp+27,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),3);
        bufp->chgCData(oldp+28,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in)))),3);
        bufp->chgBit(oldp+29,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3989696c__0))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+30,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let5_go_in));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__TOP__main.__PVT__B_int_read_en));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let8_go_in));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__TOP__main.__PVT__A_int_read0_0_write_en));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__TOP__main.__PVT__B_i_j_0_write_en));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__TOP__main.__PVT__invoke4_go_in));
        bufp->chgCData(oldp+37,((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5a0ff7ae__0) 
                                  | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h24f850e6__0) 
                                     | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hae6fc7c9__0)))
                                  ? 1U : 0U)),4);
        bufp->chgCData(oldp+38,(vlSymsp->TOP__TOP__main__add0.__PVT__out),4);
        bufp->chgCData(oldp+39,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke0_go_in)
                                  ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke14_go_in)
                                           ? (IData)(vlSymsp->TOP__TOP__main__add0.__PVT__out)
                                           : 0U))),4);
        bufp->chgBit(oldp+40,(vlSymsp->TOP__TOP__main.__PVT__i0_write_en));
        bufp->chgCData(oldp+41,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke1_go_in)
                                  ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hae6fc7c9__0)
                                           ? (IData)(vlSymsp->TOP__TOP__main__add0.__PVT__out)
                                           : 0U))),4);
        bufp->chgBit(oldp+42,(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
        bufp->chgCData(oldp+43,(((IData)(vlSymsp->TOP__TOP__main.__PVT__k_0_write_en)
                                  ? (IData)(vlSymsp->TOP__TOP__main__add0.__PVT__out)
                                  : 0U)),4);
        bufp->chgBit(oldp+44,(vlSymsp->TOP__TOP__main.__PVT__k_0_write_en));
        bufp->chgCData(oldp+45,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                  ? 0xbU : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                             ? 7U : 0U))),4);
        bufp->chgBit(oldp+46,(vlSymsp->TOP__TOP__main__le0.__PVT__out));
        bufp->chgCData(oldp+47,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                  ? 8U : 0U)),4);
        bufp->chgBit(oldp+48,(vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go));
        bufp->chgBit(oldp+49,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in) 
                               & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in));
        bufp->chgBit(oldp+51,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                               & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__TOP__main.__PVT__fsm_write_en));
        bufp->chgCData(oldp+55,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in),3);
        bufp->chgCData(oldp+56,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in),3);
        bufp->chgCData(oldp+57,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in),3);
        bufp->chgCData(oldp+58,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in),3);
        bufp->chgCData(oldp+59,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in),3);
        bufp->chgBit(oldp+60,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_write_en));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__TOP__main.__PVT__fsm0_write_en));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let3_go_in));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let7_go_in));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__TOP__main.__PVT__invoke0_go_in));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__TOP__main.__PVT__invoke1_go_in));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__TOP__main.__PVT__invoke2_go_in));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__TOP__main.__PVT__invoke3_go_in));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__TOP__main.__PVT__invoke5_go_in));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__TOP__main.__PVT__invoke9_go_in));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__TOP__main.__PVT__invoke10_go_in));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__TOP__main.__PVT__invoke14_go_in));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in));
        bufp->chgCData(oldp+75,(vlSymsp->TOP__TOP__A_int.__PVT__addr),8);
        bufp->chgCData(oldp+76,(vlSymsp->TOP__TOP__B_int.__PVT__addr),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+77,((0x16U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))));
        bufp->chgIData(oldp+78,(vlSymsp->TOP__TOP__A_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+79,(vlSymsp->TOP__TOP__A_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__TOP__A_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+81,(vlSymsp->TOP__TOP__B_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+82,(vlSymsp->TOP__TOP__B_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__TOP__B_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+84,(vlSymsp->TOP__TOP__alpha_int.__PVT__read_out),32);
        bufp->chgBit(oldp+85,(vlSymsp->TOP__TOP__alpha_int.__PVT__write_done));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__TOP__alpha_int.__PVT__read_done));
        bufp->chgIData(oldp+87,(vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out),32);
        bufp->chgBit(oldp+88,(vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__done));
        bufp->chgIData(oldp+89,(vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__out),32);
        bufp->chgBit(oldp+90,(vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__done));
        bufp->chgIData(oldp+91,(vlSymsp->TOP__TOP__main__B_k_j_0.__PVT__out),32);
        bufp->chgBit(oldp+92,(vlSymsp->TOP__TOP__main__B_k_j_0.__PVT__done));
        bufp->chgCData(oldp+93,(vlSymsp->TOP__TOP__main__i0.__PVT__out),4);
        bufp->chgBit(oldp+94,(vlSymsp->TOP__TOP__main__i0.__PVT__done));
        bufp->chgCData(oldp+95,(vlSymsp->TOP__TOP__main__j0.__PVT__out),4);
        bufp->chgBit(oldp+96,(vlSymsp->TOP__TOP__main__j0.__PVT__done));
        bufp->chgCData(oldp+97,(vlSymsp->TOP__TOP__main__k_0.__PVT__out),4);
        bufp->chgBit(oldp+98,(vlSymsp->TOP__TOP__main__k_0.__PVT__done));
        bufp->chgIData(oldp+99,((IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)),32);
        bufp->chgBit(oldp+100,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf
                               [1U]));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__TOP__main__comb_reg.__PVT__out));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__TOP__main__comb_reg.__PVT__done));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__out));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__done));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__out));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__done));
        bufp->chgCData(oldp+107,(vlSymsp->TOP__TOP__main__fsm.__PVT__out),3);
        bufp->chgBit(oldp+108,(vlSymsp->TOP__TOP__main__fsm.__PVT__done));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__done));
        bufp->chgCData(oldp+111,(vlSymsp->TOP__TOP__main__fsm0.__PVT__out),5);
        bufp->chgBit(oldp+112,(vlSymsp->TOP__TOP__main__fsm0.__PVT__done));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_done_in));
        bufp->chgIData(oldp+114,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__rtmp),32);
        bufp->chgIData(oldp+115,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__ltmp),32);
        bufp->chgQData(oldp+116,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp),64);
        bufp->chgBit(oldp+118,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[0]));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+120,(vlSymsp->TOP__TOP.__PVT__clk));
        bufp->chgIData(oldp+121,(vlSymsp->TOP__TOP.__PVT__NOTRACE),32);
        bufp->chgQData(oldp+122,(vlSymsp->TOP__TOP.__PVT__CYCLE_LIMIT),64);
        bufp->chgIData(oldp+124,(vlSymsp->TOP__TOP.__PVT__CODE),32);
        bufp->chgIData(oldp+125,(vlSymsp->TOP__TOP__alpha_int.__PVT__mem[0]),32);
    }
    bufp->chgBit(oldp+126,(vlSymsp->TOP__TOP.__PVT__go));
    bufp->chgBit(oldp+127,(vlSymsp->TOP__TOP.__PVT__reset));
    bufp->chgQData(oldp+128,(vlSymsp->TOP__TOP.__PVT__cycle_count),64);
    bufp->chgCData(oldp+130,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hbafba765__0)
                               ? 9U : ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_311)
                                        ? 0x11U : (
                                                   (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h50eea2a5__0) 
                                                     | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hee665582__0)) 
                                                    & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                                    ? 0x14U
                                                    : 
                                                   ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_haabfc6e7__0) 
                                                      | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h496a5df7__0)) 
                                                     & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                                     ? 6U
                                                     : 
                                                    ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7f031210__0) 
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
                                                                    == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))
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

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
                                 ? (IData)(vlSymsp->TOP__TOP__main__i1.__PVT__internal_reg)
                                 : 0U)),4);
        bufp->chgCData(oldp+1,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let5_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                                 : 0U)),4);
        bufp->chgIData(oldp+2,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hba0c7352__0)
                                 ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp)
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke6_go_in)
                                     ? vlSymsp->TOP__TOP__A_int__mem.__PVT__read_out
                                     : 0U))),32);
        bufp->chgCData(oldp+3,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h96d1a8ed__0)
                                 ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                                 : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h42da30c7__0)
                                     ? (IData)(vlSymsp->TOP__TOP__main__i1.__PVT__internal_reg)
                                     : 0U))),4);
        bufp->chgIData(oldp+4,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_haf140208__0)
                                 ? vlSymsp->TOP__TOP__main__q0_0.__PVT__internal_reg
                                 : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd1d86966__0)
                                     ? vlSymsp->TOP__TOP__main__s0_0.__PVT__internal_reg
                                     : 0U))),32);
        bufp->chgIData(oldp+5,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_haf140208__0)
                                 ? vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__internal_reg
                                 : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd1d86966__0)
                                     ? vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__internal_reg
                                     : 0U))),32);
        bufp->chgIData(oldp+6,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hedd81b8c__0)
                                 ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp)
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke7_go_in)
                                     ? vlSymsp->TOP__TOP__r_int.__PVT__read_out
                                     : 0U))),32);
        bufp->chgCData(oldp+7,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                                 : (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                                     | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he48da90e__0))
                                     ? (IData)(vlSymsp->TOP__TOP__main__i1.__PVT__internal_reg)
                                     : 0U))),4);
        bufp->chgIData(oldp+8,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_ha8e6ba43__0)
                                 ? vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__internal_reg
                                 : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd3925d15__0)
                                     ? vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__internal_reg
                                     : 0U))),32);
        bufp->chgIData(oldp+9,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_ha8e6ba43__0)
                                 ? vlSymsp->TOP__TOP__main__p_int_read0_0.__PVT__internal_reg
                                 : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd3925d15__0)
                                     ? vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__internal_reg
                                     : 0U))),32);
        bufp->chgIData(oldp+10,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke10_go_in)
                                  ? vlSymsp->TOP__TOP__p_int.__PVT__read_out
                                  : 0U)),32);
        bufp->chgIData(oldp+11,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke5_go_in)
                                  ? vlSymsp->TOP__TOP__q_int.__PVT__read_out
                                  : 0U)),32);
        bufp->chgIData(oldp+12,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke4_go_in)
                                  ? vlSymsp->TOP__TOP__s_int.__PVT__read_out
                                  : 0U)),32);
        bufp->chgCData(oldp+13,((0x1fU & (((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in))
                                           ? (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                                ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                                : 0U) 
                                              + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in))
                                           : (((4U 
                                                != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in))
                                               ? (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                                    ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                                    : 0U) 
                                                  + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in))
                                               : ((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                                   & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in))
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                                     ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                                     : 0U) 
                                                   + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in))
                                                   : 
                                                  ((((0U 
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
        bufp->chgCData(oldp+14,((((2U != (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in))
                                  ? (3U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                             ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg)
                                             : 0U) 
                                           + (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)))
                                  : 0U)),2);
        bufp->chgCData(oldp+15,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),5);
        bufp->chgCData(oldp+16,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                            : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)))),5);
        bufp->chgCData(oldp+17,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),5);
        bufp->chgCData(oldp+18,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                            : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)))),5);
        bufp->chgCData(oldp+19,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),5);
        bufp->chgCData(oldp+20,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                            : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in)))),5);
        bufp->chgCData(oldp+21,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg)
                                  : 0U)),2);
        bufp->chgCData(oldp+22,((3U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)))),2);
        bufp->chgCData(oldp+23,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),5);
        bufp->chgCData(oldp+24,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                            : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)))),5);
        bufp->chgCData(oldp+25,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),5);
        bufp->chgCData(oldp+26,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                            : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in)))),5);
        bufp->chgCData(oldp+27,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),5);
        bufp->chgCData(oldp+28,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                            : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)))),5);
        bufp->chgBit(oldp+29,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_124))));
        bufp->chgBit(oldp+30,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_done_in) 
                               | (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_124))));
        bufp->chgCData(oldp+31,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2db91552__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__internal_reg)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h61921a34__0)))),2);
        bufp->chgBit(oldp+32,(((2U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__internal_reg)) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h61921a34__0) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2db91552__0)))));
        bufp->chgBit(oldp+33,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7f7c5c20__0))));
        bufp->chgBit(oldp+34,(((IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7f7c5c20__0))));
        bufp->chgCData(oldp+35,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h1832b6c0__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__internal_reg)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf38325f8__0)))),2);
        bufp->chgBit(oldp+36,(((2U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__internal_reg)) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf38325f8__0) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h1832b6c0__0)))));
        bufp->chgBit(oldp+37,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h55d88a83__0))));
        bufp->chgBit(oldp+38,(((IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h55d88a83__0))));
        bufp->chgCData(oldp+39,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h264338ce__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__internal_reg)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hc21ebf3d__0)))),2);
        bufp->chgBit(oldp+40,(((2U == (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__internal_reg)) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hc21ebf3d__0) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h264338ce__0)))));
        bufp->chgBit(oldp+41,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3e6cce66__0))));
        bufp->chgBit(oldp+42,(((IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3e6cce66__0))));
        bufp->chgBit(oldp+43,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par1_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd40cd495__0))));
        bufp->chgBit(oldp+44,(((IData)(vlSymsp->TOP__TOP__main.__PVT__par1_done_in) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd40cd495__0))));
        bufp->chgCData(oldp+45,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h14f8c1ab__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__internal_reg)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h839cf65c__0)))),2);
        bufp->chgBit(oldp+46,(((2U == (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__internal_reg)) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h839cf65c__0) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h14f8c1ab__0)))));
        bufp->chgBit(oldp+47,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par1_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2276f04a__0))));
        bufp->chgBit(oldp+48,(((IData)(vlSymsp->TOP__TOP__main.__PVT__par1_done_in) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2276f04a__0))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+49,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let5_go_in));
        bufp->chgCData(oldp+50,(vlSymsp->TOP__TOP__main.__PVT__p_int_addr0),4);
        bufp->chgBit(oldp+51,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let8_go_in));
        bufp->chgCData(oldp+52,(vlSymsp->TOP__TOP__main.__PVT__q_int_addr0),4);
        bufp->chgIData(oldp+53,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                  ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_haf140208__0)
                                           ? (IData)(vlSymsp->TOP__TOP__main__add1.__PVT___GEN_0)
                                           : 0U))),32);
        bufp->chgBit(oldp+54,(vlSymsp->TOP__TOP__main.__PVT__q_int_write_en));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in));
        bufp->chgCData(oldp+56,(vlSymsp->TOP__TOP__main.__PVT__r_int_addr0),4);
        bufp->chgBit(oldp+57,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let6_go_in));
        bufp->chgCData(oldp+58,(vlSymsp->TOP__TOP__main.__PVT__s_int_addr0),4);
        bufp->chgIData(oldp+59,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb17828e6__0)
                                  ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd1d86966__0)
                                           ? (IData)(vlSymsp->TOP__TOP__main__add1.__PVT___GEN_0)
                                           : 0U))),32);
        bufp->chgBit(oldp+60,(vlSymsp->TOP__TOP__main.__PVT__s_int_write_en));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let3_go_in));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__TOP__main.__PVT__A_i_j_0_write_en));
        bufp->chgCData(oldp+63,((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h42da30c7__0) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h96d1a8ed__0))
                                  ? 1U : 0U)),4);
        bufp->chgCData(oldp+64,((0xfU & (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0))),4);
        bufp->chgIData(oldp+65,((IData)(vlSymsp->TOP__TOP__main__add1.__PVT___GEN_0)),32);
        bufp->chgBit(oldp+66,(vlSymsp->TOP__TOP__main.__PVT__bin_read0_0_write_en));
        bufp->chgCData(oldp+67,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5fa391a3__0)
                                  ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h42da30c7__0)
                                           ? (0xfU 
                                              & (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0))
                                           : 0U))),4);
        bufp->chgBit(oldp+68,(vlSymsp->TOP__TOP__main.__PVT__i1_write_en));
        bufp->chgCData(oldp+69,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                  ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h96d1a8ed__0)
                                           ? (0xfU 
                                              & (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0))
                                           : 0U))),4);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
        bufp->chgCData(oldp+71,((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hacf7e8f8__0) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he48da90e__0))
                                  ? 7U : 0U)),4);
        bufp->chgBit(oldp+72,(vlSymsp->TOP__TOP__main__le0.__PVT__out));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__TOP__main.__PVT__invoke10_go_in));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__TOP__main.__PVT__invoke5_go_in));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__TOP__main.__PVT__invoke4_go_in));
        bufp->chgBit(oldp+77,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                               & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in));
        bufp->chgBit(oldp+79,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in) 
                               & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in));
        bufp->chgBit(oldp+81,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hacf7e8f8__0) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in) 
                                  | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in) 
                                     | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in) 
                                        | (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in)))))));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in));
        bufp->chgCData(oldp+83,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in),5);
        bufp->chgCData(oldp+84,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in),5);
        bufp->chgCData(oldp+85,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in),5);
        bufp->chgCData(oldp+86,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in),2);
        bufp->chgCData(oldp+87,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in),5);
        bufp->chgCData(oldp+88,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in),5);
        bufp->chgCData(oldp+89,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in),5);
        bufp->chgBit(oldp+90,(vlSymsp->TOP__TOP__main.__PVT__fsm5_write_en));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__TOP__main.__PVT__invoke6_go_in));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__TOP__main.__PVT__invoke7_go_in));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__TOP__main.__PVT__invoke14_go_in));
        bufp->chgBit(oldp+94,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__TOP__main.__PVT__par0_go_in));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__TOP__main.__PVT__tdcc_go_in));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__TOP__main.__PVT__tdcc0_go_in));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__TOP__main.__PVT__tdcc1_go_in));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__TOP__main.__PVT__par1_go_in));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__TOP__main.__PVT__tdcc2_go_in));
        bufp->chgCData(oldp+104,(vlSymsp->TOP__TOP__A_int.__PVT__addr),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+105,((0xcU == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__internal_reg))));
        bufp->chgIData(oldp+106,(vlSymsp->TOP__TOP__A_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+107,(vlSymsp->TOP__TOP__A_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__TOP__A_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+109,(vlSymsp->TOP__TOP__p_int.__PVT__read_out),32);
        bufp->chgBit(oldp+110,(vlSymsp->TOP__TOP__p_int.__PVT__write_done));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__TOP__p_int.__PVT__read_done));
        bufp->chgIData(oldp+112,(vlSymsp->TOP__TOP__q_int.__PVT__read_out),32);
        bufp->chgBit(oldp+113,(vlSymsp->TOP__TOP__q_int.__PVT__write_done));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__TOP__q_int.__PVT__read_done));
        bufp->chgIData(oldp+115,(vlSymsp->TOP__TOP__r_int.__PVT__read_out),32);
        bufp->chgBit(oldp+116,(vlSymsp->TOP__TOP__r_int.__PVT__write_done));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__TOP__r_int.__PVT__read_done));
        bufp->chgIData(oldp+118,(vlSymsp->TOP__TOP__s_int.__PVT__read_out),32);
        bufp->chgBit(oldp+119,(vlSymsp->TOP__TOP__s_int.__PVT__write_done));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__TOP__s_int.__PVT__read_done));
        bufp->chgIData(oldp+121,(vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__internal_reg),32);
        bufp->chgBit(oldp+122,(vlSymsp->TOP__TOP__main__A_i_j_0.__PVT__done_reg));
        bufp->chgIData(oldp+123,(vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__internal_reg),32);
        bufp->chgBit(oldp+124,(vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__done_reg));
        bufp->chgCData(oldp+125,(vlSymsp->TOP__TOP__main__i1.__PVT__internal_reg),4);
        bufp->chgBit(oldp+126,(vlSymsp->TOP__TOP__main__i1.__PVT__done_reg));
        bufp->chgCData(oldp+127,(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg),4);
        bufp->chgBit(oldp+128,(vlSymsp->TOP__TOP__main__j0.__PVT__done_reg));
        bufp->chgIData(oldp+129,((IData)(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp)),32);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__TOP__main__p_int_read0_0.__PVT__internal_reg),32);
        bufp->chgBit(oldp+131,(vlSymsp->TOP__TOP__main__p_int_read0_0.__PVT__done_reg));
        bufp->chgIData(oldp+132,(vlSymsp->TOP__TOP__main__q0_0.__PVT__internal_reg),32);
        bufp->chgBit(oldp+133,(vlSymsp->TOP__TOP__main__q0_0.__PVT__done_reg));
        bufp->chgIData(oldp+134,(vlSymsp->TOP__TOP__main__s0_0.__PVT__internal_reg),32);
        bufp->chgBit(oldp+135,(vlSymsp->TOP__TOP__main__s0_0.__PVT__done_reg));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__internal_reg));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__internal_reg));
        bufp->chgCData(oldp+138,(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg),5);
        bufp->chgCData(oldp+139,(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg),2);
        bufp->chgBit(oldp+140,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__internal_reg));
        bufp->chgCData(oldp+141,(vlSymsp->TOP__TOP__main__fsm1.__PVT__internal_reg),2);
        bufp->chgBit(oldp+142,(vlSymsp->TOP__TOP__main__pd.__PVT__internal_reg));
        bufp->chgCData(oldp+143,(vlSymsp->TOP__TOP__main__fsm2.__PVT__internal_reg),2);
        bufp->chgBit(oldp+144,(vlSymsp->TOP__TOP__main__pd0.__PVT__internal_reg));
        bufp->chgCData(oldp+145,(vlSymsp->TOP__TOP__main__fsm3.__PVT__internal_reg),2);
        bufp->chgBit(oldp+146,(vlSymsp->TOP__TOP__main__pd1.__PVT__internal_reg));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__TOP__main__pd2.__PVT__internal_reg));
        bufp->chgCData(oldp+148,(vlSymsp->TOP__TOP__main__fsm4.__PVT__internal_reg),2);
        bufp->chgBit(oldp+149,(vlSymsp->TOP__TOP__main__pd3.__PVT__internal_reg));
        bufp->chgCData(oldp+150,(vlSymsp->TOP__TOP__main__fsm5.__PVT__internal_reg),4);
        bufp->chgBit(oldp+151,(vlSymsp->TOP__TOP__main__fsm5.__PVT__done_reg));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_done_in));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__TOP__main.__PVT__par0_done_in));
        bufp->chgBit(oldp+154,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__internal_reg))));
        bufp->chgBit(oldp+155,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__internal_reg))));
        bufp->chgBit(oldp+156,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__internal_reg))));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__TOP__main.__PVT__par1_done_in));
        bufp->chgBit(oldp+158,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__internal_reg))));
        bufp->chgIData(oldp+159,(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__rtmp),32);
        bufp->chgIData(oldp+160,(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__ltmp),32);
        bufp->chgQData(oldp+161,(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+163,(vlSymsp->TOP__TOP.__PVT__go));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__TOP.__PVT__reset));
        bufp->chgQData(oldp+165,(vlSymsp->TOP__TOP.__PVT__cycle_count),64);
        bufp->chgIData(oldp+167,(vlSymsp->TOP__TOP__q_int.__PVT__mem[0]),32);
        bufp->chgIData(oldp+168,(vlSymsp->TOP__TOP__q_int.__PVT__mem[1]),32);
        bufp->chgIData(oldp+169,(vlSymsp->TOP__TOP__q_int.__PVT__mem[2]),32);
        bufp->chgIData(oldp+170,(vlSymsp->TOP__TOP__q_int.__PVT__mem[3]),32);
        bufp->chgIData(oldp+171,(vlSymsp->TOP__TOP__q_int.__PVT__mem[4]),32);
        bufp->chgIData(oldp+172,(vlSymsp->TOP__TOP__q_int.__PVT__mem[5]),32);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__TOP__q_int.__PVT__mem[6]),32);
        bufp->chgIData(oldp+174,(vlSymsp->TOP__TOP__q_int.__PVT__mem[7]),32);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__TOP__s_int.__PVT__mem[0]),32);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__TOP__s_int.__PVT__mem[1]),32);
        bufp->chgIData(oldp+177,(vlSymsp->TOP__TOP__s_int.__PVT__mem[2]),32);
        bufp->chgIData(oldp+178,(vlSymsp->TOP__TOP__s_int.__PVT__mem[3]),32);
        bufp->chgIData(oldp+179,(vlSymsp->TOP__TOP__s_int.__PVT__mem[4]),32);
        bufp->chgIData(oldp+180,(vlSymsp->TOP__TOP__s_int.__PVT__mem[5]),32);
        bufp->chgIData(oldp+181,(vlSymsp->TOP__TOP__s_int.__PVT__mem[6]),32);
        bufp->chgIData(oldp+182,(vlSymsp->TOP__TOP__s_int.__PVT__mem[7]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+183,(vlSymsp->TOP__TOP.__PVT__clk));
        bufp->chgIData(oldp+184,(vlSymsp->TOP__TOP.__PVT__NOTRACE),32);
        bufp->chgQData(oldp+185,(vlSymsp->TOP__TOP.__PVT__CYCLE_LIMIT),64);
        bufp->chgIData(oldp+187,(vlSymsp->TOP__TOP.__PVT__CODE),32);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__TOP__p_int.__PVT__mem[0]),32);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__TOP__p_int.__PVT__mem[1]),32);
        bufp->chgIData(oldp+190,(vlSymsp->TOP__TOP__p_int.__PVT__mem[2]),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__TOP__p_int.__PVT__mem[3]),32);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__TOP__p_int.__PVT__mem[4]),32);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__TOP__p_int.__PVT__mem[5]),32);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__TOP__p_int.__PVT__mem[6]),32);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__TOP__p_int.__PVT__mem[7]),32);
        bufp->chgIData(oldp+196,(vlSymsp->TOP__TOP__r_int.__PVT__mem[0]),32);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__TOP__r_int.__PVT__mem[1]),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__TOP__r_int.__PVT__mem[2]),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__TOP__r_int.__PVT__mem[3]),32);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__TOP__r_int.__PVT__mem[4]),32);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__TOP__r_int.__PVT__mem[5]),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__TOP__r_int.__PVT__mem[6]),32);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__TOP__r_int.__PVT__mem[7]),32);
    }
    bufp->chgCData(oldp+204,(((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_300)
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

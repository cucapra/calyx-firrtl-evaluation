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
        bufp->chgCData(oldp+0,(((IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en)
                                 ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                 : 0U)),4);
        bufp->chgCData(oldp+1,((((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let11_go_in) 
                                 | (IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let7_go_in))
                                 ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let17_go_in)
                                     ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                     : 0U))),4);
        bufp->chgCData(oldp+2,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let10_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                 : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he5800dc6__0)
                                     ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                     : 0U))),4);
        bufp->chgCData(oldp+3,(((IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_read_en)
                                 ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                 : 0U)),4);
        bufp->chgCData(oldp+4,((((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in) 
                                 | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he143af68__0))
                                 ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                 : (((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let13_go_in) 
                                     | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he45d1117__0))
                                     ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                     : 0U))),4);
        bufp->chgCData(oldp+5,((((IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_read_en) 
                                 | (IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_write_en))
                                 ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                 : 0U)),4);
        bufp->chgIData(oldp+6,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he45d1117__0)
                                 ? (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he45d1117__0)
                                      ? vlSymsp->TOP__TOP__main__add3.__PVT__out
                                      : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he45d1117__0)
                                                ? vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__out
                                                : 0U))
                                 : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he143af68__0)
                                     ? vlSymsp->TOP__TOP__main__add3.__PVT__out
                                     : 0U))),32);
        bufp->chgIData(oldp+7,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h97779780__0)
                                 ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                 : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2938708e__0)
                                     ? vlSymsp->TOP__TOP__A_int__mem.__PVT__read_out
                                     : 0U))),32);
        bufp->chgIData(oldp+8,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h65c8296d__0)
                                 ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                 : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf619f5a7__0)
                                     ? vlSymsp->TOP__TOP__B_int__mem.__PVT__read_out
                                     : 0U))),32);
        bufp->chgIData(oldp+9,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hedd81b8c__0)
                                 ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                 : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3b88d25f__0)
                                     ? vlSymsp->TOP__TOP__C_int__mem.__PVT__read_out
                                     : 0U))),32);
        bufp->chgCData(oldp+10,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hbbc1670d__0)
                                  ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                  : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h670f5dd8__0)
                                      ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                      : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke33_go_in)
                                          ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                          : 0U)))),4);
        bufp->chgIData(oldp+11,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he45d1117__0)
                                  ? vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__out
                                  : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7ed1ad7f__0)
                                      ? vlSymsp->TOP__TOP__main__temp2_0.__PVT__out
                                      : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he143af68__0)
                                          ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                          : 0U)))),32);
        bufp->chgIData(oldp+12,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he143af68__0)
                                  ? vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__out
                                  : (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7ed1ad7f__0) 
                                      | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he45d1117__0))
                                      ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                      : 0U))),32);
        bufp->chgIData(oldp+13,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he45d1117__0)
                                  ? vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__out
                                  : 0U)),32);
        bufp->chgIData(oldp+14,((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he45d1117__0)
                                   ? vlSymsp->TOP__TOP__main__add3.__PVT__out
                                   : 0U) + ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he45d1117__0)
                                             ? vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__out
                                             : 0U))),32);
        bufp->chgIData(oldp+15,(((IData)(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read0_0_write_en)
                                  ? vlSymsp->TOP__TOP__alpha_int.__PVT__read_out
                                  : 0U)),32);
        bufp->chgIData(oldp+16,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke20_go_in)
                                  ? vlSymsp->TOP__TOP__beta_int.__PVT__read_out
                                  : 0U)),32);
        bufp->chgCData(oldp+17,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                  : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                      ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                      : 0U))),4);
        bufp->chgCData(oldp+18,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                  : 0U)),4);
        bufp->chgCData(oldp+19,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                  : 0U)),4);
        bufp->chgBit(oldp+20,((((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                 : 0U) < ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                           ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                           : 0U))));
        bufp->chgIData(oldp+21,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8fd3bfb4__0)
                                  ? vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__out
                                  : (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h043b0fae__0) 
                                      | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h982399be__0) 
                                          | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h62812dbe__0)) 
                                         & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in)))
                                      ? vlSymsp->TOP__TOP__main__alpha_int_read0_0.__PVT__out
                                      : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd3925d15__0)
                                          ? vlSymsp->TOP__TOP__main__beta_int_read0_0.__PVT__out
                                          : 0U)))),32);
        bufp->chgIData(oldp+22,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd3925d15__0)
                                  ? vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__out
                                  : (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h043b0fae__0) 
                                      | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h982399be__0) 
                                         & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in)))
                                      ? vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__out
                                      : (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h62812dbe__0) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in))
                                          ? vlSymsp->TOP__TOP__main__temp2_0.__PVT__out
                                          : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8fd3bfb4__0)
                                              ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                              : 0U))))),32);
        bufp->chgBit(oldp+23,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in) 
                               & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                    ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                    : 0U) < ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                              ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                              : 0U)))));
        bufp->chgCData(oldp+24,((0x1fU & (((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in))
                                           ? (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                                ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                : 0U) 
                                              + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in))
                                           : (((4U 
                                                != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in))
                                               ? (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)
                                                    ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                    : 0U) 
                                                  + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in))
                                               : ((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                   & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in))
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                                     ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                     : 0U) 
                                                   + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in))
                                                   : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_35)))))),5);
        bufp->chgCData(oldp+25,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),5);
        bufp->chgCData(oldp+26,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)))),5);
        bufp->chgCData(oldp+27,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),5);
        bufp->chgCData(oldp+28,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)))),5);
        bufp->chgCData(oldp+29,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),5);
        bufp->chgCData(oldp+30,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)))),5);
        bufp->chgCData(oldp+31,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),5);
        bufp->chgCData(oldp+32,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)))),5);
        bufp->chgCData(oldp+33,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),5);
        bufp->chgCData(oldp+34,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)))),5);
        bufp->chgCData(oldp+35,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),5);
        bufp->chgCData(oldp+36,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in)))),5);
        bufp->chgCData(oldp+37,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),5);
        bufp->chgCData(oldp+38,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)))),5);
        bufp->chgCData(oldp+39,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),5);
        bufp->chgCData(oldp+40,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in)))),5);
        bufp->chgBit(oldp+41,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_done_in)) 
                               & (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h0d688143__0) 
                                   | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h0f383811__0) 
                                      | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hc273c927__0) 
                                         | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hed2afca7__0) 
                                            | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6a679d07__0) 
                                               | ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_838) 
                                                  | (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_843))))))) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_848)))));
        bufp->chgCData(oldp+42,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8ee6cc1c__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h811b2197__0)))),2);
        bufp->chgBit(oldp+43,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7f7c5c20__0))));
        bufp->chgCData(oldp+44,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hecb1f014__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8524e22d__0)))),2);
        bufp->chgBit(oldp+45,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h55d88a83__0))));
        bufp->chgCData(oldp+46,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h79b01997__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb6feeb06__0)))),2);
        bufp->chgBit(oldp+47,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3e6cce66__0))));
        bufp->chgCData(oldp+48,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8f68fe18__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7eb83107__0)))),2);
        bufp->chgBit(oldp+49,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par1_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2276f04a__0))));
        bufp->chgCData(oldp+50,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h61ae0439__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb18d34d7__0)))),2);
        bufp->chgBit(oldp+51,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par1_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h526db1a5__0))));
        bufp->chgCData(oldp+52,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hc3e17a86__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h9927b69d__0)))),2);
        bufp->chgBit(oldp+53,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par2_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h01fe6a24__0))));
        bufp->chgCData(oldp+54,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_ha4427d2e__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3836df24__0)))),2);
        bufp->chgBit(oldp+55,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par2_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6d4cc939__0))));
        bufp->chgCData(oldp+56,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h340200cd__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2008136f__0)))),2);
        bufp->chgBit(oldp+57,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par2_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hdffee2ab__0))));
        bufp->chgCData(oldp+58,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h641abbc9__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hc146accf__0)))),2);
        bufp->chgBit(oldp+59,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par2_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6620c4ab__0))));
        bufp->chgBit(oldp+60,(((~ (IData)(vlSymsp->TOP__TOP__alpha_int.__PVT__read_done)) 
                               & ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__tdcc5_go_in)))));
        bufp->chgBit(oldp+61,(((~ (IData)(vlSymsp->TOP__TOP__B_int__mem.__PVT__read_done)) 
                               & ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__tdcc6_go_in)))));
        bufp->chgBit(oldp+62,(((~ (IData)(vlSymsp->TOP__TOP__alpha_int.__PVT__read_done)) 
                               & ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__tdcc_go_in)))));
        bufp->chgBit(oldp+63,(((~ (IData)(vlSymsp->TOP__TOP__B_int__mem.__PVT__read_done)) 
                               & ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__tdcc0_go_in)))));
        bufp->chgBit(oldp+64,(((~ (IData)(vlSymsp->TOP__TOP__main__alpha_int_read0_0.__PVT__done)) 
                               & ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__tdcc_go_in)))));
        bufp->chgBit(oldp+65,(((~ (IData)(vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__done)) 
                               & ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__tdcc0_go_in)))));
        bufp->chgBit(oldp+66,(((~ (IData)(vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__done)) 
                               & ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__tdcc1_go_in)))));
        bufp->chgBit(oldp+67,(((~ (IData)(vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__done)) 
                               & ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__tdcc2_go_in)))));
        bufp->chgBit(oldp+68,(((~ (IData)(vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__done)) 
                               & ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__tdcc3_go_in)))));
        bufp->chgBit(oldp+69,(((~ (IData)(vlSymsp->TOP__TOP__main__alpha_int_read0_0.__PVT__done)) 
                               & ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__tdcc5_go_in)))));
        bufp->chgBit(oldp+70,(((~ (IData)(vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__done)) 
                               & ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__tdcc6_go_in)))));
        bufp->chgBit(oldp+71,(((~ (IData)(vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__done)) 
                               & ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__tdcc7_go_in)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+72,(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__TOP__main.__PVT__B_int_read_en));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__TOP__main.__PVT__C_int_write_en));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__TOP__main.__PVT__C_int_read_en));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read_en));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let14_go_in));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__TOP__main.__PVT__A_int_read0_0_write_en));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__TOP__main.__PVT__B_int_read0_0_write_en));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__TOP__main.__PVT__C_i_j_0_write_en));
        bufp->chgCData(oldp+81,((((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke33_go_in) 
                                  | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h670f5dd8__0) 
                                     | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hbbc1670d__0)))
                                  ? 1U : 0U)),4);
        bufp->chgCData(oldp+82,(vlSymsp->TOP__TOP__main__add2.__PVT__out),4);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__TOP__main__add3.__PVT__out),32);
        bufp->chgIData(oldp+84,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he45d1117__0)
                                  ? vlSymsp->TOP__TOP__main__add3.__PVT__out
                                  : 0U)),32);
        bufp->chgBit(oldp+85,(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read0_0_write_en));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__TOP__main.__PVT__invoke20_go_in));
        bufp->chgCData(oldp+87,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                  ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke33_go_in)
                                           ? (IData)(vlSymsp->TOP__TOP__main__add2.__PVT__out)
                                           : 0U))),4);
        bufp->chgBit(oldp+88,(vlSymsp->TOP__TOP__main.__PVT__i0_write_en));
        bufp->chgCData(oldp+89,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke2_go_in)
                                  ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hbbc1670d__0)
                                           ? (IData)(vlSymsp->TOP__TOP__main__add2.__PVT__out)
                                           : 0U))),4);
        bufp->chgBit(oldp+90,(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
        bufp->chgCData(oldp+91,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                  ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h670f5dd8__0)
                                           ? (IData)(vlSymsp->TOP__TOP__main__add2.__PVT__out)
                                           : 0U))),4);
        bufp->chgBit(oldp+92,(vlSymsp->TOP__TOP__main.__PVT__k_0_write_en));
        bufp->chgCData(oldp+93,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                  ? 0xbU : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                             ? 7U : 0U))),4);
        bufp->chgBit(oldp+94,(vlSymsp->TOP__TOP__main__le0.__PVT__out));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go));
        bufp->chgIData(oldp+96,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7ed1ad7f__0)
                                  ? vlSymsp->TOP__TOP__main__add3.__PVT__out
                                  : 0U)),32);
        bufp->chgBit(oldp+97,(vlSymsp->TOP__TOP__main.__PVT__temp2_0_write_en));
        bufp->chgBit(oldp+98,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in) 
                               & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in));
        bufp->chgBit(oldp+100,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                                & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__TOP__main.__PVT__fsm_write_en));
        bufp->chgCData(oldp+104,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in),5);
        bufp->chgCData(oldp+105,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in),5);
        bufp->chgCData(oldp+106,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in),5);
        bufp->chgCData(oldp+107,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in),5);
        bufp->chgCData(oldp+108,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in),5);
        bufp->chgCData(oldp+109,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in),5);
        bufp->chgCData(oldp+110,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in),5);
        bufp->chgCData(oldp+111,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in),5);
        bufp->chgBit(oldp+112,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_write_en));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__TOP__main.__PVT__fsm0_write_en));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__TOP__main.__PVT__pd_write_en));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__TOP__main.__PVT__fsm1_write_en));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__TOP__main.__PVT__pd0_write_en));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__TOP__main.__PVT__fsm2_write_en));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__TOP__main.__PVT__pd1_write_en));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__TOP__main.__PVT__fsm3_write_en));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__TOP__main.__PVT__pd2_write_en));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__TOP__main.__PVT__fsm4_write_en));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__TOP__main.__PVT__pd3_write_en));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__TOP__main.__PVT__fsm5_write_en));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__TOP__main.__PVT__pd4_write_en));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__TOP__main.__PVT__fsm6_write_en));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__TOP__main.__PVT__pd5_write_en));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__TOP__main.__PVT__fsm7_write_en));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__TOP__main.__PVT__pd6_write_en));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__TOP__main.__PVT__fsm8_write_en));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__TOP__main.__PVT__pd7_write_en));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__TOP__main.__PVT__fsm9_write_en));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let10_go_in));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let11_go_in));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let13_go_in));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let17_go_in));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let7_go_in));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__TOP__main.__PVT__invoke2_go_in));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__TOP__main.__PVT__invoke33_go_in));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__TOP__main.__PVT__par0_go_in));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__TOP__main.__PVT__tdcc_go_in));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__TOP__main.__PVT__tdcc0_go_in));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__TOP__main.__PVT__tdcc1_go_in));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__TOP__main.__PVT__par1_go_in));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__TOP__main.__PVT__tdcc2_go_in));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__TOP__main.__PVT__tdcc3_go_in));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__TOP__main.__PVT__par2_go_in));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__TOP__main.__PVT__tdcc4_go_in));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__TOP__main.__PVT__tdcc5_go_in));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__TOP__main.__PVT__tdcc6_go_in));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__TOP__main.__PVT__tdcc7_go_in));
        bufp->chgCData(oldp+157,(vlSymsp->TOP__TOP__A_int.__PVT__addr),8);
        bufp->chgCData(oldp+158,(vlSymsp->TOP__TOP__B_int.__PVT__addr),8);
        bufp->chgCData(oldp+159,(vlSymsp->TOP__TOP__C_int.__PVT__addr),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+160,((0x14U == (IData)(vlSymsp->TOP__TOP__main__fsm9.__PVT__out))));
        bufp->chgIData(oldp+161,(vlSymsp->TOP__TOP__A_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+162,(vlSymsp->TOP__TOP__A_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+163,(vlSymsp->TOP__TOP__A_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+164,(vlSymsp->TOP__TOP__B_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+165,(vlSymsp->TOP__TOP__B_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__TOP__B_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+167,(vlSymsp->TOP__TOP__C_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+168,(vlSymsp->TOP__TOP__C_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__TOP__C_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+170,(vlSymsp->TOP__TOP__alpha_int.__PVT__read_out),32);
        bufp->chgBit(oldp+171,(vlSymsp->TOP__TOP__alpha_int.__PVT__write_done));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__TOP__alpha_int.__PVT__read_done));
        bufp->chgIData(oldp+173,(vlSymsp->TOP__TOP__beta_int.__PVT__read_out),32);
        bufp->chgBit(oldp+174,(vlSymsp->TOP__TOP__beta_int.__PVT__write_done));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__TOP__beta_int.__PVT__read_done));
        bufp->chgIData(oldp+176,(vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out),32);
        bufp->chgBit(oldp+177,(vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__done));
        bufp->chgIData(oldp+178,(vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__out),32);
        bufp->chgBit(oldp+179,(vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__done));
        bufp->chgIData(oldp+180,(vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__out),32);
        bufp->chgBit(oldp+181,(vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__done));
        bufp->chgIData(oldp+182,(vlSymsp->TOP__TOP__main__alpha_int_read0_0.__PVT__out),32);
        bufp->chgBit(oldp+183,(vlSymsp->TOP__TOP__main__alpha_int_read0_0.__PVT__done));
        bufp->chgIData(oldp+184,(vlSymsp->TOP__TOP__main__beta_int_read0_0.__PVT__out),32);
        bufp->chgBit(oldp+185,(vlSymsp->TOP__TOP__main__beta_int_read0_0.__PVT__done));
        bufp->chgCData(oldp+186,(vlSymsp->TOP__TOP__main__i0.__PVT__out),4);
        bufp->chgBit(oldp+187,(vlSymsp->TOP__TOP__main__i0.__PVT__done));
        bufp->chgCData(oldp+188,(vlSymsp->TOP__TOP__main__j0.__PVT__out),4);
        bufp->chgBit(oldp+189,(vlSymsp->TOP__TOP__main__j0.__PVT__done));
        bufp->chgCData(oldp+190,(vlSymsp->TOP__TOP__main__k_0.__PVT__out),4);
        bufp->chgBit(oldp+191,(vlSymsp->TOP__TOP__main__k_0.__PVT__done));
        bufp->chgIData(oldp+192,((IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)),32);
        bufp->chgBit(oldp+193,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf
                               [1U]));
        bufp->chgIData(oldp+194,(vlSymsp->TOP__TOP__main__temp2_0.__PVT__out),32);
        bufp->chgBit(oldp+195,(vlSymsp->TOP__TOP__main__temp2_0.__PVT__done));
        bufp->chgBit(oldp+196,(vlSymsp->TOP__TOP__main__comb_reg.__PVT__out));
        bufp->chgBit(oldp+197,(vlSymsp->TOP__TOP__main__comb_reg.__PVT__done));
        bufp->chgBit(oldp+198,(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__out));
        bufp->chgBit(oldp+199,(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__done));
        bufp->chgBit(oldp+200,(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__out));
        bufp->chgBit(oldp+201,(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__done));
        bufp->chgCData(oldp+202,(vlSymsp->TOP__TOP__main__fsm.__PVT__out),5);
        bufp->chgBit(oldp+203,(vlSymsp->TOP__TOP__main__fsm.__PVT__done));
        bufp->chgBit(oldp+204,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out));
        bufp->chgBit(oldp+205,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__done));
        bufp->chgCData(oldp+206,(vlSymsp->TOP__TOP__main__fsm0.__PVT__out),2);
        bufp->chgBit(oldp+207,(vlSymsp->TOP__TOP__main__fsm0.__PVT__done));
        bufp->chgBit(oldp+208,(vlSymsp->TOP__TOP__main__pd.__PVT__out));
        bufp->chgBit(oldp+209,(vlSymsp->TOP__TOP__main__pd.__PVT__done));
        bufp->chgCData(oldp+210,(vlSymsp->TOP__TOP__main__fsm1.__PVT__out),2);
        bufp->chgBit(oldp+211,(vlSymsp->TOP__TOP__main__fsm1.__PVT__done));
        bufp->chgBit(oldp+212,(vlSymsp->TOP__TOP__main__pd0.__PVT__out));
        bufp->chgBit(oldp+213,(vlSymsp->TOP__TOP__main__pd0.__PVT__done));
        bufp->chgCData(oldp+214,(vlSymsp->TOP__TOP__main__fsm2.__PVT__out),2);
        bufp->chgBit(oldp+215,(vlSymsp->TOP__TOP__main__fsm2.__PVT__done));
        bufp->chgBit(oldp+216,(vlSymsp->TOP__TOP__main__pd1.__PVT__out));
        bufp->chgBit(oldp+217,(vlSymsp->TOP__TOP__main__pd1.__PVT__done));
        bufp->chgCData(oldp+218,(vlSymsp->TOP__TOP__main__fsm3.__PVT__out),2);
        bufp->chgBit(oldp+219,(vlSymsp->TOP__TOP__main__fsm3.__PVT__done));
        bufp->chgBit(oldp+220,(vlSymsp->TOP__TOP__main__pd2.__PVT__out));
        bufp->chgBit(oldp+221,(vlSymsp->TOP__TOP__main__pd2.__PVT__done));
        bufp->chgCData(oldp+222,(vlSymsp->TOP__TOP__main__fsm4.__PVT__out),2);
        bufp->chgBit(oldp+223,(vlSymsp->TOP__TOP__main__fsm4.__PVT__done));
        bufp->chgBit(oldp+224,(vlSymsp->TOP__TOP__main__pd3.__PVT__out));
        bufp->chgBit(oldp+225,(vlSymsp->TOP__TOP__main__pd3.__PVT__done));
        bufp->chgCData(oldp+226,(vlSymsp->TOP__TOP__main__fsm5.__PVT__out),2);
        bufp->chgBit(oldp+227,(vlSymsp->TOP__TOP__main__fsm5.__PVT__done));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__TOP__main__pd4.__PVT__out));
        bufp->chgBit(oldp+229,(vlSymsp->TOP__TOP__main__pd4.__PVT__done));
        bufp->chgCData(oldp+230,(vlSymsp->TOP__TOP__main__fsm6.__PVT__out),2);
        bufp->chgBit(oldp+231,(vlSymsp->TOP__TOP__main__fsm6.__PVT__done));
        bufp->chgBit(oldp+232,(vlSymsp->TOP__TOP__main__pd5.__PVT__out));
        bufp->chgBit(oldp+233,(vlSymsp->TOP__TOP__main__pd5.__PVT__done));
        bufp->chgCData(oldp+234,(vlSymsp->TOP__TOP__main__fsm7.__PVT__out),2);
        bufp->chgBit(oldp+235,(vlSymsp->TOP__TOP__main__fsm7.__PVT__done));
        bufp->chgBit(oldp+236,(vlSymsp->TOP__TOP__main__pd6.__PVT__out));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__TOP__main__pd6.__PVT__done));
        bufp->chgCData(oldp+238,(vlSymsp->TOP__TOP__main__fsm8.__PVT__out),2);
        bufp->chgBit(oldp+239,(vlSymsp->TOP__TOP__main__fsm8.__PVT__done));
        bufp->chgBit(oldp+240,(vlSymsp->TOP__TOP__main__pd7.__PVT__out));
        bufp->chgBit(oldp+241,(vlSymsp->TOP__TOP__main__pd7.__PVT__done));
        bufp->chgCData(oldp+242,(vlSymsp->TOP__TOP__main__fsm9.__PVT__out),5);
        bufp->chgBit(oldp+243,(vlSymsp->TOP__TOP__main__fsm9.__PVT__done));
        bufp->chgBit(oldp+244,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_done_in));
        bufp->chgBit(oldp+245,(vlSymsp->TOP__TOP__main.__PVT__par0_done_in));
        bufp->chgBit(oldp+246,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))));
        bufp->chgBit(oldp+247,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out))));
        bufp->chgBit(oldp+248,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out))));
        bufp->chgBit(oldp+249,(vlSymsp->TOP__TOP__main.__PVT__par1_done_in));
        bufp->chgBit(oldp+250,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out))));
        bufp->chgBit(oldp+251,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out))));
        bufp->chgBit(oldp+252,(vlSymsp->TOP__TOP__main.__PVT__par2_done_in));
        bufp->chgBit(oldp+253,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out))));
        bufp->chgBit(oldp+254,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out))));
        bufp->chgBit(oldp+255,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out))));
        bufp->chgBit(oldp+256,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out))));
        bufp->chgIData(oldp+257,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__rtmp),32);
        bufp->chgIData(oldp+258,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__ltmp),32);
        bufp->chgQData(oldp+259,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp),64);
        bufp->chgBit(oldp+261,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[0]));
        bufp->chgBit(oldp+262,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[1]));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+263,(vlSymsp->TOP__TOP.__PVT__go));
        bufp->chgBit(oldp+264,(vlSymsp->TOP__TOP.__PVT__reset));
        bufp->chgQData(oldp+265,(vlSymsp->TOP__TOP.__PVT__cycle_count),64);
        bufp->chgBit(oldp+267,(((~ (IData)(vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__done)) 
                                & ((7U == (IData)(vlSymsp->TOP__TOP__main__fsm9.__PVT__out)) 
                                   & (IData)(vlSymsp->TOP__TOP.__PVT__go)))));
        bufp->chgBit(oldp+268,(((~ (IData)(vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__done)) 
                                & ((0xeU == (IData)(vlSymsp->TOP__TOP__main__fsm9.__PVT__out)) 
                                   & (IData)(vlSymsp->TOP__TOP.__PVT__go)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+269,(vlSymsp->TOP__TOP.__PVT__clk));
        bufp->chgIData(oldp+270,(vlSymsp->TOP__TOP.__PVT__NOTRACE),32);
        bufp->chgQData(oldp+271,(vlSymsp->TOP__TOP.__PVT__CYCLE_LIMIT),64);
        bufp->chgIData(oldp+273,(vlSymsp->TOP__TOP.__PVT__CODE),32);
        bufp->chgIData(oldp+274,(vlSymsp->TOP__TOP__alpha_int.__PVT__mem[0]),32);
        bufp->chgIData(oldp+275,(vlSymsp->TOP__TOP__beta_int.__PVT__mem[0]),32);
    }
    bufp->chgCData(oldp+276,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf1a0deb2__0)
                               ? 9U : ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_537)
                                        ? 0x11U : (
                                                   (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he5fc0be2__0) 
                                                     | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2d208de0__0)) 
                                                    & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                                    ? 6U
                                                    : 
                                                   ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h47e459e9__0) 
                                                      | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hac2f5c96__0)) 
                                                     & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                                     ? 0x14U
                                                     : 
                                                    ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3347db13__0) 
                                                       | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h9bee7a7f__0)) 
                                                      & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                                      ? 4U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h582fb65c__0)
                                                       ? 0x13U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6756a31f__0)
                                                        ? 0xbU
                                                        : 
                                                       ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h86ee349f__0)
                                                         ? 7U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h9e4beea2__0)
                                                          ? 0xaU
                                                          : 
                                                         ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h60158675__0)
                                                           ? 8U
                                                           : 
                                                          ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7f8aaaf6__0) 
                                                             | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h44c94f9f__0)) 
                                                            & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                                            ? 2U
                                                            : 
                                                           ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_475)
                                                             ? 5U
                                                             : 
                                                            ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hdd6bcd42__0)
                                                              ? 0xcU
                                                              : 
                                                             ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h902ba0f5__0)
                                                               ? 0xeU
                                                               : 
                                                              ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2f620bc1__0) 
                                                                 | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5aaa8d8d__0)) 
                                                                & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                                                ? 0xdU
                                                                : 
                                                               ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h4614a4a6__0)
                                                                 ? 3U
                                                                 : 
                                                                ((0x14U 
                                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm9.__PVT__out))
                                                                  ? 0U
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h253d2600__0)
                                                                   ? 0x10U
                                                                   : 
                                                                  ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_heb2b6ba0__0) 
                                                                     | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb33aea2c__0)) 
                                                                    & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                                                    ? 0x12U
                                                                    : 
                                                                   ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hdcf452ea__0)
                                                                     ? 0xfU
                                                                     : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_447)))))))))))))))))))))),5);
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

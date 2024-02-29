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
        bufp->chgCData(oldp+0,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let3_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__internal_reg)
                                 : 0U)),4);
        bufp->chgCData(oldp+1,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let3_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__k0.__PVT__internal_reg)
                                 : 0U)),4);
        bufp->chgCData(oldp+2,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__k0.__PVT__internal_reg)
                                 : 0U)),4);
        bufp->chgCData(oldp+3,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                                 : 0U)),4);
        bufp->chgCData(oldp+4,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let11_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__internal_reg)
                                 : 0U)),4);
        bufp->chgCData(oldp+5,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let11_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__k0.__PVT__internal_reg)
                                 : 0U)),4);
        bufp->chgCData(oldp+6,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let12_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__k0.__PVT__internal_reg)
                                 : 0U)),4);
        bufp->chgCData(oldp+7,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let12_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                                 : 0U)),4);
        bufp->chgCData(oldp+8,((((IData)(vlSymsp->TOP__TOP__main.__PVT__E_int_read_en) 
                                 | (IData)(vlSymsp->TOP__TOP__main.__PVT__E_int_write_en))
                                 ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__internal_reg)
                                 : 0U)),4);
        bufp->chgCData(oldp+9,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let19_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__k0.__PVT__internal_reg)
                                 : (((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let7_go_in) 
                                     | (IData)(vlSymsp->TOP__TOP__main.__PVT__E_int_write_en))
                                     ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                                     : 0U))),4);
        bufp->chgCData(oldp+10,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let20_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__k0.__PVT__internal_reg)
                                  : (((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let15_go_in) 
                                      | (IData)(vlSymsp->TOP__TOP__main.__PVT__F_int_write_en))
                                      ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__internal_reg)
                                      : 0U))),4);
        bufp->chgCData(oldp+11,((((IData)(vlSymsp->TOP__TOP__main.__PVT__F_int_read_en) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__PVT__F_int_write_en))
                                  ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                                  : 0U)),4);
        bufp->chgCData(oldp+12,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5308707e__0)
                                  ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__internal_reg)
                                  : 0U)),4);
        bufp->chgCData(oldp+13,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5308707e__0)
                                  ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                                  : 0U)),4);
        bufp->chgIData(oldp+14,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7564b4ea__0)
                                  ? vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__internal_reg
                                  : 0U)),32);
        bufp->chgIData(oldp+15,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7564b4ea__0)
                                  ? vlSymsp->TOP__TOP__main__v_0.__PVT__internal_reg
                                  : 0U)),32);
        bufp->chgCData(oldp+16,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7564b4ea__0)
                                  ? (IData)(vlSymsp->TOP__TOP__main__k0.__PVT__internal_reg)
                                  : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hdc1723ac__0)
                                      ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                                      : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb1823217__0)
                                          ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__internal_reg)
                                          : 0U)))),4);
        bufp->chgIData(oldp+17,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h77df4bfc__0)
                                  ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp)
                                  : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke32_go_in)
                                      ? vlSymsp->TOP__TOP__G_int__mem.__PVT__read_out
                                      : (((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke27_go_in) 
                                          | (IData)(vlSymsp->TOP__TOP__main.__PVT__invoke8_go_in))
                                          ? vlSymsp->TOP__TOP__E_int__mem.__PVT__read_out
                                          : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke3_go_in)
                                              ? vlSymsp->TOP__TOP__A_int__mem.__PVT__read_out
                                              : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke20_go_in)
                                                  ? vlSymsp->TOP__TOP__F_int__mem.__PVT__read_out
                                                  : 
                                                 ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke15_go_in)
                                                   ? vlSymsp->TOP__TOP__C_int__mem.__PVT__read_out
                                                   : 0U))))))),32);
        bufp->chgCData(oldp+18,((((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in) 
                                  | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond50_go_in) 
                                     | (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond80_go_in)))
                                  ? (IData)(vlSymsp->TOP__TOP__main__k0.__PVT__internal_reg)
                                  : (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                                      | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond40_go_in) 
                                         | (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond70_go_in)))
                                      ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg)
                                      : (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in) 
                                          | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond30_go_in) 
                                             | (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond60_go_in)))
                                          ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__internal_reg)
                                          : 0U)))),4);
        bufp->chgIData(oldp+19,(((IData)(vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go)
                                  ? vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__internal_reg
                                  : 0U)),32);
        bufp->chgIData(oldp+20,(((IData)(vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go)
                                  ? vlSymsp->TOP__TOP__main__v_0.__PVT__internal_reg
                                  : 0U)),32);
        bufp->chgIData(oldp+21,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2935d36f__0)
                                  ? vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__internal_reg
                                  : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke16_go_in)
                                      ? vlSymsp->TOP__TOP__D_int__mem.__PVT__read_out
                                      : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke4_go_in)
                                          ? vlSymsp->TOP__TOP__B_int__mem.__PVT__read_out
                                          : ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke28_go_in)
                                              ? vlSymsp->TOP__TOP__F_int__mem.__PVT__read_out
                                              : 0U))))),32);
        bufp->chgCData(oldp+22,((7U & (((4U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in))
                                        ? (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in)
                                             ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                             : 0U) 
                                           + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in))
                                        : (((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)) 
                                            & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond80_go_in))
                                            ? (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond80_go_in)
                                                 ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                                 : 0U) 
                                               + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond80_go_in))
                                            : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_68))))),3);
        bufp->chgCData(oldp+23,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+24,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)))),3);
        bufp->chgCData(oldp+25,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+26,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)))),3);
        bufp->chgCData(oldp+27,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+28,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)))),3);
        bufp->chgCData(oldp+29,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond30_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+30,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond30_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond30_go_in)))),3);
        bufp->chgCData(oldp+31,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond40_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+32,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond40_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond40_go_in)))),3);
        bufp->chgCData(oldp+33,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond50_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+34,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond50_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond50_go_in)))),3);
        bufp->chgCData(oldp+35,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond60_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+36,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond60_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond60_go_in)))),3);
        bufp->chgCData(oldp+37,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond70_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+38,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond70_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond70_go_in)))),3);
        bufp->chgCData(oldp+39,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond80_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+40,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond80_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond80_go_in)))),3);
        bufp->chgCData(oldp+41,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+42,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)))),3);
        bufp->chgCData(oldp+43,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+44,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in)))),3);
        bufp->chgCData(oldp+45,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+46,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)))),3);
        bufp->chgCData(oldp+47,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+48,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)))),3);
        bufp->chgCData(oldp+49,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+50,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in)))),3);
        bufp->chgCData(oldp+51,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par2_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+52,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par2_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par2_go_in)))),3);
        bufp->chgCData(oldp+53,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par3_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+54,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par3_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par3_go_in)))),3);
        bufp->chgCData(oldp+55,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+56,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in)))),3);
        bufp->chgCData(oldp+57,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                  : 0U)),3);
        bufp->chgCData(oldp+58,((7U & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg)
                                         : 0U) + (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)))),3);
        bufp->chgBit(oldp+59,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_done_in)) 
                               & ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5fe59ed1__0) 
                                    | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h803e61bb__0) 
                                       | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h4115299f__0) 
                                          | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h782a3ddb__0) 
                                             | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he38a3139__0) 
                                                | ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_1225) 
                                                   | (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_1230))))))) 
                                   | ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_1235) 
                                      | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8158da80__0) 
                                         | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h86c60925__0) 
                                            | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hcd45bb08__0) 
                                               | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd34cf6bd__0) 
                                                  | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7b97ae90__0))))))) 
                                  | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5f63fc57__0) 
                                     | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6a464d42__0))))));
        bufp->chgBit(oldp+60,(((((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_done_in) 
                                 | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5fe59ed1__0) 
                                    | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h803e61bb__0) 
                                       | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h4115299f__0) 
                                          | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h782a3ddb__0) 
                                             | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he38a3139__0) 
                                                | ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_1225) 
                                                   | ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_1230) 
                                                      | (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_1235))))))))) 
                                | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8158da80__0) 
                                   | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h86c60925__0) 
                                      | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hcd45bb08__0) 
                                         | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd34cf6bd__0) 
                                            | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7b97ae90__0) 
                                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5f63fc57__0))))))) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6a464d42__0))));
        bufp->chgCData(oldp+61,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h774920da__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h0b8c85e1__0)))),2);
        bufp->chgBit(oldp+62,(((2U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg)) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h0b8c85e1__0) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h774920da__0)))));
        bufp->chgBit(oldp+63,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7f7c5c20__0))));
        bufp->chgBit(oldp+64,(((IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7f7c5c20__0))));
        bufp->chgCData(oldp+65,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h48420605__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__internal_reg)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h1f91066c__0)))),2);
        bufp->chgBit(oldp+66,(((2U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__internal_reg)) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h1f91066c__0) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h48420605__0)))));
        bufp->chgBit(oldp+67,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h55d88a83__0))));
        bufp->chgBit(oldp+68,(((IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h55d88a83__0))));
        bufp->chgCData(oldp+69,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h1a503cad__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__internal_reg)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3f83282d__0)))),2);
        bufp->chgBit(oldp+70,(((2U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__internal_reg)) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3f83282d__0) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h1a503cad__0)))));
        bufp->chgBit(oldp+71,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par1_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h99c447ee__0))));
        bufp->chgBit(oldp+72,(((IData)(vlSymsp->TOP__TOP__main.__PVT__par1_done_in) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h99c447ee__0))));
        bufp->chgCData(oldp+73,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6ddf8473__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__internal_reg)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb36ea8dd__0)))),2);
        bufp->chgBit(oldp+74,(((2U == (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__internal_reg)) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb36ea8dd__0) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6ddf8473__0)))));
        bufp->chgBit(oldp+75,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par1_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2276f04a__0))));
        bufp->chgBit(oldp+76,(((IData)(vlSymsp->TOP__TOP__main.__PVT__par1_done_in) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2276f04a__0))));
        bufp->chgCData(oldp+77,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h60b4de51__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__internal_reg)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h1832e5aa__0)))),2);
        bufp->chgBit(oldp+78,(((2U == (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__internal_reg)) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h1832e5aa__0) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h60b4de51__0)))));
        bufp->chgBit(oldp+79,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par2_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_haed36e32__0))));
        bufp->chgBit(oldp+80,(((IData)(vlSymsp->TOP__TOP__main.__PVT__par2_done_in) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_haed36e32__0))));
        bufp->chgCData(oldp+81,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h859cd103__0)
                                  ? 2U : ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__internal_reg)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hed50e756__0)))),2);
        bufp->chgBit(oldp+82,(((2U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__internal_reg)) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hed50e756__0) 
                                  | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h859cd103__0)))));
        bufp->chgBit(oldp+83,(((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par2_done_in)) 
                               & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h01fe6a24__0))));
        bufp->chgBit(oldp+84,(((IData)(vlSymsp->TOP__TOP__main.__PVT__par2_done_in) 
                               | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h01fe6a24__0))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+85,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let3_go_in));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let11_go_in));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let12_go_in));
        bufp->chgIData(oldp+89,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                  ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                           ? (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0)
                                           : 0U))),32);
        bufp->chgBit(oldp+90,(vlSymsp->TOP__TOP__main.__PVT__E_int_write_en));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__TOP__main.__PVT__E_int_read_en));
        bufp->chgIData(oldp+92,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)
                                  ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par2_go_in)
                                           ? (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0)
                                           : 0U))),32);
        bufp->chgBit(oldp+93,(vlSymsp->TOP__TOP__main.__PVT__F_int_write_en));
        bufp->chgBit(oldp+94,(vlSymsp->TOP__TOP__main.__PVT__F_int_read_en));
        bufp->chgIData(oldp+95,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par3_go_in)
                                  ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)
                                           ? (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0)
                                           : 0U))),32);
        bufp->chgBit(oldp+96,(vlSymsp->TOP__TOP__main.__PVT__G_int_write_en));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let23_go_in));
        bufp->chgIData(oldp+98,((IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0)),32);
        bufp->chgCData(oldp+99,((((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke10_go_in) 
                                  | ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke11_go_in) 
                                     | ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke22_go_in) 
                                        | ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke23_go_in) 
                                           | ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke34_go_in) 
                                              | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in) 
                                                 | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par2_go_in) 
                                                    | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in) 
                                                       | (IData)(vlSymsp->TOP__TOP__main.__PVT__invoke35_go_in)))))))))
                                  ? 1U : 0U)),4);
        bufp->chgCData(oldp+100,((0xfU & (IData)(vlSymsp->TOP__TOP__main__add1.__PVT___GEN_0))),4);
        bufp->chgBit(oldp+101,(vlSymsp->TOP__TOP__main.__PVT__bin_read0_0_write_en));
        bufp->chgCData(oldp+102,((((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke0_go_in) 
                                   | ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke12_go_in) 
                                      | (IData)(vlSymsp->TOP__TOP__main.__PVT__invoke24_go_in)))
                                   ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb1823217__0)
                                            ? (0xfU 
                                               & (IData)(vlSymsp->TOP__TOP__main__add1.__PVT___GEN_0))
                                            : 0U))),4);
        bufp->chgBit(oldp+103,(vlSymsp->TOP__TOP__main.__PVT__i0_write_en));
        bufp->chgCData(oldp+104,((((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke13_go_in) 
                                   | ((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke1_go_in) 
                                      | (IData)(vlSymsp->TOP__TOP__main.__PVT__invoke25_go_in)))
                                   ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hdc1723ac__0)
                                            ? (0xfU 
                                               & (IData)(vlSymsp->TOP__TOP__main__add1.__PVT___GEN_0))
                                            : 0U))),4);
        bufp->chgBit(oldp+105,(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
        bufp->chgCData(oldp+106,((((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in) 
                                   | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par3_go_in) 
                                      | (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)))
                                   ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7564b4ea__0)
                                            ? (0xfU 
                                               & (IData)(vlSymsp->TOP__TOP__main__add1.__PVT___GEN_0))
                                            : 0U))),4);
        bufp->chgBit(oldp+107,(vlSymsp->TOP__TOP__main.__PVT__k0_write_en));
        bufp->chgCData(oldp+108,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf21302ed__0)
                                   ? 7U : 0U)),4);
        bufp->chgBit(oldp+109,(vlSymsp->TOP__TOP__main__le0.__PVT__out));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__TOP__main.__PVT__v_0_write_en));
        bufp->chgBit(oldp+112,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in) 
                                & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in));
        bufp->chgBit(oldp+114,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                                & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in));
        bufp->chgBit(oldp+116,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in) 
                                & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in));
        bufp->chgBit(oldp+118,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond30_go_in) 
                                & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond30_go_in));
        bufp->chgBit(oldp+120,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond40_go_in) 
                                & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond40_go_in));
        bufp->chgBit(oldp+122,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond50_go_in) 
                                & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond50_go_in));
        bufp->chgBit(oldp+124,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond60_go_in) 
                                & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond60_go_in));
        bufp->chgBit(oldp+126,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond70_go_in) 
                                & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond70_go_in));
        bufp->chgBit(oldp+128,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond80_go_in) 
                                & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond80_go_in));
        bufp->chgBit(oldp+130,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf21302ed__0) 
                                | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in) 
                                   | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in) 
                                      | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in) 
                                         | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in) 
                                            | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par2_go_in) 
                                               | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par3_go_in) 
                                                  | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in) 
                                                     | ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in) 
                                                        | (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in))))))))))));
        bufp->chgCData(oldp+131,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in),3);
        bufp->chgCData(oldp+132,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in),3);
        bufp->chgCData(oldp+133,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in),3);
        bufp->chgCData(oldp+134,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond30_go_in),3);
        bufp->chgCData(oldp+135,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond40_go_in),3);
        bufp->chgCData(oldp+136,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond50_go_in),3);
        bufp->chgCData(oldp+137,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond60_go_in),3);
        bufp->chgCData(oldp+138,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond70_go_in),3);
        bufp->chgCData(oldp+139,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond80_go_in),3);
        bufp->chgCData(oldp+140,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in),3);
        bufp->chgCData(oldp+141,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in),3);
        bufp->chgCData(oldp+142,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in),3);
        bufp->chgCData(oldp+143,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in),3);
        bufp->chgCData(oldp+144,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in),3);
        bufp->chgCData(oldp+145,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par2_go_in),3);
        bufp->chgCData(oldp+146,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par3_go_in),3);
        bufp->chgCData(oldp+147,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in),3);
        bufp->chgCData(oldp+148,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in),3);
        bufp->chgBit(oldp+149,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let15_go_in));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let19_go_in));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let20_go_in));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let7_go_in));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__TOP__main.__PVT__invoke0_go_in));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__TOP__main.__PVT__invoke1_go_in));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__TOP__main.__PVT__invoke3_go_in));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__TOP__main.__PVT__invoke4_go_in));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__TOP__main.__PVT__invoke8_go_in));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__TOP__main.__PVT__invoke10_go_in));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__TOP__main.__PVT__invoke11_go_in));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__TOP__main.__PVT__invoke12_go_in));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__TOP__main.__PVT__invoke13_go_in));
        bufp->chgBit(oldp+162,(vlSymsp->TOP__TOP__main.__PVT__invoke15_go_in));
        bufp->chgBit(oldp+163,(vlSymsp->TOP__TOP__main.__PVT__invoke16_go_in));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__TOP__main.__PVT__invoke20_go_in));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__TOP__main.__PVT__invoke22_go_in));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__TOP__main.__PVT__invoke23_go_in));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__TOP__main.__PVT__invoke24_go_in));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__TOP__main.__PVT__invoke25_go_in));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__TOP__main.__PVT__invoke27_go_in));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__TOP__main.__PVT__invoke28_go_in));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__TOP__main.__PVT__invoke32_go_in));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__TOP__main.__PVT__invoke34_go_in));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__TOP__main.__PVT__invoke35_go_in));
        bufp->chgBit(oldp+174,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_go_in));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq0_go_in));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par2_go_in));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par3_go_in));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq1_go_in));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__TOP__main.__PVT__par0_go_in));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__TOP__main.__PVT__tdcc_go_in));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__TOP__main.__PVT__tdcc0_go_in));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__TOP__main.__PVT__par1_go_in));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__TOP__main.__PVT__tdcc1_go_in));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__TOP__main.__PVT__tdcc2_go_in));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__TOP__main.__PVT__par2_go_in));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__TOP__main.__PVT__tdcc3_go_in));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__TOP__main.__PVT__tdcc4_go_in));
        bufp->chgCData(oldp+192,(vlSymsp->TOP__TOP__A_int.__PVT__addr),8);
        bufp->chgCData(oldp+193,(vlSymsp->TOP__TOP__B_int.__PVT__addr),8);
        bufp->chgCData(oldp+194,(vlSymsp->TOP__TOP__C_int.__PVT__addr),8);
        bufp->chgCData(oldp+195,(vlSymsp->TOP__TOP__D_int.__PVT__addr),8);
        bufp->chgCData(oldp+196,(vlSymsp->TOP__TOP__E_int.__PVT__addr),8);
        bufp->chgCData(oldp+197,(vlSymsp->TOP__TOP__F_int.__PVT__addr),8);
        bufp->chgCData(oldp+198,(vlSymsp->TOP__TOP__G_int.__PVT__addr),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+199,((0x30U == (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__internal_reg))));
        bufp->chgIData(oldp+200,(vlSymsp->TOP__TOP__A_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+201,(vlSymsp->TOP__TOP__A_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__TOP__A_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+203,(vlSymsp->TOP__TOP__B_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+204,(vlSymsp->TOP__TOP__B_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+205,(vlSymsp->TOP__TOP__B_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+206,(vlSymsp->TOP__TOP__C_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+207,(vlSymsp->TOP__TOP__C_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+208,(vlSymsp->TOP__TOP__C_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+209,(vlSymsp->TOP__TOP__D_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+210,(vlSymsp->TOP__TOP__D_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+211,(vlSymsp->TOP__TOP__D_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+212,(vlSymsp->TOP__TOP__E_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+213,(vlSymsp->TOP__TOP__E_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+214,(vlSymsp->TOP__TOP__E_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+215,(vlSymsp->TOP__TOP__F_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+216,(vlSymsp->TOP__TOP__F_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+217,(vlSymsp->TOP__TOP__F_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+218,(vlSymsp->TOP__TOP__G_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+219,(vlSymsp->TOP__TOP__G_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+220,(vlSymsp->TOP__TOP__G_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+221,(vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__internal_reg),32);
        bufp->chgBit(oldp+222,(vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__done_reg));
        bufp->chgCData(oldp+223,(vlSymsp->TOP__TOP__main__i0.__PVT__internal_reg),4);
        bufp->chgBit(oldp+224,(vlSymsp->TOP__TOP__main__i0.__PVT__done_reg));
        bufp->chgCData(oldp+225,(vlSymsp->TOP__TOP__main__j0.__PVT__internal_reg),4);
        bufp->chgBit(oldp+226,(vlSymsp->TOP__TOP__main__j0.__PVT__done_reg));
        bufp->chgCData(oldp+227,(vlSymsp->TOP__TOP__main__k0.__PVT__internal_reg),4);
        bufp->chgBit(oldp+228,(vlSymsp->TOP__TOP__main__k0.__PVT__done_reg));
        bufp->chgIData(oldp+229,((IData)(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp)),32);
        bufp->chgIData(oldp+230,(vlSymsp->TOP__TOP__main__v_0.__PVT__internal_reg),32);
        bufp->chgBit(oldp+231,(vlSymsp->TOP__TOP__main__v_0.__PVT__done_reg));
        bufp->chgBit(oldp+232,(vlSymsp->TOP__TOP__main__comb_reg.__PVT__internal_reg));
        bufp->chgBit(oldp+233,(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__internal_reg));
        bufp->chgBit(oldp+234,(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__internal_reg));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__TOP__main__comb_reg2.__PVT__internal_reg));
        bufp->chgBit(oldp+236,(vlSymsp->TOP__TOP__main__comb_reg3.__PVT__internal_reg));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__TOP__main__comb_reg4.__PVT__internal_reg));
        bufp->chgBit(oldp+238,(vlSymsp->TOP__TOP__main__comb_reg5.__PVT__internal_reg));
        bufp->chgBit(oldp+239,(vlSymsp->TOP__TOP__main__comb_reg6.__PVT__internal_reg));
        bufp->chgBit(oldp+240,(vlSymsp->TOP__TOP__main__comb_reg7.__PVT__internal_reg));
        bufp->chgCData(oldp+241,(vlSymsp->TOP__TOP__main__fsm.__PVT__internal_reg),3);
        bufp->chgBit(oldp+242,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__internal_reg));
        bufp->chgCData(oldp+243,(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg),2);
        bufp->chgBit(oldp+244,(vlSymsp->TOP__TOP__main__pd.__PVT__internal_reg));
        bufp->chgCData(oldp+245,(vlSymsp->TOP__TOP__main__fsm1.__PVT__internal_reg),2);
        bufp->chgBit(oldp+246,(vlSymsp->TOP__TOP__main__pd0.__PVT__internal_reg));
        bufp->chgCData(oldp+247,(vlSymsp->TOP__TOP__main__fsm2.__PVT__internal_reg),2);
        bufp->chgBit(oldp+248,(vlSymsp->TOP__TOP__main__pd1.__PVT__internal_reg));
        bufp->chgCData(oldp+249,(vlSymsp->TOP__TOP__main__fsm3.__PVT__internal_reg),2);
        bufp->chgBit(oldp+250,(vlSymsp->TOP__TOP__main__pd2.__PVT__internal_reg));
        bufp->chgCData(oldp+251,(vlSymsp->TOP__TOP__main__fsm4.__PVT__internal_reg),2);
        bufp->chgBit(oldp+252,(vlSymsp->TOP__TOP__main__pd3.__PVT__internal_reg));
        bufp->chgCData(oldp+253,(vlSymsp->TOP__TOP__main__fsm5.__PVT__internal_reg),2);
        bufp->chgBit(oldp+254,(vlSymsp->TOP__TOP__main__pd4.__PVT__internal_reg));
        bufp->chgCData(oldp+255,(vlSymsp->TOP__TOP__main__fsm6.__PVT__internal_reg),6);
        bufp->chgBit(oldp+256,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_done_in));
        bufp->chgBit(oldp+257,(vlSymsp->TOP__TOP__main.__PVT__par0_done_in));
        bufp->chgBit(oldp+258,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__internal_reg))));
        bufp->chgBit(oldp+259,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__internal_reg))));
        bufp->chgBit(oldp+260,(vlSymsp->TOP__TOP__main.__PVT__par1_done_in));
        bufp->chgBit(oldp+261,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__internal_reg))));
        bufp->chgBit(oldp+262,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__internal_reg))));
        bufp->chgBit(oldp+263,(vlSymsp->TOP__TOP__main.__PVT__par2_done_in));
        bufp->chgBit(oldp+264,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__internal_reg))));
        bufp->chgBit(oldp+265,((2U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__internal_reg))));
        bufp->chgIData(oldp+266,(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__rtmp),32);
        bufp->chgIData(oldp+267,(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__ltmp),32);
        bufp->chgQData(oldp+268,(vlSymsp->TOP__TOP__main__mult_pipe0.__PVT__out_tmp),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+270,(vlSymsp->TOP__TOP.__PVT__clk));
        bufp->chgIData(oldp+271,(vlSymsp->TOP__TOP.__PVT__NOTRACE),32);
        bufp->chgQData(oldp+272,(vlSymsp->TOP__TOP.__PVT__CYCLE_LIMIT),64);
        bufp->chgIData(oldp+274,(vlSymsp->TOP__TOP.__PVT__CODE),32);
    }
    bufp->chgBit(oldp+275,(vlSymsp->TOP__TOP.__PVT__go));
    bufp->chgBit(oldp+276,(vlSymsp->TOP__TOP.__PVT__reset));
    bufp->chgQData(oldp+277,(vlSymsp->TOP__TOP.__PVT__cycle_count),64);
    bufp->chgCData(oldp+279,(((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h32a14825__0)
                               ? 0x2bU : ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_683)
                                           ? 0x25U : 
                                          ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h614ce3a9__0) 
                                             | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he146a1ad__0)) 
                                            & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                            ? 0x12U
                                            : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6232c48a__0)
                                                ? 1U
                                                : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_122)))))),6);
    bufp->chgBit(oldp+280,((((((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_606) 
                               | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf69bbf90__0) 
                                  | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7a22168b__0) 
                                      & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                     | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6f6b196c__0) 
                                         & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                        | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hce1859aa__0) 
                                           | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h188ce12c__0) 
                                               & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                              | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8cde0dbc__0) 
                                                  & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                                 | ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_639) 
                                                    | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h43222920__0) 
                                                        | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3f6feb34__0)) 
                                                       & (IData)(vlSymsp->TOP__TOP.__PVT__go)))))))))) 
                              | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8dda0bde__0) 
                                 | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h187c5b97__0) 
                                     & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                    | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_ha57f5f5c__0) 
                                        & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                       | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hae094eb1__0) 
                                          | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hcb49579a__0) 
                                              & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                             | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3e774048__0) 
                                                 & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                                | ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_683) 
                                                   | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb9d1d38c__0) 
                                                      & (IData)(vlSymsp->TOP__TOP.__PVT__go)))))))))) 
                             | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb05d8461__0) 
                                 & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf10ddf01__0) 
                                   | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2c207a0e__0) 
                                      | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb7b7dc57__0) 
                                         | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h844ecf94__0) 
                                            | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h32a14825__0) 
                                               | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hc799cda5__0) 
                                                   & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                                  | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hcf958a5a__0) 
                                                      & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                                     | ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_729) 
                                                        | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h04ae4a89__0) 
                                                            | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h70527d7b__0)) 
                                                           & (IData)(vlSymsp->TOP__TOP.__PVT__go)))))))))))) 
                            | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6ead8d62__0) 
                               | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hcc5b09d0__0) 
                                   | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5145a99b__0)) 
                                  & (IData)(vlSymsp->TOP__TOP.__PVT__go))))));
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

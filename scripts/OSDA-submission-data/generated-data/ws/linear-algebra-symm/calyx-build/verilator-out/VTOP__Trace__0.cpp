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
        bufp->chgCData(oldp+1,(((IData)(vlSymsp->TOP__TOP__main.__PVT__beta_int_read_en)
                                 ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard14)
                                     ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                     : 0U))),4);
        bufp->chgIData(oldp+2,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard179)
                                 ? vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out
                                 : (((((9U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                       | (0x10U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                      & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                     | ((0xdU == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)))
                                     ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                     : 0U))),32);
        bufp->chgCData(oldp+3,(((IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_read_en)
                                 ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                 : (((0xbU == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in))
                                     ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                     : 0U))),4);
        bufp->chgIData(oldp+4,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard179)
                                 ? vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out
                                 : ((((5U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                      & (IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                     | ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard825) 
                                        & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)))
                                     ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                     : 0U))),32);
        bufp->chgIData(oldp+5,(((IData)(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read0_0_write_en)
                                 ? vlSymsp->TOP__TOP__main__C_int__mem.__PVT__read_out
                                 : (((5U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in))
                                     ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                     : 0U))),32);
        bufp->chgCData(oldp+6,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard54)
                                 ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard59)
                                     ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                     : 0U))),4);
        bufp->chgIData(oldp+7,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard38)
                                 ? vlSymsp->TOP__TOP__main__add3.__PVT__out
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard41)
                                     ? (vlSymsp->TOP__TOP__main__add3.__PVT__out 
                                        + vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__out)
                                     : 0U))),32);
        bufp->chgIData(oldp+8,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard38)
                                 ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard212)
                                     ? vlSymsp->TOP__TOP__main__temp2_0.__PVT__out
                                     : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard41)
                                         ? vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__out
                                         : 0U)))),32);
        bufp->chgIData(oldp+9,((((IData)(vlSymsp->TOP__TOP__main.__PVT___guard212) 
                                 | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard41))
                                 ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard38)
                                     ? vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__out
                                     : 0U))),32);
        bufp->chgIData(oldp+10,((vlSymsp->TOP__TOP__main__add3.__PVT__out 
                                 + vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__out)),32);
        bufp->chgCData(oldp+11,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                  : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                      ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                      : 0U))),4);
        bufp->chgCData(oldp+12,(((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                  ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                  : 0U)),4);
        bufp->chgCData(oldp+13,(((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                  ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                  : 0U)),4);
        bufp->chgBit(oldp+14,((((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                 ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                 : 0U) < ((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                           ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                           : 0U))));
        bufp->chgIData(oldp+15,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard569)
                                  ? vlSymsp->TOP__TOP__main__beta_int_read0_0.__PVT__out
                                  : (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard574) 
                                      | (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard577) 
                                          | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard580)) 
                                         & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)))
                                      ? vlSymsp->TOP__TOP__main__alpha_int_read0_0.__PVT__out
                                      : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard599)
                                          ? vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__out
                                          : 0U)))),32);
        bufp->chgIData(oldp+16,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard599)
                                  ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                  : (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard580) 
                                      & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in))
                                      ? vlSymsp->TOP__TOP__main__temp2_0.__PVT__out
                                      : (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard574) 
                                          | ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard577) 
                                             & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)))
                                          ? vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__out
                                          : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard569)
                                              ? vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__out
                                              : 0U))))),32);
        bufp->chgBit(oldp+17,(((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en) 
                               & (((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                    ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                    : 0U) < ((IData)(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en)
                                              ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                              : 0U)))));
        bufp->chgCData(oldp+18,((0x1fU & (((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in))
                                           ? (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                                ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                : 0U) 
                                              + ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                                  ? 1U
                                                  : 0U))
                                           : (((0U 
                                                != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in))
                                               ? (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                                    ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                    : 0U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                                    ? 1U
                                                    : 0U))
                                               : ((
                                                   (0x12U 
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
                                                  (((((((((0U 
                                                           == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                          & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)) 
                                                         | ((0U 
                                                             == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                            & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in))) 
                                                        | ((0U 
                                                            == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in))) 
                                                       | ((0U 
                                                           == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                          & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in))) 
                                                      | ((0U 
                                                          == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                         & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in))) 
                                                     | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard121)) 
                                                    | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard125))
                                                    ? 0U
                                                    : 
                                                   (((0U 
                                                      != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in))
                                                     ? 
                                                    (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                                       ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                       : 0U) 
                                                     + 
                                                     ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                                       ? 1U
                                                       : 0U))
                                                     : 
                                                    (((0U 
                                                       != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                      & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in))
                                                      ? 
                                                     (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                                        ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                        : 0U) 
                                                      + 
                                                      ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                                        ? 1U
                                                        : 0U))
                                                      : 
                                                     (((0x13U 
                                                        != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                       & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in))
                                                       ? 
                                                      (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)
                                                         ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                         : 0U) 
                                                       + 
                                                       ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)
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
                                                        : 0U)))))))))),5);
        bufp->chgCData(oldp+19,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),5);
        bufp->chgCData(oldp+20,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + 
                                          ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                            ? 1U : 0U)))),5);
        bufp->chgCData(oldp+21,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),5);
        bufp->chgCData(oldp+22,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + 
                                          ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                            ? 1U : 0U)))),5);
        bufp->chgCData(oldp+23,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),5);
        bufp->chgCData(oldp+24,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + 
                                          ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                            ? 1U : 0U)))),5);
        bufp->chgCData(oldp+25,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),5);
        bufp->chgCData(oldp+26,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + 
                                          ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                            ? 1U : 0U)))),5);
        bufp->chgCData(oldp+27,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),5);
        bufp->chgCData(oldp+28,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + 
                                          ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                            ? 1U : 0U)))),5);
        bufp->chgCData(oldp+29,(((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),5);
        bufp->chgCData(oldp+30,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + 
                                          ((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                                            ? 1U : 0U)))),5);
        bufp->chgCData(oldp+31,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),5);
        bufp->chgCData(oldp+32,((0x1fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                            : 0U) + 
                                          ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)
                                            ? 1U : 0U)))),5);
        bufp->chgCData(oldp+33,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard357)
                                  ? 3U : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard379)
                                           ? 5U : (
                                                   ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard365) 
                                                    | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard373))
                                                    ? 4U
                                                    : 
                                                   (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard406) 
                                                     | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard415))
                                                     ? 9U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard421)
                                                      ? 0xaU
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard391)
                                                        ? 7U
                                                        : 
                                                       (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard343) 
                                                         | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard351))
                                                         ? 2U
                                                         : 
                                                        ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard385)
                                                          ? 6U
                                                          : 
                                                         ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard397)
                                                           ? 8U
                                                           : 
                                                          ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard335)
                                                            ? 1U
                                                            : 
                                                           (((IData)(vlSymsp->TOP__TOP__main.__PVT___guard430) 
                                                             | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard439))
                                                             ? 0xbU
                                                             : 0U))))))))))))),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+34,(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__TOP__main.__PVT__A_int_read0_0_write_en));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__TOP__main.__PVT__B_int_read0_0_write_en));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__TOP__main.__PVT__C_i_j_0_write_en));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__TOP__main.__PVT__C_int_write_en));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__TOP__main.__PVT__C_int_read_en));
        bufp->chgCData(oldp+40,(vlSymsp->TOP__TOP__main.__PVT__add2_left),4);
        bufp->chgCData(oldp+41,((0xfU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__TOP__main.__PVT__add2_left)))),4);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__TOP__main__add3.__PVT__out),32);
        bufp->chgBit(oldp+43,(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read0_0_write_en));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__TOP__main.__PVT__beta_int_read_en));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__TOP__main.__PVT__beta_int_read0_0_write_en));
        bufp->chgCData(oldp+46,(((IData)(vlSymsp->TOP__TOP__main.__PVT__invoke33_go_in)
                                  ? (0xfU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__TOP__main.__PVT__add2_left)))
                                  : 0U)),4);
        bufp->chgBit(oldp+47,(vlSymsp->TOP__TOP__main.__PVT__i0_write_en));
        bufp->chgCData(oldp+48,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard125)
                                  ? (0xfU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__TOP__main.__PVT__add2_left)))
                                  : 0U)),4);
        bufp->chgBit(oldp+49,(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
        bufp->chgCData(oldp+50,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard192)
                                  ? (0xfU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__TOP__main.__PVT__add2_left)))
                                  : 0U)),4);
        bufp->chgBit(oldp+51,(vlSymsp->TOP__TOP__main.__PVT__k_0_write_en));
        bufp->chgCData(oldp+52,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                  ? 7U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                           ? 0xbU : 0U))),4);
        bufp->chgBit(oldp+53,(vlSymsp->TOP__TOP__main__le0.__PVT__out));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go));
        bufp->chgIData(oldp+55,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard669)
                                  ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard212)
                                           ? vlSymsp->TOP__TOP__main__add3.__PVT__out
                                           : 0U))),32);
        bufp->chgBit(oldp+56,(vlSymsp->TOP__TOP__main.__PVT__temp2_0_write_en));
        bufp->chgBit(oldp+57,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in) 
                               & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in));
        bufp->chgBit(oldp+59,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                               & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out))));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__TOP__main.__PVT__comb_reg1_write_en));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__TOP__main.__PVT__fsm_write_en));
        bufp->chgCData(oldp+63,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in)
                                  ? 1U : 0U)),5);
        bufp->chgCData(oldp+64,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in)
                                  ? 1U : 0U)),5);
        bufp->chgCData(oldp+65,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                  ? 1U : 0U)),5);
        bufp->chgCData(oldp+66,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                  ? 1U : 0U)),5);
        bufp->chgCData(oldp+67,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                  ? 1U : 0U)),5);
        bufp->chgCData(oldp+68,(((IData)(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in)
                                  ? 1U : 0U)),5);
        bufp->chgCData(oldp+69,(((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)
                                  ? 1U : 0U)),5);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_in));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_write_en));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__TOP__main.__PVT__fsm0_write_en));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__TOP__main.__PVT__invoke2_go_in));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__TOP__main.__PVT__invoke33_go_in));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go_in));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in));
        bufp->chgCData(oldp+80,(vlSymsp->TOP__TOP__main__A_int.__PVT__addr),8);
        bufp->chgCData(oldp+81,(vlSymsp->TOP__TOP__main__B_int.__PVT__addr),8);
        bufp->chgCData(oldp+82,(vlSymsp->TOP__TOP__main__C_int.__PVT__addr),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+83,((0xbU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))));
        bufp->chgCData(oldp+84,(vlSymsp->TOP__TOP__main__i0.__PVT__out),4);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+86,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+88,(vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out),32);
        bufp->chgBit(oldp+89,(vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__done));
        bufp->chgCData(oldp+90,(vlSymsp->TOP__TOP__main__j0.__PVT__out),4);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+92,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+94,(vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__out),32);
        bufp->chgBit(oldp+95,(vlSymsp->TOP__TOP__main__B_int_read0_0.__PVT__done));
        bufp->chgIData(oldp+96,(vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__out),32);
        bufp->chgBit(oldp+97,(vlSymsp->TOP__TOP__main__C_i_j_0.__PVT__done));
        bufp->chgIData(oldp+98,(vlSymsp->TOP__TOP__main__C_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+99,(vlSymsp->TOP__TOP__main__C_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__TOP__main__C_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+101,(vlSymsp->TOP__TOP__main__alpha_int.__PVT__read_out),32);
        bufp->chgBit(oldp+102,(vlSymsp->TOP__TOP__main__alpha_int.__PVT__write_done));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__TOP__main__alpha_int.__PVT__read_done));
        bufp->chgIData(oldp+104,(vlSymsp->TOP__TOP__main__alpha_int_read0_0.__PVT__out),32);
        bufp->chgBit(oldp+105,(vlSymsp->TOP__TOP__main__alpha_int_read0_0.__PVT__done));
        bufp->chgIData(oldp+106,(vlSymsp->TOP__TOP__main__beta_int.__PVT__read_out),32);
        bufp->chgBit(oldp+107,(vlSymsp->TOP__TOP__main__beta_int.__PVT__write_done));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__TOP__main__beta_int.__PVT__read_done));
        bufp->chgIData(oldp+109,(vlSymsp->TOP__TOP__main__beta_int_read0_0.__PVT__out),32);
        bufp->chgBit(oldp+110,(vlSymsp->TOP__TOP__main__beta_int_read0_0.__PVT__done));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__TOP__main__i0.__PVT__done));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__TOP__main__j0.__PVT__done));
        bufp->chgCData(oldp+113,(vlSymsp->TOP__TOP__main__k_0.__PVT__out),4);
        bufp->chgBit(oldp+114,(vlSymsp->TOP__TOP__main__k_0.__PVT__done));
        bufp->chgIData(oldp+115,((IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)),32);
        bufp->chgBit(oldp+116,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf
                               [1U]));
        bufp->chgIData(oldp+117,(vlSymsp->TOP__TOP__main__temp2_0.__PVT__out),32);
        bufp->chgBit(oldp+118,(vlSymsp->TOP__TOP__main__temp2_0.__PVT__done));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__TOP__main__comb_reg.__PVT__out));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__TOP__main__comb_reg.__PVT__done));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__out));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__done));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__out));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__done));
        bufp->chgCData(oldp+125,(vlSymsp->TOP__TOP__main__fsm.__PVT__out),5);
        bufp->chgBit(oldp+126,(vlSymsp->TOP__TOP__main__fsm.__PVT__done));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__done));
        bufp->chgCData(oldp+129,(vlSymsp->TOP__TOP__main__fsm0.__PVT__out),4);
        bufp->chgBit(oldp+130,(vlSymsp->TOP__TOP__main__fsm0.__PVT__done));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_done_in));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_done_in));
        bufp->chgIData(oldp+133,(vlSymsp->TOP__TOP__main__alpha_int.__PVT__mem[0]),32);
        bufp->chgIData(oldp+134,(vlSymsp->TOP__TOP__main__beta_int.__PVT__mem[0]),32);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__rtmp),32);
        bufp->chgIData(oldp+136,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__ltmp),32);
        bufp->chgQData(oldp+137,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp),64);
        bufp->chgBit(oldp+139,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[0]));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+141,(vlSymsp->TOP__TOP.__PVT__clk));
        bufp->chgIData(oldp+142,(vlSymsp->TOP__TOP.__PVT__NOTRACE),32);
        bufp->chgQData(oldp+143,(vlSymsp->TOP__TOP.__PVT__CYCLE_LIMIT),64);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__TOP.__PVT__CODE),32);
    }
    bufp->chgBit(oldp+146,(vlSymsp->TOP__TOP.__PVT__go));
    bufp->chgBit(oldp+147,(vlSymsp->TOP__TOP.__PVT__reset));
    bufp->chgQData(oldp+148,(vlSymsp->TOP__TOP.__PVT__cycle_count),64);
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

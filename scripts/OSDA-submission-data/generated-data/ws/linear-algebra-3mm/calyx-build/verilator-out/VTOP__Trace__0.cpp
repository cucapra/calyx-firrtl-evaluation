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
        bufp->chgCData(oldp+1,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard341)
                                 ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                 : (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5f29b700__0))),4);
        bufp->chgIData(oldp+2,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard192)
                                 ? vlSymsp->TOP__TOP__main__add0.__PVT__out
                                 : 0U)),32);
        bufp->chgCData(oldp+3,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard653)
                                 ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                 : (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5f29b700__0))),4);
        bufp->chgIData(oldp+4,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard195)
                                 ? vlSymsp->TOP__TOP__main__add0.__PVT__out
                                 : 0U)),32);
        bufp->chgIData(oldp+5,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard199)
                                 ? vlSymsp->TOP__TOP__main__add0.__PVT__out
                                 : 0U)),32);
        bufp->chgIData(oldp+6,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard60)
                                 ? vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out
                                 : ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard57)
                                     ? vlSymsp->TOP__TOP__main__C_int__mem.__PVT__read_out
                                     : ((((8U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)) 
                                         | (IData)(vlSymsp->TOP__TOP__main.__PVT___guard74))
                                         ? vlSymsp->TOP__TOP__main__E_int__mem.__PVT__read_out
                                         : (((((5U 
                                                == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                               & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)) 
                                              | ((5U 
                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                                 & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in))) 
                                             | ((5U 
                                                 == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)))
                                             ? (IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)
                                             : (((8U 
                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                                 & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in))
                                                 ? vlSymsp->TOP__TOP__main__G_int__mem.__PVT__read_out
                                                 : 
                                                (((8U 
                                                   == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in))
                                                  ? vlSymsp->TOP__TOP__main__F_int__mem.__PVT__read_out
                                                  : 0U))))))),32);
        bufp->chgIData(oldp+7,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard57)
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
        bufp->chgSData(oldp+8,((((0x2e3U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                 & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in))
                                 ? 0U : (((0x2e3U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in))
                                          ? (0x3ffU 
                                             & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in)
                                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                                  : 0U) 
                                                + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in)
                                                    ? 1U
                                                    : 0U)))
                                          : 0U))),10);
        bufp->chgCData(oldp+9,((((0x5bU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in))
                                 ? 0U : (((0x5bU != (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                          & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in))
                                          ? (0x7fU 
                                             & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in)
                                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)
                                                  : 0U) 
                                                + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in)
                                                    ? 1U
                                                    : 0U)))
                                          : 0U))),7);
        bufp->chgCData(oldp+10,((((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in))
                                  ? 0U : (((0xaU != (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in))
                                           ? (0xfU 
                                              & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)
                                                   ? (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)
                                                   : 0U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)
                                                   ? 1U
                                                   : 0U)))
                                           : 0U))),4);
        bufp->chgCData(oldp+11,((((0x5bU != (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in))
                                  ? (0x7fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                                ? (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)
                                                : 0U) 
                                              + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                                  ? 1U
                                                  : 0U)))
                                  : 0U)),7);
        bufp->chgSData(oldp+12,((((0x2e3U == (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in))
                                  ? 0U : (((0x2e3U 
                                            != (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)) 
                                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in))
                                           ? (0x3ffU 
                                              & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                                   ? (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)
                                                   : 0U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                                   ? 1U
                                                   : 0U)))
                                           : 0U))),10);
        bufp->chgCData(oldp+13,((((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in))
                                  ? 0U : (((0xaU != (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in))
                                           ? (0xfU 
                                              & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                                   ? (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)
                                                   : 0U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                                   ? 1U
                                                   : 0U)))
                                           : 0U))),4);
        bufp->chgSData(oldp+14,((((0x2e3U == (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in))
                                  ? 0U : (((0x2e3U 
                                            != (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)) 
                                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in))
                                           ? (0x3ffU 
                                              & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in)
                                                   ? (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)
                                                   : 0U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in)
                                                   ? 1U
                                                   : 0U)))
                                           : 0U))),10);
        bufp->chgCData(oldp+15,((((0x5bU != (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in))
                                  ? (0x7fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in)
                                                ? (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)
                                                : 0U) 
                                              + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in)
                                                  ? 1U
                                                  : 0U)))
                                  : 0U)),7);
        bufp->chgCData(oldp+16,((((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                  & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in))
                                  ? 0U : (((0xaU != (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in))
                                           ? (0xfU 
                                              & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in)
                                                   ? (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)
                                                   : 0U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in)
                                                   ? 1U
                                                   : 0U)))
                                           : 0U))),4);
        bufp->chgSData(oldp+17,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)
                                  : 0U)),10);
        bufp->chgSData(oldp+18,((0x3ffU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                             ? (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)
                                             : 0U) 
                                           + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                               ? 1U
                                               : 0U)))),10);
        bufp->chgCData(oldp+19,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)
                                  : 0U)),7);
        bufp->chgCData(oldp+20,((0x7fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)
                                            : 0U) + 
                                          ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                            ? 1U : 0U)))),7);
        bufp->chgCData(oldp+21,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)
                                  : 0U)),4);
        bufp->chgCData(oldp+22,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                           ? (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)
                                           : 0U) + 
                                         ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                           ? 1U : 0U)))),4);
        bufp->chgSData(oldp+23,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)
                                  : 0U)),10);
        bufp->chgSData(oldp+24,((0x3ffU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in)
                                             ? (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)
                                             : 0U) 
                                           + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in)
                                               ? 1U
                                               : 0U)))),10);
        bufp->chgCData(oldp+25,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)
                                  : 0U)),7);
        bufp->chgCData(oldp+26,((0x7fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)
                                            : 0U) + 
                                          ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in)
                                            ? 1U : 0U)))),7);
        bufp->chgCData(oldp+27,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)
                                  : 0U)),4);
        bufp->chgCData(oldp+28,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in)
                                           ? (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)
                                           : 0U) + 
                                         ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in)
                                           ? 1U : 0U)))),4);
        bufp->chgSData(oldp+29,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                  : 0U)),10);
        bufp->chgSData(oldp+30,((0x3ffU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in)
                                             ? (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)
                                             : 0U) 
                                           + ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in)
                                               ? 1U
                                               : 0U)))),10);
        bufp->chgCData(oldp+31,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)
                                  : 0U)),7);
        bufp->chgCData(oldp+32,((0x7fU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in)
                                            ? (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)
                                            : 0U) + 
                                          ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in)
                                            ? 1U : 0U)))),7);
        bufp->chgCData(oldp+33,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)
                                  ? (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)
                                  : 0U)),4);
        bufp->chgCData(oldp+34,((0xfU & (((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)
                                           ? (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)
                                           : 0U) + 
                                         ((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)
                                           ? 1U : 0U)))),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+35,(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__TOP__main.__PVT__C_int_read_en));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__TOP__main.__PVT__E_int_write_en));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__TOP__main.__PVT__E_int_read_en));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__TOP__main.__PVT__F_int_write_en));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__TOP__main.__PVT__F_int_read_en));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__TOP__main.__PVT__G_int_write_en));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__TOP__main.__PVT__G_int_read_en));
        bufp->chgCData(oldp+43,(vlSymsp->TOP__TOP__main.__PVT__add1_left),4);
        bufp->chgCData(oldp+44,((0xfU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__TOP__main.__PVT__add1_left)))),4);
        bufp->chgBit(oldp+45,(vlSymsp->TOP__TOP__main.__PVT__bin_read0_0_write_en));
        bufp->chgCData(oldp+46,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard30)
                                  ? (0xfU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__TOP__main.__PVT__add1_left)))
                                  : 0U)),4);
        bufp->chgBit(oldp+47,(vlSymsp->TOP__TOP__main.__PVT__i0_write_en));
        bufp->chgCData(oldp+48,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard121)
                                  ? (0xfU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__TOP__main.__PVT__add1_left)))
                                  : 0U)),4);
        bufp->chgBit(oldp+49,(vlSymsp->TOP__TOP__main.__PVT__j0_write_en));
        bufp->chgCData(oldp+50,(((IData)(vlSymsp->TOP__TOP__main.__PVT___guard132)
                                  ? (0xfU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__TOP__main.__PVT__add1_left)))
                                  : 0U)),4);
        bufp->chgBit(oldp+51,(vlSymsp->TOP__TOP__main.__PVT__k0_write_en));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__TOP__main.__PVT__mult_pipe0_go));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__TOP__main.__PVT__v_0_write_en));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in));
        bufp->chgSData(oldp+63,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq0_go_in)
                                  ? 1U : 0U)),10);
        bufp->chgCData(oldp+64,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq1_go_in)
                                  ? 1U : 0U)),7);
        bufp->chgCData(oldp+65,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq3_go_in)
                                  ? 1U : 0U)),4);
        bufp->chgSData(oldp+66,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq8_go_in)
                                  ? 1U : 0U)),10);
        bufp->chgCData(oldp+67,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq9_go_in)
                                  ? 1U : 0U)),7);
        bufp->chgCData(oldp+68,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq11_go_in)
                                  ? 1U : 0U)),4);
        bufp->chgSData(oldp+69,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq16_go_in)
                                  ? 1U : 0U)),10);
        bufp->chgCData(oldp+70,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq17_go_in)
                                  ? 1U : 0U)),7);
        bufp->chgCData(oldp+71,(((IData)(vlSymsp->TOP__TOP__main.__PVT__early_reset_static_seq19_go_in)
                                  ? 1U : 0U)),4);
        bufp->chgBit(oldp+72,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_in));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__TOP__main.__PVT__signal_reg_write_en));
        bufp->chgCData(oldp+74,(vlSymsp->TOP__TOP__main__E_int.__PVT__addr),8);
        bufp->chgCData(oldp+75,(vlSymsp->TOP__TOP__main__F_int.__PVT__addr),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+76,(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_seq_done_in));
        bufp->chgCData(oldp+77,(vlSymsp->TOP__TOP__main__i0.__PVT__out),4);
        bufp->chgCData(oldp+78,(vlSymsp->TOP__TOP__main__k0.__PVT__out),4);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+80,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__read_done));
        bufp->chgCData(oldp+82,(vlSymsp->TOP__TOP__main__j0.__PVT__out),4);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+84,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+86,(vlSymsp->TOP__TOP__main__C_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+87,(vlSymsp->TOP__TOP__main__C_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__TOP__main__C_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+89,(vlSymsp->TOP__TOP__main__D_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+90,(vlSymsp->TOP__TOP__main__D_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__TOP__main__D_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+92,(vlSymsp->TOP__TOP__main__E_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+93,(vlSymsp->TOP__TOP__main__E_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+94,(vlSymsp->TOP__TOP__main__E_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+95,(vlSymsp->TOP__TOP__main__F_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+96,(vlSymsp->TOP__TOP__main__F_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__TOP__main__F_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+98,(vlSymsp->TOP__TOP__main__G_int__mem.__PVT__read_out),32);
        bufp->chgBit(oldp+99,(vlSymsp->TOP__TOP__main__G_int__mem.__PVT__write_done));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__TOP__main__G_int__mem.__PVT__read_done));
        bufp->chgIData(oldp+101,(vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__out),32);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__TOP__main__v_0.__PVT__out),32);
        bufp->chgIData(oldp+103,(vlSymsp->TOP__TOP__main__add0.__PVT__out),32);
        bufp->chgBit(oldp+104,(vlSymsp->TOP__TOP__main__bin_read0_0.__PVT__done));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__TOP__main__i0.__PVT__done));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__TOP__main__j0.__PVT__done));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__TOP__main__k0.__PVT__done));
        bufp->chgIData(oldp+108,((IData)(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp)),32);
        bufp->chgBit(oldp+109,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf
                               [1U]));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__TOP__main__v_0.__PVT__done));
        bufp->chgSData(oldp+111,(vlSymsp->TOP__TOP__main__fsm.__PVT__out),10);
        bufp->chgBit(oldp+112,(vlSymsp->TOP__TOP__main__fsm.__PVT__done));
        bufp->chgCData(oldp+113,(vlSymsp->TOP__TOP__main__fsm0.__PVT__out),7);
        bufp->chgBit(oldp+114,(vlSymsp->TOP__TOP__main__fsm0.__PVT__done));
        bufp->chgCData(oldp+115,(vlSymsp->TOP__TOP__main__fsm1.__PVT__out),4);
        bufp->chgBit(oldp+116,(vlSymsp->TOP__TOP__main__fsm1.__PVT__done));
        bufp->chgCData(oldp+117,(vlSymsp->TOP__TOP__main__fsm2.__PVT__out),7);
        bufp->chgBit(oldp+118,(vlSymsp->TOP__TOP__main__fsm2.__PVT__done));
        bufp->chgSData(oldp+119,(vlSymsp->TOP__TOP__main__fsm3.__PVT__out),15);
        bufp->chgBit(oldp+120,(vlSymsp->TOP__TOP__main__fsm3.__PVT__done));
        bufp->chgSData(oldp+121,(vlSymsp->TOP__TOP__main__fsm4.__PVT__out),10);
        bufp->chgBit(oldp+122,(vlSymsp->TOP__TOP__main__fsm4.__PVT__done));
        bufp->chgCData(oldp+123,(vlSymsp->TOP__TOP__main__fsm5.__PVT__out),4);
        bufp->chgBit(oldp+124,(vlSymsp->TOP__TOP__main__fsm5.__PVT__done));
        bufp->chgSData(oldp+125,(vlSymsp->TOP__TOP__main__fsm6.__PVT__out),10);
        bufp->chgBit(oldp+126,(vlSymsp->TOP__TOP__main__fsm6.__PVT__done));
        bufp->chgCData(oldp+127,(vlSymsp->TOP__TOP__main__fsm7.__PVT__out),7);
        bufp->chgBit(oldp+128,(vlSymsp->TOP__TOP__main__fsm7.__PVT__done));
        bufp->chgCData(oldp+129,(vlSymsp->TOP__TOP__main__fsm8.__PVT__out),4);
        bufp->chgBit(oldp+130,(vlSymsp->TOP__TOP__main__fsm8.__PVT__done));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__TOP__main__signal_reg.__PVT__done));
        bufp->chgCData(oldp+133,(vlSymsp->TOP__TOP__main__A_int.__PVT__addr),8);
        bufp->chgCData(oldp+134,(vlSymsp->TOP__TOP__main__B_int.__PVT__addr),8);
        bufp->chgCData(oldp+135,(vlSymsp->TOP__TOP__main__C_int.__PVT__addr),8);
        bufp->chgCData(oldp+136,(vlSymsp->TOP__TOP__main__D_int.__PVT__addr),8);
        bufp->chgCData(oldp+137,(vlSymsp->TOP__TOP__main__G_int.__PVT__addr),8);
        bufp->chgIData(oldp+138,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__rtmp),32);
        bufp->chgIData(oldp+139,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__ltmp),32);
        bufp->chgQData(oldp+140,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__out_tmp),64);
        bufp->chgBit(oldp+142,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[0]));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__TOP__main__mult_pipe0__comp.__PVT__done_buf[1]));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+144,(vlSymsp->TOP__TOP.__PVT__go));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__TOP.__PVT__reset));
        bufp->chgQData(oldp+146,(vlSymsp->TOP__TOP.__PVT__cycle_count),64);
        bufp->chgSData(oldp+148,((((0x4565U != (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)) 
                                   & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                   ? (0x7fffU & (((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                                   ? (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)
                                                   : 0U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                                   ? 1U
                                                   : 0U)))
                                   : 0U)),15);
        bufp->chgSData(oldp+149,(((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                   ? (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)
                                   : 0U)),15);
        bufp->chgSData(oldp+150,(((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                   ? 1U : 0U)),15);
        bufp->chgSData(oldp+151,((0x7fffU & (((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                               ? (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)
                                               : 0U) 
                                             + ((IData)(vlSymsp->TOP__TOP.__PVT__go)
                                                 ? 1U
                                                 : 0U)))),15);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+152,(vlSymsp->TOP__TOP.__PVT__clk));
        bufp->chgIData(oldp+153,(vlSymsp->TOP__TOP.__PVT__NOTRACE),32);
        bufp->chgQData(oldp+154,(vlSymsp->TOP__TOP.__PVT__CYCLE_LIMIT),64);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__TOP.__PVT__CODE),32);
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

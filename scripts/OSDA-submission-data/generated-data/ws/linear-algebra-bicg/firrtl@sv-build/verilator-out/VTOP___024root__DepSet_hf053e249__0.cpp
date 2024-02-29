// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__act(VTOP___024root* vlSelf);
#endif  // VL_DEBUG

void VTOP___024root___eval_triggers__act(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSymsp->TOP__TOP.__PVT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TOP____PVT__clk)));
    vlSelf->__VactTriggered.at(1U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__Vtrigrprev__TOP__TOP____PVT__clk = vlSymsp->TOP__TOP.__PVT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTOP___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VTOP_main___act_sequent__TOP__TOP__main__0(VTOP_main* vlSelf);
void VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__r_int__0(VTOP_seq_mem_d1__S8* vlSelf);
void VTOP_std_le__W4___act_sequent__TOP__TOP__main__le0__0(VTOP_std_le__W4* vlSelf);
void VTOP_std_add___act_sequent__TOP__TOP__main__add1__0(VTOP_std_add* vlSelf);
void VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__q_int__0(VTOP_seq_mem_d1__S8* vlSelf);
void VTOP_seq_mem_d2__D8_DB8___act_sequent__TOP__TOP__A_int__0(VTOP_seq_mem_d2__D8_DB8* vlSelf);
void VTOP_std_add__W4___act_sequent__TOP__TOP__main__add0__0(VTOP_std_add__W4* vlSelf);
void VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__p_int__0(VTOP_seq_mem_d1__S8* vlSelf);
void VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__s_int__0(VTOP_seq_mem_d1__S8* vlSelf);
void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__A_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf);

void VTOP___024root___eval_act(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        VTOP_main___act_sequent__TOP__TOP__main__0((&vlSymsp->TOP__TOP__main));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__r_int__0((&vlSymsp->TOP__TOP__r_int));
        VTOP_std_le__W4___act_sequent__TOP__TOP__main__le0__0((&vlSymsp->TOP__TOP__main__le0));
        VTOP_std_add___act_sequent__TOP__TOP__main__add1__0((&vlSymsp->TOP__TOP__main__add1));
        VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__q_int__0((&vlSymsp->TOP__TOP__q_int));
        VTOP_seq_mem_d2__D8_DB8___act_sequent__TOP__TOP__A_int__0((&vlSymsp->TOP__TOP__A_int));
        VTOP_std_add__W4___act_sequent__TOP__TOP__main__add0__0((&vlSymsp->TOP__TOP__main__add0));
        VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__p_int__0((&vlSymsp->TOP__TOP__p_int));
        VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__s_int__0((&vlSymsp->TOP__TOP__s_int));
        VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__A_int__mem__0((&vlSymsp->TOP__TOP__A_int__mem));
    }
}

void VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__p_int__0(VTOP_seq_mem_d1__S8* vlSelf);
void VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__r_int__0(VTOP_seq_mem_d1__S8* vlSelf);
void VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__A_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf);
void VTOP_TOP___nba_sequent__TOP__TOP__0(VTOP_TOP* vlSelf);
void VTOP_std_fp_mult_pipe__I20_F0___nba_sequent__TOP__TOP__main__mult_pipe0__comp__0(VTOP_std_fp_mult_pipe__I20_F0* vlSelf);
void VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__s_int__0(VTOP_seq_mem_d1__S8* vlSelf);
void VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__q_int__0(VTOP_seq_mem_d1__S8* vlSelf);
void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__j0__0(VTOP_std_reg__W4* vlSelf);
void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__signal_reg__0(VTOP_std_reg__W1* vlSelf);
void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd__0(VTOP_std_reg__W1* vlSelf);
void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd0__0(VTOP_std_reg__W1* vlSelf);
void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd1__0(VTOP_std_reg__W1* vlSelf);
void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd2__0(VTOP_std_reg__W1* vlSelf);
void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd3__0(VTOP_std_reg__W1* vlSelf);
void VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm1__0(VTOP_std_reg__W2* vlSelf);
void VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm2__0(VTOP_std_reg__W2* vlSelf);
void VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm3__0(VTOP_std_reg__W2* vlSelf);
void VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm4__0(VTOP_std_reg__W2* vlSelf);
void VTOP_std_reg__W5___nba_sequent__TOP__TOP__main__fsm__0(VTOP_std_reg__W5* vlSelf);
void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm5__0(VTOP_std_reg__W4* vlSelf);
void VTOP_std_reg___nba_sequent__TOP__TOP__main__q0_0__0(VTOP_std_reg* vlSelf);
void VTOP_std_reg___nba_sequent__TOP__TOP__main__s0_0__0(VTOP_std_reg* vlSelf);
void VTOP_std_reg___nba_sequent__TOP__TOP__main__p_int_read0_0__0(VTOP_std_reg* vlSelf);
void VTOP_std_reg___nba_sequent__TOP__TOP__main__A_i_j_0__0(VTOP_std_reg* vlSelf);
void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__comb_reg0__0(VTOP_std_reg__W1* vlSelf);
void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__comb_reg1__0(VTOP_std_reg__W1* vlSelf);
void VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm0__0(VTOP_std_reg__W2* vlSelf);
void VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__i1__0(VTOP_std_reg__W4* vlSelf);
void VTOP_std_reg___nba_sequent__TOP__TOP__main__bin_read0_0__0(VTOP_std_reg* vlSelf);
void VTOP_main___nba_sequent__TOP__TOP__main__0(VTOP_main* vlSelf);
void VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__p_int__1(VTOP_seq_mem_d1__S8* vlSelf);
void VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__A_int__mem__1(VTOP_seq_mem_d1__S40_I8* vlSelf);
void VTOP_std_fp_mult_pipe__I20_F0___nba_sequent__TOP__TOP__main__mult_pipe0__comp__1(VTOP_std_fp_mult_pipe__I20_F0* vlSelf);
void VTOP_TOP___nba_sequent__TOP__TOP__1(VTOP_TOP* vlSelf);
void VTOP_main___nba_comb__TOP__TOP__main__0(VTOP_main* vlSelf);

void VTOP___024root___eval_nba(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__p_int__0((&vlSymsp->TOP__TOP__p_int));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__r_int__0((&vlSymsp->TOP__TOP__r_int));
        VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__A_int__mem__0((&vlSymsp->TOP__TOP__A_int__mem));
        VTOP_TOP___nba_sequent__TOP__TOP__0((&vlSymsp->TOP__TOP));
        VTOP_std_fp_mult_pipe__I20_F0___nba_sequent__TOP__TOP__main__mult_pipe0__comp__0((&vlSymsp->TOP__TOP__main__mult_pipe0__comp));
        VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__s_int__0((&vlSymsp->TOP__TOP__s_int));
        VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__q_int__0((&vlSymsp->TOP__TOP__q_int));
        VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__j0__0((&vlSymsp->TOP__TOP__main__j0));
        VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__signal_reg__0((&vlSymsp->TOP__TOP__main__signal_reg));
        VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd__0((&vlSymsp->TOP__TOP__main__pd));
        VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd0__0((&vlSymsp->TOP__TOP__main__pd0));
        VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd1__0((&vlSymsp->TOP__TOP__main__pd1));
        VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd2__0((&vlSymsp->TOP__TOP__main__pd2));
        VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd3__0((&vlSymsp->TOP__TOP__main__pd3));
        VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm1__0((&vlSymsp->TOP__TOP__main__fsm1));
        VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm2__0((&vlSymsp->TOP__TOP__main__fsm2));
        VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm3__0((&vlSymsp->TOP__TOP__main__fsm3));
        VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm4__0((&vlSymsp->TOP__TOP__main__fsm4));
        VTOP_std_reg__W5___nba_sequent__TOP__TOP__main__fsm__0((&vlSymsp->TOP__TOP__main__fsm));
        VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__fsm5__0((&vlSymsp->TOP__TOP__main__fsm5));
        VTOP_std_reg___nba_sequent__TOP__TOP__main__q0_0__0((&vlSymsp->TOP__TOP__main__q0_0));
        VTOP_std_reg___nba_sequent__TOP__TOP__main__s0_0__0((&vlSymsp->TOP__TOP__main__s0_0));
        VTOP_std_reg___nba_sequent__TOP__TOP__main__p_int_read0_0__0((&vlSymsp->TOP__TOP__main__p_int_read0_0));
        VTOP_std_reg___nba_sequent__TOP__TOP__main__A_i_j_0__0((&vlSymsp->TOP__TOP__main__A_i_j_0));
        VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__comb_reg0__0((&vlSymsp->TOP__TOP__main__comb_reg0));
        VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__comb_reg1__0((&vlSymsp->TOP__TOP__main__comb_reg1));
        VTOP_std_reg__W2___nba_sequent__TOP__TOP__main__fsm0__0((&vlSymsp->TOP__TOP__main__fsm0));
        VTOP_std_reg__W4___nba_sequent__TOP__TOP__main__i1__0((&vlSymsp->TOP__TOP__main__i1));
        VTOP_std_reg___nba_sequent__TOP__TOP__main__bin_read0_0__0((&vlSymsp->TOP__TOP__main__bin_read0_0));
        VTOP_main___nba_sequent__TOP__TOP__main__0((&vlSymsp->TOP__TOP__main));
        VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__p_int__1((&vlSymsp->TOP__TOP__q_int));
        VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__p_int__1((&vlSymsp->TOP__TOP__s_int));
        VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__p_int__1((&vlSymsp->TOP__TOP__p_int));
        VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__A_int__mem__1((&vlSymsp->TOP__TOP__A_int__mem));
        VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__p_int__1((&vlSymsp->TOP__TOP__r_int));
        VTOP_std_fp_mult_pipe__I20_F0___nba_sequent__TOP__TOP__main__mult_pipe0__comp__1((&vlSymsp->TOP__TOP__main__mult_pipe0__comp));
        VTOP_TOP___nba_sequent__TOP__TOP__1((&vlSymsp->TOP__TOP));
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VTOP_main___nba_comb__TOP__TOP__main__0((&vlSymsp->TOP__TOP__main));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__r_int__0((&vlSymsp->TOP__TOP__r_int));
        VTOP_seq_mem_d2__D8_DB8___act_sequent__TOP__TOP__A_int__0((&vlSymsp->TOP__TOP__A_int));
        VTOP_std_add___act_sequent__TOP__TOP__main__add1__0((&vlSymsp->TOP__TOP__main__add1));
        VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__q_int__0((&vlSymsp->TOP__TOP__q_int));
        VTOP_std_le__W4___act_sequent__TOP__TOP__main__le0__0((&vlSymsp->TOP__TOP__main__le0));
        VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__p_int__0((&vlSymsp->TOP__TOP__p_int));
        VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__s_int__0((&vlSymsp->TOP__TOP__s_int));
        VTOP_std_add__W4___act_sequent__TOP__TOP__main__add0__0((&vlSymsp->TOP__TOP__main__add0));
        VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__A_int__mem__0((&vlSymsp->TOP__TOP__A_int__mem));
    }
}

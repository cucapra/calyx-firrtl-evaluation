// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP___024root.h"

VL_ATTR_COLD VlCoroutine VTOP_TOP___eval_initial__TOP__TOP__0(VTOP_TOP* vlSelf);
VL_ATTR_COLD void VTOP_main___eval_initial__TOP__TOP__main(VTOP_main* vlSelf);

VL_ATTR_COLD void VTOP___024root___eval_initial(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    VTOP_TOP___eval_initial__TOP__TOP__0((&vlSymsp->TOP__TOP));
    VTOP_main___eval_initial__TOP__TOP__main((&vlSymsp->TOP__TOP__main));
    vlSelf->__Vtrigrprev__TOP__TOP____PVT__clk = vlSymsp->TOP__TOP.__PVT__clk;
}

VL_ATTR_COLD void VTOP_main___eval_final__TOP__TOP__main(VTOP_main* vlSelf);

VL_ATTR_COLD void VTOP___024root___eval_final(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_final\n"); );
    // Body
    VTOP_main___eval_final__TOP__TOP__main((&vlSymsp->TOP__TOP__main));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__stl(VTOP___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTOP___024root___eval_triggers__stl(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTOP___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VTOP_main___stl_sequent__TOP__TOP__main__0(VTOP_main* vlSelf);
void VTOP_std_add___nba_sequent__TOP__TOP__main__add0__0(VTOP_std_add* vlSelf);
void VTOP_std_add__Wf___act_sequent__TOP__TOP__main__adder__0(VTOP_std_add__Wf* vlSelf);
void VTOP_seq_mem_d2__D8_DB8___nba_sequent__TOP__TOP__main__A_int__0(VTOP_seq_mem_d2__D8_DB8* vlSelf);
void VTOP_seq_mem_d2__D8_DB8___nba_sequent__TOP__TOP__main__B_int__0(VTOP_seq_mem_d2__D8_DB8* vlSelf);
void VTOP_seq_mem_d2__D8_DB8___nba_sequent__TOP__TOP__main__G_int__0(VTOP_seq_mem_d2__D8_DB8* vlSelf);
void VTOP_std_add__Wa___act_sequent__TOP__TOP__main__adder0__0(VTOP_std_add__Wa* vlSelf);
void VTOP_std_add__Wa___act_sequent__TOP__TOP__main__adder3__0(VTOP_std_add__Wa* vlSelf);
void VTOP_std_add__Wa___act_sequent__TOP__TOP__main__adder6__0(VTOP_std_add__Wa* vlSelf);
void VTOP_std_add__W7___act_sequent__TOP__TOP__main__adder1__0(VTOP_std_add__W7* vlSelf);
void VTOP_std_add__W7___act_sequent__TOP__TOP__main__adder4__0(VTOP_std_add__W7* vlSelf);
void VTOP_std_add__W7___act_sequent__TOP__TOP__main__adder7__0(VTOP_std_add__W7* vlSelf);
void VTOP_std_add__W4___act_sequent__TOP__TOP__main__adder2__0(VTOP_std_add__W4* vlSelf);
void VTOP_std_add__W4___act_sequent__TOP__TOP__main__adder5__0(VTOP_std_add__W4* vlSelf);
void VTOP_std_add__W4___act_sequent__TOP__TOP__main__adder8__0(VTOP_std_add__W4* vlSelf);
VL_ATTR_COLD void VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__A_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf);
VL_ATTR_COLD void VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__B_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf);
VL_ATTR_COLD void VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__C_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf);
VL_ATTR_COLD void VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__D_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf);
VL_ATTR_COLD void VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__G_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf);
void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__E_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf);
void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__F_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf);
void VTOP_seq_mem_d2__D8_DB8___act_sequent__TOP__TOP__main__E_int__0(VTOP_seq_mem_d2__D8_DB8* vlSelf);
void VTOP_seq_mem_d2__D8_DB8___act_sequent__TOP__TOP__main__F_int__0(VTOP_seq_mem_d2__D8_DB8* vlSelf);
void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__E_int__mem__1(VTOP_seq_mem_d1__S40_I8* vlSelf);
void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__F_int__mem__1(VTOP_seq_mem_d1__S40_I8* vlSelf);

VL_ATTR_COLD void VTOP___024root___eval_stl(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VTOP_main___stl_sequent__TOP__TOP__main__0((&vlSymsp->TOP__TOP__main));
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VTOP_std_add___nba_sequent__TOP__TOP__main__add0__0((&vlSymsp->TOP__TOP__main__add0));
        VTOP_std_add__Wf___act_sequent__TOP__TOP__main__adder__0((&vlSymsp->TOP__TOP__main__adder));
        VTOP_seq_mem_d2__D8_DB8___nba_sequent__TOP__TOP__main__A_int__0((&vlSymsp->TOP__TOP__main__A_int));
        VTOP_seq_mem_d2__D8_DB8___nba_sequent__TOP__TOP__main__B_int__0((&vlSymsp->TOP__TOP__main__B_int));
        VTOP_seq_mem_d2__D8_DB8___nba_sequent__TOP__TOP__main__A_int__0((&vlSymsp->TOP__TOP__main__C_int));
        VTOP_seq_mem_d2__D8_DB8___nba_sequent__TOP__TOP__main__B_int__0((&vlSymsp->TOP__TOP__main__D_int));
        VTOP_seq_mem_d2__D8_DB8___nba_sequent__TOP__TOP__main__G_int__0((&vlSymsp->TOP__TOP__main__G_int));
        VTOP_std_add__Wa___act_sequent__TOP__TOP__main__adder0__0((&vlSymsp->TOP__TOP__main__adder0));
        VTOP_std_add__Wa___act_sequent__TOP__TOP__main__adder3__0((&vlSymsp->TOP__TOP__main__adder3));
        VTOP_std_add__Wa___act_sequent__TOP__TOP__main__adder6__0((&vlSymsp->TOP__TOP__main__adder6));
        VTOP_std_add__W7___act_sequent__TOP__TOP__main__adder1__0((&vlSymsp->TOP__TOP__main__adder1));
        VTOP_std_add__W7___act_sequent__TOP__TOP__main__adder4__0((&vlSymsp->TOP__TOP__main__adder4));
        VTOP_std_add__W7___act_sequent__TOP__TOP__main__adder7__0((&vlSymsp->TOP__TOP__main__adder7));
        VTOP_std_add__W4___act_sequent__TOP__TOP__main__adder2__0((&vlSymsp->TOP__TOP__main__adder2));
        VTOP_std_add__W4___act_sequent__TOP__TOP__main__adder5__0((&vlSymsp->TOP__TOP__main__adder5));
        VTOP_std_add__W4___act_sequent__TOP__TOP__main__adder8__0((&vlSymsp->TOP__TOP__main__adder8));
        VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__A_int__mem__0((&vlSymsp->TOP__TOP__main__A_int__mem));
        VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__B_int__mem__0((&vlSymsp->TOP__TOP__main__B_int__mem));
        VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__C_int__mem__0((&vlSymsp->TOP__TOP__main__C_int__mem));
        VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__D_int__mem__0((&vlSymsp->TOP__TOP__main__D_int__mem));
        VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__G_int__mem__0((&vlSymsp->TOP__TOP__main__G_int__mem));
        VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__E_int__mem__0((&vlSymsp->TOP__TOP__main__E_int__mem));
        VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__F_int__mem__0((&vlSymsp->TOP__TOP__main__F_int__mem));
        VTOP_seq_mem_d2__D8_DB8___act_sequent__TOP__TOP__main__E_int__0((&vlSymsp->TOP__TOP__main__E_int));
        VTOP_seq_mem_d2__D8_DB8___act_sequent__TOP__TOP__main__F_int__0((&vlSymsp->TOP__TOP__main__F_int));
        VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__E_int__mem__1((&vlSymsp->TOP__TOP__main__E_int__mem));
        VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__F_int__mem__1((&vlSymsp->TOP__TOP__main__F_int__mem));
    }
}
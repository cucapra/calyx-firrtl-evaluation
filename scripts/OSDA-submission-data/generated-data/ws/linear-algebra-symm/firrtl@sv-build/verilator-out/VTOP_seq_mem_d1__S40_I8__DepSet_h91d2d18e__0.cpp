// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_seq_mem_d1__S40_I8.h"

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__A_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__A_int__mem__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP__main.__PVT__A_int_read_en) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__A_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: memories.sv:321: Assertion failed in %NA_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__A_int.__PVT__addr));
            VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 321, "");
        }
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__A_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__A_int__mem__0\n"); );
    // Body
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en)
                                          ? vlSelf->__PVT__mem
                                         [(0x3fU & (IData)(vlSymsp->TOP__TOP__A_int.__PVT__addr))]
                                          : vlSelf->__PVT__read_out));
    vlSelf->__PVT__write_done = 0U;
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_seq_mem_d1__S60_I8.h"

VL_INLINE_OPT void VTOP_seq_mem_d1__S60_I8___act_sequent__TOP__TOP__B_int__mem__0(VTOP_seq_mem_d1__S60_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S60_I8___act_sequent__TOP__TOP__B_int__mem__0\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_read_en) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: memories.sv:329: Assertion failed in %NB_int.mem: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 329, "");
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S60_I8___act_sequent__TOP__TOP__B_int__mem__1(VTOP_seq_mem_d1__S60_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S60_I8___act_sequent__TOP__TOP__B_int__mem__1\n"); );
    // Body
    if (vlSymsp->TOP__TOP__main.__PVT__B_int_read_en) {
        if (VL_UNLIKELY((0x60U <= (IData)(vlSymsp->TOP__TOP__B_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: memories.sv:321: Assertion failed in %NB_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 96\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__B_int.__PVT__addr));
            VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 321, "");
        }
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S60_I8___nba_sequent__TOP__TOP__B_int__mem__0(VTOP_seq_mem_d1__S60_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S60_I8___nba_sequent__TOP__TOP__B_int__mem__0\n"); );
    // Init
    CData/*6:0*/ __Vdlyvdim0__mem__v0;
    IData/*31:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    // Body
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    __Vdlyvset__mem__v0 = 0U;
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_read_en)
                                          ? ((0x5fU 
                                              >= (0x7fU 
                                                  & (IData)(vlSymsp->TOP__TOP__B_int.__PVT__addr)))
                                              ? vlSelf->__PVT__mem
                                             [(0x7fU 
                                               & (IData)(vlSymsp->TOP__TOP__B_int.__PVT__addr))]
                                              : 0U)
                                          : ((IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en)
                                              ? 0U : vlSelf->__PVT__read_out)));
    if (((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
         & (IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en))) {
        vlSelf->__Vlvbound_hf5859631__0 = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_ha2ac0650__0)
                                            ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                            : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0)
                                                ? (
                                                   ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0)
                                                     ? vlSymsp->TOP__TOP__main__A_int_read0_0.__PVT__out
                                                     : 0U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he0e40f0f__0)
                                                     ? vlSymsp->TOP__TOP__main__B_i_j_0.__PVT__out
                                                     : 0U))
                                                : 0U));
        if ((0x5fU >= (0x7fU & (IData)(vlSymsp->TOP__TOP__B_int.__PVT__addr)))) {
            __Vdlyvval__mem__v0 = vlSelf->__Vlvbound_hf5859631__0;
            __Vdlyvset__mem__v0 = 1U;
            __Vdlyvdim0__mem__v0 = (0x7fU & (IData)(vlSymsp->TOP__TOP__B_int.__PVT__addr));
        }
        vlSelf->__PVT__write_done = 1U;
    } else {
        vlSelf->__PVT__write_done = 0U;
    }
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_read_en));
    if (__Vdlyvset__mem__v0) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
    }
}

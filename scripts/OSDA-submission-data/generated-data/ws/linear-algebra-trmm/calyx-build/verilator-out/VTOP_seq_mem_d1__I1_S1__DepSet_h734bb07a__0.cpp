// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_seq_mem_d1__I1_S1.h"

VL_INLINE_OPT void VTOP_seq_mem_d1__I1_S1___act_sequent__TOP__TOP__main__alpha_int__0(VTOP_seq_mem_d1__I1_S1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__I1_S1___act_sequent__TOP__TOP__main__alpha_int__0\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read_en) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__alpha_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:857: Assertion failed in %Nmain.alpha_int: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 857, "");
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__I1_S1___nba_sequent__TOP__TOP__main__alpha_int__0(VTOP_seq_mem_d1__I1_S1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__I1_S1___nba_sequent__TOP__TOP__main__alpha_int__0\n"); );
    // Init
    IData/*31:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    // Body
    __Vdlyvset__mem__v0 = 0U;
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    if (((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
         & (IData)(vlSymsp->TOP__TOP__main.__PVT__alpha_int_write_en))) {
        vlSelf->__Vlvbound_h4de52d20__0 = vlSymsp->TOP__TOP__main.__PVT__alpha_int_write_data;
        __Vdlyvval__mem__v0 = vlSelf->__Vlvbound_h4de52d20__0;
        __Vdlyvset__mem__v0 = 1U;
    }
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read_en)
                                          ? vlSelf->__PVT__mem
                                         [0U] : ((IData)(vlSymsp->TOP__TOP__main.__PVT__alpha_int_write_en)
                                                  ? 0U
                                                  : vlSelf->__PVT__read_out)));
    vlSelf->__PVT__write_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                 & (IData)(vlSymsp->TOP__TOP__main.__PVT__alpha_int_write_en));
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__alpha_int_read_en));
    if (__Vdlyvset__mem__v0) {
        vlSelf->__PVT__mem[0U] = __Vdlyvval__mem__v0;
    }
}

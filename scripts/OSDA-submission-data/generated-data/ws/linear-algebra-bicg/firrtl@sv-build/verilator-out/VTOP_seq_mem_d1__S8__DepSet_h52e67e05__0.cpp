// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_seq_mem_d1__S8.h"

VL_INLINE_OPT void VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__p_int__0(VTOP_seq_mem_d1__S8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__p_int__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP__main.__PVT__beg_spl_let8_go_in) {
        if (VL_UNLIKELY((8U <= (IData)(vlSymsp->TOP__TOP__main.__PVT__p_int_addr0)))) {
            VL_WRITEF("[%0t] %%Error: memories.sv:321: Assertion failed in %Np_int: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 8\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      4,(IData)(vlSymsp->TOP__TOP__main.__PVT__p_int_addr0));
            VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 321, "");
        }
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__p_int__0(VTOP_seq_mem_d1__S8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__p_int__0\n"); );
    // Body
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let8_go_in)
                                          ? vlSelf->__PVT__mem
                                         [(7U & (IData)(vlSymsp->TOP__TOP__main.__PVT__p_int_addr0))]
                                          : vlSelf->__PVT__read_out));
    vlSelf->__PVT__write_done = 0U;
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let8_go_in));
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__q_int__0(VTOP_seq_mem_d1__S8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__q_int__0\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__q_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: memories.sv:329: Assertion failed in %Nq_int: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 329, "");
    }
    if (vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in) {
        if (VL_UNLIKELY((8U <= (IData)(vlSymsp->TOP__TOP__main.__PVT__q_int_addr0)))) {
            VL_WRITEF("[%0t] %%Error: memories.sv:321: Assertion failed in %Nq_int: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 8\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      4,(IData)(vlSymsp->TOP__TOP__main.__PVT__q_int_addr0));
            VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 321, "");
        }
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__q_int__0(VTOP_seq_mem_d1__S8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__q_int__0\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__mem__v0;
    IData/*31:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    // Body
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    __Vdlyvset__mem__v0 = 0U;
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in)
                                          ? vlSelf->__PVT__mem
                                         [(7U & (IData)(vlSymsp->TOP__TOP__main.__PVT__q_int_addr0))]
                                          : ((IData)(vlSymsp->TOP__TOP__main.__PVT__q_int_write_en)
                                              ? 0U : vlSelf->__PVT__read_out)));
    if (((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
         & (IData)(vlSymsp->TOP__TOP__main.__PVT__q_int_write_en))) {
        __Vdlyvval__mem__v0 = ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_haf140208__0)
                                         ? vlSymsp->TOP__TOP__main__add1.__PVT__out
                                         : 0U));
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (7U & (IData)(vlSymsp->TOP__TOP__main.__PVT__q_int_addr0));
        vlSelf->__PVT__write_done = 1U;
    } else {
        vlSelf->__PVT__write_done = 0U;
    }
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in));
    if (__Vdlyvset__mem__v0) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__r_int__0(VTOP_seq_mem_d1__S8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__r_int__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP__main.__PVT__beg_spl_let6_go_in) {
        if (VL_UNLIKELY((8U <= (IData)(vlSymsp->TOP__TOP__main.__PVT__r_int_addr0)))) {
            VL_WRITEF("[%0t] %%Error: memories.sv:321: Assertion failed in %Nr_int: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 8\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      4,(IData)(vlSymsp->TOP__TOP__main.__PVT__r_int_addr0));
            VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 321, "");
        }
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__r_int__0(VTOP_seq_mem_d1__S8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__r_int__0\n"); );
    // Body
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let6_go_in)
                                          ? vlSelf->__PVT__mem
                                         [(7U & (IData)(vlSymsp->TOP__TOP__main.__PVT__r_int_addr0))]
                                          : vlSelf->__PVT__read_out));
    vlSelf->__PVT__write_done = 0U;
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let6_go_in));
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__s_int__0(VTOP_seq_mem_d1__S8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S8___act_sequent__TOP__TOP__s_int__0\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let3_go_in) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__s_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: memories.sv:329: Assertion failed in %Ns_int: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 329, "");
    }
    if (vlSymsp->TOP__TOP__main.__PVT__beg_spl_let3_go_in) {
        if (VL_UNLIKELY((8U <= (IData)(vlSymsp->TOP__TOP__main.__PVT__s_int_addr0)))) {
            VL_WRITEF("[%0t] %%Error: memories.sv:321: Assertion failed in %Ns_int: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 8\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      4,(IData)(vlSymsp->TOP__TOP__main.__PVT__s_int_addr0));
            VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 321, "");
        }
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__s_int__0(VTOP_seq_mem_d1__S8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S8___nba_sequent__TOP__TOP__s_int__0\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__mem__v0;
    IData/*31:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    // Body
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    __Vdlyvset__mem__v0 = 0U;
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let3_go_in)
                                          ? vlSelf->__PVT__mem
                                         [(7U & (IData)(vlSymsp->TOP__TOP__main.__PVT__s_int_addr0))]
                                          : ((IData)(vlSymsp->TOP__TOP__main.__PVT__s_int_write_en)
                                              ? 0U : vlSelf->__PVT__read_out)));
    if (((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
         & (IData)(vlSymsp->TOP__TOP__main.__PVT__s_int_write_en))) {
        __Vdlyvval__mem__v0 = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb17828e6__0)
                                ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd1d86966__0)
                                         ? vlSymsp->TOP__TOP__main__add1.__PVT__out
                                         : 0U));
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (7U & (IData)(vlSymsp->TOP__TOP__main.__PVT__s_int_addr0));
        vlSelf->__PVT__write_done = 1U;
    } else {
        vlSelf->__PVT__write_done = 0U;
    }
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let3_go_in));
    if (__Vdlyvset__mem__v0) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
    }
}

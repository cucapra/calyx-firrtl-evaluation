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
    if (vlSymsp->TOP__TOP__main.__PVT__beg_spl_let3_go_in) {
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
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let3_go_in)
                                          ? vlSelf->__PVT__mem
                                         [(0x3fU & (IData)(vlSymsp->TOP__TOP__A_int.__PVT__addr))]
                                          : vlSelf->__PVT__read_out));
    vlSelf->__PVT__write_done = 0U;
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let3_go_in));
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__B_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__B_int__mem__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__B_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: memories.sv:321: Assertion failed in %NB_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__B_int.__PVT__addr));
            VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 321, "");
        }
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__B_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__B_int__mem__0\n"); );
    // Body
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in)
                                          ? vlSelf->__PVT__mem
                                         [(0x3fU & (IData)(vlSymsp->TOP__TOP__B_int.__PVT__addr))]
                                          : vlSelf->__PVT__read_out));
    vlSelf->__PVT__write_done = 0U;
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let4_go_in));
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__C_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__C_int__mem__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP__main.__PVT__beg_spl_let11_go_in) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__C_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: memories.sv:321: Assertion failed in %NC_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__C_int.__PVT__addr));
            VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 321, "");
        }
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__C_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__C_int__mem__0\n"); );
    // Body
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let11_go_in)
                                          ? vlSelf->__PVT__mem
                                         [(0x3fU & (IData)(vlSymsp->TOP__TOP__C_int.__PVT__addr))]
                                          : vlSelf->__PVT__read_out));
    vlSelf->__PVT__write_done = 0U;
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let11_go_in));
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__D_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__D_int__mem__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP__main.__PVT__beg_spl_let12_go_in) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__D_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: memories.sv:321: Assertion failed in %ND_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__D_int.__PVT__addr));
            VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 321, "");
        }
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__D_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__D_int__mem__0\n"); );
    // Body
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let12_go_in)
                                          ? vlSelf->__PVT__mem
                                         [(0x3fU & (IData)(vlSymsp->TOP__TOP__D_int.__PVT__addr))]
                                          : vlSelf->__PVT__read_out));
    vlSelf->__PVT__write_done = 0U;
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let12_go_in));
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__E_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__E_int__mem__0\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__E_int_read_en) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__E_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: memories.sv:329: Assertion failed in %NE_int.mem: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 329, "");
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__E_int__mem__1(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__E_int__mem__1\n"); );
    // Body
    if (vlSymsp->TOP__TOP__main.__PVT__E_int_read_en) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__E_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: memories.sv:321: Assertion failed in %NE_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__E_int.__PVT__addr));
            VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 321, "");
        }
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__E_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__E_int__mem__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__mem__v0;
    IData/*31:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    // Body
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    __Vdlyvset__mem__v0 = 0U;
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__E_int_read_en)
                                          ? vlSelf->__PVT__mem
                                         [(0x3fU & (IData)(vlSymsp->TOP__TOP__E_int.__PVT__addr))]
                                          : ((IData)(vlSymsp->TOP__TOP__main.__PVT__E_int_write_en)
                                              ? 0U : vlSelf->__PVT__read_out)));
    if (((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
         & (IData)(vlSymsp->TOP__TOP__main.__PVT__E_int_write_en))) {
        __Vdlyvval__mem__v0 = ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_go_in)
                                ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par0_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0)
                                         : 0U));
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (0x3fU & (IData)(vlSymsp->TOP__TOP__E_int.__PVT__addr));
        vlSelf->__PVT__write_done = 1U;
    } else {
        vlSelf->__PVT__write_done = 0U;
    }
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__E_int_read_en));
    if (__Vdlyvset__mem__v0) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__F_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__F_int__mem__0\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__F_int_read_en) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__F_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: memories.sv:329: Assertion failed in %NF_int.mem: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 329, "");
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__F_int__mem__1(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__F_int__mem__1\n"); );
    // Body
    if (vlSymsp->TOP__TOP__main.__PVT__F_int_read_en) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__F_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: memories.sv:321: Assertion failed in %NF_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__F_int.__PVT__addr));
            VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 321, "");
        }
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__F_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__F_int__mem__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__mem__v0;
    IData/*31:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    // Body
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    __Vdlyvset__mem__v0 = 0U;
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__F_int_read_en)
                                          ? vlSelf->__PVT__mem
                                         [(0x3fU & (IData)(vlSymsp->TOP__TOP__F_int.__PVT__addr))]
                                          : ((IData)(vlSymsp->TOP__TOP__main.__PVT__F_int_write_en)
                                              ? 0U : vlSelf->__PVT__read_out)));
    if (((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
         & (IData)(vlSymsp->TOP__TOP__main.__PVT__F_int_write_en))) {
        __Vdlyvval__mem__v0 = ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go_in)
                                ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par2_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0)
                                         : 0U));
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (0x3fU & (IData)(vlSymsp->TOP__TOP__F_int.__PVT__addr));
        vlSelf->__PVT__write_done = 1U;
    } else {
        vlSelf->__PVT__write_done = 0U;
    }
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__F_int_read_en));
    if (__Vdlyvset__mem__v0) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__G_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__G_int__mem__0\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let23_go_in) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__G_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: memories.sv:329: Assertion failed in %NG_int.mem: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 329, "");
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__G_int__mem__1(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__G_int__mem__1\n"); );
    // Body
    if (vlSymsp->TOP__TOP__main.__PVT__beg_spl_let23_go_in) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__G_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: memories.sv:321: Assertion failed in %NG_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__G_int.__PVT__addr));
            VL_STOP_MT("/home/calyx/fud2/rsrc//memories.sv", 321, "");
        }
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__G_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__G_int__mem__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__mem__v0;
    IData/*31:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    // Body
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    __Vdlyvset__mem__v0 = 0U;
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let23_go_in)
                                          ? vlSelf->__PVT__mem
                                         [(0x3fU & (IData)(vlSymsp->TOP__TOP__G_int.__PVT__addr))]
                                          : ((IData)(vlSymsp->TOP__TOP__main.__PVT__G_int_write_en)
                                              ? 0U : vlSelf->__PVT__read_out)));
    if (((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
         & (IData)(vlSymsp->TOP__TOP__main.__PVT__G_int_write_en))) {
        __Vdlyvval__mem__v0 = ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par3_go_in)
                                ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par4_go_in)
                                         ? (IData)(vlSymsp->TOP__TOP__main__add0.__PVT___GEN_0)
                                         : 0U));
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (0x3fU & (IData)(vlSymsp->TOP__TOP__G_int.__PVT__addr));
        vlSelf->__PVT__write_done = 1U;
    } else {
        vlSelf->__PVT__write_done = 0U;
    }
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__beg_spl_let23_go_in));
    if (__Vdlyvset__mem__v0) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
    }
}

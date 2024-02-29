// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_seq_mem_d1__S40_I8.h"

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__A_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__A_int__mem__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP__main.__PVT__A_int_read_en) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__main__A_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:849: Assertion failed in %Nmain.A_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__main__A_int.__PVT__addr));
            VL_STOP_MT("linear-algebra-3mm.sv", 849, "");
        }
    }
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:857: Assertion failed in %Nmain.A_int.mem: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 857, "");
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__main__A_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__main__A_int__mem__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__mem__v0;
    IData/*31:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    // Body
    __Vdlyvset__mem__v0 = 0U;
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    if (((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
         & (IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_write_en))) {
        __Vdlyvval__mem__v0 = vlSymsp->TOP__TOP__main.__PVT__A_int_write_data;
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (0x3fU & (IData)(vlSymsp->TOP__TOP__main__A_int.__PVT__addr));
    }
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en)
                                          ? vlSelf->__PVT__mem
                                         [(0x3fU & (IData)(vlSymsp->TOP__TOP__main__A_int.__PVT__addr))]
                                          : ((IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_write_en)
                                              ? 0U : vlSelf->__PVT__read_out)));
    vlSelf->__PVT__write_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                 & (IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_write_en));
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en));
    if (__Vdlyvset__mem__v0) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__B_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__B_int__mem__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP__main.__PVT__A_int_read_en) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__main__B_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:849: Assertion failed in %Nmain.B_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__main__B_int.__PVT__addr));
            VL_STOP_MT("linear-algebra-3mm.sv", 849, "");
        }
    }
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:857: Assertion failed in %Nmain.B_int.mem: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 857, "");
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__main__B_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__main__B_int__mem__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__mem__v0;
    IData/*31:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    // Body
    __Vdlyvset__mem__v0 = 0U;
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    if (((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
         & (IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en))) {
        __Vdlyvval__mem__v0 = vlSymsp->TOP__TOP__main.__PVT__B_int_write_data;
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (0x3fU & (IData)(vlSymsp->TOP__TOP__main__B_int.__PVT__addr));
    }
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en)
                                          ? vlSelf->__PVT__mem
                                         [(0x3fU & (IData)(vlSymsp->TOP__TOP__main__B_int.__PVT__addr))]
                                          : ((IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en)
                                              ? 0U : vlSelf->__PVT__read_out)));
    vlSelf->__PVT__write_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                 & (IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en));
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en));
    if (__Vdlyvset__mem__v0) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__C_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__C_int__mem__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP__main.__PVT__C_int_read_en) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__main__C_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:849: Assertion failed in %Nmain.C_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__main__C_int.__PVT__addr));
            VL_STOP_MT("linear-algebra-3mm.sv", 849, "");
        }
    }
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_read_en) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:857: Assertion failed in %Nmain.C_int.mem: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 857, "");
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__main__C_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__main__C_int__mem__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__mem__v0;
    IData/*31:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    // Body
    __Vdlyvset__mem__v0 = 0U;
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    if (((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
         & (IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_write_en))) {
        __Vdlyvval__mem__v0 = vlSymsp->TOP__TOP__main.__PVT__C_int_write_data;
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (0x3fU & (IData)(vlSymsp->TOP__TOP__main__C_int.__PVT__addr));
    }
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_read_en)
                                          ? vlSelf->__PVT__mem
                                         [(0x3fU & (IData)(vlSymsp->TOP__TOP__main__C_int.__PVT__addr))]
                                          : ((IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_write_en)
                                              ? 0U : vlSelf->__PVT__read_out)));
    vlSelf->__PVT__write_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                 & (IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_write_en));
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_read_en));
    if (__Vdlyvset__mem__v0) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__D_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__D_int__mem__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP__main.__PVT__C_int_read_en) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__main__D_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:849: Assertion failed in %Nmain.D_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__main__D_int.__PVT__addr));
            VL_STOP_MT("linear-algebra-3mm.sv", 849, "");
        }
    }
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_read_en) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__D_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:857: Assertion failed in %Nmain.D_int.mem: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 857, "");
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__main__D_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__main__D_int__mem__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__mem__v0;
    IData/*31:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    // Body
    __Vdlyvset__mem__v0 = 0U;
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    if (((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
         & (IData)(vlSymsp->TOP__TOP__main.__PVT__D_int_write_en))) {
        __Vdlyvval__mem__v0 = vlSymsp->TOP__TOP__main.__PVT__D_int_write_data;
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (0x3fU & (IData)(vlSymsp->TOP__TOP__main__D_int.__PVT__addr));
    }
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_read_en)
                                          ? vlSelf->__PVT__mem
                                         [(0x3fU & (IData)(vlSymsp->TOP__TOP__main__D_int.__PVT__addr))]
                                          : ((IData)(vlSymsp->TOP__TOP__main.__PVT__D_int_write_en)
                                              ? 0U : vlSelf->__PVT__read_out)));
    vlSelf->__PVT__write_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                 & (IData)(vlSymsp->TOP__TOP__main.__PVT__D_int_write_en));
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_read_en));
    if (__Vdlyvset__mem__v0) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__E_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__E_int__mem__0\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__E_int_read_en) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__E_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:857: Assertion failed in %Nmain.E_int.mem: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 857, "");
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__E_int__mem__1(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__E_int__mem__1\n"); );
    // Body
    if (vlSymsp->TOP__TOP__main.__PVT__E_int_read_en) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__main__E_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:849: Assertion failed in %Nmain.E_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__main__E_int.__PVT__addr));
            VL_STOP_MT("linear-algebra-3mm.sv", 849, "");
        }
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__main__E_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__main__E_int__mem__0\n"); );
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
                                         [(0x3fU & (IData)(vlSymsp->TOP__TOP__main__E_int.__PVT__addr))]
                                          : ((IData)(vlSymsp->TOP__TOP__main.__PVT__E_int_write_en)
                                              ? 0U : vlSelf->__PVT__read_out)));
    if (((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
         & (IData)(vlSymsp->TOP__TOP__main.__PVT__E_int_write_en))) {
        __Vdlyvval__mem__v0 = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard192)
                                ? vlSymsp->TOP__TOP__main__add0.__PVT__out
                                : 0U);
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (0x3fU & (IData)(vlSymsp->TOP__TOP__main__E_int.__PVT__addr));
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

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__F_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__F_int__mem__0\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__F_int_read_en) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__F_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:857: Assertion failed in %Nmain.F_int.mem: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 857, "");
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__F_int__mem__1(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__F_int__mem__1\n"); );
    // Body
    if (vlSymsp->TOP__TOP__main.__PVT__F_int_read_en) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__main__F_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:849: Assertion failed in %Nmain.F_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__main__F_int.__PVT__addr));
            VL_STOP_MT("linear-algebra-3mm.sv", 849, "");
        }
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__main__F_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__main__F_int__mem__0\n"); );
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
                                         [(0x3fU & (IData)(vlSymsp->TOP__TOP__main__F_int.__PVT__addr))]
                                          : ((IData)(vlSymsp->TOP__TOP__main.__PVT__F_int_write_en)
                                              ? 0U : vlSelf->__PVT__read_out)));
    if (((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
         & (IData)(vlSymsp->TOP__TOP__main.__PVT__F_int_write_en))) {
        __Vdlyvval__mem__v0 = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard195)
                                ? vlSymsp->TOP__TOP__main__add0.__PVT__out
                                : 0U);
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (0x3fU & (IData)(vlSymsp->TOP__TOP__main__F_int.__PVT__addr));
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

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__G_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___act_sequent__TOP__TOP__main__G_int__mem__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP__main.__PVT__G_int_read_en) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__main__G_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:849: Assertion failed in %Nmain.G_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__main__G_int.__PVT__addr));
            VL_STOP_MT("linear-algebra-3mm.sv", 849, "");
        }
    }
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__G_int_read_en) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__G_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:857: Assertion failed in %Nmain.G_int.mem: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 857, "");
    }
}

VL_INLINE_OPT void VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__main__G_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___nba_sequent__TOP__TOP__main__G_int__mem__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__mem__v0;
    IData/*31:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    // Body
    vlSelf->__Vdly__read_out = vlSelf->__PVT__read_out;
    __Vdlyvset__mem__v0 = 0U;
    vlSelf->__Vdly__read_out = ((IData)(vlSymsp->TOP__TOP.__PVT__reset)
                                 ? 0U : ((IData)(vlSymsp->TOP__TOP__main.__PVT__G_int_read_en)
                                          ? vlSelf->__PVT__mem
                                         [(0x3fU & (IData)(vlSymsp->TOP__TOP__main__G_int.__PVT__addr))]
                                          : ((IData)(vlSymsp->TOP__TOP__main.__PVT__G_int_write_en)
                                              ? 0U : vlSelf->__PVT__read_out)));
    if (((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
         & (IData)(vlSymsp->TOP__TOP__main.__PVT__G_int_write_en))) {
        __Vdlyvval__mem__v0 = ((IData)(vlSymsp->TOP__TOP__main.__PVT___guard199)
                                ? vlSymsp->TOP__TOP__main__add0.__PVT__out
                                : 0U);
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (0x3fU & (IData)(vlSymsp->TOP__TOP__main__G_int.__PVT__addr));
        vlSelf->__PVT__write_done = 1U;
    } else {
        vlSelf->__PVT__write_done = 0U;
    }
    vlSelf->__PVT__read_done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                                & (IData)(vlSymsp->TOP__TOP__main.__PVT__G_int_read_en));
    if (__Vdlyvset__mem__v0) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
    }
}

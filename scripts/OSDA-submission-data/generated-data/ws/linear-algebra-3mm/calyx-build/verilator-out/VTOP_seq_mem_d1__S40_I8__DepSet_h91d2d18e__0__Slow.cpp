// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_seq_mem_d1__S40_I8.h"

VL_ATTR_COLD void VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__A_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__A_int__mem__0\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:857: Assertion failed in %Nmain.A_int.mem: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 857, "");
    }
    if (vlSymsp->TOP__TOP__main.__PVT__A_int_read_en) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__main__A_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:849: Assertion failed in %Nmain.A_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__main__A_int.__PVT__addr));
            VL_STOP_MT("linear-algebra-3mm.sv", 849, "");
        }
    }
}

VL_ATTR_COLD void VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__B_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__B_int__mem__0\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__A_int_read_en) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__B_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:857: Assertion failed in %Nmain.B_int.mem: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 857, "");
    }
    if (vlSymsp->TOP__TOP__main.__PVT__A_int_read_en) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__main__B_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:849: Assertion failed in %Nmain.B_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__main__B_int.__PVT__addr));
            VL_STOP_MT("linear-algebra-3mm.sv", 849, "");
        }
    }
}

VL_ATTR_COLD void VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__C_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__C_int__mem__0\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_read_en) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:857: Assertion failed in %Nmain.C_int.mem: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 857, "");
    }
    if (vlSymsp->TOP__TOP__main.__PVT__C_int_read_en) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__main__C_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:849: Assertion failed in %Nmain.C_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__main__C_int.__PVT__addr));
            VL_STOP_MT("linear-algebra-3mm.sv", 849, "");
        }
    }
}

VL_ATTR_COLD void VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__D_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__D_int__mem__0\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__C_int_read_en) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__D_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:857: Assertion failed in %Nmain.D_int.mem: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 857, "");
    }
    if (vlSymsp->TOP__TOP__main.__PVT__C_int_read_en) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__main__D_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:849: Assertion failed in %Nmain.D_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__main__D_int.__PVT__addr));
            VL_STOP_MT("linear-algebra-3mm.sv", 849, "");
        }
    }
}

VL_ATTR_COLD void VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__G_int__mem__0(VTOP_seq_mem_d1__S40_I8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTOP_seq_mem_d1__S40_I8___stl_sequent__TOP__TOP__main__G_int__mem__0\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__TOP__main.__PVT__G_int_read_en) 
                     & (IData)(vlSymsp->TOP__TOP__main.__PVT__G_int_write_en)))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:857: Assertion failed in %Nmain.G_int.mem: Simultaneous read and write attempted\n\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 857, "");
    }
    if (vlSymsp->TOP__TOP__main.__PVT__G_int_read_en) {
        if (VL_UNLIKELY((0x40U <= (IData)(vlSymsp->TOP__TOP__main__G_int.__PVT__addr)))) {
            VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:849: Assertion failed in %Nmain.G_int.mem: comb_mem_d1: Out of bounds access\naddr0: %0#\nSIZE: 64\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      8,(IData)(vlSymsp->TOP__TOP__main__G_int.__PVT__addr));
            VL_STOP_MT("linear-algebra-3mm.sv", 849, "");
        }
    }
}

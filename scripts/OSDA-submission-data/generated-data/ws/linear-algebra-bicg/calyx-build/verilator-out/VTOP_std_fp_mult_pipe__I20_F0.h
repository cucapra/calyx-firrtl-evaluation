// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP_STD_FP_MULT_PIPE__I20_F0_H_
#define VERILATED_VTOP_STD_FP_MULT_PIPE__I20_F0_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class VTOP__Syms;

class VTOP_std_fp_mult_pipe__I20_F0 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__go,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_OUT8(__PVT__done,0,0);
    VL_IN(__PVT__left,31,0);
    VL_IN(__PVT__right,31,0);
    VL_OUT(__PVT__out,31,0);
    IData/*31:0*/ __PVT__rtmp;
    IData/*31:0*/ __PVT__ltmp;
    QData/*63:0*/ __PVT__out_tmp;
    QData/*63:0*/ __Vdly__out_tmp;
    VlUnpacked<CData/*0:0*/, 2> __PVT__done_buf;

    // INTERNAL VARIABLES
    VTOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP_std_fp_mult_pipe__I20_F0(VTOP__Syms* symsp, const char* name);
    ~VTOP_std_fp_mult_pipe__I20_F0();
    VL_UNCOPYABLE(VTOP_std_fp_mult_pipe__I20_F0);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

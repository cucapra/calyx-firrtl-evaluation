// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP_STD_REG__W5_H_
#define VERILATED_VTOP_STD_REG__W5_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class VTOP__Syms;

class VTOP_std_reg__W5 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__in,4,0);
    VL_IN8(__PVT__write_en,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_OUT8(__PVT__out,4,0);
    VL_OUT8(__PVT__done,0,0);

    // INTERNAL VARIABLES
    VTOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP_std_reg__W5(VTOP__Syms* symsp, const char* name);
    ~VTOP_std_reg__W5();
    VL_UNCOPYABLE(VTOP_std_reg__W5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

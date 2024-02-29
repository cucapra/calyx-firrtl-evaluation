// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP_STD_ADD__W4_H_
#define VERILATED_VTOP_STD_ADD__W4_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class VTOP__Syms;

class VTOP_std_add__W4 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__left,3,0);
    VL_IN8(__PVT__right,3,0);
    VL_OUT8(__PVT__out,3,0);

    // INTERNAL VARIABLES
    VTOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP_std_add__W4(VTOP__Syms* symsp, const char* name);
    ~VTOP_std_add__W4();
    VL_UNCOPYABLE(VTOP_std_add__W4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP_STD_ADD__WA_H_
#define VERILATED_VTOP_STD_ADD__WA_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class VTOP__Syms;

class VTOP_std_add__Wa final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN16(__PVT__left,9,0);
    VL_IN16(__PVT__right,9,0);
    VL_OUT16(__PVT__out,9,0);

    // INTERNAL VARIABLES
    VTOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP_std_add__Wa(VTOP__Syms* symsp, const char* name);
    ~VTOP_std_add__Wa();
    VL_UNCOPYABLE(VTOP_std_add__Wa);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

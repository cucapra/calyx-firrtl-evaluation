// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP_STD_ADD__WF_H_
#define VERILATED_VTOP_STD_ADD__WF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class VTOP__Syms;

class VTOP_std_add__Wf final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN16(__PVT__left,14,0);
    VL_IN16(__PVT__right,14,0);
    VL_OUT16(__PVT__out,14,0);

    // INTERNAL VARIABLES
    VTOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP_std_add__Wf(VTOP__Syms* symsp, const char* name);
    ~VTOP_std_add__Wf();
    VL_UNCOPYABLE(VTOP_std_add__Wf);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

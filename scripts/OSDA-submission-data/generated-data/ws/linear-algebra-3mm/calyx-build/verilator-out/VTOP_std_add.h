// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP_STD_ADD_H_
#define VERILATED_VTOP_STD_ADD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class VTOP__Syms;

class VTOP_std_add final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN(__PVT__left,31,0);
    VL_IN(__PVT__right,31,0);
    VL_OUT(__PVT__out,31,0);

    // INTERNAL VARIABLES
    VTOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP_std_add(VTOP__Syms* symsp, const char* name);
    ~VTOP_std_add();
    VL_UNCOPYABLE(VTOP_std_add);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

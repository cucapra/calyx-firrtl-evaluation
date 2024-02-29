// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP_STD_MULT_PIPE_H_
#define VERILATED_VTOP_STD_MULT_PIPE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class VTOP__Syms;
class VTOP_std_fp_mult_pipe__I20_F0;


class VTOP_std_mult_pipe final : public VerilatedModule {
  public:
    // CELLS
    VTOP_std_fp_mult_pipe__I20_F0* __PVT__comp;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__go,0,0);
    VL_IN8(__PVT__clk,0,0);
    VL_OUT8(__PVT__done,0,0);
    VL_IN(__PVT__left,31,0);
    VL_IN(__PVT__right,31,0);
    VL_OUT(__PVT__out,31,0);

    // INTERNAL VARIABLES
    VTOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP_std_mult_pipe(VTOP__Syms* symsp, const char* name);
    ~VTOP_std_mult_pipe();
    VL_UNCOPYABLE(VTOP_std_mult_pipe);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

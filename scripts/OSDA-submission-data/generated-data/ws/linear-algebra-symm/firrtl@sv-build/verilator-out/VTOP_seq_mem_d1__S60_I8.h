// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP_SEQ_MEM_D1__S60_I8_H_
#define VERILATED_VTOP_SEQ_MEM_D1__S60_I8_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class VTOP__Syms;

class VTOP_seq_mem_d1__S60_I8 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__addr0,7,0);
    VL_IN8(__PVT__read_en,0,0);
    VL_OUT8(__PVT__read_done,0,0);
    VL_IN8(__PVT__write_en,0,0);
    VL_OUT8(__PVT__write_done,0,0);
    VL_OUT(__PVT__read_data,31,0);
    VL_IN(__PVT__write_data,31,0);
    IData/*31:0*/ __PVT__read_out;
    IData/*31:0*/ __Vlvbound_hf5859631__0;
    IData/*31:0*/ __Vdly__read_out;
    VlUnpacked<IData/*31:0*/, 96> __PVT__mem;

    // INTERNAL VARIABLES
    VTOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP_seq_mem_d1__S60_I8(VTOP__Syms* symsp, const char* name);
    ~VTOP_seq_mem_d1__S60_I8();
    VL_UNCOPYABLE(VTOP_seq_mem_d1__S60_I8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

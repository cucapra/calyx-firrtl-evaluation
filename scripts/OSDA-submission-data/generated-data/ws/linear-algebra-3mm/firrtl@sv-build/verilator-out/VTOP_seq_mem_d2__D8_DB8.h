// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP_SEQ_MEM_D2__D8_DB8_H_
#define VERILATED_VTOP_SEQ_MEM_D2__D8_DB8_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class VTOP__Syms;
class VTOP_seq_mem_d1__S40_I8;


class VTOP_seq_mem_d2__D8_DB8 final : public VerilatedModule {
  public:
    // CELLS
    VTOP_seq_mem_d1__S40_I8* __PVT__mem;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__addr0,3,0);
    VL_IN8(__PVT__addr1,3,0);
    VL_IN8(__PVT__read_en,0,0);
    VL_OUT8(__PVT__read_done,0,0);
    VL_IN8(__PVT__write_en,0,0);
    VL_OUT8(__PVT__write_done,0,0);
    CData/*7:0*/ __PVT__addr;
    VL_OUT(__PVT__read_data,31,0);
    VL_IN(__PVT__write_data,31,0);

    // INTERNAL VARIABLES
    VTOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP_seq_mem_d2__D8_DB8(VTOP__Syms* symsp, const char* name);
    ~VTOP_seq_mem_d2__D8_DB8();
    VL_UNCOPYABLE(VTOP_seq_mem_d2__D8_DB8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

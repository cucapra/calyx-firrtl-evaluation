// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class VTOP__Syms;
class VTOP_seq_mem_d2__D8_DB8;
class VTOP_seq_mem_d1__S8;
class VTOP_main;


class VTOP_TOP final : public VerilatedModule {
  public:
    // CELLS
    VTOP_seq_mem_d2__D8_DB8* __PVT__A_int;
    VTOP_seq_mem_d1__S8* __PVT__p_int;
    VTOP_seq_mem_d1__S8* __PVT__q_int;
    VTOP_seq_mem_d1__S8* __PVT__r_int;
    VTOP_seq_mem_d1__S8* __PVT__s_int;
    VTOP_main* __PVT__main;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__go;
    CData/*0:0*/ __PVT__reset;
    IData/*31:0*/ __PVT__NOTRACE;
    IData/*31:0*/ __PVT__CODE;
    QData/*63:0*/ __PVT__cycle_count;
    QData/*63:0*/ __PVT__CYCLE_LIMIT;
    QData/*63:0*/ __Vdly__cycle_count;
    std::string __PVT__OUT;
    std::string __PVT__DATA;

    // INTERNAL VARIABLES
    VTOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP_TOP(VTOP__Syms* symsp, const char* name);
    ~VTOP_TOP();
    VL_UNCOPYABLE(VTOP_TOP);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

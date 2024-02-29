// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP_MAIN_H_
#define VERILATED_VTOP_MAIN_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class VTOP__Syms;
class VTOP_std_reg;
class VTOP_seq_mem_d2__D8_DB8;
class VTOP_std_add__W4;
class VTOP_std_add;
class VTOP_std_const__Vz1_W4;
class VTOP_std_const__Vz2_W4;
class VTOP_std_const__V0;
class VTOP_std_reg__W4;
class VTOP_std_mult_pipe;
class VTOP_seq_mem_d1__S8;
class VTOP_std_reg__W7;
class VTOP_std_reg__Wa;
class VTOP_std_reg__W2;
class VTOP_undef__W1;
class VTOP_std_add__Wa;
class VTOP_std_add__W2;
class VTOP_std_add__W7;
class VTOP_std_reg__W1;
class VTOP_std_wire__W1;


class VTOP_main final : public VerilatedModule {
  public:
    // CELLS
    VTOP_std_reg* __PVT__A_i_j_0;
    VTOP_seq_mem_d2__D8_DB8* __PVT__A_int;
    VTOP_std_add__W4* __PVT__add0;
    VTOP_std_add* __PVT__add1;
    VTOP_std_reg* __PVT__bin_read0_0;
    VTOP_std_const__Vz1_W4* __PVT__const0;
    VTOP_std_const__Vz2_W4* __PVT__const10;
    VTOP_std_const__V0* __PVT__const2;
    VTOP_std_reg__W4* __PVT__i1;
    VTOP_std_reg__W4* __PVT__j0;
    VTOP_std_mult_pipe* __PVT__mult_pipe0;
    VTOP_seq_mem_d1__S8* __PVT__p_int;
    VTOP_std_reg* __PVT__p_int_read0_0;
    VTOP_std_reg* __PVT__q0_0;
    VTOP_seq_mem_d1__S8* __PVT__q_int;
    VTOP_seq_mem_d1__S8* __PVT__r_int;
    VTOP_std_reg* __PVT__s0_0;
    VTOP_seq_mem_d1__S8* __PVT__s_int;
    VTOP_std_reg__W7* __PVT__fsm;
    VTOP_std_reg__Wa* __PVT__fsm0;
    VTOP_std_reg__W2* __PVT__fsm1;
    VTOP_std_reg__W4* __PVT__fsm2;
    VTOP_undef__W1* __PVT__ud;
    VTOP_std_add__Wa* __PVT__adder;
    VTOP_undef__W1* __PVT__ud0;
    VTOP_std_add__W2* __PVT__adder0;
    VTOP_undef__W1* __PVT__ud1;
    VTOP_std_add__W7* __PVT__adder1;
    VTOP_undef__W1* __PVT__ud2;
    VTOP_std_add__W4* __PVT__adder2;
    VTOP_std_reg__W1* __PVT__signal_reg;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq0_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq0_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq1_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq1_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq3_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq3_done;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_seq_go;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_seq_done;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__go,0,0);
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_OUT8(__PVT__done,0,0);
    CData/*0:0*/ __PVT__A_i_j_0_write_en;
    CData/*0:0*/ __PVT__A_int_write_en;
    CData/*0:0*/ __PVT__A_int_read_en;
    CData/*3:0*/ __PVT__add0_left;
    CData/*0:0*/ __PVT__bin_read0_0_write_en;
    CData/*0:0*/ __PVT__i1_write_en;
    CData/*0:0*/ __PVT__j0_write_en;
    CData/*0:0*/ __PVT__mult_pipe0_go;
    CData/*0:0*/ __PVT__p_int_write_en;
    CData/*0:0*/ __PVT__p_int_read_en;
    CData/*0:0*/ __PVT__p_int_read0_0_write_en;
    CData/*0:0*/ __PVT__q0_0_write_en;
    CData/*0:0*/ __PVT__q_int_write_en;
    CData/*0:0*/ __PVT__r_int_write_en;
    CData/*3:0*/ __PVT__s_int_addr0;
    CData/*0:0*/ __PVT__s_int_write_en;
    CData/*0:0*/ __PVT__signal_reg_in;
    CData/*0:0*/ __PVT__signal_reg_write_en;
    CData/*0:0*/ __PVT__early_reset_static_seq0_go_in;
    CData/*0:0*/ __PVT__early_reset_static_seq1_go_in;
    CData/*0:0*/ __PVT__early_reset_static_seq3_go_in;
    CData/*0:0*/ __PVT__wrapper_early_reset_static_seq_done_in;
    CData/*0:0*/ __PVT___guard20;
    CData/*0:0*/ __PVT___guard23;
    CData/*0:0*/ __PVT___guard34;
    CData/*0:0*/ __PVT___guard46;
    CData/*0:0*/ __PVT___guard49;
    CData/*0:0*/ __PVT___guard124;
    CData/*0:0*/ __PVT___guard127;
    CData/*0:0*/ __PVT___guard141;
    CData/*0:0*/ __PVT___guard144;
    CData/*0:0*/ __PVT___guard148;
    CData/*0:0*/ __PVT___guard151;
    CData/*0:0*/ __PVT___guard159;
    CData/*0:0*/ __PVT___guard161;
    CData/*0:0*/ __PVT___guard164;
    CData/*0:0*/ __PVT___guard166;
    IData/*31:0*/ __PVT__CODE;
    IData/*31:0*/ __PVT__A_int_write_data;
    IData/*31:0*/ __PVT__p_int_write_data;
    IData/*31:0*/ __PVT__r_int_write_data;
    std::string __PVT__DATA;

    // INTERNAL VARIABLES
    VTOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP_main(VTOP__Syms* symsp, const char* name);
    ~VTOP_main();
    VL_UNCOPYABLE(VTOP_main);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP_MAIN_H_
#define VERILATED_VTOP_MAIN_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class VTOP__Syms;
class VTOP_seq_mem_d2__D8_DB8;
class VTOP_std_add;
class VTOP_std_add__W4;
class VTOP_std_reg;
class VTOP_std_const__Vz1_W4;
class VTOP_std_const__V0;
class VTOP_std_const__Vz2_W4;
class VTOP_std_reg__W4;
class VTOP_std_mult_pipe;
class VTOP_std_reg__Wa;
class VTOP_std_reg__W7;
class VTOP_std_reg__Wf;
class VTOP_undef__W1;
class VTOP_std_add__Wf;
class VTOP_std_add__Wa;
class VTOP_std_add__W7;
class VTOP_std_reg__W1;
class VTOP_std_wire__W1;


class VTOP_main final : public VerilatedModule {
  public:
    // CELLS
    VTOP_seq_mem_d2__D8_DB8* __PVT__A_int;
    VTOP_seq_mem_d2__D8_DB8* __PVT__B_int;
    VTOP_seq_mem_d2__D8_DB8* __PVT__C_int;
    VTOP_seq_mem_d2__D8_DB8* __PVT__D_int;
    VTOP_seq_mem_d2__D8_DB8* __PVT__E_int;
    VTOP_seq_mem_d2__D8_DB8* __PVT__F_int;
    VTOP_seq_mem_d2__D8_DB8* __PVT__G_int;
    VTOP_std_add* __PVT__add0;
    VTOP_std_add__W4* __PVT__add1;
    VTOP_std_reg* __PVT__bin_read0_0;
    VTOP_std_const__Vz1_W4* __PVT__const0;
    VTOP_std_const__V0* __PVT__const14;
    VTOP_std_const__Vz2_W4* __PVT__const17;
    VTOP_std_reg__W4* __PVT__i0;
    VTOP_std_reg__W4* __PVT__j0;
    VTOP_std_reg__W4* __PVT__k0;
    VTOP_std_mult_pipe* __PVT__mult_pipe0;
    VTOP_std_reg* __PVT__v_0;
    VTOP_std_reg__Wa* __PVT__fsm;
    VTOP_std_reg__W7* __PVT__fsm0;
    VTOP_std_reg__W4* __PVT__fsm1;
    VTOP_std_reg__W7* __PVT__fsm2;
    VTOP_std_reg__Wf* __PVT__fsm3;
    VTOP_std_reg__Wa* __PVT__fsm4;
    VTOP_std_reg__W4* __PVT__fsm5;
    VTOP_std_reg__Wa* __PVT__fsm6;
    VTOP_std_reg__W7* __PVT__fsm7;
    VTOP_std_reg__W4* __PVT__fsm8;
    VTOP_undef__W1* __PVT__ud;
    VTOP_std_add__Wf* __PVT__adder;
    VTOP_undef__W1* __PVT__ud0;
    VTOP_std_add__Wa* __PVT__adder0;
    VTOP_undef__W1* __PVT__ud1;
    VTOP_std_add__W7* __PVT__adder1;
    VTOP_undef__W1* __PVT__ud2;
    VTOP_std_add__W4* __PVT__adder2;
    VTOP_undef__W1* __PVT__ud3;
    VTOP_std_add__Wa* __PVT__adder3;
    VTOP_undef__W1* __PVT__ud4;
    VTOP_std_add__W7* __PVT__adder4;
    VTOP_undef__W1* __PVT__ud5;
    VTOP_std_add__W4* __PVT__adder5;
    VTOP_undef__W1* __PVT__ud6;
    VTOP_std_add__Wa* __PVT__adder6;
    VTOP_undef__W1* __PVT__ud7;
    VTOP_std_add__W7* __PVT__adder7;
    VTOP_undef__W1* __PVT__ud8;
    VTOP_std_add__W4* __PVT__adder8;
    VTOP_std_reg__W1* __PVT__signal_reg;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq0_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq0_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq1_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq1_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq3_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq3_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq8_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq8_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq9_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq9_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq11_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq11_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq16_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq16_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq17_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq17_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq19_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq19_done;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_seq_go;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_seq_done;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__go,0,0);
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_OUT8(__PVT__done,0,0);
        CData/*0:0*/ __PVT__A_int_write_en;
        CData/*0:0*/ __PVT__A_int_read_en;
        CData/*0:0*/ __PVT__B_int_write_en;
        CData/*0:0*/ __PVT__C_int_write_en;
        CData/*0:0*/ __PVT__C_int_read_en;
        CData/*0:0*/ __PVT__D_int_write_en;
        CData/*0:0*/ __PVT__E_int_write_en;
        CData/*0:0*/ __PVT__E_int_read_en;
        CData/*0:0*/ __PVT__F_int_write_en;
        CData/*0:0*/ __PVT__F_int_read_en;
        CData/*0:0*/ __PVT__G_int_write_en;
        CData/*0:0*/ __PVT__G_int_read_en;
        CData/*3:0*/ __PVT__add1_left;
        CData/*0:0*/ __PVT__bin_read0_0_write_en;
        CData/*0:0*/ __PVT__i0_write_en;
        CData/*0:0*/ __PVT__j0_write_en;
        CData/*0:0*/ __PVT__k0_write_en;
        CData/*0:0*/ __PVT__mult_pipe0_go;
        CData/*0:0*/ __PVT__v_0_write_en;
        CData/*0:0*/ __PVT__signal_reg_in;
        CData/*0:0*/ __PVT__signal_reg_write_en;
        CData/*0:0*/ __PVT__early_reset_static_seq0_go_in;
        CData/*0:0*/ __PVT__early_reset_static_seq1_go_in;
        CData/*0:0*/ __PVT__early_reset_static_seq3_go_in;
        CData/*0:0*/ __PVT__early_reset_static_seq8_go_in;
        CData/*0:0*/ __PVT__early_reset_static_seq9_go_in;
        CData/*0:0*/ __PVT__early_reset_static_seq11_go_in;
        CData/*0:0*/ __PVT__early_reset_static_seq16_go_in;
        CData/*0:0*/ __PVT__early_reset_static_seq17_go_in;
        CData/*0:0*/ __PVT__early_reset_static_seq19_go_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_static_seq_done_in;
        CData/*0:0*/ __PVT___guard30;
        CData/*0:0*/ __PVT___guard57;
        CData/*0:0*/ __PVT___guard60;
        CData/*0:0*/ __PVT___guard74;
        CData/*0:0*/ __PVT___guard121;
        CData/*0:0*/ __PVT___guard132;
        CData/*0:0*/ __PVT___guard172;
        CData/*0:0*/ __PVT___guard175;
        CData/*0:0*/ __PVT___guard179;
        CData/*0:0*/ __PVT___guard182;
        CData/*0:0*/ __PVT___guard192;
        CData/*0:0*/ __PVT___guard195;
        CData/*0:0*/ __PVT___guard199;
        CData/*0:0*/ __PVT___guard215;
        CData/*0:0*/ __PVT___guard222;
        CData/*0:0*/ __PVT___guard225;
        CData/*0:0*/ __PVT___guard240;
        CData/*0:0*/ __PVT___guard243;
        CData/*0:0*/ __PVT___guard257;
        CData/*0:0*/ __PVT___guard260;
        CData/*0:0*/ __PVT___guard264;
        CData/*0:0*/ __PVT___guard267;
        CData/*0:0*/ __PVT___guard285;
        CData/*0:0*/ __PVT___guard299;
        CData/*0:0*/ __PVT___guard302;
        CData/*0:0*/ __PVT___guard306;
        CData/*0:0*/ __PVT___guard341;
        CData/*0:0*/ __PVT___guard653;
        CData/*3:0*/ __VdfgTmp_h5f29b700__0;
    };
    struct {
        IData/*31:0*/ __PVT__CODE;
        IData/*31:0*/ __PVT__A_int_write_data;
        IData/*31:0*/ __PVT__B_int_write_data;
        IData/*31:0*/ __PVT__C_int_write_data;
        IData/*31:0*/ __PVT__D_int_write_data;
    };
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

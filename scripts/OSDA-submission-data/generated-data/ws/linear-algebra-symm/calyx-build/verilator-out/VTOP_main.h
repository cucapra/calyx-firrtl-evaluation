// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP_MAIN_H_
#define VERILATED_VTOP_MAIN_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class VTOP__Syms;
class VTOP_seq_mem_d2__D8_DB8;
class VTOP_std_reg;
class VTOP_seq_mem_d2__D8_DBc;
class VTOP_std_add__W4;
class VTOP_std_add;
class VTOP_seq_mem_d1__I1_S1;
class VTOP_std_const__V0;
class VTOP_std_const__Vz1_W4;
class VTOP_std_const__Vz2_W1;
class VTOP_std_const__Vz3_W4;
class VTOP_std_const__Vz4_W4;
class VTOP_std_const__Vz5_W4;
class VTOP_std_reg__W4;
class VTOP_std_le__W4;
class VTOP_std_lt__W4;
class VTOP_std_mult_pipe;
class VTOP_std_reg__W1;
class VTOP_std_reg__W5;
class VTOP_undef__W1;
class VTOP_std_add__W5;
class VTOP_std_wire__W1;


class VTOP_main final : public VerilatedModule {
  public:
    // CELLS
    VTOP_seq_mem_d2__D8_DB8* __PVT__A_int;
    VTOP_std_reg* __PVT__A_int_read0_0;
    VTOP_seq_mem_d2__D8_DBc* __PVT__B_int;
    VTOP_std_reg* __PVT__B_int_read0_0;
    VTOP_std_reg* __PVT__C_i_j_0;
    VTOP_seq_mem_d2__D8_DBc* __PVT__C_int;
    VTOP_std_add__W4* __PVT__add2;
    VTOP_std_add* __PVT__add3;
    VTOP_std_add* __PVT__add4;
    VTOP_seq_mem_d1__I1_S1* __PVT__alpha_int;
    VTOP_std_reg* __PVT__alpha_int_read0_0;
    VTOP_seq_mem_d1__I1_S1* __PVT__beta_int;
    VTOP_std_reg* __PVT__beta_int_read0_0;
    VTOP_std_const__V0* __PVT__const0;
    VTOP_std_const__Vz1_W4* __PVT__const1;
    VTOP_std_const__Vz2_W1* __PVT__const10;
    VTOP_std_const__Vz3_W4* __PVT__const11;
    VTOP_std_const__Vz4_W4* __PVT__const2;
    VTOP_std_const__Vz5_W4* __PVT__const4;
    VTOP_std_const__Vz2_W1* __PVT__const9;
    VTOP_std_reg__W4* __PVT__i0;
    VTOP_std_reg__W4* __PVT__j0;
    VTOP_std_reg__W4* __PVT__k_0;
    VTOP_std_le__W4* __PVT__le0;
    VTOP_std_lt__W4* __PVT__lt0;
    VTOP_std_mult_pipe* __PVT__mult_pipe0;
    VTOP_std_reg* __PVT__temp2_0;
    VTOP_std_reg__W1* __PVT__comb_reg;
    VTOP_std_reg__W1* __PVT__comb_reg0;
    VTOP_std_reg__W1* __PVT__comb_reg1;
    VTOP_std_reg__W5* __PVT__fsm;
    VTOP_undef__W1* __PVT__ud;
    VTOP_std_add__W5* __PVT__adder;
    VTOP_undef__W1* __PVT__ud0;
    VTOP_std_add__W5* __PVT__adder0;
    VTOP_undef__W1* __PVT__ud1;
    VTOP_std_add__W5* __PVT__adder1;
    VTOP_undef__W1* __PVT__ud2;
    VTOP_std_add__W5* __PVT__adder2;
    VTOP_undef__W1* __PVT__ud3;
    VTOP_std_add__W5* __PVT__adder3;
    VTOP_undef__W1* __PVT__ud4;
    VTOP_std_add__W5* __PVT__adder4;
    VTOP_undef__W1* __PVT__ud5;
    VTOP_std_add__W5* __PVT__adder5;
    VTOP_std_reg__W1* __PVT__signal_reg;
    VTOP_std_reg__W4* __PVT__fsm0;
    VTOP_std_wire__W1* __PVT__invoke2_go;
    VTOP_std_wire__W1* __PVT__invoke2_done;
    VTOP_std_wire__W1* __PVT__invoke33_go;
    VTOP_std_wire__W1* __PVT__invoke33_done;
    VTOP_std_wire__W1* __PVT__early_reset_cond00_go;
    VTOP_std_wire__W1* __PVT__early_reset_cond00_done;
    VTOP_std_wire__W1* __PVT__early_reset_cond10_go;
    VTOP_std_wire__W1* __PVT__early_reset_cond10_done;
    VTOP_std_wire__W1* __PVT__early_reset_cond20_go;
    VTOP_std_wire__W1* __PVT__early_reset_cond20_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_par_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_par_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_par0_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_par0_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_par4_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_par4_done;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_par_go;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_par_done;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_cond00_go;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_cond00_done;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_cond10_go;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_cond10_done;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_par0_go;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_par0_done;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_cond20_go;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_cond20_done;
    VTOP_std_wire__W1* __PVT__while_wrapper_early_reset_static_seq_go;
    VTOP_std_wire__W1* __PVT__while_wrapper_early_reset_static_seq_done;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_par4_go;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_par4_done;
    VTOP_std_wire__W1* __PVT__tdcc_go;
    VTOP_std_wire__W1* __PVT__tdcc_done;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__go,0,0);
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_OUT8(__PVT__done,0,0);
        CData/*0:0*/ __PVT__A_int_write_en;
        CData/*0:0*/ __PVT__A_int_read_en;
        CData/*0:0*/ __PVT__A_int_read0_0_write_en;
        CData/*0:0*/ __PVT__B_int_write_en;
        CData/*0:0*/ __PVT__B_int_read0_0_write_en;
        CData/*0:0*/ __PVT__C_i_j_0_write_en;
        CData/*0:0*/ __PVT__C_int_write_en;
        CData/*0:0*/ __PVT__C_int_read_en;
        CData/*3:0*/ __PVT__add2_left;
        CData/*0:0*/ __PVT__alpha_int_write_en;
        CData/*0:0*/ __PVT__alpha_int_read0_0_write_en;
        CData/*0:0*/ __PVT__beta_int_write_en;
        CData/*0:0*/ __PVT__beta_int_read_en;
        CData/*0:0*/ __PVT__beta_int_read0_0_write_en;
        CData/*0:0*/ __PVT__i0_write_en;
        CData/*0:0*/ __PVT__j0_write_en;
        CData/*0:0*/ __PVT__k_0_write_en;
        CData/*0:0*/ __PVT__mult_pipe0_go;
        CData/*0:0*/ __PVT__temp2_0_write_en;
        CData/*0:0*/ __PVT__comb_reg1_write_en;
        CData/*0:0*/ __PVT__fsm_write_en;
        CData/*0:0*/ __PVT__signal_reg_in;
        CData/*0:0*/ __PVT__signal_reg_write_en;
        CData/*3:0*/ __PVT__fsm0_in;
        CData/*0:0*/ __PVT__fsm0_write_en;
        CData/*0:0*/ __PVT__invoke2_go_in;
        CData/*0:0*/ __PVT__invoke33_go_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_static_par_go_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_static_par_done_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_cond00_go_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_cond10_go_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_static_par0_go_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_cond20_go_in;
        CData/*0:0*/ __PVT__while_wrapper_early_reset_static_seq_go_in;
        CData/*0:0*/ __PVT__while_wrapper_early_reset_static_seq_done_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_static_par4_go_in;
        CData/*0:0*/ __PVT___guard14;
        CData/*0:0*/ __PVT___guard38;
        CData/*0:0*/ __PVT___guard41;
        CData/*0:0*/ __PVT___guard54;
        CData/*0:0*/ __PVT___guard59;
        CData/*0:0*/ __PVT___guard93;
        CData/*0:0*/ __PVT___guard96;
        CData/*0:0*/ __PVT___guard99;
        CData/*0:0*/ __PVT___guard118;
        CData/*0:0*/ __PVT___guard121;
        CData/*0:0*/ __PVT___guard125;
        CData/*0:0*/ __PVT___guard129;
        CData/*0:0*/ __PVT___guard132;
        CData/*0:0*/ __PVT___guard135;
        CData/*0:0*/ __PVT___guard138;
        CData/*0:0*/ __PVT___guard179;
        CData/*0:0*/ __PVT___guard192;
        CData/*0:0*/ __PVT___guard212;
        CData/*0:0*/ __PVT___guard335;
        CData/*0:0*/ __PVT___guard340;
        CData/*0:0*/ __PVT___guard343;
        CData/*0:0*/ __PVT___guard351;
        CData/*0:0*/ __PVT___guard357;
        CData/*0:0*/ __PVT___guard362;
    };
    struct {
        CData/*0:0*/ __PVT___guard365;
        CData/*0:0*/ __PVT___guard373;
        CData/*0:0*/ __PVT___guard379;
        CData/*0:0*/ __PVT___guard385;
        CData/*0:0*/ __PVT___guard391;
        CData/*0:0*/ __PVT___guard397;
        CData/*0:0*/ __PVT___guard403;
        CData/*0:0*/ __PVT___guard406;
        CData/*0:0*/ __PVT___guard415;
        CData/*0:0*/ __PVT___guard421;
        CData/*0:0*/ __PVT___guard427;
        CData/*0:0*/ __PVT___guard430;
        CData/*0:0*/ __PVT___guard439;
        CData/*0:0*/ __PVT___guard567;
        CData/*0:0*/ __PVT___guard569;
        CData/*0:0*/ __PVT___guard574;
        CData/*0:0*/ __PVT___guard577;
        CData/*0:0*/ __PVT___guard580;
        CData/*0:0*/ __PVT___guard590;
        CData/*0:0*/ __PVT___guard596;
        CData/*0:0*/ __PVT___guard599;
        CData/*0:0*/ __PVT___guard606;
        CData/*0:0*/ __PVT___guard669;
        CData/*0:0*/ __PVT___guard696;
        CData/*0:0*/ __PVT___guard825;
        IData/*31:0*/ __PVT__CODE;
        IData/*31:0*/ __PVT__A_int_write_data;
        IData/*31:0*/ __PVT__B_int_write_data;
        IData/*31:0*/ __PVT__alpha_int_write_data;
        IData/*31:0*/ __PVT__beta_int_write_data;
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

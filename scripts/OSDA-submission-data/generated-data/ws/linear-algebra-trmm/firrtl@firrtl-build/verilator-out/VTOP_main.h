// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP_MAIN_H_
#define VERILATED_VTOP_MAIN_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class VTOP__Syms;
class VTOP_std_reg_32;
class VTOP_std_add_4;
class VTOP_std_add_32;
class VTOP_std_reg_4;
class VTOP_std_le_4;
class VTOP_std_lt_4;
class VTOP_std_mult_pipe_32;
class VTOP_std_reg_1;
class VTOP_std_reg_3;
class VTOP_std_add_3;
class VTOP_std_reg_5;
class VTOP_std_wire_1;


class VTOP_main final : public VerilatedModule {
  public:
    // CELLS
    VTOP_std_reg_32* __PVT__A_int_read0_0;
    VTOP_std_reg_32* __PVT__B_i_j_0;
    VTOP_std_reg_32* __PVT__B_k_j_0;
    VTOP_std_add_4* __PVT__add0;
    VTOP_std_add_32* __PVT__add1;
    VTOP_std_reg_4* __PVT__i0;
    VTOP_std_reg_4* __PVT__j0;
    VTOP_std_reg_4* __PVT__k_0;
    VTOP_std_le_4* __PVT__le0;
    VTOP_std_lt_4* __PVT__lt0;
    VTOP_std_mult_pipe_32* __PVT__mult_pipe0;
    VTOP_std_reg_1* __PVT__comb_reg;
    VTOP_std_reg_1* __PVT__comb_reg0;
    VTOP_std_reg_1* __PVT__comb_reg1;
    VTOP_std_reg_3* __PVT__fsm;
    VTOP_std_add_3* __PVT__adder;
    VTOP_std_add_3* __PVT__adder0;
    VTOP_std_add_3* __PVT__adder1;
    VTOP_std_add_3* __PVT__adder2;
    VTOP_std_add_3* __PVT__adder3;
    VTOP_std_reg_1* __PVT__signal_reg;
    VTOP_std_reg_5* __PVT__fsm0;
    VTOP_std_wire_1* __PVT__beg_spl_let3_go;
    VTOP_std_wire_1* __PVT__beg_spl_let3_done;
    VTOP_std_wire_1* __PVT__beg_spl_let4_go;
    VTOP_std_wire_1* __PVT__beg_spl_let4_done;
    VTOP_std_wire_1* __PVT__beg_spl_let5_go;
    VTOP_std_wire_1* __PVT__beg_spl_let5_done;
    VTOP_std_wire_1* __PVT__beg_spl_let7_go;
    VTOP_std_wire_1* __PVT__beg_spl_let7_done;
    VTOP_std_wire_1* __PVT__beg_spl_let8_go;
    VTOP_std_wire_1* __PVT__beg_spl_let8_done;
    VTOP_std_wire_1* __PVT__invoke0_go;
    VTOP_std_wire_1* __PVT__invoke0_done;
    VTOP_std_wire_1* __PVT__invoke1_go;
    VTOP_std_wire_1* __PVT__invoke1_done;
    VTOP_std_wire_1* __PVT__invoke2_go;
    VTOP_std_wire_1* __PVT__invoke2_done;
    VTOP_std_wire_1* __PVT__invoke3_go;
    VTOP_std_wire_1* __PVT__invoke3_done;
    VTOP_std_wire_1* __PVT__invoke4_go;
    VTOP_std_wire_1* __PVT__invoke4_done;
    VTOP_std_wire_1* __PVT__invoke5_go;
    VTOP_std_wire_1* __PVT__invoke5_done;
    VTOP_std_wire_1* __PVT__invoke9_go;
    VTOP_std_wire_1* __PVT__invoke9_done;
    VTOP_std_wire_1* __PVT__invoke10_go;
    VTOP_std_wire_1* __PVT__invoke10_done;
    VTOP_std_wire_1* __PVT__invoke14_go;
    VTOP_std_wire_1* __PVT__invoke14_done;
    VTOP_std_wire_1* __PVT__early_reset_cond00_go;
    VTOP_std_wire_1* __PVT__early_reset_cond00_done;
    VTOP_std_wire_1* __PVT__early_reset_cond10_go;
    VTOP_std_wire_1* __PVT__early_reset_cond10_done;
    VTOP_std_wire_1* __PVT__early_reset_cond20_go;
    VTOP_std_wire_1* __PVT__early_reset_cond20_done;
    VTOP_std_wire_1* __PVT__early_reset_static_par_go;
    VTOP_std_wire_1* __PVT__early_reset_static_par_done;
    VTOP_std_wire_1* __PVT__early_reset_static_seq0_go;
    VTOP_std_wire_1* __PVT__early_reset_static_seq0_done;
    VTOP_std_wire_1* __PVT__wrapper_early_reset_cond00_go;
    VTOP_std_wire_1* __PVT__wrapper_early_reset_cond00_done;
    VTOP_std_wire_1* __PVT__wrapper_early_reset_cond10_go;
    VTOP_std_wire_1* __PVT__wrapper_early_reset_cond10_done;
    VTOP_std_wire_1* __PVT__wrapper_early_reset_cond20_go;
    VTOP_std_wire_1* __PVT__wrapper_early_reset_cond20_done;
    VTOP_std_wire_1* __PVT__wrapper_early_reset_static_par_go;
    VTOP_std_wire_1* __PVT__wrapper_early_reset_static_par_done;
    VTOP_std_wire_1* __PVT__wrapper_early_reset_static_seq0_go;
    VTOP_std_wire_1* __PVT__wrapper_early_reset_static_seq0_done;
    VTOP_std_wire_1* __PVT__tdcc_go;
    VTOP_std_wire_1* __PVT__tdcc_done;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__go,0,0);
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_OUT8(__PVT__done,0,0);
        VL_OUT8(__PVT__A_int_addr0,3,0);
        VL_OUT8(__PVT__A_int_addr1,3,0);
        VL_OUT8(__PVT__A_int_write_en,0,0);
        VL_OUT8(__PVT__A_int_read_en,0,0);
        VL_IN8(__PVT__A_int_write_done,0,0);
        VL_IN8(__PVT__A_int_read_done,0,0);
        VL_OUT8(__PVT__B_int_addr0,3,0);
        VL_OUT8(__PVT__B_int_addr1,3,0);
        VL_OUT8(__PVT__B_int_write_en,0,0);
        VL_OUT8(__PVT__B_int_read_en,0,0);
        VL_IN8(__PVT__B_int_write_done,0,0);
        VL_IN8(__PVT__B_int_read_done,0,0);
        VL_OUT8(__PVT__alpha_int_addr0,0,0);
        VL_OUT8(__PVT__alpha_int_write_en,0,0);
        VL_OUT8(__PVT__alpha_int_read_en,0,0);
        VL_IN8(__PVT__alpha_int_write_done,0,0);
        VL_IN8(__PVT__alpha_int_read_done,0,0);
        CData/*0:0*/ __PVT__A_int_read0_0_write_en;
        CData/*0:0*/ __PVT__B_i_j_0_write_en;
        CData/*0:0*/ __PVT__i0_write_en;
        CData/*0:0*/ __PVT__j0_write_en;
        CData/*0:0*/ __PVT__k_0_write_en;
        CData/*0:0*/ __PVT__mult_pipe0_go;
        CData/*2:0*/ __PVT__fsm_in;
        CData/*0:0*/ __PVT__beg_spl_let3_go_in;
        CData/*0:0*/ __PVT__beg_spl_let4_go_in;
        CData/*0:0*/ __PVT__beg_spl_let5_go_in;
        CData/*0:0*/ __PVT__beg_spl_let7_go_in;
        CData/*0:0*/ __PVT__beg_spl_let8_go_in;
        CData/*0:0*/ __PVT__invoke0_go_in;
        CData/*0:0*/ __PVT__invoke1_go_in;
        CData/*0:0*/ __PVT__invoke2_go_in;
        CData/*0:0*/ __PVT__invoke3_go_in;
        CData/*0:0*/ __PVT__invoke4_go_in;
        CData/*0:0*/ __PVT__invoke5_go_in;
        CData/*0:0*/ __PVT__invoke9_go_in;
        CData/*0:0*/ __PVT__invoke10_go_in;
        CData/*0:0*/ __PVT__invoke14_go_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_cond00_go_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_cond00_done_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_cond10_go_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_cond20_go_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_static_par_go_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_static_seq0_go_in;
        CData/*0:0*/ __PVT___GEN_221;
        CData/*0:0*/ __PVT___GEN_249;
        CData/*0:0*/ __PVT___GEN_282;
        CData/*0:0*/ __PVT___GEN_311;
        CData/*0:0*/ __PVT___GEN_315;
        CData/*4:0*/ __PVT___GEN_80;
        CData/*0:0*/ __VdfgTmp_he0e40f0f__0;
        CData/*0:0*/ __VdfgTmp_ha2ac0650__0;
        CData/*0:0*/ __VdfgTmp_h5a0ff7ae__0;
        CData/*0:0*/ __VdfgTmp_h24f850e6__0;
        CData/*0:0*/ __VdfgTmp_h5635cf48__0;
        CData/*0:0*/ __VdfgTmp_h94fdc82f__0;
        CData/*0:0*/ __VdfgTmp_hae6fc7c9__0;
        CData/*0:0*/ __VdfgTmp_h5cffc676__0;
        CData/*0:0*/ __VdfgTmp_h3989696c__0;
        CData/*0:0*/ __VdfgTmp_h2f49b479__0;
    };
    struct {
        CData/*0:0*/ __VdfgTmp_hcb3812f3__0;
        CData/*0:0*/ __VdfgTmp_h89b6cb23__0;
        CData/*0:0*/ __VdfgTmp_h7f031210__0;
        CData/*0:0*/ __VdfgTmp_h861bc47f__0;
        CData/*0:0*/ __VdfgTmp_haabfc6e7__0;
        CData/*0:0*/ __VdfgTmp_h496a5df7__0;
        CData/*0:0*/ __VdfgTmp_hf7dba21d__0;
        CData/*0:0*/ __VdfgTmp_h9ca55de3__0;
        CData/*0:0*/ __VdfgTmp_hbafba765__0;
        CData/*0:0*/ __VdfgTmp_h4409eb50__0;
        CData/*0:0*/ __VdfgTmp_hd74ea668__0;
        CData/*0:0*/ __VdfgTmp_h8179485d__0;
        CData/*0:0*/ __VdfgTmp_ha515d6f3__0;
        CData/*0:0*/ __VdfgTmp_h1025c6c2__0;
        CData/*0:0*/ __VdfgTmp_h301c5d92__0;
        CData/*0:0*/ __VdfgTmp_had1198b6__0;
        CData/*0:0*/ __VdfgTmp_h2bdf3e9c__0;
        CData/*0:0*/ __VdfgTmp_he35e67f8__0;
        CData/*0:0*/ __VdfgTmp_h12dd2185__0;
        CData/*0:0*/ __VdfgTmp_hd9131b55__0;
        CData/*0:0*/ __VdfgTmp_hf7aba140__0;
        CData/*0:0*/ __VdfgTmp_h50eea2a5__0;
        CData/*0:0*/ __VdfgTmp_hee665582__0;
        VL_OUT(__PVT__A_int_write_data,31,0);
        VL_IN(__PVT__A_int_read_data,31,0);
        VL_OUT(__PVT__B_int_write_data,31,0);
        VL_IN(__PVT__B_int_read_data,31,0);
        VL_OUT(__PVT__alpha_int_write_data,31,0);
        VL_IN(__PVT__alpha_int_read_data,31,0);
    };

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

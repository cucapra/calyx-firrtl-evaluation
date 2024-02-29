// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP_MAIN_H_
#define VERILATED_VTOP_MAIN_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class VTOP__Syms;
class VTOP_std_reg;
class VTOP_std_add__W4;
class VTOP_std_add;
class VTOP_std_const__W4_V0;
class VTOP_std_const__W4_V7;
class VTOP_std_const__W4_V1;
class VTOP_std_const__V0;
class VTOP_std_reg__W4;
class VTOP_std_le__W4;
class VTOP_std_mult_pipe;
class VTOP_std_reg__W1;
class VTOP_std_reg__W5;
class VTOP_std_reg__W2;
class VTOP_undef__W1;
class VTOP_std_add__W5;
class VTOP_std_add__W2;
class VTOP_std_wire__W1;


class VTOP_main final : public VerilatedModule {
  public:
    // CELLS
    VTOP_std_reg* __PVT__A_i_j_0;
    VTOP_std_add__W4* __PVT__add0;
    VTOP_std_add* __PVT__add1;
    VTOP_std_reg* __PVT__bin_read0_0;
    VTOP_std_const__W4_V0* __PVT__const0;
    VTOP_std_const__W4_V7* __PVT__const1;
    VTOP_std_const__W4_V1* __PVT__const10;
    VTOP_std_const__V0* __PVT__const2;
    VTOP_std_reg__W4* __PVT__i1;
    VTOP_std_reg__W4* __PVT__j0;
    VTOP_std_le__W4* __PVT__le0;
    VTOP_std_mult_pipe* __PVT__mult_pipe0;
    VTOP_std_reg* __PVT__p_int_read0_0;
    VTOP_std_reg* __PVT__q0_0;
    VTOP_std_reg* __PVT__s0_0;
    VTOP_std_reg__W1* __PVT__comb_reg0;
    VTOP_std_reg__W1* __PVT__comb_reg1;
    VTOP_std_reg__W5* __PVT__fsm;
    VTOP_std_reg__W2* __PVT__fsm0;
    VTOP_undef__W1* __PVT__ud;
    VTOP_std_add__W5* __PVT__adder;
    VTOP_undef__W1* __PVT__ud0;
    VTOP_std_add__W5* __PVT__adder0;
    VTOP_undef__W1* __PVT__ud1;
    VTOP_std_add__W5* __PVT__adder1;
    VTOP_undef__W1* __PVT__ud2;
    VTOP_std_add__W2* __PVT__adder2;
    VTOP_undef__W1* __PVT__ud3;
    VTOP_std_add__W5* __PVT__adder3;
    VTOP_undef__W1* __PVT__ud4;
    VTOP_std_add__W5* __PVT__adder4;
    VTOP_undef__W1* __PVT__ud5;
    VTOP_std_add__W5* __PVT__adder5;
    VTOP_std_reg__W1* __PVT__signal_reg;
    VTOP_std_reg__W2* __PVT__fsm1;
    VTOP_std_reg__W1* __PVT__pd;
    VTOP_std_reg__W2* __PVT__fsm2;
    VTOP_std_reg__W1* __PVT__pd0;
    VTOP_std_reg__W2* __PVT__fsm3;
    VTOP_std_reg__W1* __PVT__pd1;
    VTOP_std_reg__W1* __PVT__pd2;
    VTOP_std_reg__W2* __PVT__fsm4;
    VTOP_std_reg__W1* __PVT__pd3;
    VTOP_std_reg__W4* __PVT__fsm5;
    VTOP_std_wire__W1* __PVT__beg_spl_let3_go;
    VTOP_std_wire__W1* __PVT__beg_spl_let3_done;
    VTOP_std_wire__W1* __PVT__beg_spl_let4_go;
    VTOP_std_wire__W1* __PVT__beg_spl_let4_done;
    VTOP_std_wire__W1* __PVT__beg_spl_let5_go;
    VTOP_std_wire__W1* __PVT__beg_spl_let5_done;
    VTOP_std_wire__W1* __PVT__beg_spl_let6_go;
    VTOP_std_wire__W1* __PVT__beg_spl_let6_done;
    VTOP_std_wire__W1* __PVT__beg_spl_let8_go;
    VTOP_std_wire__W1* __PVT__beg_spl_let8_done;
    VTOP_std_wire__W1* __PVT__invoke4_go;
    VTOP_std_wire__W1* __PVT__invoke4_done;
    VTOP_std_wire__W1* __PVT__invoke5_go;
    VTOP_std_wire__W1* __PVT__invoke5_done;
    VTOP_std_wire__W1* __PVT__invoke6_go;
    VTOP_std_wire__W1* __PVT__invoke6_done;
    VTOP_std_wire__W1* __PVT__invoke7_go;
    VTOP_std_wire__W1* __PVT__invoke7_done;
    VTOP_std_wire__W1* __PVT__invoke10_go;
    VTOP_std_wire__W1* __PVT__invoke10_done;
    VTOP_std_wire__W1* __PVT__invoke14_go;
    VTOP_std_wire__W1* __PVT__invoke14_done;
    VTOP_std_wire__W1* __PVT__early_reset_cond10_go;
    VTOP_std_wire__W1* __PVT__early_reset_cond10_done;
    VTOP_std_wire__W1* __PVT__early_reset_cond20_go;
    VTOP_std_wire__W1* __PVT__early_reset_cond20_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq0_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq0_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_par_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_par_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq1_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_seq1_done;
    VTOP_std_wire__W1* __PVT__early_reset_static_par0_go;
    VTOP_std_wire__W1* __PVT__early_reset_static_par0_done;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_seq_go;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_seq_done;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_cond10_go;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_cond10_done;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_par_go;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_par_done;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_cond20_go;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_cond20_done;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_seq1_go;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_seq1_done;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_par0_go;
    VTOP_std_wire__W1* __PVT__wrapper_early_reset_static_par0_done;
    VTOP_std_wire__W1* __PVT__par0_go;
    VTOP_std_wire__W1* __PVT__par0_done;
    VTOP_std_wire__W1* __PVT__tdcc_go;
    VTOP_std_wire__W1* __PVT__tdcc_done;
    VTOP_std_wire__W1* __PVT__tdcc0_go;
    VTOP_std_wire__W1* __PVT__tdcc0_done;
    VTOP_std_wire__W1* __PVT__tdcc1_go;
    VTOP_std_wire__W1* __PVT__tdcc1_done;
    VTOP_std_wire__W1* __PVT__par1_go;
    VTOP_std_wire__W1* __PVT__par1_done;
    VTOP_std_wire__W1* __PVT__tdcc2_go;
    VTOP_std_wire__W1* __PVT__tdcc2_done;
    VTOP_std_wire__W1* __PVT__tdcc3_go;
    VTOP_std_wire__W1* __PVT__tdcc3_done;

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
        VL_OUT8(__PVT__p_int_addr0,3,0);
        VL_OUT8(__PVT__p_int_write_en,0,0);
        VL_OUT8(__PVT__p_int_read_en,0,0);
        VL_IN8(__PVT__p_int_write_done,0,0);
        VL_IN8(__PVT__p_int_read_done,0,0);
        VL_OUT8(__PVT__q_int_addr0,3,0);
        VL_OUT8(__PVT__q_int_write_en,0,0);
        VL_OUT8(__PVT__q_int_read_en,0,0);
        VL_IN8(__PVT__q_int_write_done,0,0);
        VL_IN8(__PVT__q_int_read_done,0,0);
        VL_OUT8(__PVT__r_int_addr0,3,0);
        VL_OUT8(__PVT__r_int_write_en,0,0);
        VL_OUT8(__PVT__r_int_read_en,0,0);
        VL_IN8(__PVT__r_int_write_done,0,0);
        VL_IN8(__PVT__r_int_read_done,0,0);
        VL_OUT8(__PVT__s_int_addr0,3,0);
        VL_OUT8(__PVT__s_int_write_en,0,0);
        VL_OUT8(__PVT__s_int_read_en,0,0);
        VL_IN8(__PVT__s_int_write_done,0,0);
        VL_IN8(__PVT__s_int_read_done,0,0);
        CData/*0:0*/ __PVT__A_i_j_0_write_en;
        CData/*0:0*/ __PVT__bin_read0_0_write_en;
        CData/*0:0*/ __PVT__i1_write_en;
        CData/*0:0*/ __PVT__j0_write_en;
        CData/*0:0*/ __PVT__mult_pipe0_go;
        CData/*4:0*/ __PVT__fsm_in;
        CData/*0:0*/ __PVT__fsm_write_en;
        CData/*1:0*/ __PVT__fsm0_in;
        CData/*0:0*/ __PVT__signal_reg_write_en;
        CData/*0:0*/ __PVT__fsm1_write_en;
        CData/*0:0*/ __PVT__pd_write_en;
        CData/*0:0*/ __PVT__fsm2_write_en;
        CData/*0:0*/ __PVT__pd0_write_en;
        CData/*0:0*/ __PVT__fsm3_write_en;
        CData/*0:0*/ __PVT__pd1_write_en;
        CData/*0:0*/ __PVT__pd2_write_en;
        CData/*0:0*/ __PVT__fsm4_write_en;
        CData/*0:0*/ __PVT__pd3_write_en;
        CData/*0:0*/ __PVT__fsm5_write_en;
        CData/*0:0*/ __PVT__beg_spl_let3_go_in;
        CData/*0:0*/ __PVT__beg_spl_let4_go_in;
        CData/*0:0*/ __PVT__beg_spl_let5_go_in;
        CData/*0:0*/ __PVT__beg_spl_let6_go_in;
        CData/*0:0*/ __PVT__beg_spl_let8_go_in;
        CData/*0:0*/ __PVT__invoke4_go_in;
        CData/*0:0*/ __PVT__invoke5_go_in;
        CData/*0:0*/ __PVT__invoke6_go_in;
        CData/*0:0*/ __PVT__invoke7_go_in;
        CData/*0:0*/ __PVT__invoke10_go_in;
        CData/*0:0*/ __PVT__invoke14_go_in;
        CData/*0:0*/ __PVT__early_reset_static_seq0_go_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_static_seq_go_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_static_seq_done_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_cond10_go_in;
    };
    struct {
        CData/*0:0*/ __PVT__wrapper_early_reset_static_par_go_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_cond20_go_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_static_seq1_go_in;
        CData/*0:0*/ __PVT__wrapper_early_reset_static_par0_go_in;
        CData/*0:0*/ __PVT__par0_go_in;
        CData/*0:0*/ __PVT__par0_done_in;
        CData/*0:0*/ __PVT__tdcc_go_in;
        CData/*0:0*/ __PVT__tdcc0_go_in;
        CData/*0:0*/ __PVT__tdcc1_go_in;
        CData/*0:0*/ __PVT__par1_go_in;
        CData/*0:0*/ __PVT__par1_done_in;
        CData/*0:0*/ __PVT__tdcc2_go_in;
        CData/*0:0*/ __PVT___GEN_48;
        CData/*0:0*/ __PVT___GEN_268;
        CData/*0:0*/ __PVT___GEN_300;
        CData/*3:0*/ __PVT___GEN_61;
        CData/*0:0*/ __PVT___GEN_71;
        CData/*0:0*/ __PVT___GEN_75;
        CData/*0:0*/ __PVT___GEN_96;
        CData/*0:0*/ __PVT___GEN_124;
        CData/*0:0*/ __VdfgTmp_haf140208__0;
        CData/*0:0*/ __VdfgTmp_hd1d86966__0;
        CData/*0:0*/ __VdfgTmp_hb17828e6__0;
        CData/*0:0*/ __VdfgTmp_h42da30c7__0;
        CData/*0:0*/ __VdfgTmp_hd3925d15__0;
        CData/*0:0*/ __VdfgTmp_he48da90e__0;
        CData/*0:0*/ __VdfgTmp_h619ae876__0;
        CData/*0:0*/ __VdfgTmp_h96d1a8ed__0;
        CData/*0:0*/ __VdfgTmp_hba0c7352__0;
        CData/*0:0*/ __VdfgTmp_hedd81b8c__0;
        CData/*0:0*/ __VdfgTmp_h5fa391a3__0;
        CData/*0:0*/ __VdfgTmp_hacf7e8f8__0;
        CData/*0:0*/ __VdfgTmp_ha8e6ba43__0;
        CData/*0:0*/ __VdfgTmp_hc21ebf3d__0;
        CData/*0:0*/ __VdfgTmp_h264338ce__0;
        CData/*0:0*/ __VdfgTmp_heb163d00__0;
        CData/*0:0*/ __VdfgTmp_hf31f61f5__0;
        CData/*0:0*/ __VdfgTmp_hf35533c7__0;
        CData/*0:0*/ __VdfgTmp_hf7faf697__0;
        CData/*0:0*/ __VdfgTmp_hafa7f5a2__0;
        CData/*0:0*/ __VdfgTmp_h3d357af0__0;
        CData/*0:0*/ __VdfgTmp_hdb72d658__0;
        CData/*0:0*/ __VdfgTmp_h876d1f6f__0;
        CData/*0:0*/ __VdfgTmp_hddedd61e__0;
        CData/*0:0*/ __VdfgTmp_hb52e9e8f__0;
        CData/*0:0*/ __VdfgTmp_ha6ccabc3__0;
        CData/*0:0*/ __VdfgTmp_he419f59f__0;
        CData/*0:0*/ __VdfgTmp_h76af7ad3__0;
        CData/*0:0*/ __VdfgTmp_hdb8e8070__0;
        CData/*0:0*/ __VdfgTmp_h61921a34__0;
        CData/*0:0*/ __VdfgTmp_h2db91552__0;
        CData/*0:0*/ __VdfgTmp_h839cf65c__0;
        CData/*0:0*/ __VdfgTmp_h14f8c1ab__0;
        CData/*0:0*/ __VdfgTmp_hf38325f8__0;
        CData/*0:0*/ __VdfgTmp_h1832b6c0__0;
        CData/*0:0*/ __VdfgTmp_h7f7c5c20__0;
        CData/*0:0*/ __VdfgTmp_h55d88a83__0;
        CData/*0:0*/ __VdfgTmp_h3e6cce66__0;
        CData/*0:0*/ __VdfgTmp_hd40cd495__0;
        CData/*0:0*/ __VdfgTmp_h2276f04a__0;
        VL_OUT(__PVT__A_int_write_data,31,0);
        VL_IN(__PVT__A_int_read_data,31,0);
        VL_OUT(__PVT__p_int_write_data,31,0);
        VL_IN(__PVT__p_int_read_data,31,0);
    };
    struct {
        VL_OUT(__PVT__q_int_write_data,31,0);
        VL_IN(__PVT__q_int_read_data,31,0);
        VL_OUT(__PVT__r_int_write_data,31,0);
        VL_IN(__PVT__r_int_read_data,31,0);
        VL_OUT(__PVT__s_int_write_data,31,0);
        VL_IN(__PVT__s_int_read_data,31,0);
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

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_main.h"

VL_ATTR_COLD void VTOP_main___eval_initial__TOP__TOP__main(VTOP_main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP_main___eval_initial__TOP__TOP__main\n"); );
    // Body
    vlSelf->__PVT__CODE = VL_VALUEPLUSARGS_INN(64, 
                                               std::string{"DATA=%s"}, 
                                               vlSelf->__PVT__DATA);
    VL_WRITEF("DATA (path to meminit files): %@\n",
              -1,&(vlSelf->__PVT__DATA));
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/A_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 8, 0, VL_CVT_PACK_STR_NN(
                                                    VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                   std::string{"/p_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__main__p_int.__PVT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 8, 0, VL_CVT_PACK_STR_NN(
                                                    VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                   std::string{"/q_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__main__q_int.__PVT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 8, 0, VL_CVT_PACK_STR_NN(
                                                    VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                   std::string{"/r_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__main__r_int.__PVT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 8, 0, VL_CVT_PACK_STR_NN(
                                                    VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                   std::string{"/s_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__main__s_int.__PVT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VTOP_main___eval_final__TOP__TOP__main(VTOP_main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP_main___eval_final__TOP__TOP__main\n"); );
    // Body
    VL_WRITEMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NN(
                                                      VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                     std::string{"/A_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__main__A_int__mem.__PVT__mem)
                  , 0, ~0ULL);
    VL_WRITEMEM_N(true, 32, 8, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/p_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__main__p_int.__PVT__mem)
                  , 0, ~0ULL);
    VL_WRITEMEM_N(true, 32, 8, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/q_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__main__q_int.__PVT__mem)
                  , 0, ~0ULL);
    VL_WRITEMEM_N(true, 32, 8, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/r_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__main__r_int.__PVT__mem)
                  , 0, ~0ULL);
    VL_WRITEMEM_N(true, 32, 8, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/s_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__main__s_int.__PVT__mem)
                  , 0, ~0ULL);
}

VL_ATTR_COLD void VTOP_main___stl_sequent__TOP__TOP__main__0(VTOP_main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP_main___stl_sequent__TOP__TOP__main__0\n"); );
    // Init
    CData/*0:0*/ __PVT___guard42;
    CData/*0:0*/ __PVT___guard45;
    CData/*0:0*/ __PVT___guard69;
    CData/*0:0*/ __PVT___guard93;
    // Body
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0x37bU 
                                              != (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                             & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                            << 1U) 
                                           | ((0x37bU 
                                               == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                              & (IData)(vlSymsp->TOP__TOP.__PVT__go)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-bicg.sv:2202: Assertion failed in %Nmain: Multiple assignment to port `fsm0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-bicg.sv", 2202, "");
    }
    vlSelf->__PVT___guard141 = ((0x37bU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard144 = ((0x37bU != (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__wrapper_early_reset_static_seq_done_in 
        = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
           & (IData)(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out));
    vlSelf->__PVT__signal_reg_in = (((~ (IData)(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out)) 
                                     & (0U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
                                    & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard159 = ((2U <= (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                & (5U > (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)));
    vlSelf->__PVT___guard164 = ((7U <= (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                & (0xaU > (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)));
    vlSelf->__PVT__early_reset_static_seq0_go_in = 
        (((2U <= (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
          & (0x1aU > (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
         & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__early_reset_static_seq1_go_in = 
        (((0x1cU <= (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
          & (0x37cU > (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
         & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__wrapper_early_reset_static_seq_done_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__signal_reg_in))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-bicg.sv:2277: Assertion failed in %Nmain: Multiple assignment to port `signal_reg.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-bicg.sv", 2277, "");
    }
    vlSelf->__PVT__signal_reg_write_en = ((IData)(vlSelf->__PVT__wrapper_early_reset_static_seq_done_in) 
                                          | (IData)(vlSelf->__PVT__signal_reg_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((2U != (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq0_go_in)) 
                                            << 1U) 
                                           | ((2U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                              & (IData)(vlSelf->__PVT__early_reset_static_seq0_go_in)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-bicg.sv:2187: Assertion failed in %Nmain: Multiple assignment to port `fsm1.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-bicg.sv", 2187, "");
    }
    vlSelf->__PVT___guard124 = ((2U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq0_go_in));
    vlSelf->__PVT___guard127 = ((2U != (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq0_go_in));
    __PVT___guard69 = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                       & (IData)(vlSelf->__PVT__early_reset_static_seq0_go_in));
    __PVT___guard42 = ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                       & (IData)(vlSelf->__PVT__early_reset_static_seq0_go_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0x6bU 
                                              == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq1_go_in)) 
                                            << 1U) 
                                           | ((0x6bU 
                                               != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                              & (IData)(vlSelf->__PVT__early_reset_static_seq1_go_in)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-bicg.sv:2117: Assertion failed in %Nmain: Multiple assignment to port `fsm.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-bicg.sv", 2117, "");
    }
    vlSelf->__PVT___guard34 = ((0x6bU != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__early_reset_static_seq1_go_in));
    __PVT___guard93 = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                       & (IData)(vlSelf->__PVT__early_reset_static_seq1_go_in));
    __PVT___guard45 = ((0x6aU == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                       & (IData)(vlSelf->__PVT__early_reset_static_seq1_go_in));
    vlSelf->__PVT__early_reset_static_seq3_go_in = 
        (((2U <= (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
          & (0x6aU > (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
         & (IData)(vlSelf->__PVT__early_reset_static_seq1_go_in));
    vlSelf->__PVT__i1_write_en = (((((0U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                     | (0x1aU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
                                    & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                   | (IData)(__PVT___guard42)) 
                                  | (IData)(__PVT___guard45));
    vlSelf->__PVT___guard46 = ((IData)(__PVT___guard42) 
                               | (IData)(__PVT___guard45));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0xcU 
                                              != (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in)) 
                                            << 1U) 
                                           | ((0xcU 
                                               == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                              & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-bicg.sv:2214: Assertion failed in %Nmain: Multiple assignment to port `fsm2.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-bicg.sv", 2214, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((((0U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                              | (6U 
                                                 == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out))) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in)) 
                                            << 1U) 
                                           | (IData)(__PVT___guard69))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-bicg.sv:2149: Assertion failed in %Nmain: Multiple assignment to port `s_int.addr0'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-bicg.sv", 2149, "");
    }
    vlSelf->__PVT__A_i_j_0_write_en = (((1U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                        | (0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out))) 
                                       & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    vlSelf->__PVT__bin_read0_0_write_en = (((5U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                            | (1U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out))) 
                                           & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    vlSelf->__PVT__p_int_read0_0_write_en = ((3U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    vlSelf->__PVT___guard148 = ((0xcU == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    vlSelf->__PVT___guard151 = ((0xcU != (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    vlSelf->__PVT__mult_pipe0_go = (((IData)(vlSelf->__PVT___guard159) 
                                     | (IData)(vlSelf->__PVT___guard164)) 
                                    & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    vlSelf->__PVT__p_int_read_en = ((2U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                    & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    vlSelf->__PVT___guard161 = ((IData)(vlSelf->__PVT___guard159) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    vlSelf->__PVT___guard166 = ((IData)(vlSelf->__PVT___guard164) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    vlSelf->__PVT__s_int_addr0 = ((IData)(__PVT___guard69)
                                   ? (IData)(vlSymsp->TOP__TOP__main__i1.__PVT__out)
                                   : ((((0U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                        | (6U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out))) 
                                       & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in))
                                       ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                       : 0U));
    vlSelf->__PVT__q0_0_write_en = ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                    & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    vlSelf->__PVT___guard49 = ((7U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    vlSelf->__PVT__A_int_read_en = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                    & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    vlSelf->__PVT___guard20 = ((6U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    vlSelf->__PVT___guard23 = ((0xbU == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((((0U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                              | (0x1aU 
                                                 == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
                                             & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard46))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-bicg.sv:2265: Assertion failed in %Nmain: Multiple assignment to port `i1.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-bicg.sv", 2265, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard166) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard161))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-bicg.sv:2231: Assertion failed in %Nmain: Multiple assignment to port `mult_pipe0.left'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-bicg.sv", 2231, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard166) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard161))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-bicg.sv:2242: Assertion failed in %Nmain: Multiple assignment to port `mult_pipe0.right'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-bicg.sv", 2242, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((5U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in)) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__q0_0_write_en))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-bicg.sv:2289: Assertion failed in %Nmain: Multiple assignment to port `bin_read0_0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-bicg.sv", 2289, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0xaU 
                                              == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in)) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__q0_0_write_en))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-bicg.sv:2314: Assertion failed in %Nmain: Multiple assignment to port `A_i_j_0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-bicg.sv", 2314, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard49) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard46))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-bicg.sv:2132: Assertion failed in %Nmain: Multiple assignment to port `add0.left'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-bicg.sv", 2132, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(__PVT___guard93) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard49))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-bicg.sv:2301: Assertion failed in %Nmain: Multiple assignment to port `j0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-bicg.sv", 2301, "");
    }
    vlSelf->__PVT__j0_write_en = ((IData)(__PVT___guard93) 
                                  | (IData)(vlSelf->__PVT___guard49));
    vlSelf->__PVT__add0_left = ((IData)(vlSelf->__PVT___guard46)
                                 ? (IData)(vlSymsp->TOP__TOP__main__i1.__PVT__out)
                                 : ((IData)(vlSelf->__PVT___guard49)
                                     ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                     : 0U));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(__PVT___guard69) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard20))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-bicg.sv:2159: Assertion failed in %Nmain: Multiple assignment to port `s_int.write_data'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-bicg.sv", 2159, "");
    }
    vlSelf->__PVT__s_int_write_en = ((IData)(__PVT___guard69) 
                                     | (IData)(vlSelf->__PVT___guard20));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard23) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard20))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-bicg.sv:2095: Assertion failed in %Nmain: Multiple assignment to port `add1.left'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-bicg.sv", 2095, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard23) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard20))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-bicg.sv:2104: Assertion failed in %Nmain: Multiple assignment to port `add1.right'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-bicg.sv", 2104, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(__PVT___guard93) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard23))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-bicg.sv:2174: Assertion failed in %Nmain: Multiple assignment to port `q_int.write_data'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-bicg.sv", 2174, "");
    }
    vlSelf->__PVT__q_int_write_en = ((IData)(__PVT___guard93) 
                                     | (IData)(vlSelf->__PVT___guard23));
}

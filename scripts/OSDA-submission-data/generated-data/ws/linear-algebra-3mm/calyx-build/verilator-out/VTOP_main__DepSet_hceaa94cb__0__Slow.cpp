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
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/B_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/C_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__main__C_int__mem.__PVT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/D_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__main__D_int__mem.__PVT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/E_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__main__E_int__mem.__PVT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/F_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__main__F_int__mem.__PVT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/G_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__main__G_int__mem.__PVT__mem)
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
    VL_WRITEMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NN(
                                                      VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                     std::string{"/B_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__mem)
                  , 0, ~0ULL);
    VL_WRITEMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NN(
                                                      VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                     std::string{"/C_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__main__C_int__mem.__PVT__mem)
                  , 0, ~0ULL);
    VL_WRITEMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NN(
                                                      VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                     std::string{"/D_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__main__D_int__mem.__PVT__mem)
                  , 0, ~0ULL);
    VL_WRITEMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NN(
                                                      VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                     std::string{"/E_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__main__E_int__mem.__PVT__mem)
                  , 0, ~0ULL);
    VL_WRITEMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NN(
                                                      VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                     std::string{"/F_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__main__F_int__mem.__PVT__mem)
                  , 0, ~0ULL);
    VL_WRITEMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NN(
                                                      VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                     std::string{"/G_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__main__G_int__mem.__PVT__mem)
                  , 0, ~0ULL);
}

VL_ATTR_COLD void VTOP_main___stl_sequent__TOP__TOP__main__0(VTOP_main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP_main___stl_sequent__TOP__TOP__main__0\n"); );
    // Init
    CData/*0:0*/ __PVT___guard10;
    CData/*0:0*/ __PVT___guard14;
    CData/*0:0*/ __PVT___guard18;
    CData/*0:0*/ __PVT___guard113;
    CData/*0:0*/ __PVT___guard116;
    CData/*0:0*/ __PVT___guard120;
    CData/*0:0*/ __PVT___guard124;
    CData/*0:0*/ __PVT___guard127;
    CData/*0:0*/ __PVT___guard131;
    CData/*0:0*/ __PVT___guard321;
    CData/*0:0*/ __PVT___guard331;
    CData/*0:0*/ __PVT___guard556;
    CData/*0:0*/ __PVT___guard564;
    // Body
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0x4565U 
                                              == (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)) 
                                             & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                            << 1U) 
                                           | ((0x4565U 
                                               != (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)) 
                                              & (IData)(vlSymsp->TOP__TOP.__PVT__go)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:2895: Assertion failed in %Nmain: Multiple assignment to port `fsm3.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 2895, "");
    }
    vlSelf->__PVT___guard215 = ((0x4565U != (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__wrapper_early_reset_static_seq_done_in 
        = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)) 
           & (IData)(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out));
    vlSelf->__PVT__signal_reg_in = (((~ (IData)(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out)) 
                                     & (0U == (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out))) 
                                    & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__early_reset_static_seq0_go_in = 
        (((2U <= (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)) 
          & (0x1722U > (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out))) 
         & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__early_reset_static_seq8_go_in = 
        (((0x1724U <= (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)) 
          & (0x2e44U > (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out))) 
         & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__early_reset_static_seq16_go_in = 
        (((0x2e46U <= (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)) 
          & (0x4566U > (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out))) 
         & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__wrapper_early_reset_static_seq_done_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__signal_reg_in))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:3083: Assertion failed in %Nmain: Multiple assignment to port `signal_reg.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 3083, "");
    }
    vlSelf->__PVT__signal_reg_write_en = ((IData)(vlSelf->__PVT__wrapper_early_reset_static_seq_done_in) 
                                          | (IData)(vlSelf->__PVT__signal_reg_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0x2e3U 
                                              != (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq0_go_in)) 
                                            << 1U) 
                                           | ((0x2e3U 
                                               == (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)) 
                                              & (IData)(vlSelf->__PVT__early_reset_static_seq0_go_in)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:2958: Assertion failed in %Nmain: Multiple assignment to port `fsm4.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 2958, "");
    }
    vlSelf->__PVT___guard264 = ((0x2e3U == (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq0_go_in));
    vlSelf->__PVT___guard267 = ((0x2e3U != (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq0_go_in));
    __PVT___guard10 = ((0x2e2U == (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)) 
                       & (IData)(vlSelf->__PVT__early_reset_static_seq0_go_in));
    vlSelf->__PVT__early_reset_static_seq1_go_in = 
        (((2U <= (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)) 
          & (0x2e2U > (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out))) 
         & (IData)(vlSelf->__PVT__early_reset_static_seq0_go_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0x2e3U 
                                              != (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq8_go_in)) 
                                            << 1U) 
                                           | ((0x2e3U 
                                               == (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)) 
                                              & (IData)(vlSelf->__PVT__early_reset_static_seq8_go_in)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:2874: Assertion failed in %Nmain: Multiple assignment to port `fsm6.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 2874, "");
    }
    vlSelf->__PVT___guard179 = ((0x2e3U == (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq8_go_in));
    vlSelf->__PVT___guard182 = ((0x2e3U != (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq8_go_in));
    __PVT___guard14 = ((0x2e2U == (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)) 
                       & (IData)(vlSelf->__PVT__early_reset_static_seq8_go_in));
    vlSelf->__PVT__early_reset_static_seq9_go_in = 
        (((2U <= (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)) 
          & (0x2e2U > (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out))) 
         & (IData)(vlSelf->__PVT__early_reset_static_seq8_go_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0x2e3U 
                                              != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq16_go_in)) 
                                            << 1U) 
                                           | ((0x2e3U 
                                               == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                              & (IData)(vlSelf->__PVT__early_reset_static_seq16_go_in)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:2862: Assertion failed in %Nmain: Multiple assignment to port `fsm.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 2862, "");
    }
    vlSelf->__PVT___guard172 = ((0x2e3U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq16_go_in));
    vlSelf->__PVT___guard175 = ((0x2e3U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq16_go_in));
    __PVT___guard18 = ((0x2e2U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                       & (IData)(vlSelf->__PVT__early_reset_static_seq16_go_in));
    vlSelf->__PVT__early_reset_static_seq17_go_in = 
        (((2U <= (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
          & (0x2e2U > (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
         & (IData)(vlSelf->__PVT__early_reset_static_seq16_go_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0x5bU 
                                              == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq1_go_in)) 
                                            << 1U) 
                                           | ((0x5bU 
                                               != (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                              & (IData)(vlSelf->__PVT__early_reset_static_seq1_go_in)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:3009: Assertion failed in %Nmain: Multiple assignment to port `fsm2.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 3009, "");
    }
    vlSelf->__PVT___guard306 = ((0x5bU != (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq1_go_in));
    __PVT___guard113 = ((0x5aU == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                        & (IData)(vlSelf->__PVT__early_reset_static_seq1_go_in));
    __PVT___guard321 = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
                        & (IData)(vlSelf->__PVT__early_reset_static_seq1_go_in));
    vlSelf->__PVT__early_reset_static_seq3_go_in = 
        (((2U <= (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out)) 
          & (0x5aU > (IData)(vlSymsp->TOP__TOP__main__fsm2.__PVT__out))) 
         & (IData)(vlSelf->__PVT__early_reset_static_seq1_go_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0x5bU 
                                              == (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq9_go_in)) 
                                            << 1U) 
                                           | ((0x5bU 
                                               != (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)) 
                                              & (IData)(vlSelf->__PVT__early_reset_static_seq9_go_in)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:2977: Assertion failed in %Nmain: Multiple assignment to port `fsm7.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 2977, "");
    }
    vlSelf->__PVT___guard285 = ((0x5bU != (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq9_go_in));
    __PVT___guard116 = ((0x5aU == (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)) 
                        & (IData)(vlSelf->__PVT__early_reset_static_seq9_go_in));
    __PVT___guard556 = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)) 
                        & (IData)(vlSelf->__PVT__early_reset_static_seq9_go_in));
    vlSelf->__PVT__early_reset_static_seq11_go_in = 
        (((2U <= (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out)) 
          & (0x5aU > (IData)(vlSymsp->TOP__TOP__main__fsm7.__PVT__out))) 
         & (IData)(vlSelf->__PVT__early_reset_static_seq9_go_in));
    vlSelf->__PVT__i0_write_en = (((((((0U == (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)) 
                                       | (0x1722U == (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out))) 
                                      | (0x2e44U == (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out))) 
                                     & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                    | (IData)(__PVT___guard10)) 
                                   | (IData)(__PVT___guard14)) 
                                  | (IData)(__PVT___guard18));
    vlSelf->__PVT___guard30 = (((IData)(__PVT___guard10) 
                                | (IData)(__PVT___guard14)) 
                               | (IData)(__PVT___guard18));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0x5bU 
                                              != (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq17_go_in)) 
                                            << 1U) 
                                           | ((0x5bU 
                                               == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                              & (IData)(vlSelf->__PVT__early_reset_static_seq17_go_in)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:2997: Assertion failed in %Nmain: Multiple assignment to port `fsm0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 2997, "");
    }
    vlSelf->__PVT___guard299 = ((0x5bU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq17_go_in));
    vlSelf->__PVT___guard302 = ((0x5bU != (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq17_go_in));
    __PVT___guard564 = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                        & (IData)(vlSelf->__PVT__early_reset_static_seq17_go_in));
    __PVT___guard120 = ((0x5aU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                        & (IData)(vlSelf->__PVT__early_reset_static_seq17_go_in));
    vlSelf->__PVT__early_reset_static_seq19_go_in = 
        (((2U <= (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
          & (0x5aU > (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
         & (IData)(vlSelf->__PVT__early_reset_static_seq17_go_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0xaU 
                                              != (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in)) 
                                            << 1U) 
                                           | ((0xaU 
                                               == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                              & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:2907: Assertion failed in %Nmain: Multiple assignment to port `fsm5.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 2907, "");
    }
    vlSelf->__PVT___guard222 = ((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    vlSelf->__PVT___guard225 = ((0xaU != (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    vlSelf->__PVT__A_int_read_en = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                    & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    vlSelf->__PVT___guard192 = ((9U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    vlSelf->__PVT___guard341 = ((IData)(__PVT___guard321) 
                                | (((7U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                    | (9U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out))) 
                                   & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in)));
    vlSelf->__PVT___guard60 = ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    __PVT___guard124 = ((2U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                        & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0xaU 
                                              != (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq11_go_in)) 
                                            << 1U) 
                                           | ((0xaU 
                                               == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                              & (IData)(vlSelf->__PVT__early_reset_static_seq11_go_in)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:2930: Assertion failed in %Nmain: Multiple assignment to port `fsm8.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 2930, "");
    }
    vlSelf->__PVT___guard240 = ((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq11_go_in));
    vlSelf->__PVT___guard243 = ((0xaU != (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq11_go_in));
    vlSelf->__PVT__C_int_read_en = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                    & (IData)(vlSelf->__PVT__early_reset_static_seq11_go_in));
    vlSelf->__PVT___guard195 = ((9U == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq11_go_in));
    vlSelf->__PVT___guard653 = ((IData)(__PVT___guard556) 
                                | (((7U == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                    | (9U == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out))) 
                                   & (IData)(vlSelf->__PVT__early_reset_static_seq11_go_in)));
    vlSelf->__PVT___guard57 = ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__early_reset_static_seq11_go_in));
    __PVT___guard127 = ((2U == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                        & (IData)(vlSelf->__PVT__early_reset_static_seq11_go_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((((0U 
                                                == (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out)) 
                                               | (0x1722U 
                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out))) 
                                              | (0x2e44U 
                                                 == (IData)(vlSymsp->TOP__TOP__main__fsm3.__PVT__out))) 
                                             & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard30))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:2807: Assertion failed in %Nmain: Multiple assignment to port `i0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 2807, "");
    }
    vlSelf->__PVT__j0_write_en = (((((((0U == (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)) 
                                       & (IData)(vlSelf->__PVT__early_reset_static_seq0_go_in)) 
                                      | (IData)(__PVT___guard113)) 
                                     | ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)) 
                                        & (IData)(vlSelf->__PVT__early_reset_static_seq8_go_in))) 
                                    | (IData)(__PVT___guard116)) 
                                   | ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                      & (IData)(vlSelf->__PVT__early_reset_static_seq16_go_in))) 
                                  | (IData)(__PVT___guard120));
    vlSelf->__PVT___guard121 = (((IData)(__PVT___guard113) 
                                 | (IData)(__PVT___guard116)) 
                                | (IData)(__PVT___guard120));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0xaU 
                                              != (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq19_go_in)) 
                                            << 1U) 
                                           | ((0xaU 
                                               == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                              & (IData)(vlSelf->__PVT__early_reset_static_seq19_go_in)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:2946: Assertion failed in %Nmain: Multiple assignment to port `fsm1.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 2946, "");
    }
    vlSelf->__PVT___guard257 = ((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq19_go_in));
    vlSelf->__PVT___guard260 = ((0xaU != (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq19_go_in));
    vlSelf->__PVT__G_int_read_en = ((7U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                    & (IData)(vlSelf->__PVT__early_reset_static_seq19_go_in));
    vlSelf->__PVT__bin_read0_0_write_en = ((((((1U 
                                                == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                               | (5U 
                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out))) 
                                              | (8U 
                                                 == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out))) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in)) 
                                            | ((((1U 
                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                                 | (5U 
                                                    == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out))) 
                                                | (8U 
                                                   == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out))) 
                                               & (IData)(vlSelf->__PVT__early_reset_static_seq11_go_in))) 
                                           | ((((1U 
                                                 == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out))) 
                                               | (8U 
                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out))) 
                                              & (IData)(vlSelf->__PVT__early_reset_static_seq19_go_in)));
    vlSelf->__PVT__mult_pipe0_go = (((((2U <= (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                       & (5U > (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out))) 
                                      & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in)) 
                                     | (((2U <= (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                         & (5U > (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out))) 
                                        & (IData)(vlSelf->__PVT__early_reset_static_seq11_go_in))) 
                                    | (((2U <= (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                        & (5U > (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out))) 
                                       & (IData)(vlSelf->__PVT__early_reset_static_seq19_go_in)));
    vlSelf->__PVT__v_0_write_en = (((((1U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                      | (6U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out))) 
                                     & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in)) 
                                    | (((1U == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                        | (6U == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out))) 
                                       & (IData)(vlSelf->__PVT__early_reset_static_seq11_go_in))) 
                                   | (((1U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                       | (6U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out))) 
                                      & (IData)(vlSelf->__PVT__early_reset_static_seq19_go_in)));
    vlSelf->__PVT___guard199 = ((9U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__early_reset_static_seq19_go_in));
    vlSelf->__PVT___guard74 = ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__early_reset_static_seq19_go_in));
    __PVT___guard131 = ((2U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                        & (IData)(vlSelf->__PVT__early_reset_static_seq19_go_in));
    __PVT___guard331 = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                        & (IData)(vlSelf->__PVT__early_reset_static_seq19_go_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(__PVT___guard321) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard192))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:3042: Assertion failed in %Nmain: Multiple assignment to port `E_int.write_data'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 3042, "");
    }
    vlSelf->__PVT__E_int_write_en = ((IData)(__PVT___guard321) 
                                     | (IData)(vlSelf->__PVT___guard192));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(__PVT___guard556) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard195))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:3166: Assertion failed in %Nmain: Multiple assignment to port `F_int.write_data'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 3166, "");
    }
    vlSelf->__PVT__F_int_write_en = ((IData)(__PVT___guard556) 
                                     | (IData)(vlSelf->__PVT___guard195));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((((0U 
                                                == (IData)(vlSymsp->TOP__TOP__main__fsm4.__PVT__out)) 
                                               & (IData)(vlSelf->__PVT__early_reset_static_seq0_go_in)) 
                                              | ((0U 
                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm6.__PVT__out)) 
                                                 & (IData)(vlSelf->__PVT__early_reset_static_seq8_go_in))) 
                                             | ((0U 
                                                 == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                & (IData)(vlSelf->__PVT__early_reset_static_seq16_go_in))) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard121))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:3112: Assertion failed in %Nmain: Multiple assignment to port `j0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 3112, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(__PVT___guard564) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard199))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:3140: Assertion failed in %Nmain: Multiple assignment to port `G_int.write_data'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 3140, "");
    }
    vlSelf->__PVT__G_int_write_en = ((IData)(__PVT___guard564) 
                                     | (IData)(vlSelf->__PVT___guard199));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard74) 
                                            << 3U) 
                                           | ((((((6U 
                                                   == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                                  & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in)) 
                                                 | ((6U 
                                                     == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                                    & (IData)(vlSelf->__PVT__early_reset_static_seq11_go_in))) 
                                                | ((6U 
                                                    == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                                   & (IData)(vlSelf->__PVT__early_reset_static_seq19_go_in))) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT___guard60) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT___guard57))))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:2821: Assertion failed in %Nmain: Multiple assignment to port `v_0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 2821, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((8U == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__early_reset_static_seq11_go_in)) 
                                            << 5U) 
                                           | ((((8U 
                                                 == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                                & (IData)(vlSelf->__PVT__early_reset_static_seq19_go_in)) 
                                               << 4U) 
                                              | ((((((5U 
                                                      == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                                     & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in)) 
                                                    | ((5U 
                                                        == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                                       & (IData)(vlSelf->__PVT__early_reset_static_seq11_go_in))) 
                                                   | ((5U 
                                                       == (IData)(vlSymsp->TOP__TOP__main__fsm1.__PVT__out)) 
                                                      & (IData)(vlSelf->__PVT__early_reset_static_seq19_go_in))) 
                                                  << 3U) 
                                                 | (((((8U 
                                                        == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                                       & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in)) 
                                                      | (IData)(vlSelf->__PVT___guard74)) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__PVT___guard57) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__PVT___guard60))))))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:3100: Assertion failed in %Nmain: Multiple assignment to port `bin_read0_0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 3100, "");
    }
    vlSelf->__PVT__k0_write_en = ((((((IData)(__PVT___guard321) 
                                      | (IData)(__PVT___guard124)) 
                                     | (IData)(__PVT___guard556)) 
                                    | (IData)(__PVT___guard127)) 
                                   | (IData)(__PVT___guard564)) 
                                  | (IData)(__PVT___guard131));
    vlSelf->__PVT___guard132 = (((IData)(__PVT___guard124) 
                                 | (IData)(__PVT___guard127)) 
                                | (IData)(__PVT___guard131));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(__PVT___guard331) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard341))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:3051: Assertion failed in %Nmain: Multiple assignment to port `E_int.addr1'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 3051, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(__PVT___guard331) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard653))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:3156: Assertion failed in %Nmain: Multiple assignment to port `F_int.addr0'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 3156, "");
    }
    vlSelf->__PVT__E_int_read_en = (((7U == (IData)(vlSymsp->TOP__TOP__main__fsm5.__PVT__out)) 
                                     & (IData)(vlSelf->__PVT__early_reset_static_seq3_go_in)) 
                                    | (IData)(__PVT___guard331));
    vlSelf->__PVT__F_int_read_en = (((7U == (IData)(vlSymsp->TOP__TOP__main__fsm8.__PVT__out)) 
                                     & (IData)(vlSelf->__PVT__early_reset_static_seq11_go_in)) 
                                    | (IData)(__PVT___guard331));
    vlSelf->__VdfgTmp_h5f29b700__0 = ((IData)(__PVT___guard331)
                                       ? (IData)(vlSymsp->TOP__TOP__main__k0.__PVT__out)
                                       : 0U);
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard132) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT___guard121) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT___guard30)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:2848: Assertion failed in %Nmain: Multiple assignment to port `add1.left'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 2848, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((((IData)(__PVT___guard321) 
                                              | (IData)(__PVT___guard556)) 
                                             | (IData)(__PVT___guard564)) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard132))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-3mm.sv:3124: Assertion failed in %Nmain: Multiple assignment to port `k0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-3mm.sv", 3124, "");
    }
    vlSelf->__PVT__add1_left = ((IData)(vlSelf->__PVT___guard30)
                                 ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                 : ((IData)(vlSelf->__PVT___guard121)
                                     ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                     : ((IData)(vlSelf->__PVT___guard132)
                                         ? (IData)(vlSymsp->TOP__TOP__main__k0.__PVT__out)
                                         : 0U)));
}

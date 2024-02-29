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
    VL_READMEM_N(true, 32, 96, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/B_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 96, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/C_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__main__C_int__mem.__PVT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 1, 0, VL_CVT_PACK_STR_NN(
                                                    VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                   std::string{"/alpha_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__main__alpha_int.__PVT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 1, 0, VL_CVT_PACK_STR_NN(
                                                    VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                   std::string{"/beta_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__main__beta_int.__PVT__mem)
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
    VL_WRITEMEM_N(true, 32, 96, 0, VL_CVT_PACK_STR_NN(
                                                      VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                     std::string{"/B_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__main__B_int__mem.__PVT__mem)
                  , 0, ~0ULL);
    VL_WRITEMEM_N(true, 32, 96, 0, VL_CVT_PACK_STR_NN(
                                                      VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                     std::string{"/C_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__main__C_int__mem.__PVT__mem)
                  , 0, ~0ULL);
    VL_WRITEMEM_N(true, 32, 1, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/alpha_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__main__alpha_int.__PVT__mem)
                  , 0, ~0ULL);
    VL_WRITEMEM_N(true, 32, 1, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/beta_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__main__beta_int.__PVT__mem)
                  , 0, ~0ULL);
}

VL_ATTR_COLD void VTOP_main___stl_sequent__TOP__TOP__main__0(VTOP_main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP_main___stl_sequent__TOP__TOP__main__0\n"); );
    // Init
    CData/*0:0*/ __PVT___guard553;
    CData/*0:0*/ __PVT___guard698;
    CData/*0:0*/ __PVT___guard705;
    CData/*0:0*/ __PVT___guard712;
    CData/*0:0*/ __PVT___guard719;
    CData/*0:0*/ __PVT___guard726;
    CData/*0:0*/ __PVT___guard733;
    // Body
    vlSelf->__PVT__invoke2_go_in = (((~ (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__done)) 
                                     & (2U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
                                    & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard825 = ((9U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                | (0x11U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)));
    vlSelf->__PVT__invoke33_go_in = (((~ (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__done)) 
                                      & (9U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
                                     & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard580 = ((0xeU <= (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (0x11U > (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)));
    vlSelf->__PVT___guard590 = ((0xdU <= (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (0x10U > (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)));
    vlSelf->__PVT___guard596 = ((0xaU <= (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (0xdU > (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)));
    vlSelf->__PVT___guard577 = ((6U <= (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (9U > (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)));
    vlSelf->__PVT___guard567 = ((2U <= (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (5U > (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)));
    vlSelf->__PVT___guard357 = (((2U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__done)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard421 = (((9U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__done)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard696 = ((~ (IData)(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out)) 
                                & (0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)));
    vlSelf->__PVT__while_wrapper_early_reset_static_seq_done_in 
        = ((~ (IData)(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__out)) 
           & (0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)));
    vlSelf->__PVT__wrapper_early_reset_static_par_done_in 
        = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
           & (IData)(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out));
    vlSelf->__PVT___guard606 = ((IData)(vlSelf->__PVT___guard567) 
                                | (IData)(vlSelf->__PVT___guard577));
    vlSelf->__PVT___guard391 = (((6U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_done_in)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in 
        = (((~ (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_done_in)) 
            & (6U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
           & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard379 = (((4U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard385 = (((5U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard397 = (((7U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard335 = (((0U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__wrapper_early_reset_cond20_go_in 
        = (((~ (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in)) 
            & (5U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
           & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__wrapper_early_reset_cond00_go_in 
        = ((((~ (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in)) 
             & (1U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
            | ((~ (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in)) 
               & (0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)))) 
           & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__wrapper_early_reset_cond10_go_in 
        = ((((~ (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in)) 
             & (3U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
            | ((~ (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in)) 
               & (8U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)))) 
           & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__wrapper_early_reset_static_par_go_in 
        = (((~ (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in)) 
            & (0U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
           & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__wrapper_early_reset_static_par0_go_in 
        = (((~ (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in)) 
            & (4U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
           & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard340 = ((IData)(vlSymsp->TOP__TOP__main__comb_reg.__PVT__out) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in));
    vlSelf->__PVT___guard362 = ((IData)(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__out) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in));
    vlSelf->__PVT___guard403 = ((~ (IData)(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in));
    vlSelf->__PVT___guard427 = ((~ (IData)(vlSymsp->TOP__TOP__main__comb_reg.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in));
    vlSelf->__PVT__wrapper_early_reset_static_par4_go_in 
        = (((~ (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in)) 
            & (7U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
           & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard99 = ((0x12U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard59 = (((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                | (0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                               & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    __PVT___guard553 = ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                        & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard574 = ((IData)(vlSelf->__PVT___guard567) 
                                & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard121 = ((0x12U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard192 = ((0xdU == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard212 = ((0x11U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard14 = (((0xbU == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                | (0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                               & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard38 = ((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard93 = ((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in));
    __PVT___guard726 = ((IData)(vlSelf->__PVT___guard696) 
                        & (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in));
    vlSelf->__PVT___guard96 = ((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in));
    __PVT___guard705 = ((IData)(vlSelf->__PVT___guard696) 
                        & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3336: Assertion failed in %Nmain: Multiple assignment to port `le0.left'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3336, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3345: Assertion failed in %Nmain: Multiple assignment to port `le0.right'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3345, "");
    }
    vlSelf->__PVT___guard138 = ((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in));
    __PVT___guard712 = ((IData)(vlSelf->__PVT___guard696) 
                        & (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__wrapper_early_reset_static_par_go_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__invoke33_go_in))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3053: Assertion failed in %Nmain: Multiple assignment to port `i0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3053, "");
    }
    vlSelf->__PVT__i0_write_en = ((IData)(vlSelf->__PVT__wrapper_early_reset_static_par_go_in) 
                                  | (IData)(vlSelf->__PVT__invoke33_go_in));
    vlSelf->__PVT___guard129 = ((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_go_in));
    __PVT___guard698 = ((IData)(vlSelf->__PVT___guard696) 
                        & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_go_in));
    vlSelf->__PVT___guard132 = ((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par0_go_in));
    vlSelf->__PVT___guard118 = ((((((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                    & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in)) 
                                   | ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                      & (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in))) 
                                  | ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                     & (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in))) 
                                 | ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                    & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_go_in))) 
                                | ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                   & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par0_go_in)));
    vlSelf->__PVT___guard669 = ((IData)(vlSelf->__PVT__wrapper_early_reset_static_par0_go_in) 
                                | (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_go_in));
    __PVT___guard719 = ((IData)(vlSelf->__PVT___guard696) 
                        & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par0_go_in));
    vlSelf->__PVT___guard343 = (((1U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard340)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard351 = (((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard340)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard365 = (((3U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard362)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard373 = (((8U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard362)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard406 = (((3U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard403)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard415 = (((8U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard403)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard439 = (((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard427)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard430 = (((1U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard427)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard135 = ((0x13U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in));
    vlSelf->__PVT__A_int_read0_0_write_en = ((((((9U 
                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                 | (0xcU 
                                                    == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                                | (0x10U 
                                                   == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                               | (1U 
                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                              & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                             | (((0xdU 
                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                 | (1U 
                                                    == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in)));
    vlSelf->__PVT__B_int_read0_0_write_en = (((((5U 
                                                 == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                | (0xcU 
                                                   == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                               | (1U 
                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                              & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                             | (((IData)(vlSelf->__PVT___guard825) 
                                                 | (1U 
                                                    == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in)));
    vlSelf->__PVT__mult_pipe0_go = ((((IData)(vlSelf->__PVT___guard606) 
                                      | (IData)(vlSelf->__PVT___guard590)) 
                                     & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                    | ((((IData)(vlSelf->__PVT___guard606) 
                                         | (IData)(vlSelf->__PVT___guard596)) 
                                        | (IData)(vlSelf->__PVT___guard580)) 
                                       & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in)));
    vlSelf->__PVT__fsm_write_en = (((((((IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in) 
                                        | (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in)) 
                                       | (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in)) 
                                      | (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_go_in)) 
                                     | (IData)(vlSelf->__PVT__wrapper_early_reset_static_par0_go_in)) 
                                    | (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                   | (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in));
    vlSelf->__PVT___guard54 = (((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                | (0x12U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                               & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in));
    vlSelf->__PVT___guard569 = ((IData)(vlSelf->__PVT___guard567) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in));
    vlSelf->__PVT___guard599 = ((((IData)(vlSelf->__PVT___guard577) 
                                  | (IData)(vlSelf->__PVT___guard590)) 
                                 & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                | ((IData)(vlSelf->__PVT___guard596) 
                                   & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in)));
    __PVT___guard733 = ((IData)(vlSelf->__PVT___guard696) 
                        & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in));
    vlSelf->__PVT__beta_int_read0_0_write_en = ((1U 
                                                 == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in));
    vlSelf->__PVT___guard41 = ((0x12U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in));
    vlSelf->__PVT___guard125 = ((0x13U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in));
    vlSelf->__PVT__beta_int_read_en = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                       & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in));
    vlSelf->__PVT__C_i_j_0_write_en = ((IData)(__PVT___guard553) 
                                       | (((1U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                           | (5U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                          & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in)));
    vlSelf->__PVT__comb_reg1_write_en = ((IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in) 
                                         | (IData)(vlSelf->__PVT___guard121));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__wrapper_early_reset_static_par0_go_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard192))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3223: Assertion failed in %Nmain: Multiple assignment to port `k_0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3223, "");
    }
    vlSelf->__PVT__k_0_write_en = ((IData)(vlSelf->__PVT__wrapper_early_reset_static_par0_go_in) 
                                   | (IData)(vlSelf->__PVT___guard192));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard212) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard669))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3318: Assertion failed in %Nmain: Multiple assignment to port `temp2_0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3318, "");
    }
    vlSelf->__PVT__temp2_0_write_en = ((IData)(vlSelf->__PVT___guard669) 
                                       | (IData)(vlSelf->__PVT___guard212));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((IData)(vlSelf->__PVT___guard430) 
                                             | (IData)(vlSelf->__PVT___guard439)) 
                                            << 0xbU) 
                                           | (((IData)(vlSelf->__PVT___guard335) 
                                               << 0xaU) 
                                              | (((IData)(vlSelf->__PVT___guard397) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->__PVT___guard385) 
                                                     << 8U) 
                                                    | ((((IData)(vlSelf->__PVT___guard343) 
                                                         | (IData)(vlSelf->__PVT___guard351)) 
                                                        << 7U) 
                                                       | (((IData)(vlSelf->__PVT___guard391) 
                                                           << 6U) 
                                                          | (((0xbU 
                                                               == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->__PVT___guard421) 
                                                                 << 4U) 
                                                                | ((((IData)(vlSelf->__PVT___guard406) 
                                                                     | (IData)(vlSelf->__PVT___guard415)) 
                                                                    << 3U) 
                                                                   | ((((IData)(vlSelf->__PVT___guard365) 
                                                                        | (IData)(vlSelf->__PVT___guard373)) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->__PVT___guard379) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->__PVT___guard357))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3265: Assertion failed in %Nmain: Multiple assignment to port `fsm0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3265, "");
    }
    vlSelf->__PVT__fsm0_in = ((IData)(vlSelf->__PVT___guard357)
                               ? 3U : ((IData)(vlSelf->__PVT___guard379)
                                        ? 5U : (((IData)(vlSelf->__PVT___guard365) 
                                                 | (IData)(vlSelf->__PVT___guard373))
                                                 ? 4U
                                                 : 
                                                (((IData)(vlSelf->__PVT___guard406) 
                                                  | (IData)(vlSelf->__PVT___guard415))
                                                  ? 9U
                                                  : 
                                                 ((IData)(vlSelf->__PVT___guard421)
                                                   ? 0xaU
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->__PVT___guard391)
                                                     ? 7U
                                                     : 
                                                    (((IData)(vlSelf->__PVT___guard343) 
                                                      | (IData)(vlSelf->__PVT___guard351))
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSelf->__PVT___guard385)
                                                       ? 6U
                                                       : 
                                                      ((IData)(vlSelf->__PVT___guard397)
                                                        ? 8U
                                                        : 
                                                       ((IData)(vlSelf->__PVT___guard335)
                                                         ? 1U
                                                         : 
                                                        (((IData)(vlSelf->__PVT___guard430) 
                                                          | (IData)(vlSelf->__PVT___guard439))
                                                          ? 0xbU
                                                          : 0U))))))))))));
    vlSelf->__PVT__fsm0_write_en = ((((((((((((((((0xbU 
                                                   == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                                  | (IData)(vlSelf->__PVT___guard335)) 
                                                 | (IData)(vlSelf->__PVT___guard343)) 
                                                | (IData)(vlSelf->__PVT___guard351)) 
                                               | (IData)(vlSelf->__PVT___guard357)) 
                                              | (IData)(vlSelf->__PVT___guard365)) 
                                             | (IData)(vlSelf->__PVT___guard373)) 
                                            | (IData)(vlSelf->__PVT___guard379)) 
                                           | (IData)(vlSelf->__PVT___guard385)) 
                                          | (IData)(vlSelf->__PVT___guard391)) 
                                         | (IData)(vlSelf->__PVT___guard397)) 
                                        | (IData)(vlSelf->__PVT___guard406)) 
                                       | (IData)(vlSelf->__PVT___guard415)) 
                                      | (IData)(vlSelf->__PVT___guard421)) 
                                     | (IData)(vlSelf->__PVT___guard430)) 
                                    | (IData)(vlSelf->__PVT___guard439));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard59) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard54))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3086: Assertion failed in %Nmain: Multiple assignment to port `C_int.addr0'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3086, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard599) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->__PVT___guard574) 
                                                | (((IData)(vlSelf->__PVT___guard577) 
                                                    | (IData)(vlSelf->__PVT___guard580)) 
                                                   & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in))) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT___guard569)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3293: Assertion failed in %Nmain: Multiple assignment to port `mult_pipe0.left'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3293, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard569) 
                                            << 3U) 
                                           | ((((IData)(vlSelf->__PVT___guard574) 
                                                | ((IData)(vlSelf->__PVT___guard577) 
                                                   & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in))) 
                                               << 2U) 
                                              | ((((IData)(vlSelf->__PVT___guard580) 
                                                   & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in)) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT___guard599))))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3306: Assertion failed in %Nmain: Multiple assignment to port `mult_pipe0.right'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3306, "");
    }
    vlSelf->__PVT__signal_reg_write_en = (((((((IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in) 
                                               | (IData)(__PVT___guard698)) 
                                              | (IData)(__PVT___guard705)) 
                                             | (IData)(__PVT___guard712)) 
                                            | (IData)(__PVT___guard719)) 
                                           | (IData)(__PVT___guard726)) 
                                          | (IData)(__PVT___guard733));
    vlSelf->__PVT__signal_reg_in = ((((((IData)(__PVT___guard698) 
                                        | (IData)(__PVT___guard705)) 
                                       | (IData)(__PVT___guard712)) 
                                      | (IData)(__PVT___guard719)) 
                                     | (IData)(__PVT___guard726)) 
                                    | (IData)(__PVT___guard733));
    vlSelf->__PVT__alpha_int_read0_0_write_en = ((IData)(__PVT___guard553) 
                                                 | (IData)(vlSelf->__PVT__beta_int_read0_0_write_en));
    vlSelf->__PVT___guard179 = ((((0xcU == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                  | (1U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                 & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                | (IData)(vlSelf->__PVT__beta_int_read0_0_write_en));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard41) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard38))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3096: Assertion failed in %Nmain: Multiple assignment to port `C_int.write_data'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3096, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard41) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT___guard212) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT___guard38)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3173: Assertion failed in %Nmain: Multiple assignment to port `add3.left'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3173, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard38) 
                                            << 1U) 
                                           | ((IData)(vlSelf->__PVT___guard212) 
                                              | (IData)(vlSelf->__PVT___guard41)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3182: Assertion failed in %Nmain: Multiple assignment to port `add3.right'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3182, "");
    }
    vlSelf->__PVT__C_int_write_en = ((IData)(vlSelf->__PVT___guard38) 
                                     | (IData)(vlSelf->__PVT___guard41));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__invoke2_go_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard125))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3392: Assertion failed in %Nmain: Multiple assignment to port `j0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3392, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard125) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT___guard192) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__invoke33_go_in)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3156: Assertion failed in %Nmain: Multiple assignment to port `add2.left'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3156, "");
    }
    vlSelf->__PVT__j0_write_en = ((IData)(vlSelf->__PVT__invoke2_go_in) 
                                  | (IData)(vlSelf->__PVT___guard125));
    vlSelf->__PVT__add2_left = ((IData)(vlSelf->__PVT__invoke33_go_in)
                                 ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                 : ((IData)(vlSelf->__PVT___guard192)
                                     ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                     : ((IData)(vlSelf->__PVT___guard125)
                                         ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                         : 0U)));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in)) 
                                            << 7U) 
                                           | ((((0x13U 
                                                 != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in)) 
                                               << 6U) 
                                              | ((((0U 
                                                    != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                   & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par0_go_in)) 
                                                  << 5U) 
                                                 | ((((0U 
                                                       != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                      & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_go_in)) 
                                                     << 4U) 
                                                    | ((((((((((0U 
                                                                == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                               & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in)) 
                                                              | ((0U 
                                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                                 & (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in))) 
                                                             | ((0U 
                                                                 == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                                & (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in))) 
                                                            | ((0U 
                                                                == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                               & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par_go_in))) 
                                                           | ((0U 
                                                               == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                              & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par0_go_in))) 
                                                          | (IData)(vlSelf->__PVT___guard121)) 
                                                         | (IData)(vlSelf->__PVT___guard125)) 
                                                        << 3U) 
                                                       | ((((0x12U 
                                                             != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                            & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                                           << 2U) 
                                                          | ((((0U 
                                                                != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                               & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in)) 
                                                              << 1U) 
                                                             | ((0U 
                                                                 != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                                & (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3116: Assertion failed in %Nmain: Multiple assignment to port `fsm.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3116, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard14) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__beta_int_read_en))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3074: Assertion failed in %Nmain: Multiple assignment to port `A_int.addr1'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3074, "");
    }
    vlSelf->__PVT__A_int_read_en = ((IData)(vlSelf->__PVT___guard14) 
                                    | (IData)(vlSelf->__PVT__beta_int_read_en));
    vlSelf->__PVT__C_int_read_en = (((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                     & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                    | (IData)(vlSelf->__PVT__beta_int_read_en));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__wrapper_early_reset_static_par_done_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__signal_reg_in))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3357: Assertion failed in %Nmain: Multiple assignment to port `signal_reg.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3357, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((5U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in)) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__alpha_int_read0_0_write_en))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3409: Assertion failed in %Nmain: Multiple assignment to port `C_i_j_0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3409, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((((9U 
                                                == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                               | (0x10U 
                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                              & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                             | ((0xdU 
                                                 == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in))) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard179))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3146: Assertion failed in %Nmain: Multiple assignment to port `A_int_read0_0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3146, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((((5U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                              & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                             | ((IData)(vlSelf->__PVT___guard825) 
                                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par4_go_in))) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard179))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3380: Assertion failed in %Nmain: Multiple assignment to port `B_int_read0_0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3380, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0xbU 
                                              == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__C_int_read_en))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-symm.sv:3209: Assertion failed in %Nmain: Multiple assignment to port `B_int.addr0'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-symm.sv", 3209, "");
    }
}

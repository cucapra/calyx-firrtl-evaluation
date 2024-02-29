// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_main.h"

VL_INLINE_OPT void VTOP_main___act_sequent__TOP__TOP__main__0(VTOP_main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP_main___act_sequent__TOP__TOP__main__0\n"); );
    // Init
    CData/*0:0*/ __PVT___guard76;
    CData/*0:0*/ __PVT___guard79;
    CData/*0:0*/ __PVT___guard509;
    CData/*0:0*/ __PVT___guard516;
    CData/*0:0*/ __PVT___guard523;
    CData/*0:0*/ __PVT___guard530;
    // Body
    vlSelf->__PVT__invoke0_go_in = (((~ (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__done)) 
                                     & (0U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
                                    & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__invoke1_go_in = (((~ (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__done)) 
                                     & (2U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
                                    & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__invoke2_go_in = (((~ (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__done)) 
                                     & (4U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
                                    & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__invoke14_go_in = (((~ (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__done)) 
                                      & (9U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
                                     & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__wrapper_early_reset_cond20_go_in 
        = (((~ (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in)) 
            & (5U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
           & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard262 = (((2U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__done)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard284 = (((4U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__done)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard326 = (((9U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__done)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard296 = (((6U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_done_in)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard302 = (((7U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard290 = (((5U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard240 = (((0U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__done)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard344 = (((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard332)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard248 = (((1U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard245)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard256 = (((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard245)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard270 = (((3U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard267)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard278 = (((8U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard267)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard311 = (((3U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard308)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard320 = (((8U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard308)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard335 = (((1U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard332)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__wrapper_early_reset_cond00_go_in 
        = ((((~ (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in)) 
             & (1U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
            | ((~ (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in)) 
               & (0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)))) 
           & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__wrapper_early_reset_cond10_go_in 
        = ((((~ (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in)) 
             & (3U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
            | ((~ (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in)) 
               & (8U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)))) 
           & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in 
        = (((~ (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_done_in)) 
            & (6U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
           & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__wrapper_early_reset_static_par1_go_in 
        = (((~ (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in)) 
            & (7U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
           & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__invoke0_go_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__invoke14_go_in))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2599: Assertion failed in %Nmain: Multiple assignment to port `i0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2599, "");
    }
    vlSelf->__PVT__i0_write_en = ((IData)(vlSelf->__PVT__invoke0_go_in) 
                                  | (IData)(vlSelf->__PVT__invoke14_go_in));
    __PVT___guard76 = ((IData)(vlSelf->__PVT__invoke14_go_in) 
                       | (IData)(vlSelf->__PVT__invoke2_go_in));
    vlSelf->__PVT___guard37 = ((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in));
    __PVT___guard523 = ((IData)(vlSelf->__PVT___guard507) 
                        & (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((IData)(vlSelf->__PVT___guard335) 
                                             | (IData)(vlSelf->__PVT___guard344)) 
                                            << 0xbU) 
                                           | (((IData)(vlSelf->__PVT___guard240) 
                                               << 0xaU) 
                                              | (((IData)(vlSelf->__PVT___guard290) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->__PVT___guard302) 
                                                     << 8U) 
                                                    | ((((IData)(vlSelf->__PVT___guard248) 
                                                         | (IData)(vlSelf->__PVT___guard256)) 
                                                        << 7U) 
                                                       | (((IData)(vlSelf->__PVT___guard296) 
                                                           << 6U) 
                                                          | (((0xbU 
                                                               == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->__PVT___guard326) 
                                                                 << 4U) 
                                                                | ((((IData)(vlSelf->__PVT___guard270) 
                                                                     | (IData)(vlSelf->__PVT___guard278)) 
                                                                    << 3U) 
                                                                   | ((((IData)(vlSelf->__PVT___guard311) 
                                                                        | (IData)(vlSelf->__PVT___guard320)) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->__PVT___guard284) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->__PVT___guard262))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2750: Assertion failed in %Nmain: Multiple assignment to port `fsm0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2750, "");
    }
    vlSelf->__PVT__fsm0_in = ((IData)(vlSelf->__PVT___guard262)
                               ? 3U : ((IData)(vlSelf->__PVT___guard284)
                                        ? 5U : (((IData)(vlSelf->__PVT___guard311) 
                                                 | (IData)(vlSelf->__PVT___guard320))
                                                 ? 9U
                                                 : 
                                                (((IData)(vlSelf->__PVT___guard270) 
                                                  | (IData)(vlSelf->__PVT___guard278))
                                                  ? 4U
                                                  : 
                                                 ((IData)(vlSelf->__PVT___guard326)
                                                   ? 0xaU
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->__PVT___guard296)
                                                     ? 7U
                                                     : 
                                                    (((IData)(vlSelf->__PVT___guard248) 
                                                      | (IData)(vlSelf->__PVT___guard256))
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSelf->__PVT___guard302)
                                                       ? 8U
                                                       : 
                                                      ((IData)(vlSelf->__PVT___guard290)
                                                        ? 6U
                                                        : 
                                                       ((IData)(vlSelf->__PVT___guard240)
                                                         ? 1U
                                                         : 
                                                        (((IData)(vlSelf->__PVT___guard335) 
                                                          | (IData)(vlSelf->__PVT___guard344))
                                                          ? 0xbU
                                                          : 0U))))))))))));
    vlSelf->__PVT__fsm0_write_en = ((((((((((((((((0xbU 
                                                   == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                                  | (IData)(vlSelf->__PVT___guard240)) 
                                                 | (IData)(vlSelf->__PVT___guard248)) 
                                                | (IData)(vlSelf->__PVT___guard256)) 
                                               | (IData)(vlSelf->__PVT___guard262)) 
                                              | (IData)(vlSelf->__PVT___guard270)) 
                                             | (IData)(vlSelf->__PVT___guard278)) 
                                            | (IData)(vlSelf->__PVT___guard284)) 
                                           | (IData)(vlSelf->__PVT___guard290)) 
                                          | (IData)(vlSelf->__PVT___guard296)) 
                                         | (IData)(vlSelf->__PVT___guard302)) 
                                        | (IData)(vlSelf->__PVT___guard311)) 
                                       | (IData)(vlSelf->__PVT___guard320)) 
                                      | (IData)(vlSelf->__PVT___guard326)) 
                                     | (IData)(vlSelf->__PVT___guard335)) 
                                    | (IData)(vlSelf->__PVT___guard344));
    vlSelf->__PVT___guard40 = ((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in));
    __PVT___guard509 = ((IData)(vlSelf->__PVT___guard507) 
                        & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2800: Assertion failed in %Nmain: Multiple assignment to port `le0.left'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2800, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2809: Assertion failed in %Nmain: Multiple assignment to port `le0.right'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2809, "");
    }
    vlSelf->__PVT___guard68 = ((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in));
    vlSelf->__PVT___guard51 = ((((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in)) 
                                | ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                   & (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in))) 
                               | ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                  & (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in)));
    __PVT___guard516 = ((IData)(vlSelf->__PVT___guard507) 
                        & (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in));
    vlSelf->__PVT__B_k_j_0_write_en = ((3U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                       & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard62 = ((9U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT__A_int_read_en = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                    & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard21 = ((8U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard458 = (((4U <= (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                 & (7U > (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard113 = ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard54 = ((9U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    __PVT___guard79 = ((4U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                       & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard65 = ((7U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    vlSelf->__PVT__A_int_read0_0_write_en = ((((7U 
                                                == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                               | (1U 
                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                              & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                             | (((1U 
                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                 | (5U 
                                                    == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in)));
    vlSelf->__PVT__fsm_write_en = (((((IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in) 
                                      | (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in)) 
                                     | (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in)) 
                                    | (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                   | (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    vlSelf->__PVT___guard162 = ((6U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    vlSelf->__PVT___guard463 = (((2U <= (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                 & (5U > (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    vlSelf->__PVT__alpha_int_read_en = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                        & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    vlSelf->__PVT___guard116 = ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    vlSelf->__PVT___guard182 = (((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                 | (6U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    __PVT___guard530 = ((IData)(vlSelf->__PVT___guard507) 
                        & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    vlSelf->__PVT___guard58 = ((7U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    vlSelf->__PVT__comb_reg1_write_en = ((IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in) 
                                         | (IData)(vlSelf->__PVT___guard54));
    vlSelf->__PVT__k_0_write_en = ((IData)(vlSelf->__PVT__invoke2_go_in) 
                                   | (IData)(__PVT___guard79));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard162) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard21))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2704: Assertion failed in %Nmain: Multiple assignment to port `B_int.write_data'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2704, "");
    }
    vlSelf->__PVT__B_int_write_en = ((IData)(vlSelf->__PVT___guard21) 
                                     | (IData)(vlSelf->__PVT___guard162));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard463) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard458))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2770: Assertion failed in %Nmain: Multiple assignment to port `mult_pipe0.left'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2770, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard458) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard463))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2781: Assertion failed in %Nmain: Multiple assignment to port `mult_pipe0.right'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2781, "");
    }
    vlSelf->__PVT__mult_pipe0_go = ((IData)(vlSelf->__PVT___guard458) 
                                    | (IData)(vlSelf->__PVT___guard463));
    vlSelf->__PVT__B_int_read_en = (((IData)(vlSelf->__PVT___guard166) 
                                     & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                    | (IData)(vlSelf->__PVT__alpha_int_read_en));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard116) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard113))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2834: Assertion failed in %Nmain: Multiple assignment to port `B_i_j_0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2834, "");
    }
    vlSelf->__PVT__B_i_j_0_write_en = ((IData)(vlSelf->__PVT___guard113) 
                                       | (IData)(vlSelf->__PVT___guard116));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((((7U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                              & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                             | ((5U 
                                                 == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in))) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT___guard116) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT___guard113)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2664: Assertion failed in %Nmain: Multiple assignment to port `A_int_read0_0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2664, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((2U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                            << 1U) 
                                           | ((((0U 
                                                 == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                | (8U 
                                                   == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                               & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                              | (IData)(vlSelf->__PVT___guard182)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2694: Assertion failed in %Nmain: Multiple assignment to port `B_int.addr0'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2694, "");
    }
    vlSelf->__PVT__signal_reg_write_en = (((((IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in) 
                                             | (IData)(__PVT___guard509)) 
                                            | (IData)(__PVT___guard516)) 
                                           | (IData)(__PVT___guard523)) 
                                          | (IData)(__PVT___guard530));
    vlSelf->__PVT__signal_reg_in = ((((IData)(__PVT___guard509) 
                                      | (IData)(__PVT___guard516)) 
                                     | (IData)(__PVT___guard523)) 
                                    | (IData)(__PVT___guard530));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__invoke1_go_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard58))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2849: Assertion failed in %Nmain: Multiple assignment to port `j0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2849, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard58) 
                                            << 2U) 
                                           | (((IData)(__PVT___guard79) 
                                               << 1U) 
                                              | (IData)(__PVT___guard76)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2649: Assertion failed in %Nmain: Multiple assignment to port `add0.left'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2649, "");
    }
    vlSelf->__PVT__j0_write_en = ((IData)(vlSelf->__PVT__invoke1_go_in) 
                                  | (IData)(vlSelf->__PVT___guard58));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in)) 
                                            << 5U) 
                                           | ((((7U 
                                                 != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in)) 
                                               << 4U) 
                                              | ((((9U 
                                                    != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                   & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                                  << 3U) 
                                                 | ((((((((0U 
                                                           == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                          & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in)) 
                                                         | ((0U 
                                                             == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                            & (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in))) 
                                                        | ((0U 
                                                            == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                           & (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in))) 
                                                       | (IData)(vlSelf->__PVT___guard54)) 
                                                      | (IData)(vlSelf->__PVT___guard58)) 
                                                     << 2U) 
                                                    | ((((0U 
                                                          != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                         & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in)) 
                                                        << 1U) 
                                                       | ((0U 
                                                           != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                          & (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in)))))))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2631: Assertion failed in %Nmain: Multiple assignment to port `fsm.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2631, "");
    }
    vlSelf->__PVT__add0_left = ((IData)(__PVT___guard76)
                                 ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                 : ((IData)(__PVT___guard79)
                                     ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                     : ((IData)(vlSelf->__PVT___guard58)
                                         ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                         : 0U)));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__signal_reg_in))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2821: Assertion failed in %Nmain: Multiple assignment to port `signal_reg.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2821, "");
    }
}

VL_INLINE_OPT void VTOP_main___nba_sequent__TOP__TOP__main__0(VTOP_main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP_main___nba_sequent__TOP__TOP__main__0\n"); );
    // Body
    vlSelf->__PVT___guard166 = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                | (2U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)));
    vlSelf->__PVT__while_wrapper_early_reset_static_seq_done_in 
        = ((~ (IData)(vlSymsp->TOP__TOP__main__comb_reg1.__PVT__out)) 
           & (0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)));
    vlSelf->__PVT___guard507 = ((~ (IData)(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out)) 
                                & (0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)));
    vlSelf->__PVT__wrapper_early_reset_cond00_done_in 
        = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
           & (IData)(vlSymsp->TOP__TOP__main__signal_reg.__PVT__out));
    vlSelf->__PVT___guard245 = ((IData)(vlSymsp->TOP__TOP__main__comb_reg.__PVT__out) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in));
    vlSelf->__PVT___guard267 = ((IData)(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__out) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in));
    vlSelf->__PVT___guard308 = ((~ (IData)(vlSymsp->TOP__TOP__main__comb_reg0.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in));
    vlSelf->__PVT___guard332 = ((~ (IData)(vlSymsp->TOP__TOP__main__comb_reg.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in));
}

VL_INLINE_OPT void VTOP_main___nba_comb__TOP__TOP__main__0(VTOP_main* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP_main___nba_comb__TOP__TOP__main__0\n"); );
    // Init
    CData/*0:0*/ __PVT___guard76;
    CData/*0:0*/ __PVT___guard79;
    CData/*0:0*/ __PVT___guard509;
    CData/*0:0*/ __PVT___guard516;
    CData/*0:0*/ __PVT___guard523;
    CData/*0:0*/ __PVT___guard530;
    // Body
    vlSelf->__PVT__invoke1_go_in = (((~ (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__done)) 
                                     & (2U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
                                    & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard262 = (((2U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__done)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__invoke0_go_in = (((~ (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__done)) 
                                     & (0U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
                                    & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__invoke14_go_in = (((~ (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__done)) 
                                      & (9U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
                                     & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard326 = (((9U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__done)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard240 = (((0U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__done)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__invoke2_go_in = (((~ (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__done)) 
                                     & (4U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
                                    & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard284 = (((4U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__done)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard296 = (((6U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_done_in)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in 
        = (((~ (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_done_in)) 
            & (6U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
           & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__wrapper_early_reset_cond20_go_in 
        = (((~ (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in)) 
            & (5U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
           & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard302 = (((7U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard290 = (((5U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__wrapper_early_reset_cond00_go_in 
        = ((((~ (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in)) 
             & (1U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
            | ((~ (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in)) 
               & (0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)))) 
           & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__wrapper_early_reset_cond10_go_in 
        = ((((~ (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in)) 
             & (3U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
            | ((~ (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in)) 
               & (8U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)))) 
           & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT__wrapper_early_reset_static_par1_go_in 
        = (((~ (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in)) 
            & (7U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))) 
           & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard248 = (((1U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard245)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard256 = (((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard245)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard270 = (((3U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard267)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard278 = (((8U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard267)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard311 = (((3U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard308)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard320 = (((8U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard308)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard344 = (((0xaU == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard332)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    vlSelf->__PVT___guard335 = (((1U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT___guard332)) 
                                & (IData)(vlSymsp->TOP__TOP.__PVT__go));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__invoke0_go_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__invoke14_go_in))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2599: Assertion failed in %Nmain: Multiple assignment to port `i0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2599, "");
    }
    vlSelf->__PVT__i0_write_en = ((IData)(vlSelf->__PVT__invoke0_go_in) 
                                  | (IData)(vlSelf->__PVT__invoke14_go_in));
    __PVT___guard76 = ((IData)(vlSelf->__PVT__invoke14_go_in) 
                       | (IData)(vlSelf->__PVT__invoke2_go_in));
    vlSelf->__PVT__B_k_j_0_write_en = ((3U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                       & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard62 = ((9U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT__A_int_read_en = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                    & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard21 = ((8U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard458 = (((4U <= (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                 & (7U > (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard113 = ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard54 = ((9U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    __PVT___guard79 = ((4U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                       & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in));
    vlSelf->__PVT___guard37 = ((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in));
    __PVT___guard523 = ((IData)(vlSelf->__PVT___guard507) 
                        & (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in));
    vlSelf->__PVT___guard40 = ((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in));
    __PVT___guard509 = ((IData)(vlSelf->__PVT___guard507) 
                        & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2800: Assertion failed in %Nmain: Multiple assignment to port `le0.left'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2800, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2809: Assertion failed in %Nmain: Multiple assignment to port `le0.right'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2809, "");
    }
    vlSelf->__PVT___guard68 = ((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in));
    vlSelf->__PVT___guard51 = ((((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                 & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in)) 
                                | ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                   & (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in))) 
                               | ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                  & (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in)));
    __PVT___guard516 = ((IData)(vlSelf->__PVT___guard507) 
                        & (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in));
    vlSelf->__PVT___guard65 = ((7U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    vlSelf->__PVT__A_int_read0_0_write_en = ((((7U 
                                                == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                               | (1U 
                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                              & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                             | (((1U 
                                                  == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                 | (5U 
                                                    == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in)));
    vlSelf->__PVT__fsm_write_en = (((((IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in) 
                                      | (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in)) 
                                     | (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in)) 
                                    | (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                   | (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    vlSelf->__PVT___guard162 = ((6U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    vlSelf->__PVT___guard463 = (((2U <= (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                 & (5U > (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    vlSelf->__PVT__alpha_int_read_en = ((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                        & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    vlSelf->__PVT___guard116 = ((1U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    vlSelf->__PVT___guard182 = (((0U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                 | (6U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    __PVT___guard530 = ((IData)(vlSelf->__PVT___guard507) 
                        & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    vlSelf->__PVT___guard58 = ((7U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                               & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((IData)(vlSelf->__PVT___guard335) 
                                             | (IData)(vlSelf->__PVT___guard344)) 
                                            << 0xbU) 
                                           | (((IData)(vlSelf->__PVT___guard240) 
                                               << 0xaU) 
                                              | (((IData)(vlSelf->__PVT___guard290) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->__PVT___guard302) 
                                                     << 8U) 
                                                    | ((((IData)(vlSelf->__PVT___guard248) 
                                                         | (IData)(vlSelf->__PVT___guard256)) 
                                                        << 7U) 
                                                       | (((IData)(vlSelf->__PVT___guard296) 
                                                           << 6U) 
                                                          | (((0xbU 
                                                               == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->__PVT___guard326) 
                                                                 << 4U) 
                                                                | ((((IData)(vlSelf->__PVT___guard270) 
                                                                     | (IData)(vlSelf->__PVT___guard278)) 
                                                                    << 3U) 
                                                                   | ((((IData)(vlSelf->__PVT___guard311) 
                                                                        | (IData)(vlSelf->__PVT___guard320)) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->__PVT___guard284) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->__PVT___guard262))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2750: Assertion failed in %Nmain: Multiple assignment to port `fsm0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2750, "");
    }
    vlSelf->__PVT__fsm0_in = ((IData)(vlSelf->__PVT___guard262)
                               ? 3U : ((IData)(vlSelf->__PVT___guard284)
                                        ? 5U : (((IData)(vlSelf->__PVT___guard311) 
                                                 | (IData)(vlSelf->__PVT___guard320))
                                                 ? 9U
                                                 : 
                                                (((IData)(vlSelf->__PVT___guard270) 
                                                  | (IData)(vlSelf->__PVT___guard278))
                                                  ? 4U
                                                  : 
                                                 ((IData)(vlSelf->__PVT___guard326)
                                                   ? 0xaU
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->__PVT___guard296)
                                                     ? 7U
                                                     : 
                                                    (((IData)(vlSelf->__PVT___guard248) 
                                                      | (IData)(vlSelf->__PVT___guard256))
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSelf->__PVT___guard302)
                                                       ? 8U
                                                       : 
                                                      ((IData)(vlSelf->__PVT___guard290)
                                                        ? 6U
                                                        : 
                                                       ((IData)(vlSelf->__PVT___guard240)
                                                         ? 1U
                                                         : 
                                                        (((IData)(vlSelf->__PVT___guard335) 
                                                          | (IData)(vlSelf->__PVT___guard344))
                                                          ? 0xbU
                                                          : 0U))))))))))));
    vlSelf->__PVT__fsm0_write_en = ((((((((((((((((0xbU 
                                                   == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out)) 
                                                  | (IData)(vlSelf->__PVT___guard240)) 
                                                 | (IData)(vlSelf->__PVT___guard248)) 
                                                | (IData)(vlSelf->__PVT___guard256)) 
                                               | (IData)(vlSelf->__PVT___guard262)) 
                                              | (IData)(vlSelf->__PVT___guard270)) 
                                             | (IData)(vlSelf->__PVT___guard278)) 
                                            | (IData)(vlSelf->__PVT___guard284)) 
                                           | (IData)(vlSelf->__PVT___guard290)) 
                                          | (IData)(vlSelf->__PVT___guard296)) 
                                         | (IData)(vlSelf->__PVT___guard302)) 
                                        | (IData)(vlSelf->__PVT___guard311)) 
                                       | (IData)(vlSelf->__PVT___guard320)) 
                                      | (IData)(vlSelf->__PVT___guard326)) 
                                     | (IData)(vlSelf->__PVT___guard335)) 
                                    | (IData)(vlSelf->__PVT___guard344));
    vlSelf->__PVT__comb_reg1_write_en = ((IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in) 
                                         | (IData)(vlSelf->__PVT___guard54));
    vlSelf->__PVT__k_0_write_en = ((IData)(vlSelf->__PVT__invoke2_go_in) 
                                   | (IData)(__PVT___guard79));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard162) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard21))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2704: Assertion failed in %Nmain: Multiple assignment to port `B_int.write_data'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2704, "");
    }
    vlSelf->__PVT__B_int_write_en = ((IData)(vlSelf->__PVT___guard21) 
                                     | (IData)(vlSelf->__PVT___guard162));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard463) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard458))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2770: Assertion failed in %Nmain: Multiple assignment to port `mult_pipe0.left'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2770, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard458) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard463))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2781: Assertion failed in %Nmain: Multiple assignment to port `mult_pipe0.right'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2781, "");
    }
    vlSelf->__PVT__mult_pipe0_go = ((IData)(vlSelf->__PVT___guard458) 
                                    | (IData)(vlSelf->__PVT___guard463));
    vlSelf->__PVT__B_int_read_en = (((IData)(vlSelf->__PVT___guard166) 
                                     & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                    | (IData)(vlSelf->__PVT__alpha_int_read_en));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard116) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard113))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2834: Assertion failed in %Nmain: Multiple assignment to port `B_i_j_0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2834, "");
    }
    vlSelf->__PVT__B_i_j_0_write_en = ((IData)(vlSelf->__PVT___guard113) 
                                       | (IData)(vlSelf->__PVT___guard116));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((((7U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                              & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                             | ((5U 
                                                 == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in))) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT___guard116) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT___guard113)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2664: Assertion failed in %Nmain: Multiple assignment to port `A_int_read0_0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2664, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((2U == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                            << 1U) 
                                           | ((((0U 
                                                 == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                | (8U 
                                                   == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out))) 
                                               & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                              | (IData)(vlSelf->__PVT___guard182)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2694: Assertion failed in %Nmain: Multiple assignment to port `B_int.addr0'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2694, "");
    }
    vlSelf->__PVT__signal_reg_write_en = (((((IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in) 
                                             | (IData)(__PVT___guard509)) 
                                            | (IData)(__PVT___guard516)) 
                                           | (IData)(__PVT___guard523)) 
                                          | (IData)(__PVT___guard530));
    vlSelf->__PVT__signal_reg_in = ((((IData)(__PVT___guard509) 
                                      | (IData)(__PVT___guard516)) 
                                     | (IData)(__PVT___guard523)) 
                                    | (IData)(__PVT___guard530));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__invoke1_go_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT___guard58))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2849: Assertion failed in %Nmain: Multiple assignment to port `j0.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2849, "");
    }
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT___guard58) 
                                            << 2U) 
                                           | (((IData)(__PVT___guard79) 
                                               << 1U) 
                                              | (IData)(__PVT___guard76)))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2649: Assertion failed in %Nmain: Multiple assignment to port `add0.left'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2649, "");
    }
    vlSelf->__PVT__j0_write_en = ((IData)(vlSelf->__PVT__invoke1_go_in) 
                                  | (IData)(vlSelf->__PVT___guard58));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I(((((0U != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                             & (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in)) 
                                            << 5U) 
                                           | ((((7U 
                                                 != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                & (IData)(vlSelf->__PVT__wrapper_early_reset_static_par1_go_in)) 
                                               << 4U) 
                                              | ((((9U 
                                                    != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                   & (IData)(vlSelf->__PVT__while_wrapper_early_reset_static_seq_go_in)) 
                                                  << 3U) 
                                                 | ((((((((0U 
                                                           == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                          & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in)) 
                                                         | ((0U 
                                                             == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                            & (IData)(vlSelf->__PVT__wrapper_early_reset_cond10_go_in))) 
                                                        | ((0U 
                                                            == (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                           & (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in))) 
                                                       | (IData)(vlSelf->__PVT___guard54)) 
                                                      | (IData)(vlSelf->__PVT___guard58)) 
                                                     << 2U) 
                                                    | ((((0U 
                                                          != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                         & (IData)(vlSelf->__PVT__wrapper_early_reset_cond00_go_in)) 
                                                        << 1U) 
                                                       | ((0U 
                                                           != (IData)(vlSymsp->TOP__TOP__main__fsm.__PVT__out)) 
                                                          & (IData)(vlSelf->__PVT__wrapper_early_reset_cond20_go_in)))))))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2631: Assertion failed in %Nmain: Multiple assignment to port `fsm.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2631, "");
    }
    vlSelf->__PVT__add0_left = ((IData)(__PVT___guard76)
                                 ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                 : ((IData)(__PVT___guard79)
                                     ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                     : ((IData)(vlSelf->__PVT___guard58)
                                         ? (IData)(vlSymsp->TOP__TOP__main__j0.__PVT__out)
                                         : 0U)));
    if (VL_UNLIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__PVT__wrapper_early_reset_cond00_done_in) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__signal_reg_in))))))) {
        VL_WRITEF("[%0t] %%Error: linear-algebra-trmm.sv:2821: Assertion failed in %Nmain: Multiple assignment to port `signal_reg.in'.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("linear-algebra-trmm.sv", 2821, "");
    }
}

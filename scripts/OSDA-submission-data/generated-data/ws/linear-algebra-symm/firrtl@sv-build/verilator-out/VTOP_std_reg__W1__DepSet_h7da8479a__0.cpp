// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg__W1.h"

VL_INLINE_OPT void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__comb_reg__0(VTOP_std_reg__W1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__comb_reg__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go_in) 
                              & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__comb_reg0__0(VTOP_std_reg__W1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__comb_reg0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go_in) 
                              & (IData)(vlSymsp->TOP__TOP__main__le0.__PVT__out));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__comb_reg1__0(VTOP_std_reg__W1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__comb_reg1__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in) {
        vlSelf->__PVT__out = ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in) 
                              & (((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                   ? (IData)(vlSymsp->TOP__TOP__main__k_0.__PVT__out)
                                   : 0U) < ((IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go_in)
                                             ? (IData)(vlSymsp->TOP__TOP__main__i0.__PVT__out)
                                             : 0U)));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__signal_reg__0(VTOP_std_reg__W1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__signal_reg__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__signal_reg_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__signal_reg_write_en) {
        vlSelf->__PVT__out = ((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__wrapper_early_reset_static_par_done_in)) 
                              & (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h0d688143__0) 
                                  | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h0f383811__0) 
                                     | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hc273c927__0) 
                                        | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hed2afca7__0) 
                                           | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6a679d07__0) 
                                              | ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_838) 
                                                 | (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_843))))))) 
                                 | (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_848)));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd__0(VTOP_std_reg__W1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__pd_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__pd_write_en) {
        vlSelf->__PVT__out = ((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in)) 
                              & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7f7c5c20__0));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd0__0(VTOP_std_reg__W1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd0__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__pd0_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__pd0_write_en) {
        vlSelf->__PVT__out = ((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in)) 
                              & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h55d88a83__0));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd1__0(VTOP_std_reg__W1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd1__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__pd1_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__pd1_write_en) {
        vlSelf->__PVT__out = ((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par0_done_in)) 
                              & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3e6cce66__0));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd2__0(VTOP_std_reg__W1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd2__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__pd2_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__pd2_write_en) {
        vlSelf->__PVT__out = ((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par1_done_in)) 
                              & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2276f04a__0));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd3__0(VTOP_std_reg__W1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd3__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__pd3_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__pd3_write_en) {
        vlSelf->__PVT__out = ((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par1_done_in)) 
                              & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h526db1a5__0));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd4__0(VTOP_std_reg__W1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd4__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__pd4_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__pd4_write_en) {
        vlSelf->__PVT__out = ((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par2_done_in)) 
                              & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h01fe6a24__0));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd5__0(VTOP_std_reg__W1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd5__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__pd5_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__pd5_write_en) {
        vlSelf->__PVT__out = ((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par2_done_in)) 
                              & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6d4cc939__0));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd6__0(VTOP_std_reg__W1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd6__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__pd6_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__pd6_write_en) {
        vlSelf->__PVT__out = ((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par2_done_in)) 
                              & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hdffee2ab__0));
    }
}

VL_INLINE_OPT void VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd7__0(VTOP_std_reg__W1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg__W1___nba_sequent__TOP__TOP__main__pd7__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSymsp->TOP__TOP.__PVT__reset)) 
                           & (IData)(vlSymsp->TOP__TOP__main.__PVT__pd7_write_en));
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__out = 0U;
    } else if (vlSymsp->TOP__TOP__main.__PVT__pd7_write_en) {
        vlSelf->__PVT__out = ((~ (IData)(vlSymsp->TOP__TOP__main.__PVT__par2_done_in)) 
                              & (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6620c4ab__0));
    }
}

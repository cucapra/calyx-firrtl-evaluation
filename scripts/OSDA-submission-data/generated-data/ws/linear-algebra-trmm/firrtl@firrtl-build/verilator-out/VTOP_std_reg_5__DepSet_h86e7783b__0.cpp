// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg_5.h"

VL_INLINE_OPT void VTOP_std_reg_5___nba_sequent__TOP__TOP__main__fsm0__0(VTOP_std_reg_5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_5___nba_sequent__TOP__TOP__main__fsm0__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if ((((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_282) 
                 | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8179485d__0) 
                    | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_ha515d6f3__0) 
                       | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h1025c6c2__0) 
                           & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                          | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h301c5d92__0) 
                              & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                             | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_had1198b6__0) 
                                | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2bdf3e9c__0) 
                                   | ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_311) 
                                      | (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_315))))))))) 
                | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hd9131b55__0) 
                   | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h50eea2a5__0) 
                       & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                      | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hee665582__0) 
                          & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                         | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h12dd2185__0) 
                            | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf7aba140__0) 
                                | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he35e67f8__0)) 
                               & (IData)(vlSymsp->TOP__TOP.__PVT__go)))))))) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hbafba765__0)
                                        ? 9U : ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_311)
                                                 ? 0x11U
                                                 : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_80)));
    }
}

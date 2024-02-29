// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP_std_reg_6.h"

VL_INLINE_OPT void VTOP_std_reg_6___nba_sequent__TOP__TOP__main__fsm6__0(VTOP_std_reg_6* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTOP_std_reg_6___nba_sequent__TOP__TOP__main__fsm6__0\n"); );
    // Body
    if (vlSymsp->TOP__TOP.__PVT__reset) {
        vlSelf->__PVT__internal_reg = 0U;
    } else if ((((((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_606) 
                   | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf69bbf90__0) 
                      | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h7a22168b__0) 
                          & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                         | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6f6b196c__0) 
                             & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                            | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hce1859aa__0) 
                               | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h188ce12c__0) 
                                   & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                  | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8cde0dbc__0) 
                                      & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                     | ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_639) 
                                        | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h43222920__0) 
                                            | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3f6feb34__0)) 
                                           & (IData)(vlSymsp->TOP__TOP.__PVT__go)))))))))) 
                  | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h8dda0bde__0) 
                     | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h187c5b97__0) 
                         & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                        | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_ha57f5f5c__0) 
                            & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                           | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hae094eb1__0) 
                              | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hcb49579a__0) 
                                  & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                 | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h3e774048__0) 
                                     & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                    | ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_683) 
                                       | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb9d1d38c__0) 
                                          & (IData)(vlSymsp->TOP__TOP.__PVT__go)))))))))) 
                 | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb05d8461__0) 
                     & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                    | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hf10ddf01__0) 
                       | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h2c207a0e__0) 
                          | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hb7b7dc57__0) 
                             | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h844ecf94__0) 
                                | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h32a14825__0) 
                                   | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hc799cda5__0) 
                                       & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                      | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hcf958a5a__0) 
                                          & (IData)(vlSymsp->TOP__TOP.__PVT__go)) 
                                         | ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_729) 
                                            | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h04ae4a89__0) 
                                                | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h70527d7b__0)) 
                                               & (IData)(vlSymsp->TOP__TOP.__PVT__go)))))))))))) 
                | ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6ead8d62__0) 
                   | (((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_hcc5b09d0__0) 
                       | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h5145a99b__0)) 
                      & (IData)(vlSymsp->TOP__TOP.__PVT__go))))) {
        vlSelf->__PVT__internal_reg = ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h32a14825__0)
                                        ? 0x2bU : ((IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_683)
                                                    ? 0x25U
                                                    : 
                                                   ((((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h614ce3a9__0) 
                                                      | (IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_he146a1ad__0)) 
                                                     & (IData)(vlSymsp->TOP__TOP.__PVT__go))
                                                     ? 0x12U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__TOP__main.__VdfgTmp_h6232c48a__0)
                                                      ? 1U
                                                      : (IData)(vlSymsp->TOP__TOP__main.__PVT___GEN_122)))));
    }
}

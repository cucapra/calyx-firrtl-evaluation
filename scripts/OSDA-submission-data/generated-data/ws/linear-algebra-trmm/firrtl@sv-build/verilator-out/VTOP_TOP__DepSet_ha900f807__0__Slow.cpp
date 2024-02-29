// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP_TOP.h"
#include "VTOP__Syms.h"

VL_ATTR_COLD VlCoroutine VTOP_TOP___eval_initial__TOP__TOP__0(VTOP_TOP* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTOP_TOP___eval_initial__TOP__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hb007db96__0;
    VlWide<3>/*95:0*/ __Vtemp_he1f12bc3__0;
    // Body
    vlSelf->__PVT__CODE = VL_VALUEPLUSARGS_INN(64, 
                                               std::string{"DATA=%s"}, 
                                               vlSelf->__PVT__DATA);
    VL_WRITEF("DATA (path to meminit files): %@\n",
              -1,&(vlSelf->__PVT__DATA));
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/A_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__A_int__mem.__PVT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 96, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/B_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__B_int__mem.__PVT__mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 1, 0, VL_CVT_PACK_STR_NN(
                                                    VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                   std::string{"/alpha_int.dat"}))
                 ,  &(vlSymsp->TOP__TOP__alpha_int.__PVT__mem)
                 , 0, ~0ULL);
    vlSelf->__PVT__CODE = VL_VALUEPLUSARGS_INN(64, 
                                               std::string{"OUT=%s"}, 
                                               vlSelf->__PVT__OUT);
    __Vtemp_hb007db96__0[0U] = 0x543d2564U;
    __Vtemp_hb007db96__0[1U] = 0x4c494d49U;
    __Vtemp_hb007db96__0[2U] = 0x434c455fU;
    __Vtemp_hb007db96__0[3U] = 0x4359U;
    vlSelf->__PVT__CODE = VL_VALUEPLUSARGS_INQ(64, 
                                               VL_CVT_PACK_STR_NW(4, __Vtemp_hb007db96__0), 
                                               vlSelf->__PVT__CYCLE_LIMIT);
    if (VL_UNLIKELY((0ULL != vlSelf->__PVT__CYCLE_LIMIT))) {
        VL_WRITEF("cycle limit set to %20d\n",64,vlSelf->__PVT__CYCLE_LIMIT);
    }
    __Vtemp_he1f12bc3__0[0U] = 0x453d2564U;
    __Vtemp_he1f12bc3__0[1U] = 0x54524143U;
    __Vtemp_he1f12bc3__0[2U] = 0x4e4fU;
    vlSelf->__PVT__CODE = VL_VALUEPLUSARGS_INI(32, 
                                               VL_CVT_PACK_STR_NW(3, __Vtemp_he1f12bc3__0), 
                                               vlSelf->__PVT__NOTRACE);
    if ((0U == vlSelf->__PVT__NOTRACE)) {
        vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NN(vlSelf->__PVT__OUT));
        vlSymsp->_traceDumpOpen();
        VL_WRITEF("VCD tracing enabled\n");
    } else {
        VL_WRITEF("VCD tracing disabled\n");
    }
    vlSelf->__PVT__go = 0U;
    vlSelf->__PVT__clk = 0U;
    vlSelf->__PVT__reset = 1U;
    vlSelf->__PVT__cycle_count = 0ULL;
    while (1U) {
        co_await vlSymsp->TOP.__VdlySched.delay(0xaU, "refmem_tb.sv", 188);
        vlSymsp->TOP.__Vm_traceActivity[4U] = 1U;
        vlSelf->__PVT__clk = (1U & (~ (IData)(vlSelf->__PVT__clk)));
        if (VL_UNLIKELY((VL_LTS_IQQ(64, 3ULL, vlSelf->__PVT__cycle_count) 
                         & (0x16U == (IData)(vlSymsp->TOP__TOP__main__fsm0.__PVT__out))))) {
            VL_WRITEF("Simulated %20d cycles\n",64,
                      ((vlSelf->__PVT__cycle_count 
                        - 3ULL) - 1ULL));
            VL_FINISH_MT("refmem_tb.sv", 193, "");
        } else if (VL_UNLIKELY(((0ULL != vlSelf->__PVT__cycle_count) 
                                & (vlSelf->__PVT__cycle_count 
                                   == (3ULL + vlSelf->__PVT__CYCLE_LIMIT))))) {
            VL_WRITEF("reached limit of %20d cycles\n",
                      64,vlSelf->__PVT__CYCLE_LIMIT);
            VL_FINISH_MT("refmem_tb.sv", 196, "");
        }
    }
    vlSymsp->TOP.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void VTOP_TOP___eval_final__TOP__TOP(VTOP_TOP* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTOP_TOP___eval_final__TOP__TOP\n"); );
    // Body
    VL_WRITEMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NN(
                                                      VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                     std::string{"/A_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__A_int__mem.__PVT__mem)
                  , 0, ~0ULL);
    VL_WRITEMEM_N(true, 32, 96, 0, VL_CVT_PACK_STR_NN(
                                                      VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                     std::string{"/B_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__B_int__mem.__PVT__mem)
                  , 0, ~0ULL);
    VL_WRITEMEM_N(true, 32, 1, 0, VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(vlSelf->__PVT__DATA, 
                                                                    std::string{"/alpha_int.out"}))
                  ,  &(vlSymsp->TOP__TOP__alpha_int.__PVT__mem)
                  , 0, ~0ULL);
}

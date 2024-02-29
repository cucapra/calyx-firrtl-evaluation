// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTOP__Syms.h"
#include "VTOP.h"
#include "VTOP___024root.h"
#include "VTOP_TOP.h"
#include "VTOP_main.h"
#include "VTOP_std_mult_pipe.h"
#include "VTOP_std_add.h"
#include "VTOP_std_reg.h"
#include "VTOP_seq_mem_d2__D8_DB8.h"
#include "VTOP_seq_mem_d2__D8_DBc.h"
#include "VTOP_std_add__W4.h"
#include "VTOP_std_const__Vz1_W4.h"
#include "VTOP_std_const__Vz2_W4.h"
#include "VTOP_std_const__Vz3_W4.h"
#include "VTOP_std_const__Vz4_W4.h"
#include "VTOP_std_const__Vz5_W4.h"
#include "VTOP_std_const__Vz6_W1.h"
#include "VTOP_std_reg__W4.h"
#include "VTOP_std_le__W4.h"
#include "VTOP_std_lt__W4.h"
#include "VTOP_std_reg__W1.h"
#include "VTOP_undef__W1.h"
#include "VTOP_std_wire__W1.h"
#include "VTOP_seq_mem_d1__I1_S1.h"
#include "VTOP_seq_mem_d1__S40_I8.h"
#include "VTOP_seq_mem_d1__S60_I8.h"
#include "VTOP_std_fp_mult_pipe__I20_F0.h"

// FUNCTIONS
VTOP__Syms::~VTOP__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void VTOP__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void VTOP__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void VTOP__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

VTOP__Syms::VTOP__Syms(VerilatedContext* contextp, const char* namep, VTOP* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__TOP{this, Verilated::catName(namep, "TOP")}
    , TOP__TOP__main{this, Verilated::catName(namep, "TOP.main")}
    , TOP__TOP__main__A_int{this, Verilated::catName(namep, "TOP.main.A_int")}
    , TOP__TOP__main__A_int__mem{this, Verilated::catName(namep, "TOP.main.A_int.mem")}
    , TOP__TOP__main__A_int_read0_0{this, Verilated::catName(namep, "TOP.main.A_int_read0_0")}
    , TOP__TOP__main__B_i_j_0{this, Verilated::catName(namep, "TOP.main.B_i_j_0")}
    , TOP__TOP__main__B_int{this, Verilated::catName(namep, "TOP.main.B_int")}
    , TOP__TOP__main__B_int__mem{this, Verilated::catName(namep, "TOP.main.B_int.mem")}
    , TOP__TOP__main__B_k_j_0{this, Verilated::catName(namep, "TOP.main.B_k_j_0")}
    , TOP__TOP__main__add0{this, Verilated::catName(namep, "TOP.main.add0")}
    , TOP__TOP__main__add1{this, Verilated::catName(namep, "TOP.main.add1")}
    , TOP__TOP__main__adder{this, Verilated::catName(namep, "TOP.main.adder")}
    , TOP__TOP__main__adder0{this, Verilated::catName(namep, "TOP.main.adder0")}
    , TOP__TOP__main__adder1{this, Verilated::catName(namep, "TOP.main.adder1")}
    , TOP__TOP__main__adder2{this, Verilated::catName(namep, "TOP.main.adder2")}
    , TOP__TOP__main__adder3{this, Verilated::catName(namep, "TOP.main.adder3")}
    , TOP__TOP__main__alpha_int{this, Verilated::catName(namep, "TOP.main.alpha_int")}
    , TOP__TOP__main__comb_reg{this, Verilated::catName(namep, "TOP.main.comb_reg")}
    , TOP__TOP__main__comb_reg0{this, Verilated::catName(namep, "TOP.main.comb_reg0")}
    , TOP__TOP__main__comb_reg1{this, Verilated::catName(namep, "TOP.main.comb_reg1")}
    , TOP__TOP__main__const0{this, Verilated::catName(namep, "TOP.main.const0")}
    , TOP__TOP__main__const1{this, Verilated::catName(namep, "TOP.main.const1")}
    , TOP__TOP__main__const3{this, Verilated::catName(namep, "TOP.main.const3")}
    , TOP__TOP__main__const4{this, Verilated::catName(namep, "TOP.main.const4")}
    , TOP__TOP__main__const5{this, Verilated::catName(namep, "TOP.main.const5")}
    , TOP__TOP__main__const7{this, Verilated::catName(namep, "TOP.main.const7")}
    , TOP__TOP__main__early_reset_cond00_done{this, Verilated::catName(namep, "TOP.main.early_reset_cond00_done")}
    , TOP__TOP__main__early_reset_cond00_go{this, Verilated::catName(namep, "TOP.main.early_reset_cond00_go")}
    , TOP__TOP__main__early_reset_cond10_done{this, Verilated::catName(namep, "TOP.main.early_reset_cond10_done")}
    , TOP__TOP__main__early_reset_cond10_go{this, Verilated::catName(namep, "TOP.main.early_reset_cond10_go")}
    , TOP__TOP__main__early_reset_cond20_done{this, Verilated::catName(namep, "TOP.main.early_reset_cond20_done")}
    , TOP__TOP__main__early_reset_cond20_go{this, Verilated::catName(namep, "TOP.main.early_reset_cond20_go")}
    , TOP__TOP__main__early_reset_static_par1_done{this, Verilated::catName(namep, "TOP.main.early_reset_static_par1_done")}
    , TOP__TOP__main__early_reset_static_par1_go{this, Verilated::catName(namep, "TOP.main.early_reset_static_par1_go")}
    , TOP__TOP__main__early_reset_static_seq_done{this, Verilated::catName(namep, "TOP.main.early_reset_static_seq_done")}
    , TOP__TOP__main__early_reset_static_seq_go{this, Verilated::catName(namep, "TOP.main.early_reset_static_seq_go")}
    , TOP__TOP__main__fsm{this, Verilated::catName(namep, "TOP.main.fsm")}
    , TOP__TOP__main__fsm0{this, Verilated::catName(namep, "TOP.main.fsm0")}
    , TOP__TOP__main__i0{this, Verilated::catName(namep, "TOP.main.i0")}
    , TOP__TOP__main__invoke0_done{this, Verilated::catName(namep, "TOP.main.invoke0_done")}
    , TOP__TOP__main__invoke0_go{this, Verilated::catName(namep, "TOP.main.invoke0_go")}
    , TOP__TOP__main__invoke14_done{this, Verilated::catName(namep, "TOP.main.invoke14_done")}
    , TOP__TOP__main__invoke14_go{this, Verilated::catName(namep, "TOP.main.invoke14_go")}
    , TOP__TOP__main__invoke1_done{this, Verilated::catName(namep, "TOP.main.invoke1_done")}
    , TOP__TOP__main__invoke1_go{this, Verilated::catName(namep, "TOP.main.invoke1_go")}
    , TOP__TOP__main__invoke2_done{this, Verilated::catName(namep, "TOP.main.invoke2_done")}
    , TOP__TOP__main__invoke2_go{this, Verilated::catName(namep, "TOP.main.invoke2_go")}
    , TOP__TOP__main__j0{this, Verilated::catName(namep, "TOP.main.j0")}
    , TOP__TOP__main__k_0{this, Verilated::catName(namep, "TOP.main.k_0")}
    , TOP__TOP__main__le0{this, Verilated::catName(namep, "TOP.main.le0")}
    , TOP__TOP__main__lt0{this, Verilated::catName(namep, "TOP.main.lt0")}
    , TOP__TOP__main__mult_pipe0{this, Verilated::catName(namep, "TOP.main.mult_pipe0")}
    , TOP__TOP__main__mult_pipe0__comp{this, Verilated::catName(namep, "TOP.main.mult_pipe0.comp")}
    , TOP__TOP__main__signal_reg{this, Verilated::catName(namep, "TOP.main.signal_reg")}
    , TOP__TOP__main__tdcc_done{this, Verilated::catName(namep, "TOP.main.tdcc_done")}
    , TOP__TOP__main__tdcc_go{this, Verilated::catName(namep, "TOP.main.tdcc_go")}
    , TOP__TOP__main__ud{this, Verilated::catName(namep, "TOP.main.ud")}
    , TOP__TOP__main__ud0{this, Verilated::catName(namep, "TOP.main.ud0")}
    , TOP__TOP__main__ud1{this, Verilated::catName(namep, "TOP.main.ud1")}
    , TOP__TOP__main__ud2{this, Verilated::catName(namep, "TOP.main.ud2")}
    , TOP__TOP__main__ud3{this, Verilated::catName(namep, "TOP.main.ud3")}
    , TOP__TOP__main__while_wrapper_early_reset_static_seq_done{this, Verilated::catName(namep, "TOP.main.while_wrapper_early_reset_static_seq_done")}
    , TOP__TOP__main__while_wrapper_early_reset_static_seq_go{this, Verilated::catName(namep, "TOP.main.while_wrapper_early_reset_static_seq_go")}
    , TOP__TOP__main__wrapper_early_reset_cond00_done{this, Verilated::catName(namep, "TOP.main.wrapper_early_reset_cond00_done")}
    , TOP__TOP__main__wrapper_early_reset_cond00_go{this, Verilated::catName(namep, "TOP.main.wrapper_early_reset_cond00_go")}
    , TOP__TOP__main__wrapper_early_reset_cond10_done{this, Verilated::catName(namep, "TOP.main.wrapper_early_reset_cond10_done")}
    , TOP__TOP__main__wrapper_early_reset_cond10_go{this, Verilated::catName(namep, "TOP.main.wrapper_early_reset_cond10_go")}
    , TOP__TOP__main__wrapper_early_reset_cond20_done{this, Verilated::catName(namep, "TOP.main.wrapper_early_reset_cond20_done")}
    , TOP__TOP__main__wrapper_early_reset_cond20_go{this, Verilated::catName(namep, "TOP.main.wrapper_early_reset_cond20_go")}
    , TOP__TOP__main__wrapper_early_reset_static_par1_done{this, Verilated::catName(namep, "TOP.main.wrapper_early_reset_static_par1_done")}
    , TOP__TOP__main__wrapper_early_reset_static_par1_go{this, Verilated::catName(namep, "TOP.main.wrapper_early_reset_static_par1_go")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__TOP = &TOP__TOP;
    TOP__TOP.__PVT__main = &TOP__TOP__main;
    TOP__TOP__main.__PVT__A_int = &TOP__TOP__main__A_int;
    TOP__TOP__main__A_int.__PVT__mem = &TOP__TOP__main__A_int__mem;
    TOP__TOP__main.__PVT__A_int_read0_0 = &TOP__TOP__main__A_int_read0_0;
    TOP__TOP__main.__PVT__B_i_j_0 = &TOP__TOP__main__B_i_j_0;
    TOP__TOP__main.__PVT__B_int = &TOP__TOP__main__B_int;
    TOP__TOP__main__B_int.__PVT__mem = &TOP__TOP__main__B_int__mem;
    TOP__TOP__main.__PVT__B_k_j_0 = &TOP__TOP__main__B_k_j_0;
    TOP__TOP__main.__PVT__add0 = &TOP__TOP__main__add0;
    TOP__TOP__main.__PVT__add1 = &TOP__TOP__main__add1;
    TOP__TOP__main.__PVT__adder = &TOP__TOP__main__adder;
    TOP__TOP__main.__PVT__adder0 = &TOP__TOP__main__adder0;
    TOP__TOP__main.__PVT__adder1 = &TOP__TOP__main__adder1;
    TOP__TOP__main.__PVT__adder2 = &TOP__TOP__main__adder2;
    TOP__TOP__main.__PVT__adder3 = &TOP__TOP__main__adder3;
    TOP__TOP__main.__PVT__alpha_int = &TOP__TOP__main__alpha_int;
    TOP__TOP__main.__PVT__comb_reg = &TOP__TOP__main__comb_reg;
    TOP__TOP__main.__PVT__comb_reg0 = &TOP__TOP__main__comb_reg0;
    TOP__TOP__main.__PVT__comb_reg1 = &TOP__TOP__main__comb_reg1;
    TOP__TOP__main.__PVT__const0 = &TOP__TOP__main__const0;
    TOP__TOP__main.__PVT__const1 = &TOP__TOP__main__const1;
    TOP__TOP__main.__PVT__const3 = &TOP__TOP__main__const3;
    TOP__TOP__main.__PVT__const4 = &TOP__TOP__main__const4;
    TOP__TOP__main.__PVT__const5 = &TOP__TOP__main__const5;
    TOP__TOP__main.__PVT__const7 = &TOP__TOP__main__const7;
    TOP__TOP__main.__PVT__early_reset_cond00_done = &TOP__TOP__main__early_reset_cond00_done;
    TOP__TOP__main.__PVT__early_reset_cond00_go = &TOP__TOP__main__early_reset_cond00_go;
    TOP__TOP__main.__PVT__early_reset_cond10_done = &TOP__TOP__main__early_reset_cond10_done;
    TOP__TOP__main.__PVT__early_reset_cond10_go = &TOP__TOP__main__early_reset_cond10_go;
    TOP__TOP__main.__PVT__early_reset_cond20_done = &TOP__TOP__main__early_reset_cond20_done;
    TOP__TOP__main.__PVT__early_reset_cond20_go = &TOP__TOP__main__early_reset_cond20_go;
    TOP__TOP__main.__PVT__early_reset_static_par1_done = &TOP__TOP__main__early_reset_static_par1_done;
    TOP__TOP__main.__PVT__early_reset_static_par1_go = &TOP__TOP__main__early_reset_static_par1_go;
    TOP__TOP__main.__PVT__early_reset_static_seq_done = &TOP__TOP__main__early_reset_static_seq_done;
    TOP__TOP__main.__PVT__early_reset_static_seq_go = &TOP__TOP__main__early_reset_static_seq_go;
    TOP__TOP__main.__PVT__fsm = &TOP__TOP__main__fsm;
    TOP__TOP__main.__PVT__fsm0 = &TOP__TOP__main__fsm0;
    TOP__TOP__main.__PVT__i0 = &TOP__TOP__main__i0;
    TOP__TOP__main.__PVT__invoke0_done = &TOP__TOP__main__invoke0_done;
    TOP__TOP__main.__PVT__invoke0_go = &TOP__TOP__main__invoke0_go;
    TOP__TOP__main.__PVT__invoke14_done = &TOP__TOP__main__invoke14_done;
    TOP__TOP__main.__PVT__invoke14_go = &TOP__TOP__main__invoke14_go;
    TOP__TOP__main.__PVT__invoke1_done = &TOP__TOP__main__invoke1_done;
    TOP__TOP__main.__PVT__invoke1_go = &TOP__TOP__main__invoke1_go;
    TOP__TOP__main.__PVT__invoke2_done = &TOP__TOP__main__invoke2_done;
    TOP__TOP__main.__PVT__invoke2_go = &TOP__TOP__main__invoke2_go;
    TOP__TOP__main.__PVT__j0 = &TOP__TOP__main__j0;
    TOP__TOP__main.__PVT__k_0 = &TOP__TOP__main__k_0;
    TOP__TOP__main.__PVT__le0 = &TOP__TOP__main__le0;
    TOP__TOP__main.__PVT__lt0 = &TOP__TOP__main__lt0;
    TOP__TOP__main.__PVT__mult_pipe0 = &TOP__TOP__main__mult_pipe0;
    TOP__TOP__main__mult_pipe0.__PVT__comp = &TOP__TOP__main__mult_pipe0__comp;
    TOP__TOP__main.__PVT__signal_reg = &TOP__TOP__main__signal_reg;
    TOP__TOP__main.__PVT__tdcc_done = &TOP__TOP__main__tdcc_done;
    TOP__TOP__main.__PVT__tdcc_go = &TOP__TOP__main__tdcc_go;
    TOP__TOP__main.__PVT__ud = &TOP__TOP__main__ud;
    TOP__TOP__main.__PVT__ud0 = &TOP__TOP__main__ud0;
    TOP__TOP__main.__PVT__ud1 = &TOP__TOP__main__ud1;
    TOP__TOP__main.__PVT__ud2 = &TOP__TOP__main__ud2;
    TOP__TOP__main.__PVT__ud3 = &TOP__TOP__main__ud3;
    TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_done = &TOP__TOP__main__while_wrapper_early_reset_static_seq_done;
    TOP__TOP__main.__PVT__while_wrapper_early_reset_static_seq_go = &TOP__TOP__main__while_wrapper_early_reset_static_seq_go;
    TOP__TOP__main.__PVT__wrapper_early_reset_cond00_done = &TOP__TOP__main__wrapper_early_reset_cond00_done;
    TOP__TOP__main.__PVT__wrapper_early_reset_cond00_go = &TOP__TOP__main__wrapper_early_reset_cond00_go;
    TOP__TOP__main.__PVT__wrapper_early_reset_cond10_done = &TOP__TOP__main__wrapper_early_reset_cond10_done;
    TOP__TOP__main.__PVT__wrapper_early_reset_cond10_go = &TOP__TOP__main__wrapper_early_reset_cond10_go;
    TOP__TOP__main.__PVT__wrapper_early_reset_cond20_done = &TOP__TOP__main__wrapper_early_reset_cond20_done;
    TOP__TOP__main.__PVT__wrapper_early_reset_cond20_go = &TOP__TOP__main__wrapper_early_reset_cond20_go;
    TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_done = &TOP__TOP__main__wrapper_early_reset_static_par1_done;
    TOP__TOP__main.__PVT__wrapper_early_reset_static_par1_go = &TOP__TOP__main__wrapper_early_reset_static_par1_go;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__TOP.__Vconfigure(true);
    TOP__TOP__main.__Vconfigure(true);
    TOP__TOP__main__A_int.__Vconfigure(true);
    TOP__TOP__main__A_int__mem.__Vconfigure(true);
    TOP__TOP__main__A_int_read0_0.__Vconfigure(true);
    TOP__TOP__main__B_i_j_0.__Vconfigure(false);
    TOP__TOP__main__B_int.__Vconfigure(true);
    TOP__TOP__main__B_int__mem.__Vconfigure(true);
    TOP__TOP__main__B_k_j_0.__Vconfigure(false);
    TOP__TOP__main__add0.__Vconfigure(true);
    TOP__TOP__main__add1.__Vconfigure(true);
    TOP__TOP__main__adder.__Vconfigure(false);
    TOP__TOP__main__adder0.__Vconfigure(false);
    TOP__TOP__main__adder1.__Vconfigure(false);
    TOP__TOP__main__adder2.__Vconfigure(false);
    TOP__TOP__main__adder3.__Vconfigure(false);
    TOP__TOP__main__alpha_int.__Vconfigure(true);
    TOP__TOP__main__comb_reg.__Vconfigure(true);
    TOP__TOP__main__comb_reg0.__Vconfigure(false);
    TOP__TOP__main__comb_reg1.__Vconfigure(false);
    TOP__TOP__main__const0.__Vconfigure(true);
    TOP__TOP__main__const1.__Vconfigure(true);
    TOP__TOP__main__const3.__Vconfigure(true);
    TOP__TOP__main__const4.__Vconfigure(true);
    TOP__TOP__main__const5.__Vconfigure(true);
    TOP__TOP__main__const7.__Vconfigure(true);
    TOP__TOP__main__early_reset_cond00_done.__Vconfigure(true);
    TOP__TOP__main__early_reset_cond00_go.__Vconfigure(false);
    TOP__TOP__main__early_reset_cond10_done.__Vconfigure(false);
    TOP__TOP__main__early_reset_cond10_go.__Vconfigure(false);
    TOP__TOP__main__early_reset_cond20_done.__Vconfigure(false);
    TOP__TOP__main__early_reset_cond20_go.__Vconfigure(false);
    TOP__TOP__main__early_reset_static_par1_done.__Vconfigure(false);
    TOP__TOP__main__early_reset_static_par1_go.__Vconfigure(false);
    TOP__TOP__main__early_reset_static_seq_done.__Vconfigure(false);
    TOP__TOP__main__early_reset_static_seq_go.__Vconfigure(false);
    TOP__TOP__main__fsm.__Vconfigure(true);
    TOP__TOP__main__fsm0.__Vconfigure(false);
    TOP__TOP__main__i0.__Vconfigure(false);
    TOP__TOP__main__invoke0_done.__Vconfigure(false);
    TOP__TOP__main__invoke0_go.__Vconfigure(false);
    TOP__TOP__main__invoke14_done.__Vconfigure(false);
    TOP__TOP__main__invoke14_go.__Vconfigure(false);
    TOP__TOP__main__invoke1_done.__Vconfigure(false);
    TOP__TOP__main__invoke1_go.__Vconfigure(false);
    TOP__TOP__main__invoke2_done.__Vconfigure(false);
    TOP__TOP__main__invoke2_go.__Vconfigure(false);
    TOP__TOP__main__j0.__Vconfigure(false);
    TOP__TOP__main__k_0.__Vconfigure(false);
    TOP__TOP__main__le0.__Vconfigure(true);
    TOP__TOP__main__lt0.__Vconfigure(true);
    TOP__TOP__main__mult_pipe0.__Vconfigure(true);
    TOP__TOP__main__mult_pipe0__comp.__Vconfigure(true);
    TOP__TOP__main__signal_reg.__Vconfigure(false);
    TOP__TOP__main__tdcc_done.__Vconfigure(false);
    TOP__TOP__main__tdcc_go.__Vconfigure(false);
    TOP__TOP__main__ud.__Vconfigure(true);
    TOP__TOP__main__ud0.__Vconfigure(false);
    TOP__TOP__main__ud1.__Vconfigure(false);
    TOP__TOP__main__ud2.__Vconfigure(false);
    TOP__TOP__main__ud3.__Vconfigure(false);
    TOP__TOP__main__while_wrapper_early_reset_static_seq_done.__Vconfigure(false);
    TOP__TOP__main__while_wrapper_early_reset_static_seq_go.__Vconfigure(false);
    TOP__TOP__main__wrapper_early_reset_cond00_done.__Vconfigure(false);
    TOP__TOP__main__wrapper_early_reset_cond00_go.__Vconfigure(false);
    TOP__TOP__main__wrapper_early_reset_cond10_done.__Vconfigure(false);
    TOP__TOP__main__wrapper_early_reset_cond10_go.__Vconfigure(false);
    TOP__TOP__main__wrapper_early_reset_cond20_done.__Vconfigure(false);
    TOP__TOP__main__wrapper_early_reset_cond20_go.__Vconfigure(false);
    TOP__TOP__main__wrapper_early_reset_static_par1_done.__Vconfigure(false);
    TOP__TOP__main__wrapper_early_reset_static_par1_go.__Vconfigure(false);
    // Setup scopes
    __Vscope_TOP__main.configure(this, name(), "main", "main", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_TOP__main__A_int__mem.configure(this, name(), "main.A_int.mem", "mem", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_TOP__main__B_int__mem.configure(this, name(), "main.B_int.mem", "mem", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_TOP__main__alpha_int.configure(this, name(), "main.alpha_int", "alpha_int", -12, VerilatedScope::SCOPE_OTHER);
}

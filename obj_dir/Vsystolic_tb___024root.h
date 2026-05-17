// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsystolic_tb.h for the primary calling header

#ifndef VERILATED_VSYSTOLIC_TB___024ROOT_H_
#define VERILATED_VSYSTOLIC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsystolic_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsystolic_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ systolic_tb__DOT__clk;
    CData/*0:0*/ systolic_tb__DOT__reset;
    CData/*0:0*/ systolic_tb__DOT__enable;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
    CData/*7:0*/ systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__systolic_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    IData/*31:0*/ systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    IData/*31:0*/ systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    IData/*31:0*/ systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    IData/*31:0*/ systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    IData/*31:0*/ systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    IData/*31:0*/ systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    IData/*31:0*/ systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    IData/*31:0*/ systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 3> systolic_tb__DOT__a_in;
    VlUnpacked<CData/*7:0*/, 3> systolic_tb__DOT__b_in;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 3>, 3> systolic_tb__DOT__acc_out;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 3> systolic_tb__DOT__dut__DOT__a_wire;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 3>, 4> systolic_tb__DOT__dut__DOT__b_wire;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd53ccae8__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsystolic_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsystolic_tb___024root(Vsystolic_tb__Syms* symsp, const char* v__name);
    ~Vsystolic_tb___024root();
    VL_UNCOPYABLE(Vsystolic_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

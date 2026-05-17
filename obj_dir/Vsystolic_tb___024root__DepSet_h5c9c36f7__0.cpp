// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_tb.h for the primary calling header

#include "Vsystolic_tb__pch.h"
#include "Vsystolic_tb___024root.h"

VlCoroutine Vsystolic_tb___024root___eval_initial__TOP__Vtiming__0(Vsystolic_tb___024root* vlSelf);
VlCoroutine Vsystolic_tb___024root___eval_initial__TOP__Vtiming__1(Vsystolic_tb___024root* vlSelf);

void Vsystolic_tb___024root___eval_initial(Vsystolic_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsystolic_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__systolic_tb__DOT__clk__0 
        = vlSelfRef.systolic_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vsystolic_tb___024root___eval_initial__TOP__Vtiming__0(Vsystolic_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__0__a0;
    __Vtask_systolic_tb__DOT__cycle__0__a0 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__0__a1;
    __Vtask_systolic_tb__DOT__cycle__0__a1 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__0__a2;
    __Vtask_systolic_tb__DOT__cycle__0__a2 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__0__b0;
    __Vtask_systolic_tb__DOT__cycle__0__b0 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__0__b1;
    __Vtask_systolic_tb__DOT__cycle__0__b1 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__0__b2;
    __Vtask_systolic_tb__DOT__cycle__0__b2 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__1__a0;
    __Vtask_systolic_tb__DOT__cycle__1__a0 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__1__a1;
    __Vtask_systolic_tb__DOT__cycle__1__a1 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__1__a2;
    __Vtask_systolic_tb__DOT__cycle__1__a2 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__1__b0;
    __Vtask_systolic_tb__DOT__cycle__1__b0 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__1__b1;
    __Vtask_systolic_tb__DOT__cycle__1__b1 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__1__b2;
    __Vtask_systolic_tb__DOT__cycle__1__b2 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__2__a0;
    __Vtask_systolic_tb__DOT__cycle__2__a0 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__2__a1;
    __Vtask_systolic_tb__DOT__cycle__2__a1 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__2__a2;
    __Vtask_systolic_tb__DOT__cycle__2__a2 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__2__b0;
    __Vtask_systolic_tb__DOT__cycle__2__b0 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__2__b1;
    __Vtask_systolic_tb__DOT__cycle__2__b1 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__2__b2;
    __Vtask_systolic_tb__DOT__cycle__2__b2 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__3__a0;
    __Vtask_systolic_tb__DOT__cycle__3__a0 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__3__a1;
    __Vtask_systolic_tb__DOT__cycle__3__a1 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__3__a2;
    __Vtask_systolic_tb__DOT__cycle__3__a2 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__3__b0;
    __Vtask_systolic_tb__DOT__cycle__3__b0 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__3__b1;
    __Vtask_systolic_tb__DOT__cycle__3__b1 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__3__b2;
    __Vtask_systolic_tb__DOT__cycle__3__b2 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__4__a0;
    __Vtask_systolic_tb__DOT__cycle__4__a0 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__4__a1;
    __Vtask_systolic_tb__DOT__cycle__4__a1 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__4__a2;
    __Vtask_systolic_tb__DOT__cycle__4__a2 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__4__b0;
    __Vtask_systolic_tb__DOT__cycle__4__b0 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__4__b1;
    __Vtask_systolic_tb__DOT__cycle__4__b1 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__4__b2;
    __Vtask_systolic_tb__DOT__cycle__4__b2 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__5__a0;
    __Vtask_systolic_tb__DOT__cycle__5__a0 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__5__a1;
    __Vtask_systolic_tb__DOT__cycle__5__a1 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__5__a2;
    __Vtask_systolic_tb__DOT__cycle__5__a2 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__5__b0;
    __Vtask_systolic_tb__DOT__cycle__5__b0 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__5__b1;
    __Vtask_systolic_tb__DOT__cycle__5__b1 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__5__b2;
    __Vtask_systolic_tb__DOT__cycle__5__b2 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__6__a0;
    __Vtask_systolic_tb__DOT__cycle__6__a0 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__6__a1;
    __Vtask_systolic_tb__DOT__cycle__6__a1 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__6__a2;
    __Vtask_systolic_tb__DOT__cycle__6__a2 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__6__b0;
    __Vtask_systolic_tb__DOT__cycle__6__b0 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__6__b1;
    __Vtask_systolic_tb__DOT__cycle__6__b1 = 0;
    CData/*7:0*/ __Vtask_systolic_tb__DOT__cycle__6__b2;
    __Vtask_systolic_tb__DOT__cycle__6__b2 = 0;
    // Body
    vlSelfRef.systolic_tb__DOT__clk = 0U;
    vlSelfRef.systolic_tb__DOT__reset = 1U;
    vlSelfRef.systolic_tb__DOT__enable = 0U;
    vlSelfRef.systolic_tb__DOT__a_in[0U] = 0U;
    vlSelfRef.systolic_tb__DOT__a_in[1U] = 0U;
    vlSelfRef.systolic_tb__DOT__a_in[2U] = 0U;
    vlSelfRef.systolic_tb__DOT__b_in[0U] = 0U;
    vlSelfRef.systolic_tb__DOT__b_in[1U] = 0U;
    vlSelfRef.systolic_tb__DOT__b_in[2U] = 0U;
    co_await vlSelfRef.__VtrigSched_hd53ccae8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_tb.clk)", 
                                                         "tb/systolic_tb.sv", 
                                                         25);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/systolic_tb.sv", 
                                         25);
    vlSelfRef.systolic_tb__DOT__reset = 0U;
    vlSelfRef.systolic_tb__DOT__enable = 1U;
    __Vtask_systolic_tb__DOT__cycle__0__b2 = 0U;
    __Vtask_systolic_tb__DOT__cycle__0__b1 = 0U;
    __Vtask_systolic_tb__DOT__cycle__0__b0 = 1U;
    __Vtask_systolic_tb__DOT__cycle__0__a2 = 0U;
    __Vtask_systolic_tb__DOT__cycle__0__a1 = 0U;
    __Vtask_systolic_tb__DOT__cycle__0__a0 = 1U;
    vlSelfRef.systolic_tb__DOT__a_in[0U] = __Vtask_systolic_tb__DOT__cycle__0__a0;
    vlSelfRef.systolic_tb__DOT__a_in[1U] = __Vtask_systolic_tb__DOT__cycle__0__a1;
    vlSelfRef.systolic_tb__DOT__a_in[2U] = __Vtask_systolic_tb__DOT__cycle__0__a2;
    vlSelfRef.systolic_tb__DOT__b_in[0U] = __Vtask_systolic_tb__DOT__cycle__0__b0;
    vlSelfRef.systolic_tb__DOT__b_in[1U] = __Vtask_systolic_tb__DOT__cycle__0__b1;
    vlSelfRef.systolic_tb__DOT__b_in[2U] = __Vtask_systolic_tb__DOT__cycle__0__b2;
    co_await vlSelfRef.__VtrigSched_hd53ccae8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_tb.clk)", 
                                                         "tb/systolic_tb.sv", 
                                                         18);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/systolic_tb.sv", 
                                         18);
    __Vtask_systolic_tb__DOT__cycle__1__b2 = 0U;
    __Vtask_systolic_tb__DOT__cycle__1__b1 = 2U;
    __Vtask_systolic_tb__DOT__cycle__1__b0 = 4U;
    __Vtask_systolic_tb__DOT__cycle__1__a2 = 0U;
    __Vtask_systolic_tb__DOT__cycle__1__a1 = 0U;
    __Vtask_systolic_tb__DOT__cycle__1__a0 = 0U;
    vlSelfRef.systolic_tb__DOT__a_in[0U] = __Vtask_systolic_tb__DOT__cycle__1__a0;
    vlSelfRef.systolic_tb__DOT__a_in[1U] = __Vtask_systolic_tb__DOT__cycle__1__a1;
    vlSelfRef.systolic_tb__DOT__a_in[2U] = __Vtask_systolic_tb__DOT__cycle__1__a2;
    vlSelfRef.systolic_tb__DOT__b_in[0U] = __Vtask_systolic_tb__DOT__cycle__1__b0;
    vlSelfRef.systolic_tb__DOT__b_in[1U] = __Vtask_systolic_tb__DOT__cycle__1__b1;
    vlSelfRef.systolic_tb__DOT__b_in[2U] = __Vtask_systolic_tb__DOT__cycle__1__b2;
    co_await vlSelfRef.__VtrigSched_hd53ccae8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_tb.clk)", 
                                                         "tb/systolic_tb.sv", 
                                                         18);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/systolic_tb.sv", 
                                         18);
    __Vtask_systolic_tb__DOT__cycle__2__b2 = 3U;
    __Vtask_systolic_tb__DOT__cycle__2__b1 = 5U;
    __Vtask_systolic_tb__DOT__cycle__2__b0 = 7U;
    __Vtask_systolic_tb__DOT__cycle__2__a2 = 0U;
    __Vtask_systolic_tb__DOT__cycle__2__a1 = 1U;
    __Vtask_systolic_tb__DOT__cycle__2__a0 = 0U;
    vlSelfRef.systolic_tb__DOT__a_in[0U] = __Vtask_systolic_tb__DOT__cycle__2__a0;
    vlSelfRef.systolic_tb__DOT__a_in[1U] = __Vtask_systolic_tb__DOT__cycle__2__a1;
    vlSelfRef.systolic_tb__DOT__a_in[2U] = __Vtask_systolic_tb__DOT__cycle__2__a2;
    vlSelfRef.systolic_tb__DOT__b_in[0U] = __Vtask_systolic_tb__DOT__cycle__2__b0;
    vlSelfRef.systolic_tb__DOT__b_in[1U] = __Vtask_systolic_tb__DOT__cycle__2__b1;
    vlSelfRef.systolic_tb__DOT__b_in[2U] = __Vtask_systolic_tb__DOT__cycle__2__b2;
    co_await vlSelfRef.__VtrigSched_hd53ccae8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_tb.clk)", 
                                                         "tb/systolic_tb.sv", 
                                                         18);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/systolic_tb.sv", 
                                         18);
    __Vtask_systolic_tb__DOT__cycle__3__b2 = 6U;
    __Vtask_systolic_tb__DOT__cycle__3__b1 = 8U;
    __Vtask_systolic_tb__DOT__cycle__3__b0 = 0U;
    __Vtask_systolic_tb__DOT__cycle__3__a2 = 0U;
    __Vtask_systolic_tb__DOT__cycle__3__a1 = 0U;
    __Vtask_systolic_tb__DOT__cycle__3__a0 = 0U;
    vlSelfRef.systolic_tb__DOT__a_in[0U] = __Vtask_systolic_tb__DOT__cycle__3__a0;
    vlSelfRef.systolic_tb__DOT__a_in[1U] = __Vtask_systolic_tb__DOT__cycle__3__a1;
    vlSelfRef.systolic_tb__DOT__a_in[2U] = __Vtask_systolic_tb__DOT__cycle__3__a2;
    vlSelfRef.systolic_tb__DOT__b_in[0U] = __Vtask_systolic_tb__DOT__cycle__3__b0;
    vlSelfRef.systolic_tb__DOT__b_in[1U] = __Vtask_systolic_tb__DOT__cycle__3__b1;
    vlSelfRef.systolic_tb__DOT__b_in[2U] = __Vtask_systolic_tb__DOT__cycle__3__b2;
    co_await vlSelfRef.__VtrigSched_hd53ccae8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_tb.clk)", 
                                                         "tb/systolic_tb.sv", 
                                                         18);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/systolic_tb.sv", 
                                         18);
    __Vtask_systolic_tb__DOT__cycle__4__b2 = 9U;
    __Vtask_systolic_tb__DOT__cycle__4__b1 = 0U;
    __Vtask_systolic_tb__DOT__cycle__4__b0 = 0U;
    __Vtask_systolic_tb__DOT__cycle__4__a2 = 1U;
    __Vtask_systolic_tb__DOT__cycle__4__a1 = 0U;
    __Vtask_systolic_tb__DOT__cycle__4__a0 = 0U;
    vlSelfRef.systolic_tb__DOT__a_in[0U] = __Vtask_systolic_tb__DOT__cycle__4__a0;
    vlSelfRef.systolic_tb__DOT__a_in[1U] = __Vtask_systolic_tb__DOT__cycle__4__a1;
    vlSelfRef.systolic_tb__DOT__a_in[2U] = __Vtask_systolic_tb__DOT__cycle__4__a2;
    vlSelfRef.systolic_tb__DOT__b_in[0U] = __Vtask_systolic_tb__DOT__cycle__4__b0;
    vlSelfRef.systolic_tb__DOT__b_in[1U] = __Vtask_systolic_tb__DOT__cycle__4__b1;
    vlSelfRef.systolic_tb__DOT__b_in[2U] = __Vtask_systolic_tb__DOT__cycle__4__b2;
    co_await vlSelfRef.__VtrigSched_hd53ccae8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_tb.clk)", 
                                                         "tb/systolic_tb.sv", 
                                                         18);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/systolic_tb.sv", 
                                         18);
    __Vtask_systolic_tb__DOT__cycle__5__b2 = 0U;
    __Vtask_systolic_tb__DOT__cycle__5__b1 = 0U;
    __Vtask_systolic_tb__DOT__cycle__5__b0 = 0U;
    __Vtask_systolic_tb__DOT__cycle__5__a2 = 0U;
    __Vtask_systolic_tb__DOT__cycle__5__a1 = 0U;
    __Vtask_systolic_tb__DOT__cycle__5__a0 = 0U;
    vlSelfRef.systolic_tb__DOT__a_in[0U] = __Vtask_systolic_tb__DOT__cycle__5__a0;
    vlSelfRef.systolic_tb__DOT__a_in[1U] = __Vtask_systolic_tb__DOT__cycle__5__a1;
    vlSelfRef.systolic_tb__DOT__a_in[2U] = __Vtask_systolic_tb__DOT__cycle__5__a2;
    vlSelfRef.systolic_tb__DOT__b_in[0U] = __Vtask_systolic_tb__DOT__cycle__5__b0;
    vlSelfRef.systolic_tb__DOT__b_in[1U] = __Vtask_systolic_tb__DOT__cycle__5__b1;
    vlSelfRef.systolic_tb__DOT__b_in[2U] = __Vtask_systolic_tb__DOT__cycle__5__b2;
    co_await vlSelfRef.__VtrigSched_hd53ccae8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_tb.clk)", 
                                                         "tb/systolic_tb.sv", 
                                                         18);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/systolic_tb.sv", 
                                         18);
    __Vtask_systolic_tb__DOT__cycle__6__b2 = 0U;
    __Vtask_systolic_tb__DOT__cycle__6__b1 = 0U;
    __Vtask_systolic_tb__DOT__cycle__6__b0 = 0U;
    __Vtask_systolic_tb__DOT__cycle__6__a2 = 0U;
    __Vtask_systolic_tb__DOT__cycle__6__a1 = 0U;
    __Vtask_systolic_tb__DOT__cycle__6__a0 = 0U;
    vlSelfRef.systolic_tb__DOT__a_in[0U] = __Vtask_systolic_tb__DOT__cycle__6__a0;
    vlSelfRef.systolic_tb__DOT__a_in[1U] = __Vtask_systolic_tb__DOT__cycle__6__a1;
    vlSelfRef.systolic_tb__DOT__a_in[2U] = __Vtask_systolic_tb__DOT__cycle__6__a2;
    vlSelfRef.systolic_tb__DOT__b_in[0U] = __Vtask_systolic_tb__DOT__cycle__6__b0;
    vlSelfRef.systolic_tb__DOT__b_in[1U] = __Vtask_systolic_tb__DOT__cycle__6__b1;
    vlSelfRef.systolic_tb__DOT__b_in[2U] = __Vtask_systolic_tb__DOT__cycle__6__b2;
    co_await vlSelfRef.__VtrigSched_hd53ccae8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_tb.clk)", 
                                                         "tb/systolic_tb.sv", 
                                                         18);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/systolic_tb.sv", 
                                         18);
    co_await vlSelfRef.__VtrigSched_hd53ccae8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_tb.clk)", 
                                                         "tb/systolic_tb.sv", 
                                                         49);
    co_await vlSelfRef.__VtrigSched_hd53ccae8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_tb.clk)", 
                                                         "tb/systolic_tb.sv", 
                                                         49);
    co_await vlSelfRef.__VtrigSched_hd53ccae8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_tb.clk)", 
                                                         "tb/systolic_tb.sv", 
                                                         49);
    co_await vlSelfRef.__VtrigSched_hd53ccae8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_tb.clk)", 
                                                         "tb/systolic_tb.sv", 
                                                         49);
    co_await vlSelfRef.__VtrigSched_hd53ccae8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_tb.clk)", 
                                                         "tb/systolic_tb.sv", 
                                                         49);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/systolic_tb.sv", 
                                         49);
    VL_WRITEF_NX("Got:\n%0d\t%0d\t%0d\t\n%0d\t%0d\t%0d\t\n%0d\t%0d\t%0d\t\nExpected:\n1  2  3\n4  5  6\n7  8  9\n",0,
                 32,vlSelfRef.systolic_tb__DOT__acc_out
                 [0U][0U],32,vlSelfRef.systolic_tb__DOT__acc_out
                 [0U][1U],32,vlSelfRef.systolic_tb__DOT__acc_out
                 [0U][2U],32,vlSelfRef.systolic_tb__DOT__acc_out
                 [1U][0U],32,vlSelfRef.systolic_tb__DOT__acc_out
                 [1U][1U],32,vlSelfRef.systolic_tb__DOT__acc_out
                 [1U][2U],32,vlSelfRef.systolic_tb__DOT__acc_out
                 [2U][0U],32,vlSelfRef.systolic_tb__DOT__acc_out
                 [2U][1U],32,vlSelfRef.systolic_tb__DOT__acc_out
                 [2U][2U]);
    VL_FINISH_MT("tb/systolic_tb.sv", 62, "");
}

VL_INLINE_OPT VlCoroutine Vsystolic_tb___024root___eval_initial__TOP__Vtiming__1(Vsystolic_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/systolic_tb.sv", 
                                             10);
        vlSelfRef.systolic_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.systolic_tb__DOT__clk)));
    }
}

void Vsystolic_tb___024root___act_comb__TOP__0(Vsystolic_tb___024root* vlSelf);

void Vsystolic_tb___024root___eval_act(Vsystolic_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vsystolic_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsystolic_tb___024root___act_comb__TOP__0(Vsystolic_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire[0U][0U] 
        = vlSelfRef.systolic_tb__DOT__a_in[0U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire[1U][0U] 
        = vlSelfRef.systolic_tb__DOT__a_in[1U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire[2U][0U] 
        = vlSelfRef.systolic_tb__DOT__a_in[2U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire[0U][0U] 
        = vlSelfRef.systolic_tb__DOT__b_in[0U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire[0U][1U] 
        = vlSelfRef.systolic_tb__DOT__b_in[1U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire[0U][2U] 
        = vlSelfRef.systolic_tb__DOT__b_in[2U];
}

void Vsystolic_tb___024root___nba_sequent__TOP__0(Vsystolic_tb___024root* vlSelf);

void Vsystolic_tb___024root___eval_nba(Vsystolic_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsystolic_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsystolic_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsystolic_tb___024root___nba_sequent__TOP__0(Vsystolic_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc = 0;
    IData/*31:0*/ __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc = 0;
    IData/*31:0*/ __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc = 0;
    IData/*31:0*/ __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc = 0;
    IData/*31:0*/ __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc = 0;
    IData/*31:0*/ __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc = 0;
    IData/*31:0*/ __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc = 0;
    IData/*31:0*/ __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc = 0;
    IData/*31:0*/ __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc = 0;
    // Body
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    if (vlSelfRef.systolic_tb__DOT__reset) {
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc = 0U;
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
    } else if (vlSelfRef.systolic_tb__DOT__enable) {
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc 
            = (vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
                                               [0U]
                                               [0U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
                                           [0U][0U])));
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc 
            = (vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
                                               [0U]
                                               [1U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
                                           [0U][1U])));
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc 
            = (vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
                                               [0U]
                                               [2U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
                                           [0U][2U])));
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc 
            = (vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
                                               [1U]
                                               [0U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
                                           [1U][0U])));
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc 
            = (vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
                                               [1U]
                                               [1U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
                                           [1U][1U])));
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc 
            = (vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
                                               [1U]
                                               [2U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
                                           [1U][2U])));
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc 
            = (vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
                                               [2U]
                                               [0U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
                                           [2U][0U])));
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc 
            = (vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
                                               [2U]
                                               [1U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
                                           [2U][1U])));
        __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc 
            = (vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                               vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
                                               [2U]
                                               [2U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
                                           [2U][2U])));
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
            [0U][0U];
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
            [0U][0U];
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
            [0U][1U];
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
            [0U][1U];
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
            [0U][2U];
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
            [0U][2U];
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
            [1U][0U];
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
            [1U][0U];
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
            [1U][1U];
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
            [1U][1U];
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
            [1U][2U];
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
            [1U][2U];
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
            [2U][0U];
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
            [2U][0U];
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
            [2U][1U];
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
            [2U][1U];
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire
            [2U][2U];
        vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire
            [2U][2U];
    }
    vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc 
        = __Vdly__systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__acc_out[0U][0U] = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__acc_out[0U][1U] = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__acc_out[0U][2U] = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__acc_out[1U][0U] = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__acc_out[1U][1U] = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__acc_out[1U][2U] = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__acc_out[2U][0U] = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__acc_out[2U][1U] = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__acc_out[2U][2U] = vlSelfRef.systolic_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__DOT__acc;
    vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire[0U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire[1U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire[0U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire[1U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire[0U][3U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire[1U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire[1U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire[2U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire[1U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire[2U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire[1U][3U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire[2U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire[2U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire[3U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire[2U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire[3U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__a_wire[2U][3U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wire[3U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
}

void Vsystolic_tb___024root___timing_resume(Vsystolic_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd53ccae8__0.resume(
                                                   "@(posedge systolic_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsystolic_tb___024root___timing_commit(Vsystolic_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd53ccae8__0.commit(
                                                   "@(posedge systolic_tb.clk)");
    }
}

void Vsystolic_tb___024root___eval_triggers__act(Vsystolic_tb___024root* vlSelf);

bool Vsystolic_tb___024root___eval_phase__act(Vsystolic_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsystolic_tb___024root___eval_triggers__act(vlSelf);
    Vsystolic_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsystolic_tb___024root___timing_resume(vlSelf);
        Vsystolic_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsystolic_tb___024root___eval_phase__nba(Vsystolic_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsystolic_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_tb___024root___dump_triggers__nba(Vsystolic_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_tb___024root___dump_triggers__act(Vsystolic_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsystolic_tb___024root___eval(Vsystolic_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsystolic_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/systolic_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vsystolic_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/systolic_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsystolic_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsystolic_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsystolic_tb___024root___eval_debug_assertions(Vsystolic_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

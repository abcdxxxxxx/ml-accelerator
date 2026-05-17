// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpe_tb.h for the primary calling header

#include "Vpe_tb__pch.h"
#include "Vpe_tb___024root.h"

VlCoroutine Vpe_tb___024root___eval_initial__TOP__Vtiming__0(Vpe_tb___024root* vlSelf);
VlCoroutine Vpe_tb___024root___eval_initial__TOP__Vtiming__1(Vpe_tb___024root* vlSelf);

void Vpe_tb___024root___eval_initial(Vpe_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpe_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpe_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vpe_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__pe_tb__DOT__clk__0 
        = vlSelfRef.pe_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vpe_tb___024root___eval_initial__TOP__Vtiming__0(Vpe_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpe_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pe_tb__DOT__clk = 0U;
    vlSelfRef.pe_tb__DOT__reset = 1U;
    vlSelfRef.pe_tb__DOT__enable = 0U;
    vlSelfRef.pe_tb__DOT__a_in = 0U;
    vlSelfRef.pe_tb__DOT__b_in = 0U;
    co_await vlSelfRef.__VtrigSched_h562e1850__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pe_tb.clk)", 
                                                         "tb/pe_tb.sv", 
                                                         15);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/pe_tb.sv", 
                                         15);
    vlSelfRef.pe_tb__DOT__reset = 0U;
    vlSelfRef.pe_tb__DOT__enable = 1U;
    vlSelfRef.pe_tb__DOT__a_in = 2U;
    vlSelfRef.pe_tb__DOT__b_in = 3U;
    co_await vlSelfRef.__VtrigSched_h562e1850__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pe_tb.clk)", 
                                                         "tb/pe_tb.sv", 
                                                         22);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/pe_tb.sv", 
                                         22);
    VL_WRITEF_NX("After 2*3: acc=%0d (expect 6) %s\n",0,
                 32,vlSelfRef.pe_tb__DOT__dut__DOT__acc,
                 32,((6U == vlSelfRef.pe_tb__DOT__dut__DOT__acc)
                      ? 0x50415353U : 0x4641494cU));
    vlSelfRef.pe_tb__DOT__a_in = 4U;
    vlSelfRef.pe_tb__DOT__b_in = 5U;
    co_await vlSelfRef.__VtrigSched_h562e1850__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pe_tb.clk)", 
                                                         "tb/pe_tb.sv", 
                                                         27);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/pe_tb.sv", 
                                         27);
    VL_WRITEF_NX("After 4*5: acc=%0d (expect 26) %s\n",0,
                 32,vlSelfRef.pe_tb__DOT__dut__DOT__acc,
                 32,((0x1aU == vlSelfRef.pe_tb__DOT__dut__DOT__acc)
                      ? 0x50415353U : 0x4641494cU));
    vlSelfRef.pe_tb__DOT__a_in = 0xfdU;
    vlSelfRef.pe_tb__DOT__b_in = 2U;
    co_await vlSelfRef.__VtrigSched_h562e1850__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pe_tb.clk)", 
                                                         "tb/pe_tb.sv", 
                                                         32);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/pe_tb.sv", 
                                         32);
    VL_WRITEF_NX("After -3*2: acc=%0d (expect 20) %s\nPE Testbench Done!\n",0,
                 32,vlSelfRef.pe_tb__DOT__dut__DOT__acc,
                 32,((0x14U == vlSelfRef.pe_tb__DOT__dut__DOT__acc)
                      ? 0x50415353U : 0x4641494cU));
    VL_FINISH_MT("tb/pe_tb.sv", 36, "");
}

VL_INLINE_OPT VlCoroutine Vpe_tb___024root___eval_initial__TOP__Vtiming__1(Vpe_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpe_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/pe_tb.sv", 
                                             10);
        vlSelfRef.pe_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.pe_tb__DOT__clk)));
    }
}

void Vpe_tb___024root___eval_act(Vpe_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpe_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vpe_tb___024root___nba_sequent__TOP__0(Vpe_tb___024root* vlSelf);

void Vpe_tb___024root___eval_nba(Vpe_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpe_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpe_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vpe_tb___024root___nba_sequent__TOP__0(Vpe_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpe_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__pe_tb__DOT__dut__DOT__acc;
    __Vdly__pe_tb__DOT__dut__DOT__acc = 0;
    // Body
    __Vdly__pe_tb__DOT__dut__DOT__acc = vlSelfRef.pe_tb__DOT__dut__DOT__acc;
    if (vlSelfRef.pe_tb__DOT__reset) {
        __Vdly__pe_tb__DOT__dut__DOT__acc = 0U;
    } else if (vlSelfRef.pe_tb__DOT__enable) {
        __Vdly__pe_tb__DOT__dut__DOT__acc = (vlSelfRef.pe_tb__DOT__dut__DOT__acc 
                                             + VL_MULS_III(32, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelfRef.pe_tb__DOT__a_in)), 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelfRef.pe_tb__DOT__b_in))));
    }
    vlSelfRef.pe_tb__DOT__dut__DOT__acc = __Vdly__pe_tb__DOT__dut__DOT__acc;
}

void Vpe_tb___024root___timing_resume(Vpe_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpe_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h562e1850__0.resume(
                                                   "@(posedge pe_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vpe_tb___024root___timing_commit(Vpe_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpe_tb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h562e1850__0.commit(
                                                   "@(posedge pe_tb.clk)");
    }
}

void Vpe_tb___024root___eval_triggers__act(Vpe_tb___024root* vlSelf);

bool Vpe_tb___024root___eval_phase__act(Vpe_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpe_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpe_tb___024root___eval_triggers__act(vlSelf);
    Vpe_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vpe_tb___024root___timing_resume(vlSelf);
        Vpe_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpe_tb___024root___eval_phase__nba(Vpe_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpe_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpe_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpe_tb___024root___dump_triggers__nba(Vpe_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpe_tb___024root___dump_triggers__act(Vpe_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vpe_tb___024root___eval(Vpe_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpe_tb___024root___eval\n"); );
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
            Vpe_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/pe_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vpe_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/pe_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vpe_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vpe_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpe_tb___024root___eval_debug_assertions(Vpe_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpe_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

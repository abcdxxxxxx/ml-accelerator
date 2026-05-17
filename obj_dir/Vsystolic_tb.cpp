// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsystolic_tb__pch.h"

//============================================================
// Constructors

Vsystolic_tb::Vsystolic_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsystolic_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsystolic_tb::Vsystolic_tb(const char* _vcname__)
    : Vsystolic_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsystolic_tb::~Vsystolic_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsystolic_tb___024root___eval_debug_assertions(Vsystolic_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vsystolic_tb___024root___eval_static(Vsystolic_tb___024root* vlSelf);
void Vsystolic_tb___024root___eval_initial(Vsystolic_tb___024root* vlSelf);
void Vsystolic_tb___024root___eval_settle(Vsystolic_tb___024root* vlSelf);
void Vsystolic_tb___024root___eval(Vsystolic_tb___024root* vlSelf);

void Vsystolic_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsystolic_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsystolic_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsystolic_tb___024root___eval_static(&(vlSymsp->TOP));
        Vsystolic_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vsystolic_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsystolic_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsystolic_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vsystolic_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsystolic_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsystolic_tb___024root___eval_final(Vsystolic_tb___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_tb::final() {
    Vsystolic_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsystolic_tb::hierName() const { return vlSymsp->name(); }
const char* Vsystolic_tb::modelName() const { return "Vsystolic_tb"; }
unsigned Vsystolic_tb::threads() const { return 1; }
void Vsystolic_tb::prepareClone() const { contextp()->prepareClone(); }
void Vsystolic_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

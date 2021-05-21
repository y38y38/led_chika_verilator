// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vled_chika.h for the primary calling header

#include "Vled_chika.h"
#include "Vled_chika__Syms.h"

//==========

VL_CTOR_IMP(Vled_chika) {
    Vled_chika__Syms* __restrict vlSymsp = __VlSymsp = new Vled_chika__Syms(this, name());
    Vled_chika* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vled_chika::__Vconfigure(Vled_chika__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vled_chika::~Vled_chika() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vled_chika::_initial__TOP__2(Vled_chika__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_chika::_initial__TOP__2\n"); );
    Vled_chika* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->led_chika__DOT__counter = 0U;
}

void Vled_chika::_eval_initial(Vled_chika__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_chika::_eval_initial\n"); );
    Vled_chika* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset_n = vlTOPp->reset_n;
    vlTOPp->_initial__TOP__2(vlSymsp);
}

void Vled_chika::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_chika::final\n"); );
    // Variables
    Vled_chika__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vled_chika* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vled_chika::_eval_settle(Vled_chika__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_chika::_eval_settle\n"); );
    Vled_chika* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vled_chika::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_chika::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset_n = VL_RAND_RESET_I(1);
    led_out = VL_RAND_RESET_I(1);
    led_chika__DOT__counter = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}

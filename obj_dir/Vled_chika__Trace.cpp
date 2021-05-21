// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vled_chika__Syms.h"


void Vled_chika::traceChgTop0(void* userp, VerilatedFst* tracep) {
    Vled_chika__Syms* __restrict vlSymsp = static_cast<Vled_chika__Syms*>(userp);
    Vled_chika* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vled_chika::traceChgSub0(void* userp, VerilatedFst* tracep) {
    Vled_chika__Syms* __restrict vlSymsp = static_cast<Vled_chika__Syms*>(userp);
    Vled_chika* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->reset_n));
        tracep->chgBit(oldp+2,(vlTOPp->led_out));
        tracep->chgCData(oldp+3,(vlTOPp->led_chika__DOT__counter),2);
    }
}

void Vled_chika::traceCleanup(void* userp, VerilatedFst* /*unused*/) {
    Vled_chika__Syms* __restrict vlSymsp = static_cast<Vled_chika__Syms*>(userp);
    Vled_chika* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}

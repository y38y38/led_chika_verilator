// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vled_chika__Syms.h"


//======================

void Vled_chika::trace(VerilatedFstC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vled_chika::traceInit(void* userp, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vled_chika__Syms* __restrict vlSymsp = static_cast<Vled_chika__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vled_chika::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vled_chika::traceInitTop(void* userp, VerilatedFst* tracep) {
    Vled_chika__Syms* __restrict vlSymsp = static_cast<Vled_chika__Syms*>(userp);
    Vled_chika* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vled_chika::traceInitSub0(void* userp, VerilatedFst* tracep) {
    Vled_chika__Syms* __restrict vlSymsp = static_cast<Vled_chika__Syms*>(userp);
    Vled_chika* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"reset_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+3,"led_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1,"led_chika clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"led_chika reset_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+3,"led_chika led_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+4,"led_chika counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    }
}

void Vled_chika::traceRegister(VerilatedFst* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vled_chika::traceFullTop0(void* userp, VerilatedFst* tracep) {
    Vled_chika__Syms* __restrict vlSymsp = static_cast<Vled_chika__Syms*>(userp);
    Vled_chika* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vled_chika::traceFullSub0(void* userp, VerilatedFst* tracep) {
    Vled_chika__Syms* __restrict vlSymsp = static_cast<Vled_chika__Syms*>(userp);
    Vled_chika* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->reset_n));
        tracep->fullBit(oldp+3,(vlTOPp->led_out));
        tracep->fullCData(oldp+4,(vlTOPp->led_chika__DOT__counter),2);
    }
}

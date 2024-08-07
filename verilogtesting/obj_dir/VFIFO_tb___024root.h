// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFIFO_tb.h for the primary calling header

#ifndef VERILATED_VFIFO_TB___024ROOT_H_
#define VERILATED_VFIFO_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VFIFO_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VFIFO_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ FIFO_tb__DOT__clk;
    CData/*0:0*/ FIFO_tb__DOT__rst_n;
    CData/*0:0*/ FIFO_tb__DOT__w_en;
    CData/*0:0*/ FIFO_tb__DOT__r_en;
    CData/*7:0*/ FIFO_tb__DOT__data_in;
    CData/*7:0*/ FIFO_tb__DOT__data_out;
    CData/*0:0*/ FIFO_tb__DOT__full;
    CData/*0:0*/ FIFO_tb__DOT__empty;
    CData/*7:0*/ FIFO_tb__DOT__wdata;
    CData/*2:0*/ FIFO_tb__DOT__s_fifo__DOT__w_ptr;
    CData/*2:0*/ FIFO_tb__DOT__s_fifo__DOT__r_ptr;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__FIFO_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ FIFO_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ FIFO_tb__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> FIFO_tb__DOT__s_fifo__DOT__fifo;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlQueue<CData/*7:0*/> FIFO_tb__DOT__wdata_q;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hcb06e201__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VFIFO_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VFIFO_tb___024root(VFIFO_tb__Syms* symsp, const char* v__name);
    ~VFIFO_tb___024root();
    VL_UNCOPYABLE(VFIFO_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

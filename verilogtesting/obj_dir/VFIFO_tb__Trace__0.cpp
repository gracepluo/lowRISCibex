// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VFIFO_tb__Syms.h"


void VFIFO_tb___024root__trace_chg_0_sub_0(VFIFO_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VFIFO_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_chg_0\n"); );
    // Init
    VFIFO_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFIFO_tb___024root*>(voidSelf);
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VFIFO_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VFIFO_tb___024root__trace_chg_0_sub_0(VFIFO_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->FIFO_tb__DOT__data_out),8);
        bufp->chgBit(oldp+1,(((7U & ((IData)(1U) + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                              == (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr))));
        bufp->chgBit(oldp+2,(((IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr) 
                              == (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))));
        bufp->chgCData(oldp+3,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr),3);
        bufp->chgCData(oldp+4,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr),3);
        bufp->chgCData(oldp+5,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[0]),8);
        bufp->chgCData(oldp+6,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[1]),8);
        bufp->chgCData(oldp+7,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[2]),8);
        bufp->chgCData(oldp+8,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[3]),8);
        bufp->chgCData(oldp+9,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[4]),8);
        bufp->chgCData(oldp+10,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[5]),8);
        bufp->chgCData(oldp+11,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[6]),8);
        bufp->chgCData(oldp+12,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[7]),8);
    }
    bufp->chgBit(oldp+13,(vlSelf->FIFO_tb__DOT__clk));
    bufp->chgBit(oldp+14,(vlSelf->FIFO_tb__DOT__rst_n));
    bufp->chgBit(oldp+15,(vlSelf->FIFO_tb__DOT__w_en));
    bufp->chgBit(oldp+16,(vlSelf->FIFO_tb__DOT__r_en));
    bufp->chgCData(oldp+17,(vlSelf->FIFO_tb__DOT__data_in),8);
    bufp->chgCData(oldp+18,(vlSelf->FIFO_tb__DOT__wdata),8);
    bufp->chgIData(oldp+19,(vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+20,(vlSelf->FIFO_tb__DOT__unnamedblk2__DOT__i),32);
}

void VFIFO_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_cleanup\n"); );
    // Init
    VFIFO_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFIFO_tb___024root*>(voidSelf);
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

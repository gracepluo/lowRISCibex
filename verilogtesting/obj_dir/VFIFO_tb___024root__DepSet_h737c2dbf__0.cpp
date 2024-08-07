// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFIFO_tb.h for the primary calling header

#include "VFIFO_tb__pch.h"
#include "VFIFO_tb___024root.h"

VL_ATTR_COLD void VFIFO_tb___024root___eval_initial__TOP(VFIFO_tb___024root* vlSelf);
VlCoroutine VFIFO_tb___024root___eval_initial__TOP__Vtiming__0(VFIFO_tb___024root* vlSelf);
VlCoroutine VFIFO_tb___024root___eval_initial__TOP__Vtiming__1(VFIFO_tb___024root* vlSelf);
VlCoroutine VFIFO_tb___024root___eval_initial__TOP__Vtiming__2(VFIFO_tb___024root* vlSelf);

void VFIFO_tb___024root___eval_initial(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_initial\n"); );
    // Body
    VFIFO_tb___024root___eval_initial__TOP(vlSelf);
    VFIFO_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VFIFO_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VFIFO_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__FIFO_tb__DOT__clk__0 
        = vlSelf->FIFO_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine VFIFO_tb___024root___eval_initial__TOP__Vtiming__0(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->FIFO_tb__DOT__clk = 0U;
    vlSelf->FIFO_tb__DOT__rst_n = 0U;
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    vlSelf->FIFO_tb__DOT__data_in = 0U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       22);
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       22);
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       22);
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       22);
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       22);
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       22);
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       22);
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       22);
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       22);
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       22);
    vlSelf->FIFO_tb__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 1U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 2U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 3U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 4U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 5U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 6U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 7U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 8U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 9U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0xaU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0xbU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0xcU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0xdU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0xeU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0xfU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x10U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x11U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x12U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x13U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x14U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x15U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x16U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x17U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x18U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x19U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x1aU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x1bU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x1cU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x1dU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x1eU;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                       34);
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 1U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 2U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 3U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 4U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 5U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 6U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 7U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 8U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 9U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0xaU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0xbU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0xcU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0xdU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0xeU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0xfU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x10U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x11U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x12U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x13U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x14U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x15U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x16U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x17U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x18U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x19U;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x1aU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x1bU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x1cU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 1U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x1dU;
    co_await vlSelf->__VtrigSched_hcb06e201__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge FIFO_tb.clk)", 
                                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                                       27);
    vlSelf->FIFO_tb__DOT__w_en = 0U;
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & ((7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                                != (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)))) {
        vlSelf->FIFO_tb__DOT__data_in = (0xffU & VL_RANDOM_I());
        vlSelf->FIFO_tb__DOT__wdata_q.push_back(vlSelf->FIFO_tb__DOT__data_in);
    }
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0x1eU;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                       34);
}

VL_INLINE_OPT VlCoroutine VFIFO_tb___024root___eval_initial__TOP__Vtiming__2(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/gpluo2/verilogtesting/FIFO_tb.v", 
                                           15);
        vlSelf->FIFO_tb__DOT__clk = (1U & (~ (IData)(vlSelf->FIFO_tb__DOT__clk)));
    }
}

void VFIFO_tb___024root___eval_act(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_act\n"); );
}

void VFIFO_tb___024root___nba_sequent__TOP__0(VFIFO_tb___024root* vlSelf);

void VFIFO_tb___024root___eval_nba(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFIFO_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VFIFO_tb___024root___nba_sequent__TOP__0(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__FIFO_tb__DOT__s_fifo__DOT__w_ptr;
    __Vdly__FIFO_tb__DOT__s_fifo__DOT__w_ptr = 0;
    CData/*2:0*/ __Vdly__FIFO_tb__DOT__s_fifo__DOT__r_ptr;
    __Vdly__FIFO_tb__DOT__s_fifo__DOT__r_ptr = 0;
    CData/*7:0*/ __VdlyVal__FIFO_tb__DOT__s_fifo__DOT__fifo__v0;
    __VdlyVal__FIFO_tb__DOT__s_fifo__DOT__fifo__v0 = 0;
    CData/*2:0*/ __VdlyDim0__FIFO_tb__DOT__s_fifo__DOT__fifo__v0;
    __VdlyDim0__FIFO_tb__DOT__s_fifo__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__FIFO_tb__DOT__s_fifo__DOT__fifo__v0;
    __VdlySet__FIFO_tb__DOT__s_fifo__DOT__fifo__v0 = 0;
    // Body
    __VdlySet__FIFO_tb__DOT__s_fifo__DOT__fifo__v0 = 0U;
    __Vdly__FIFO_tb__DOT__s_fifo__DOT__r_ptr = vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr;
    __Vdly__FIFO_tb__DOT__s_fifo__DOT__w_ptr = vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr;
    if ((1U & (~ (IData)(vlSelf->FIFO_tb__DOT__rst_n)))) {
        __Vdly__FIFO_tb__DOT__s_fifo__DOT__r_ptr = 0U;
        __Vdly__FIFO_tb__DOT__s_fifo__DOT__w_ptr = 0U;
        vlSelf->FIFO_tb__DOT__data_out = 0U;
    }
    if (((IData)(vlSelf->FIFO_tb__DOT__w_en) & (~ (IData)(vlSelf->FIFO_tb__DOT__full)))) {
        __VdlyVal__FIFO_tb__DOT__s_fifo__DOT__fifo__v0 
            = vlSelf->FIFO_tb__DOT__data_in;
        __VdlyDim0__FIFO_tb__DOT__s_fifo__DOT__fifo__v0 
            = vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr;
        __VdlySet__FIFO_tb__DOT__s_fifo__DOT__fifo__v0 = 1U;
        __Vdly__FIFO_tb__DOT__s_fifo__DOT__w_ptr = 
            (7U & ((IData)(1U) + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr)));
    }
    if (((IData)(vlSelf->FIFO_tb__DOT__r_en) & (~ (IData)(vlSelf->FIFO_tb__DOT__empty)))) {
        vlSelf->FIFO_tb__DOT__data_out = vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo
            [vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr];
        __Vdly__FIFO_tb__DOT__s_fifo__DOT__r_ptr = 
            (7U & ((IData)(1U) + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr)));
    }
    vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr = __Vdly__FIFO_tb__DOT__s_fifo__DOT__w_ptr;
    if (__VdlySet__FIFO_tb__DOT__s_fifo__DOT__fifo__v0) {
        vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[__VdlyDim0__FIFO_tb__DOT__s_fifo__DOT__fifo__v0] 
            = __VdlyVal__FIFO_tb__DOT__s_fifo__DOT__fifo__v0;
    }
    vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr = __Vdly__FIFO_tb__DOT__s_fifo__DOT__r_ptr;
    vlSelf->FIFO_tb__DOT__full = ((7U & ((IData)(1U) 
                                         + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                  == (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr));
    vlSelf->FIFO_tb__DOT__empty = ((IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr) 
                                   == (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr));
}

void VFIFO_tb___024root___timing_resume(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hcb06e201__0.resume("@(posedge FIFO_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VFIFO_tb___024root___timing_commit(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hcb06e201__0.commit("@(posedge FIFO_tb.clk)");
    }
}

void VFIFO_tb___024root___eval_triggers__act(VFIFO_tb___024root* vlSelf);

bool VFIFO_tb___024root___eval_phase__act(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VFIFO_tb___024root___eval_triggers__act(vlSelf);
    VFIFO_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VFIFO_tb___024root___timing_resume(vlSelf);
        VFIFO_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VFIFO_tb___024root___eval_phase__nba(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VFIFO_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_tb___024root___dump_triggers__nba(VFIFO_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_tb___024root___dump_triggers__act(VFIFO_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VFIFO_tb___024root___eval(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VFIFO_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/gpluo2/verilogtesting/FIFO_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VFIFO_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/gpluo2/verilogtesting/FIFO_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VFIFO_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VFIFO_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VFIFO_tb___024root___eval_debug_assertions(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

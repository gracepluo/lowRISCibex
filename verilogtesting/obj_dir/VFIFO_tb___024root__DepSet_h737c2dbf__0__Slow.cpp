// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFIFO_tb.h for the primary calling header

#include "VFIFO_tb__pch.h"
#include "VFIFO_tb___024root.h"

VL_ATTR_COLD void VFIFO_tb___024root___eval_static(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void VFIFO_tb___024root___eval_final(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_tb___024root___dump_triggers__stl(VFIFO_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VFIFO_tb___024root___eval_phase__stl(VFIFO_tb___024root* vlSelf);

VL_ATTR_COLD void VFIFO_tb___024root___eval_settle(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VFIFO_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/gpluo2/verilogtesting/FIFO_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VFIFO_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_tb___024root___dump_triggers__stl(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFIFO_tb___024root___stl_sequent__TOP__0(VFIFO_tb___024root* vlSelf);

VL_ATTR_COLD void VFIFO_tb___024root___eval_stl(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VFIFO_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VFIFO_tb___024root___stl_sequent__TOP__0(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->FIFO_tb__DOT__full = ((7U & ((IData)(1U) 
                                         + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                                  == (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr));
    vlSelf->FIFO_tb__DOT__empty = ((IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr) 
                                   == (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr));
}

VL_ATTR_COLD void VFIFO_tb___024root___eval_triggers__stl(VFIFO_tb___024root* vlSelf);

VL_ATTR_COLD bool VFIFO_tb___024root___eval_phase__stl(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VFIFO_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VFIFO_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_tb___024root___dump_triggers__act(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge FIFO_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VFIFO_tb___024root___dump_triggers__nba(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge FIFO_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFIFO_tb___024root___ctor_var_reset(VFIFO_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->FIFO_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->FIFO_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->FIFO_tb__DOT__w_en = VL_RAND_RESET_I(1);
    vlSelf->FIFO_tb__DOT__r_en = VL_RAND_RESET_I(1);
    vlSelf->FIFO_tb__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->FIFO_tb__DOT__data_out = VL_RAND_RESET_I(8);
    vlSelf->FIFO_tb__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->FIFO_tb__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->FIFO_tb__DOT__wdata_q.atDefault() = VL_RAND_RESET_I(8);
    vlSelf->FIFO_tb__DOT__wdata = VL_RAND_RESET_I(8);
    vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->FIFO_tb__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr = VL_RAND_RESET_I(3);
    vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtrigprevexpr___TOP__FIFO_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

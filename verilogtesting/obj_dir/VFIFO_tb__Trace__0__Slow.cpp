// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VFIFO_tb__Syms.h"


VL_ATTR_COLD void VFIFO_tb___024root__trace_init_sub__TOP__0(VFIFO_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("FIFO_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"w_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"r_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("s_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+5,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("fifo", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+6+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VFIFO_tb___024root__trace_init_top(VFIFO_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_init_top\n"); );
    // Body
    VFIFO_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VFIFO_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void VFIFO_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VFIFO_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VFIFO_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VFIFO_tb___024root__trace_register(VFIFO_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VFIFO_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VFIFO_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VFIFO_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VFIFO_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VFIFO_tb___024root__trace_const_0_sub_0(VFIFO_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VFIFO_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_const_0\n"); );
    // Init
    VFIFO_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFIFO_tb___024root*>(voidSelf);
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFIFO_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VFIFO_tb___024root__trace_const_0_sub_0(VFIFO_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+22,(8U),32);
}

VL_ATTR_COLD void VFIFO_tb___024root__trace_full_0_sub_0(VFIFO_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VFIFO_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_full_0\n"); );
    // Init
    VFIFO_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFIFO_tb___024root*>(voidSelf);
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFIFO_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VFIFO_tb___024root__trace_full_0_sub_0(VFIFO_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VFIFO_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->FIFO_tb__DOT__data_out),8);
    bufp->fullBit(oldp+2,(((7U & ((IData)(1U) + (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))) 
                           == (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr))));
    bufp->fullBit(oldp+3,(((IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr) 
                           == (IData)(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr))));
    bufp->fullCData(oldp+4,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__w_ptr),3);
    bufp->fullCData(oldp+5,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__r_ptr),3);
    bufp->fullCData(oldp+6,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[0]),8);
    bufp->fullCData(oldp+7,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[1]),8);
    bufp->fullCData(oldp+8,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[2]),8);
    bufp->fullCData(oldp+9,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[3]),8);
    bufp->fullCData(oldp+10,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[4]),8);
    bufp->fullCData(oldp+11,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[5]),8);
    bufp->fullCData(oldp+12,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[6]),8);
    bufp->fullCData(oldp+13,(vlSelf->FIFO_tb__DOT__s_fifo__DOT__fifo[7]),8);
    bufp->fullBit(oldp+14,(vlSelf->FIFO_tb__DOT__clk));
    bufp->fullBit(oldp+15,(vlSelf->FIFO_tb__DOT__rst_n));
    bufp->fullBit(oldp+16,(vlSelf->FIFO_tb__DOT__w_en));
    bufp->fullBit(oldp+17,(vlSelf->FIFO_tb__DOT__r_en));
    bufp->fullCData(oldp+18,(vlSelf->FIFO_tb__DOT__data_in),8);
    bufp->fullCData(oldp+19,(vlSelf->FIFO_tb__DOT__wdata),8);
    bufp->fullIData(oldp+20,(vlSelf->FIFO_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+21,(vlSelf->FIFO_tb__DOT__unnamedblk2__DOT__i),32);
}

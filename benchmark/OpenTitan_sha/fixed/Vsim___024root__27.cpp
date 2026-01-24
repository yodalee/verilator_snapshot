// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___nba_sequent__TOP__71(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__71\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 = 0;
    VlWide<50>/*1599:0*/ __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout;
    VL_ZERO_W(1600, __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout);
    // Body
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xfffffffeU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 1U) ^ vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U]));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xfffffffdU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 2U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                            >> 1U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xfffffffbU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 3U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                            >> 2U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xfffffff7U & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 3U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 4U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                            >> 3U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xffffffefU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 4U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 5U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                            >> 4U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xffffffdfU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 5U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 6U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                            >> 5U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xffffffbfU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 6U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 7U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                            >> 6U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xffffff7fU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 7U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 8U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                            >> 7U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xfffffeffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 8U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 9U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                            >> 8U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xfffffdffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 9U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x0000000aU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 9U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xfffffbffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x0000000bU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x0000000aU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xfffff7ffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x0000000cU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x0000000bU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xffffefffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x0000000dU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x0000000cU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xffffdfffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x0000000eU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x0000000dU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xffffbfffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x0000000fU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x0000000eU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xffff7fffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x00000010U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x0000000fU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xfffeffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x00000011U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x00000010U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xfffdffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000011U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x00000012U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x00000011U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xfffbffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000012U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x00000013U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x00000012U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xfff7ffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000013U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x00000014U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x00000013U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xffefffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000014U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x00000015U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x00000014U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xffdfffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000015U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x00000016U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x00000015U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xffbfffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000016U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x00000017U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x00000016U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xff7fffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000017U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x00000018U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x00000017U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xfeffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000018U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x00000019U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x00000018U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xfdffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000019U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x0000001aU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x00000019U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xfbffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x0000001bU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x0000001aU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xf7ffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x0000001cU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x0000001bU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xefffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x0000001dU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x0000001cU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xdfffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x0000001eU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x0000001dU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0xbfffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[3U] 
                  >> 0x0000001fU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                                     >> 0x0000001eU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U] 
        = ((0x7fffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                 ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                    >> 0x0000001fU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xfffffffeU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 1U) ^ vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U]));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xfffffffdU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 2U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                            >> 1U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xfffffffbU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 3U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                            >> 2U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xfffffff7U & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 3U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 4U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                            >> 3U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xffffffefU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 4U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 5U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                            >> 4U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xffffffdfU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 5U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 6U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                            >> 5U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xffffffbfU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 6U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 7U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                            >> 6U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xffffff7fU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 7U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 8U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                            >> 7U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xfffffeffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 8U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 9U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                            >> 8U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xfffffdffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 9U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x0000000aU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 9U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xfffffbffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x0000000bU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x0000000aU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xfffff7ffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x0000000cU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x0000000bU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xffffefffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x0000000dU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x0000000cU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xffffdfffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x0000000eU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x0000000dU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xffffbfffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x0000000fU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x0000000eU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xffff7fffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x00000010U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x0000000fU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xfffeffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x00000011U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x00000010U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xfffdffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000011U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x00000012U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x00000011U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xfffbffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000012U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x00000013U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x00000012U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xfff7ffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000013U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x00000014U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x00000013U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xffefffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000014U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x00000015U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x00000014U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xffdfffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000015U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x00000016U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x00000015U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xffbfffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000016U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x00000017U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x00000016U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xff7fffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000017U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x00000018U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x00000017U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xfeffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000018U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x00000019U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x00000018U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xfdffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000019U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x0000001aU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x00000019U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xfbffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x0000001bU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x0000001aU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xf7ffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x0000001cU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x0000001bU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xefffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x0000001dU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x0000001cU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xdfffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x0000001eU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x0000001dU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0xbfffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[4U] 
                  >> 0x0000001fU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                                     >> 0x0000001eU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U] 
        = ((0x7fffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                 ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[8U] 
                    >> 0x0000001fU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xfffffffeU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 1U) ^ vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U]));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xfffffffdU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 2U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                            >> 1U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xfffffffbU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 3U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                            >> 2U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xfffffff7U & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 3U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 4U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                            >> 3U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xffffffefU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 4U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 5U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                            >> 4U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xffffffdfU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 5U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 6U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                            >> 5U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xffffffbfU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 6U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 7U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                            >> 6U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xffffff7fU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 7U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 8U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                            >> 7U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xfffffeffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 8U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 9U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                            >> 8U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xfffffdffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 9U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x0000000aU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 9U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xfffffbffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x0000000bU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x0000000aU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xfffff7ffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x0000000cU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x0000000bU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xffffefffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x0000000dU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x0000000cU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xffffdfffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x0000000eU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x0000000dU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xffffbfffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x0000000fU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x0000000eU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xffff7fffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x00000010U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x0000000fU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xfffeffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x00000011U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x00000010U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xfffdffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000011U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x00000012U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x00000011U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xfffbffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000012U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x00000013U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x00000012U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xfff7ffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000013U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x00000014U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x00000013U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xffefffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000014U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x00000015U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x00000014U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xffdfffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000015U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x00000016U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x00000015U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xffbfffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000016U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x00000017U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x00000016U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xff7fffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000017U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x00000018U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x00000017U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xfeffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000018U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x00000019U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x00000018U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xfdffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000019U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x0000001aU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x00000019U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xfbffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x0000001bU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x0000001aU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xf7ffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x0000001cU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x0000001bU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xefffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x0000001dU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x0000001cU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xdfffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x0000001eU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x0000001dU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0xbfffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[5U] 
                  >> 0x0000001fU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[9U] 
                                     >> 0x0000001eU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U] 
        = ((0x7fffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                 ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                    >> 0x0000001fU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xfffffffeU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 1U) ^ vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U]));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xfffffffdU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 2U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                            >> 1U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xfffffffbU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 3U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                            >> 2U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xfffffff7U & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 3U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 4U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                            >> 3U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xffffffefU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 4U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 5U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                            >> 4U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xffffffdfU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 5U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 6U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                            >> 5U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xffffffbfU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 6U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 7U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                            >> 6U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xffffff7fU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 7U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 8U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                            >> 7U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xfffffeffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 8U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 9U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                            >> 8U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xfffffdffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 9U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x0000000aU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 9U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xfffffbffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x0000000bU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x0000000aU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xfffff7ffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x0000000cU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x0000000bU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xffffefffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x0000000dU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x0000000cU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xffffdfffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x0000000eU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x0000000dU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xffffbfffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x0000000fU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x0000000eU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xffff7fffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x00000010U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x0000000fU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xfffeffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x00000011U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x00000010U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xfffdffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000011U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x00000012U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x00000011U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xfffbffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000012U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x00000013U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x00000012U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xfff7ffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000013U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x00000014U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x00000013U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xffefffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000014U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x00000015U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x00000014U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xffdfffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000015U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x00000016U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x00000015U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xffbfffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000016U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x00000017U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x00000016U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xff7fffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000017U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x00000018U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x00000017U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xfeffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000018U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x00000019U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x00000018U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xfdffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000019U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x0000001aU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x00000019U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xfbffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x0000001bU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x0000001aU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xf7ffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x0000001cU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x0000001bU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xefffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x0000001dU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x0000001cU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xdfffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x0000001eU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x0000001dU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0xbfffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[6U] 
                  >> 0x0000001fU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                                     >> 0x0000001eU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U] 
        = ((0x7fffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                 ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[0U] 
                    >> 0x0000001fU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xfffffffeU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 1U) ^ vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U]));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xfffffffdU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 2U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                            >> 1U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xfffffffbU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 3U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                            >> 2U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xfffffff7U & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 3U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 4U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                            >> 3U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xffffffefU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 4U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 5U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                            >> 4U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xffffffdfU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 5U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 6U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                            >> 5U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xffffffbfU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 6U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 7U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                            >> 6U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xffffff7fU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 7U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 8U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                            >> 7U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xfffffeffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 8U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 9U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                            >> 8U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xfffffdffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 9U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x0000000aU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 9U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xfffffbffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x0000000bU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x0000000aU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xfffff7ffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x0000000cU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x0000000bU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xffffefffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x0000000dU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x0000000cU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xffffdfffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x0000000eU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x0000000dU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xffffbfffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x0000000fU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x0000000eU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xffff7fffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000000fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x00000010U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x0000000fU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xfffeffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x00000011U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x00000010U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xfffdffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000011U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x00000012U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x00000011U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xfffbffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000012U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x00000013U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x00000012U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xfff7ffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000013U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x00000014U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x00000013U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xffefffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000014U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x00000015U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x00000014U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xffdfffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000015U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x00000016U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x00000015U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xffbfffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000016U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x00000017U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x00000016U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xff7fffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000017U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x00000018U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x00000017U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xfeffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000018U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x00000019U) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x00000018U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xfdffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x00000019U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x0000001aU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x00000019U)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xfbffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x0000001bU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x0000001aU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xf7ffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x0000001cU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x0000001bU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xefffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x0000001dU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x0000001cU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xdfffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x0000001eU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x0000001dU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0xbfffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0 
        = (1U & ((vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[7U] 
                  >> 0x0000001fU) ^ (vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__c[1U] 
                                     >> 0x0000001eU)));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U] 
        = ((0x7fffffffU & vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h4fa9d250__0) 
              << 0x0000001fU));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[1U])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0U]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[1U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[0U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0U] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[1U] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[3U])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[2U]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[1U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[0U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[2U] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[3U] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[5U])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[4U]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[1U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[0U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[4U] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[5U] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[7U])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[6U]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[1U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[0U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[6U] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[7U] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[9U])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[8U]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[1U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[0U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[8U] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[9U] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000000bU])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000000aU]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[3U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[2U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000000aU] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000000bU] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000000dU])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000000cU]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[3U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[2U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000000cU] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000000dU] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000000fU])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000000eU]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[3U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[2U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000000eU] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000000fU] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000011U])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000010U]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[3U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[2U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000010U] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000011U] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000013U])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000012U]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[3U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[2U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000012U] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000013U] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000015U])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000014U]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[4U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000014U] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000015U] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000017U])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000016U]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[4U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000016U] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000017U] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000019U])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000018U]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[4U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000018U] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000019U] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000001bU])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000001aU]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[4U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000001aU] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000001bU] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000001dU])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000001cU]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[5U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[4U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000001cU] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000001dU] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000001fU])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000001eU]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000001eU] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000001fU] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000021U])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000020U]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000020U] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000021U] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000023U])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000022U]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000022U] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000023U] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000025U])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000024U]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000024U] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000025U] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000027U])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000026U]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[7U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[6U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000026U] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000027U] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000029U])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000028U]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000028U] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000029U] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000002bU])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000002aU]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000002aU] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000002bU] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000002dU])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000002cU]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000002cU] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000002dU] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000002fU])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x0000002eU]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000002eU] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x0000002fU] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
        = ((((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000031U])) 
             << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__state[0x00000030U]))) 
           ^ (((QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[9U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__d[8U]))));
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000030U] 
        = (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0);
    vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[0x00000031U] 
        = (IData)((chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h5101a59e__0 
                   >> 0x00000020U));
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x00000031U)) {
        __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[__Vilp1] 
            = vlSelfRef.__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__result[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][1U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][2U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][3U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][4U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][5U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][6U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][7U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][8U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][9U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000000aU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000000bU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000000cU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000000dU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000000eU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000000fU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000010U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000010U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000011U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000011U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000012U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000012U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000013U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000013U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000014U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000014U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000015U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000015U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000016U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000016U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000017U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000017U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000018U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000018U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000019U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000019U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000001aU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000001aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000001bU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000001bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000001cU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000001cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000001dU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000001dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000001eU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000001eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000001fU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000001fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000020U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000020U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000021U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000021U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000022U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000022U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000023U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000023U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000024U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000024U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000025U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000025U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000026U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000026U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000027U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000027U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000028U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000028U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000029U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000029U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000002aU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000002aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000002bU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000002bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000002cU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000002cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000002dU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000002dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000002eU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000002eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x0000002fU] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x0000002fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000030U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000030U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[0U][0x00000031U] 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__2986__Vfuncout[0x00000031U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__sub_word_in 
        = ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_expand_round))
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__rot_word_out
           [0U] : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__rot_word_in
           [0U]);
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_addr_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_addr_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_addr_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_addr_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_addr_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 7U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_addr_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2195__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2195__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2195__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2195__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2195__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2227__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2227__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2227__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2227__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2227__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2259__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2291__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2323__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2355__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2387__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2419__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2451__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2483__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2515__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2547__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2579__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2611__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2643__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2675__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__Vfuncout)));
}

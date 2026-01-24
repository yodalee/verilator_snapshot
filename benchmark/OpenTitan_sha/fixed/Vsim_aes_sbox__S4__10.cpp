// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__1(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1010__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1010__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1010__gamma;
    __Vfunc_aes_mul_gf2p4__1010__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1010__delta;
    __Vfunc_aes_mul_gf2p4__1010__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1010__a;
    __Vfunc_aes_mul_gf2p4__1010__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1010__b;
    __Vfunc_aes_mul_gf2p4__1010__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1010__c;
    __Vfunc_aes_mul_gf2p4__1010__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1011__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1011__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1011__g;
    __Vfunc_aes_mul_gf2p2__1011__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1011__d;
    __Vfunc_aes_mul_gf2p2__1011__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1011__f;
    __Vfunc_aes_mul_gf2p2__1011__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1011__a;
    __Vfunc_aes_mul_gf2p2__1011__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1011__b;
    __Vfunc_aes_mul_gf2p2__1011__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1011__c;
    __Vfunc_aes_mul_gf2p2__1011__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1012__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1012__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1012__g;
    __Vfunc_aes_mul_gf2p2__1012__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1012__d;
    __Vfunc_aes_mul_gf2p2__1012__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1012__f;
    __Vfunc_aes_mul_gf2p2__1012__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1012__a;
    __Vfunc_aes_mul_gf2p2__1012__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1012__b;
    __Vfunc_aes_mul_gf2p2__1012__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1012__c;
    __Vfunc_aes_mul_gf2p2__1012__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1013__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1013__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1013__g;
    __Vfunc_aes_mul_gf2p2__1013__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1013__d;
    __Vfunc_aes_mul_gf2p2__1013__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1013__f;
    __Vfunc_aes_mul_gf2p2__1013__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1013__a;
    __Vfunc_aes_mul_gf2p2__1013__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1013__b;
    __Vfunc_aes_mul_gf2p2__1013__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1013__c;
    __Vfunc_aes_mul_gf2p2__1013__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1016__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1016__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1016__gamma;
    __Vfunc_aes_mul_gf2p4__1016__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1016__delta;
    __Vfunc_aes_mul_gf2p4__1016__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1016__a;
    __Vfunc_aes_mul_gf2p4__1016__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1016__b;
    __Vfunc_aes_mul_gf2p4__1016__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1016__c;
    __Vfunc_aes_mul_gf2p4__1016__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1017__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1017__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1017__g;
    __Vfunc_aes_mul_gf2p2__1017__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1017__d;
    __Vfunc_aes_mul_gf2p2__1017__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1017__f;
    __Vfunc_aes_mul_gf2p2__1017__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1017__a;
    __Vfunc_aes_mul_gf2p2__1017__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1017__b;
    __Vfunc_aes_mul_gf2p2__1017__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1017__c;
    __Vfunc_aes_mul_gf2p2__1017__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1018__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1018__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1018__g;
    __Vfunc_aes_mul_gf2p2__1018__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1018__d;
    __Vfunc_aes_mul_gf2p2__1018__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1018__f;
    __Vfunc_aes_mul_gf2p2__1018__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1018__a;
    __Vfunc_aes_mul_gf2p2__1018__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1018__b;
    __Vfunc_aes_mul_gf2p2__1018__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1018__c;
    __Vfunc_aes_mul_gf2p2__1018__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1019__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1019__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1019__g;
    __Vfunc_aes_mul_gf2p2__1019__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1019__d;
    __Vfunc_aes_mul_gf2p2__1019__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1019__f;
    __Vfunc_aes_mul_gf2p2__1019__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1019__a;
    __Vfunc_aes_mul_gf2p2__1019__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1019__b;
    __Vfunc_aes_mul_gf2p2__1019__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1019__c;
    __Vfunc_aes_mul_gf2p2__1019__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1040__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1040__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1040__g;
    __Vfunc_aes_mul_gf2p2__1040__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1040__d;
    __Vfunc_aes_mul_gf2p2__1040__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1040__f;
    __Vfunc_aes_mul_gf2p2__1040__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1040__a;
    __Vfunc_aes_mul_gf2p2__1040__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1040__b;
    __Vfunc_aes_mul_gf2p2__1040__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1040__c;
    __Vfunc_aes_mul_gf2p2__1040__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1041__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1041__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1041__g;
    __Vfunc_aes_mul_gf2p2__1041__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1041__d;
    __Vfunc_aes_mul_gf2p2__1041__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1041__f;
    __Vfunc_aes_mul_gf2p2__1041__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1041__a;
    __Vfunc_aes_mul_gf2p2__1041__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1041__b;
    __Vfunc_aes_mul_gf2p2__1041__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1041__c;
    __Vfunc_aes_mul_gf2p2__1041__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1044__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1044__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1044__g;
    __Vfunc_aes_mul_gf2p2__1044__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1044__d;
    __Vfunc_aes_mul_gf2p2__1044__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1044__f;
    __Vfunc_aes_mul_gf2p2__1044__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1044__a;
    __Vfunc_aes_mul_gf2p2__1044__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1044__b;
    __Vfunc_aes_mul_gf2p2__1044__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1044__c;
    __Vfunc_aes_mul_gf2p2__1044__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1045__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1045__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1045__g;
    __Vfunc_aes_mul_gf2p2__1045__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1045__d;
    __Vfunc_aes_mul_gf2p2__1045__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1045__f;
    __Vfunc_aes_mul_gf2p2__1045__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1045__a;
    __Vfunc_aes_mul_gf2p2__1045__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1045__b;
    __Vfunc_aes_mul_gf2p2__1045__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1045__c;
    __Vfunc_aes_mul_gf2p2__1045__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1048__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1048__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1048__g;
    __Vfunc_aes_mul_gf2p2__1048__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1048__d;
    __Vfunc_aes_mul_gf2p2__1048__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1048__f;
    __Vfunc_aes_mul_gf2p2__1048__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1048__a;
    __Vfunc_aes_mul_gf2p2__1048__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1048__b;
    __Vfunc_aes_mul_gf2p2__1048__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1048__c;
    __Vfunc_aes_mul_gf2p2__1048__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1049__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1049__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1049__g;
    __Vfunc_aes_mul_gf2p2__1049__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1049__d;
    __Vfunc_aes_mul_gf2p2__1049__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1049__f;
    __Vfunc_aes_mul_gf2p2__1049__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1049__a;
    __Vfunc_aes_mul_gf2p2__1049__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1049__b;
    __Vfunc_aes_mul_gf2p2__1049__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1049__c;
    __Vfunc_aes_mul_gf2p2__1049__c = 0;
    // Body
    __Vfunc_aes_mul_gf2p2__1040__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1040__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1040__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1040__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1040__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1040__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1040__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1040__d)));
    __Vfunc_aes_mul_gf2p2__1040__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1040__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1040__d)));
    __Vfunc_aes_mul_gf2p2__1040__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1040__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1040__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1040__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1040__b)));
    __Vfunc_aes_mul_gf2p2__1040__Vfuncout = __Vfunc_aes_mul_gf2p2__1040__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1040__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1041__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1041__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1041__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1041__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1041__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1041__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1041__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1041__d)));
    __Vfunc_aes_mul_gf2p2__1041__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1041__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1041__d)));
    __Vfunc_aes_mul_gf2p2__1041__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1041__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1041__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1041__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1041__b)));
    __Vfunc_aes_mul_gf2p2__1041__Vfuncout = __Vfunc_aes_mul_gf2p2__1041__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1041__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1044__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__1044__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1044__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1044__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1044__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1044__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1044__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1044__d)));
    __Vfunc_aes_mul_gf2p2__1044__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1044__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1044__d)));
    __Vfunc_aes_mul_gf2p2__1044__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1044__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1044__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1044__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1044__b)));
    __Vfunc_aes_mul_gf2p2__1044__Vfuncout = __Vfunc_aes_mul_gf2p2__1044__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1044__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1045__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__1045__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1045__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1045__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1045__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1045__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1045__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1045__d)));
    __Vfunc_aes_mul_gf2p2__1045__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1045__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1045__d)));
    __Vfunc_aes_mul_gf2p2__1045__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1045__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1045__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1045__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1045__b)));
    __Vfunc_aes_mul_gf2p2__1045__Vfuncout = __Vfunc_aes_mul_gf2p2__1045__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1045__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1010__delta = (0x0000000fU 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__);
    __Vfunc_aes_mul_gf2p4__1010__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                             >> 4U));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__1010__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13965550047231497014ull);
    __Vfunc_aes_mul_gf2p2__1011__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1010__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1011__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1010__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1011__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1011__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1011__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1011__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1011__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1011__d)));
    __Vfunc_aes_mul_gf2p2__1011__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1011__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1011__d)));
    __Vfunc_aes_mul_gf2p2__1011__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1011__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1011__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1011__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1011__b)));
    __Vfunc_aes_mul_gf2p2__1011__Vfuncout = __Vfunc_aes_mul_gf2p2__1011__f;
    __Vfunc_aes_mul_gf2p4__1010__a = __Vfunc_aes_mul_gf2p2__1011__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1012__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1010__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1010__delta)));
    __Vfunc_aes_mul_gf2p2__1012__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1010__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1010__gamma)));
    __Vfunc_aes_mul_gf2p2__1012__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1012__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1012__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1012__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1012__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1012__d)));
    __Vfunc_aes_mul_gf2p2__1012__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1012__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1012__d)));
    __Vfunc_aes_mul_gf2p2__1012__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1012__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1012__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1012__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1012__b)));
    __Vfunc_aes_mul_gf2p2__1012__Vfuncout = __Vfunc_aes_mul_gf2p2__1012__f;
    __Vfunc_aes_mul_gf2p4__1010__b = __Vfunc_aes_mul_gf2p2__1012__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1013__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1010__delta));
    __Vfunc_aes_mul_gf2p2__1013__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1010__gamma));
    __Vfunc_aes_mul_gf2p2__1013__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1013__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1013__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1013__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1013__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1013__d)));
    __Vfunc_aes_mul_gf2p2__1013__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1013__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1013__d)));
    __Vfunc_aes_mul_gf2p2__1013__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1013__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1013__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1013__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1013__b)));
    __Vfunc_aes_mul_gf2p2__1013__Vfuncout = __Vfunc_aes_mul_gf2p2__1013__f;
    __Vfunc_aes_mul_gf2p4__1010__c = __Vfunc_aes_mul_gf2p2__1013__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1010__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1010__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1014__g 
                        = __Vfunc_aes_mul_gf2p4__1010__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1014__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1014__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1014__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1014__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1014__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1014__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1010__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1010__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1015__g 
                        = __Vfunc_aes_mul_gf2p4__1010__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1015__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1015__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1015__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1015__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1015__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1015__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1010__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1010__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__1010__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1016__delta = (0x0000000fU 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__);
    __Vfunc_aes_mul_gf2p4__1016__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1016__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8260813333157405850ull);
    __Vfunc_aes_mul_gf2p2__1017__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1016__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1017__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1016__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1017__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1017__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1017__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1017__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1017__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1017__d)));
    __Vfunc_aes_mul_gf2p2__1017__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1017__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1017__d)));
    __Vfunc_aes_mul_gf2p2__1017__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1017__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1017__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1017__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1017__b)));
    __Vfunc_aes_mul_gf2p2__1017__Vfuncout = __Vfunc_aes_mul_gf2p2__1017__f;
    __Vfunc_aes_mul_gf2p4__1016__a = __Vfunc_aes_mul_gf2p2__1017__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1018__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1016__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1016__delta)));
    __Vfunc_aes_mul_gf2p2__1018__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1016__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1016__gamma)));
    __Vfunc_aes_mul_gf2p2__1018__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1018__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1018__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1018__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1018__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1018__d)));
    __Vfunc_aes_mul_gf2p2__1018__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1018__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1018__d)));
    __Vfunc_aes_mul_gf2p2__1018__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1018__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1018__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1018__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1018__b)));
    __Vfunc_aes_mul_gf2p2__1018__Vfuncout = __Vfunc_aes_mul_gf2p2__1018__f;
    __Vfunc_aes_mul_gf2p4__1016__b = __Vfunc_aes_mul_gf2p2__1018__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1019__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1016__delta));
    __Vfunc_aes_mul_gf2p2__1019__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1016__gamma));
    __Vfunc_aes_mul_gf2p2__1019__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1019__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1019__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1019__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1019__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1019__d)));
    __Vfunc_aes_mul_gf2p2__1019__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1019__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1019__d)));
    __Vfunc_aes_mul_gf2p2__1019__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1019__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1019__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1019__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1019__b)));
    __Vfunc_aes_mul_gf2p2__1019__Vfuncout = __Vfunc_aes_mul_gf2p2__1019__f;
    __Vfunc_aes_mul_gf2p4__1016__c = __Vfunc_aes_mul_gf2p2__1019__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1016__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1016__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1020__g 
                        = __Vfunc_aes_mul_gf2p4__1016__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1020__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1020__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1020__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1020__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1020__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1020__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1016__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1016__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1021__g 
                        = __Vfunc_aes_mul_gf2p4__1016__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1021__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1021__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1021__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1021__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1021__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1021__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1016__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1016__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__1016__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1048__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__1048__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega;
    __Vfunc_aes_mul_gf2p2__1048__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1048__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1048__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1048__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1048__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1048__d)));
    __Vfunc_aes_mul_gf2p2__1048__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1048__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1048__d)));
    __Vfunc_aes_mul_gf2p2__1048__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1048__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1048__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1048__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1048__b)));
    __Vfunc_aes_mul_gf2p2__1048__Vfuncout = __Vfunc_aes_mul_gf2p2__1048__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1048__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1049__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__1049__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega;
    __Vfunc_aes_mul_gf2p2__1049__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1049__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1049__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1049__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1049__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1049__d)));
    __Vfunc_aes_mul_gf2p2__1049__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1049__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1049__d)));
    __Vfunc_aes_mul_gf2p2__1049__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1049__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1049__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1049__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1049__b)));
    __Vfunc_aes_mul_gf2p2__1049__Vfuncout = __Vfunc_aes_mul_gf2p2__1049__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1049__Vfuncout;
}

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1113__Vfuncout;
    __Vfunc_aes_square_gf2p2__1113__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1113__g;
    __Vfunc_aes_square_gf2p2__1113__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1113__d;
    __Vfunc_aes_square_gf2p2__1113__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1117__Vfuncout;
    __Vfunc_aes_square_gf2p2__1117__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1117__g;
    __Vfunc_aes_square_gf2p2__1117__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1117__d;
    __Vfunc_aes_square_gf2p2__1117__d = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1132__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1132__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1132__gamma;
    __Vfunc_aes_mul_gf2p4__1132__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1132__delta;
    __Vfunc_aes_mul_gf2p4__1132__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1132__a;
    __Vfunc_aes_mul_gf2p4__1132__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1132__b;
    __Vfunc_aes_mul_gf2p4__1132__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1132__c;
    __Vfunc_aes_mul_gf2p4__1132__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1133__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1133__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1133__g;
    __Vfunc_aes_mul_gf2p2__1133__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1133__d;
    __Vfunc_aes_mul_gf2p2__1133__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1133__f;
    __Vfunc_aes_mul_gf2p2__1133__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1133__a;
    __Vfunc_aes_mul_gf2p2__1133__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1133__b;
    __Vfunc_aes_mul_gf2p2__1133__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1133__c;
    __Vfunc_aes_mul_gf2p2__1133__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1134__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1134__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1134__g;
    __Vfunc_aes_mul_gf2p2__1134__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1134__d;
    __Vfunc_aes_mul_gf2p2__1134__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1134__f;
    __Vfunc_aes_mul_gf2p2__1134__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1134__a;
    __Vfunc_aes_mul_gf2p2__1134__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1134__b;
    __Vfunc_aes_mul_gf2p2__1134__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1134__c;
    __Vfunc_aes_mul_gf2p2__1134__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1135__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1135__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1135__g;
    __Vfunc_aes_mul_gf2p2__1135__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1135__d;
    __Vfunc_aes_mul_gf2p2__1135__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1135__f;
    __Vfunc_aes_mul_gf2p2__1135__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1135__a;
    __Vfunc_aes_mul_gf2p2__1135__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1135__b;
    __Vfunc_aes_mul_gf2p2__1135__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1135__c;
    __Vfunc_aes_mul_gf2p2__1135__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1138__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1138__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1138__gamma;
    __Vfunc_aes_mul_gf2p4__1138__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1138__delta;
    __Vfunc_aes_mul_gf2p4__1138__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1138__a;
    __Vfunc_aes_mul_gf2p4__1138__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1138__b;
    __Vfunc_aes_mul_gf2p4__1138__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1138__c;
    __Vfunc_aes_mul_gf2p4__1138__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1139__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1139__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1139__g;
    __Vfunc_aes_mul_gf2p2__1139__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1139__d;
    __Vfunc_aes_mul_gf2p2__1139__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1139__f;
    __Vfunc_aes_mul_gf2p2__1139__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1139__a;
    __Vfunc_aes_mul_gf2p2__1139__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1139__b;
    __Vfunc_aes_mul_gf2p2__1139__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1139__c;
    __Vfunc_aes_mul_gf2p2__1139__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1140__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1140__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1140__g;
    __Vfunc_aes_mul_gf2p2__1140__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1140__d;
    __Vfunc_aes_mul_gf2p2__1140__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1140__f;
    __Vfunc_aes_mul_gf2p2__1140__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1140__a;
    __Vfunc_aes_mul_gf2p2__1140__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1140__b;
    __Vfunc_aes_mul_gf2p2__1140__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1140__c;
    __Vfunc_aes_mul_gf2p2__1140__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1141__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1141__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1141__g;
    __Vfunc_aes_mul_gf2p2__1141__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1141__d;
    __Vfunc_aes_mul_gf2p2__1141__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1141__f;
    __Vfunc_aes_mul_gf2p2__1141__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1141__a;
    __Vfunc_aes_mul_gf2p2__1141__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1141__b;
    __Vfunc_aes_mul_gf2p2__1141__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1141__c;
    __Vfunc_aes_mul_gf2p2__1141__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1144__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1144__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1144__g;
    __Vfunc_aes_scale_omega2_gf2p2__1144__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1144__d;
    __Vfunc_aes_scale_omega2_gf2p2__1144__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1145__Vfuncout;
    __Vfunc_aes_square_gf2p2__1145__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1145__g;
    __Vfunc_aes_square_gf2p2__1145__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1145__d;
    __Vfunc_aes_square_gf2p2__1145__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1146__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1146__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1146__g;
    __Vfunc_aes_scale_omega2_gf2p2__1146__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1146__d;
    __Vfunc_aes_scale_omega2_gf2p2__1146__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1147__Vfuncout;
    __Vfunc_aes_square_gf2p2__1147__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1147__g;
    __Vfunc_aes_square_gf2p2__1147__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1147__d;
    __Vfunc_aes_square_gf2p2__1147__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1148__Vfuncout;
    __Vfunc_aes_square_gf2p2__1148__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1148__g;
    __Vfunc_aes_square_gf2p2__1148__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1148__d;
    __Vfunc_aes_square_gf2p2__1148__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1149__Vfuncout;
    __Vfunc_aes_square_gf2p2__1149__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1149__g;
    __Vfunc_aes_square_gf2p2__1149__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1149__d;
    __Vfunc_aes_square_gf2p2__1149__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1152__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1152__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1152__g;
    __Vfunc_aes_mul_gf2p2__1152__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1152__d;
    __Vfunc_aes_mul_gf2p2__1152__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1152__f;
    __Vfunc_aes_mul_gf2p2__1152__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1152__a;
    __Vfunc_aes_mul_gf2p2__1152__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1152__b;
    __Vfunc_aes_mul_gf2p2__1152__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1152__c;
    __Vfunc_aes_mul_gf2p2__1152__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1153__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1153__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1153__g;
    __Vfunc_aes_mul_gf2p2__1153__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1153__d;
    __Vfunc_aes_mul_gf2p2__1153__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1153__f;
    __Vfunc_aes_mul_gf2p2__1153__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1153__a;
    __Vfunc_aes_mul_gf2p2__1153__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1153__b;
    __Vfunc_aes_mul_gf2p2__1153__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1153__c;
    __Vfunc_aes_mul_gf2p2__1153__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1156__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1156__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1156__g;
    __Vfunc_aes_mul_gf2p2__1156__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1156__d;
    __Vfunc_aes_mul_gf2p2__1156__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1156__f;
    __Vfunc_aes_mul_gf2p2__1156__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1156__a;
    __Vfunc_aes_mul_gf2p2__1156__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1156__b;
    __Vfunc_aes_mul_gf2p2__1156__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1156__c;
    __Vfunc_aes_mul_gf2p2__1156__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1157__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1157__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1157__g;
    __Vfunc_aes_mul_gf2p2__1157__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1157__d;
    __Vfunc_aes_mul_gf2p2__1157__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1157__f;
    __Vfunc_aes_mul_gf2p2__1157__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1157__a;
    __Vfunc_aes_mul_gf2p2__1157__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1157__b;
    __Vfunc_aes_mul_gf2p2__1157__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1157__c;
    __Vfunc_aes_mul_gf2p2__1157__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1160__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1160__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1160__g;
    __Vfunc_aes_mul_gf2p2__1160__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1160__d;
    __Vfunc_aes_mul_gf2p2__1160__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1160__f;
    __Vfunc_aes_mul_gf2p2__1160__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1160__a;
    __Vfunc_aes_mul_gf2p2__1160__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1160__b;
    __Vfunc_aes_mul_gf2p2__1160__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1160__c;
    __Vfunc_aes_mul_gf2p2__1160__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1161__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1161__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1161__g;
    __Vfunc_aes_mul_gf2p2__1161__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1161__d;
    __Vfunc_aes_mul_gf2p2__1161__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1161__f;
    __Vfunc_aes_mul_gf2p2__1161__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1161__a;
    __Vfunc_aes_mul_gf2p2__1161__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1161__b;
    __Vfunc_aes_mul_gf2p2__1161__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1161__c;
    __Vfunc_aes_mul_gf2p2__1161__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1162__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1162__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1162__gamma;
    __Vfunc_aes_mul_gf2p4__1162__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1162__delta;
    __Vfunc_aes_mul_gf2p4__1162__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1162__a;
    __Vfunc_aes_mul_gf2p4__1162__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1162__b;
    __Vfunc_aes_mul_gf2p4__1162__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1162__c;
    __Vfunc_aes_mul_gf2p4__1162__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1163__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1163__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1163__g;
    __Vfunc_aes_mul_gf2p2__1163__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1163__d;
    __Vfunc_aes_mul_gf2p2__1163__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1163__f;
    __Vfunc_aes_mul_gf2p2__1163__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1163__a;
    __Vfunc_aes_mul_gf2p2__1163__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1163__b;
    __Vfunc_aes_mul_gf2p2__1163__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1163__c;
    __Vfunc_aes_mul_gf2p2__1163__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1164__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1164__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1164__g;
    __Vfunc_aes_mul_gf2p2__1164__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1164__d;
    __Vfunc_aes_mul_gf2p2__1164__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1164__f;
    __Vfunc_aes_mul_gf2p2__1164__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1164__a;
    __Vfunc_aes_mul_gf2p2__1164__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1164__b;
    __Vfunc_aes_mul_gf2p2__1164__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1164__c;
    __Vfunc_aes_mul_gf2p2__1164__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1165__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1165__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1165__g;
    __Vfunc_aes_mul_gf2p2__1165__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1165__d;
    __Vfunc_aes_mul_gf2p2__1165__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1165__f;
    __Vfunc_aes_mul_gf2p2__1165__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1165__a;
    __Vfunc_aes_mul_gf2p2__1165__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1165__b;
    __Vfunc_aes_mul_gf2p2__1165__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1165__c;
    __Vfunc_aes_mul_gf2p2__1165__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1168__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1168__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1168__gamma;
    __Vfunc_aes_mul_gf2p4__1168__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1168__delta;
    __Vfunc_aes_mul_gf2p4__1168__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1168__a;
    __Vfunc_aes_mul_gf2p4__1168__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1168__b;
    __Vfunc_aes_mul_gf2p4__1168__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1168__c;
    __Vfunc_aes_mul_gf2p4__1168__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1169__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1169__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1169__g;
    __Vfunc_aes_mul_gf2p2__1169__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1169__d;
    __Vfunc_aes_mul_gf2p2__1169__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1169__f;
    __Vfunc_aes_mul_gf2p2__1169__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1169__a;
    __Vfunc_aes_mul_gf2p2__1169__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1169__b;
    __Vfunc_aes_mul_gf2p2__1169__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1169__c;
    __Vfunc_aes_mul_gf2p2__1169__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1170__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1170__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1170__g;
    __Vfunc_aes_mul_gf2p2__1170__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1170__d;
    __Vfunc_aes_mul_gf2p2__1170__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1170__f;
    __Vfunc_aes_mul_gf2p2__1170__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1170__a;
    __Vfunc_aes_mul_gf2p2__1170__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1170__b;
    __Vfunc_aes_mul_gf2p2__1170__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1170__c;
    __Vfunc_aes_mul_gf2p2__1170__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1171__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1171__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1171__g;
    __Vfunc_aes_mul_gf2p2__1171__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1171__d;
    __Vfunc_aes_mul_gf2p2__1171__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1171__f;
    __Vfunc_aes_mul_gf2p2__1171__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1171__a;
    __Vfunc_aes_mul_gf2p2__1171__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1171__b;
    __Vfunc_aes_mul_gf2p2__1171__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1171__c;
    __Vfunc_aes_mul_gf2p2__1171__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1174__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1174__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1174__gamma;
    __Vfunc_aes_mul_gf2p4__1174__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1174__delta;
    __Vfunc_aes_mul_gf2p4__1174__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1174__a;
    __Vfunc_aes_mul_gf2p4__1174__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1174__b;
    __Vfunc_aes_mul_gf2p4__1174__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1174__c;
    __Vfunc_aes_mul_gf2p4__1174__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1175__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1175__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1175__g;
    __Vfunc_aes_mul_gf2p2__1175__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1175__d;
    __Vfunc_aes_mul_gf2p2__1175__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1175__f;
    __Vfunc_aes_mul_gf2p2__1175__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1175__a;
    __Vfunc_aes_mul_gf2p2__1175__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1175__b;
    __Vfunc_aes_mul_gf2p2__1175__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1175__c;
    __Vfunc_aes_mul_gf2p2__1175__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1176__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1176__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1176__g;
    __Vfunc_aes_mul_gf2p2__1176__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1176__d;
    __Vfunc_aes_mul_gf2p2__1176__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1176__f;
    __Vfunc_aes_mul_gf2p2__1176__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1176__a;
    __Vfunc_aes_mul_gf2p2__1176__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1176__b;
    __Vfunc_aes_mul_gf2p2__1176__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1176__c;
    __Vfunc_aes_mul_gf2p2__1176__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1177__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1177__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1177__g;
    __Vfunc_aes_mul_gf2p2__1177__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1177__d;
    __Vfunc_aes_mul_gf2p2__1177__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1177__f;
    __Vfunc_aes_mul_gf2p2__1177__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1177__a;
    __Vfunc_aes_mul_gf2p2__1177__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1177__b;
    __Vfunc_aes_mul_gf2p2__1177__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1177__c;
    __Vfunc_aes_mul_gf2p2__1177__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1180__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1180__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1180__gamma;
    __Vfunc_aes_mul_gf2p4__1180__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1180__delta;
    __Vfunc_aes_mul_gf2p4__1180__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1180__a;
    __Vfunc_aes_mul_gf2p4__1180__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1180__b;
    __Vfunc_aes_mul_gf2p4__1180__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1180__c;
    __Vfunc_aes_mul_gf2p4__1180__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1181__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1181__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1181__g;
    __Vfunc_aes_mul_gf2p2__1181__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1181__d;
    __Vfunc_aes_mul_gf2p2__1181__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1181__f;
    __Vfunc_aes_mul_gf2p2__1181__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1181__a;
    __Vfunc_aes_mul_gf2p2__1181__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1181__b;
    __Vfunc_aes_mul_gf2p2__1181__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1181__c;
    __Vfunc_aes_mul_gf2p2__1181__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1182__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1182__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1182__g;
    __Vfunc_aes_mul_gf2p2__1182__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1182__d;
    __Vfunc_aes_mul_gf2p2__1182__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1182__f;
    __Vfunc_aes_mul_gf2p2__1182__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1182__a;
    __Vfunc_aes_mul_gf2p2__1182__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1182__b;
    __Vfunc_aes_mul_gf2p2__1182__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1182__c;
    __Vfunc_aes_mul_gf2p2__1182__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1183__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1183__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1183__g;
    __Vfunc_aes_mul_gf2p2__1183__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1183__d;
    __Vfunc_aes_mul_gf2p2__1183__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1183__f;
    __Vfunc_aes_mul_gf2p2__1183__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1183__a;
    __Vfunc_aes_mul_gf2p2__1183__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1183__b;
    __Vfunc_aes_mul_gf2p2__1183__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1183__c;
    __Vfunc_aes_mul_gf2p2__1183__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1186__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1186__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1186__gamma;
    __Vfunc_aes_mul_gf2p4__1186__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1186__delta;
    __Vfunc_aes_mul_gf2p4__1186__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1186__a;
    __Vfunc_aes_mul_gf2p4__1186__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1186__b;
    __Vfunc_aes_mul_gf2p4__1186__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1186__c;
    __Vfunc_aes_mul_gf2p4__1186__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1187__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1187__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1187__g;
    __Vfunc_aes_mul_gf2p2__1187__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1187__d;
    __Vfunc_aes_mul_gf2p2__1187__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1187__f;
    __Vfunc_aes_mul_gf2p2__1187__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1187__a;
    __Vfunc_aes_mul_gf2p2__1187__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1187__b;
    __Vfunc_aes_mul_gf2p2__1187__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1187__c;
    __Vfunc_aes_mul_gf2p2__1187__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1188__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1188__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1188__g;
    __Vfunc_aes_mul_gf2p2__1188__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1188__d;
    __Vfunc_aes_mul_gf2p2__1188__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1188__f;
    __Vfunc_aes_mul_gf2p2__1188__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1188__a;
    __Vfunc_aes_mul_gf2p2__1188__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1188__b;
    __Vfunc_aes_mul_gf2p2__1188__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1188__c;
    __Vfunc_aes_mul_gf2p2__1188__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1189__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1189__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1189__g;
    __Vfunc_aes_mul_gf2p2__1189__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1189__d;
    __Vfunc_aes_mul_gf2p2__1189__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1189__f;
    __Vfunc_aes_mul_gf2p2__1189__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1189__a;
    __Vfunc_aes_mul_gf2p2__1189__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1189__b;
    __Vfunc_aes_mul_gf2p2__1189__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1189__c;
    __Vfunc_aes_mul_gf2p2__1189__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1192__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1192__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1192__gamma;
    __Vfunc_aes_mul_gf2p4__1192__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1192__delta;
    __Vfunc_aes_mul_gf2p4__1192__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1192__a;
    __Vfunc_aes_mul_gf2p4__1192__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1192__b;
    __Vfunc_aes_mul_gf2p4__1192__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1192__c;
    __Vfunc_aes_mul_gf2p4__1192__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1193__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1193__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1193__g;
    __Vfunc_aes_mul_gf2p2__1193__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1193__d;
    __Vfunc_aes_mul_gf2p2__1193__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1193__f;
    __Vfunc_aes_mul_gf2p2__1193__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1193__a;
    __Vfunc_aes_mul_gf2p2__1193__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1193__b;
    __Vfunc_aes_mul_gf2p2__1193__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1193__c;
    __Vfunc_aes_mul_gf2p2__1193__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1194__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1194__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1194__g;
    __Vfunc_aes_mul_gf2p2__1194__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1194__d;
    __Vfunc_aes_mul_gf2p2__1194__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1194__f;
    __Vfunc_aes_mul_gf2p2__1194__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1194__a;
    __Vfunc_aes_mul_gf2p2__1194__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1194__b;
    __Vfunc_aes_mul_gf2p2__1194__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1194__c;
    __Vfunc_aes_mul_gf2p2__1194__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1195__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1195__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1195__g;
    __Vfunc_aes_mul_gf2p2__1195__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1195__d;
    __Vfunc_aes_mul_gf2p2__1195__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1195__f;
    __Vfunc_aes_mul_gf2p2__1195__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1195__a;
    __Vfunc_aes_mul_gf2p2__1195__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1195__b;
    __Vfunc_aes_mul_gf2p2__1195__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1195__c;
    __Vfunc_aes_mul_gf2p2__1195__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1198__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1198__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1198__gamma;
    __Vfunc_aes_mul_gf2p4__1198__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1198__delta;
    __Vfunc_aes_mul_gf2p4__1198__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1198__a;
    __Vfunc_aes_mul_gf2p4__1198__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1198__b;
    __Vfunc_aes_mul_gf2p4__1198__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1198__c;
    __Vfunc_aes_mul_gf2p4__1198__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1199__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1199__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1199__g;
    __Vfunc_aes_mul_gf2p2__1199__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1199__d;
    __Vfunc_aes_mul_gf2p2__1199__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1199__f;
    __Vfunc_aes_mul_gf2p2__1199__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1199__a;
    __Vfunc_aes_mul_gf2p2__1199__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1199__b;
    __Vfunc_aes_mul_gf2p2__1199__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1199__c;
    __Vfunc_aes_mul_gf2p2__1199__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1200__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1200__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1200__g;
    __Vfunc_aes_mul_gf2p2__1200__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1200__d;
    __Vfunc_aes_mul_gf2p2__1200__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1200__f;
    __Vfunc_aes_mul_gf2p2__1200__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1200__a;
    __Vfunc_aes_mul_gf2p2__1200__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1200__b;
    __Vfunc_aes_mul_gf2p2__1200__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1200__c;
    __Vfunc_aes_mul_gf2p2__1200__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1201__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1201__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1201__g;
    __Vfunc_aes_mul_gf2p2__1201__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1201__d;
    __Vfunc_aes_mul_gf2p2__1201__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1201__f;
    __Vfunc_aes_mul_gf2p2__1201__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1201__a;
    __Vfunc_aes_mul_gf2p2__1201__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1201__b;
    __Vfunc_aes_mul_gf2p2__1201__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1201__c;
    __Vfunc_aes_mul_gf2p2__1201__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1204__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1204__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1204__gamma;
    __Vfunc_aes_mul_gf2p4__1204__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1204__delta;
    __Vfunc_aes_mul_gf2p4__1204__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1204__a;
    __Vfunc_aes_mul_gf2p4__1204__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1204__b;
    __Vfunc_aes_mul_gf2p4__1204__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1204__c;
    __Vfunc_aes_mul_gf2p4__1204__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1205__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1205__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1205__g;
    __Vfunc_aes_mul_gf2p2__1205__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1205__d;
    __Vfunc_aes_mul_gf2p2__1205__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1205__f;
    __Vfunc_aes_mul_gf2p2__1205__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1205__a;
    __Vfunc_aes_mul_gf2p2__1205__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1205__b;
    __Vfunc_aes_mul_gf2p2__1205__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1205__c;
    __Vfunc_aes_mul_gf2p2__1205__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1206__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1206__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1206__g;
    __Vfunc_aes_mul_gf2p2__1206__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1206__d;
    __Vfunc_aes_mul_gf2p2__1206__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1206__f;
    __Vfunc_aes_mul_gf2p2__1206__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1206__a;
    __Vfunc_aes_mul_gf2p2__1206__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1206__b;
    __Vfunc_aes_mul_gf2p2__1206__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1206__c;
    __Vfunc_aes_mul_gf2p2__1206__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1207__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1207__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1207__g;
    __Vfunc_aes_mul_gf2p2__1207__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1207__d;
    __Vfunc_aes_mul_gf2p2__1207__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1207__f;
    __Vfunc_aes_mul_gf2p2__1207__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1207__a;
    __Vfunc_aes_mul_gf2p2__1207__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1207__b;
    __Vfunc_aes_mul_gf2p2__1207__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1207__c;
    __Vfunc_aes_mul_gf2p2__1207__c = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d) 
                    << 2U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x00fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__ 
                                                 >> 8U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__ 
                               >> 0x0000000aU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                    << 2U) ^ (0x03fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__ 
                                                 >> 6U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__ 
                               >> 8U))));
        }
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y_ss__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d) 
                    << 4U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o 
                = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                    ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__) 
                                   << 4U)) | (0x0000000fU 
                                              & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__)));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0) 
                                    << 4U) ^ (0xfffffff0U 
                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__ 
                                        >> 4U))));
        }
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o 
                = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
                    << 2U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x0000fffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__ 
                                                 >> 0x00000010U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__ 
                               >> 0x00000012U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x000ffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__ 
                                                 >> 0x0000000cU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__ 
                               >> 0x0000000eU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
                                    << 2U) ^ (0x0003fffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__ 
                                                 >> 0x0000000eU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__ 
                               >> 0x00000010U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o 
                = vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o;
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & ((0x3ffffffcU & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                                   >> 2U)) 
                                   ^ (0x003ffffcU & 
                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__ 
                                       >> 0x0000000aU)))) 
                   | (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__ 
                               >> 0x0000000cU))));
        }
        vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q 
            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d;
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d) 
                    << 4U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d) 
                    << 4U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by) 
                                    << 4U) ^ (0x00000ff0U 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__ 
                                                 >> 0x00000014U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__ 
                                        >> 0x00000018U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by) 
                                    << 4U) ^ (0x0000fff0U 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__ 
                                                 >> 0x00000010U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__307__03a280__KET__ 
                                        >> 0x00000014U))));
        }
    } else {
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y_ss__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o = 0U;
    }
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_b 
                    = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                      [0U][2U] >> 0x00000010U));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1100__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1100__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1100__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1100__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1100__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_b 
                        = (0x000000ffU & (0x63U ^ (
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                    [0U][2U] 
                                                    << 0x00000010U) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                      [0U][2U] 
                                                      >> 0x00000010U))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1101__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1101__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1101__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1101__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [0U][2U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1102__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1102__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1102__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1102__Vfuncout))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_b 
                    = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                      [1U][2U] >> 0x00000010U));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1103__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1103__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1103__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1103__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1103__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [1U][2U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1104__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1104__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1104__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1104__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [1U][2U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1105__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1105__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1105__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1105__Vfuncout))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1112__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1112__gamma)));
    __Vfunc_aes_square_gf2p2__1113__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1112__gamma));
    __Vfunc_aes_square_gf2p2__1113__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1113__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1113__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1113__Vfuncout = __Vfunc_aes_square_gf2p2__1113__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__b = __Vfunc_aes_square_gf2p2__1113__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1114__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1114__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1114__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1114__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1114__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__1114__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1114__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1115__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1115__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1115__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1115__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1115__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1115__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1115__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1116__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1116__gamma)));
    __Vfunc_aes_square_gf2p2__1117__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1116__gamma));
    __Vfunc_aes_square_gf2p2__1117__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1117__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1117__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1117__Vfuncout = __Vfunc_aes_square_gf2p2__1117__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__b = __Vfunc_aes_square_gf2p2__1117__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1118__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1118__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1118__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1118__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1118__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__1118__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1118__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1119__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1119__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1119__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1119__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1119__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1119__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1119__Vfuncout)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                    << 4U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma));
        }
    } else {
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o = 0U;
    }
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b 
        = (0x0000000fU & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                           >> 8U) ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b 
        = (0x0000000fU & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                          ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                             >> 4U)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b 
        = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                  >> 2U) ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b 
        = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                 ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                    >> 2U)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b 
        = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                  >> 4U) ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b 
        = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                 ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                    >> 2U)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__u_aes_sb_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (2U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__u_aes_sb_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (3U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__u_aes_sb_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (0U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.out_req_o = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__u_aes_sb_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                           & (4U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv 
        = ((0x000000f0U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                           ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o))) 
           | (0x0000000fU & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                              ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o)) 
                             >> 4U)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv 
        = ((0x000000f0U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                            ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o)) 
                           << 4U)) | (0x0000000fU & 
                                      ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                                       ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o))));
    __Vfunc_aes_mul_gf2p4__1132__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__1132__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__1132__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3276161048702446023ull);
    __Vfunc_aes_mul_gf2p2__1133__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1132__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1133__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1132__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1133__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1133__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1133__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1133__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1133__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1133__d)));
    __Vfunc_aes_mul_gf2p2__1133__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1133__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1133__d)));
    __Vfunc_aes_mul_gf2p2__1133__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1133__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1133__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1133__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1133__b)));
    __Vfunc_aes_mul_gf2p2__1133__Vfuncout = __Vfunc_aes_mul_gf2p2__1133__f;
    __Vfunc_aes_mul_gf2p4__1132__a = __Vfunc_aes_mul_gf2p2__1133__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1134__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1132__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1132__delta)));
    __Vfunc_aes_mul_gf2p2__1134__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1132__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1132__gamma)));
    __Vfunc_aes_mul_gf2p2__1134__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1134__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1134__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1134__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1134__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1134__d)));
    __Vfunc_aes_mul_gf2p2__1134__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1134__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1134__d)));
    __Vfunc_aes_mul_gf2p2__1134__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1134__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1134__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1134__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1134__b)));
    __Vfunc_aes_mul_gf2p2__1134__Vfuncout = __Vfunc_aes_mul_gf2p2__1134__f;
    __Vfunc_aes_mul_gf2p4__1132__b = __Vfunc_aes_mul_gf2p2__1134__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1135__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1132__delta));
    __Vfunc_aes_mul_gf2p2__1135__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1132__gamma));
    __Vfunc_aes_mul_gf2p2__1135__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1135__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1135__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1135__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1135__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1135__d)));
    __Vfunc_aes_mul_gf2p2__1135__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1135__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1135__d)));
    __Vfunc_aes_mul_gf2p2__1135__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1135__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1135__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1135__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1135__b)));
    __Vfunc_aes_mul_gf2p2__1135__Vfuncout = __Vfunc_aes_mul_gf2p2__1135__f;
    __Vfunc_aes_mul_gf2p4__1132__c = __Vfunc_aes_mul_gf2p2__1135__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1132__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1132__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1136__g 
                        = __Vfunc_aes_mul_gf2p4__1132__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1136__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1136__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1136__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1136__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1136__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1136__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1132__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1132__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1137__g 
                        = __Vfunc_aes_mul_gf2p4__1132__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1137__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1137__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1137__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1137__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1137__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1137__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1132__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1132__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1132__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1138__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__1138__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1138__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11896431306387343279ull);
    __Vfunc_aes_mul_gf2p2__1139__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1138__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1139__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1138__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1139__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1139__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1139__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1139__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1139__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1139__d)));
    __Vfunc_aes_mul_gf2p2__1139__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1139__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1139__d)));
    __Vfunc_aes_mul_gf2p2__1139__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1139__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1139__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1139__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1139__b)));
    __Vfunc_aes_mul_gf2p2__1139__Vfuncout = __Vfunc_aes_mul_gf2p2__1139__f;
    __Vfunc_aes_mul_gf2p4__1138__a = __Vfunc_aes_mul_gf2p2__1139__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1140__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1138__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1138__delta)));
    __Vfunc_aes_mul_gf2p2__1140__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1138__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1138__gamma)));
    __Vfunc_aes_mul_gf2p2__1140__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1140__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1140__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1140__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1140__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1140__d)));
    __Vfunc_aes_mul_gf2p2__1140__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1140__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1140__d)));
    __Vfunc_aes_mul_gf2p2__1140__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1140__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1140__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1140__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1140__b)));
    __Vfunc_aes_mul_gf2p2__1140__Vfuncout = __Vfunc_aes_mul_gf2p2__1140__f;
    __Vfunc_aes_mul_gf2p4__1138__b = __Vfunc_aes_mul_gf2p2__1140__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1141__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1138__delta));
    __Vfunc_aes_mul_gf2p2__1141__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1138__gamma));
    __Vfunc_aes_mul_gf2p2__1141__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1141__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1141__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1141__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1141__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1141__d)));
    __Vfunc_aes_mul_gf2p2__1141__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1141__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1141__d)));
    __Vfunc_aes_mul_gf2p2__1141__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1141__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1141__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1141__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1141__b)));
    __Vfunc_aes_mul_gf2p2__1141__Vfuncout = __Vfunc_aes_mul_gf2p2__1141__f;
    __Vfunc_aes_mul_gf2p4__1138__c = __Vfunc_aes_mul_gf2p2__1141__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1138__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1138__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1142__g 
                        = __Vfunc_aes_mul_gf2p4__1138__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1142__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1142__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1142__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1142__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1142__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1142__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1138__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1138__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1143__g 
                        = __Vfunc_aes_mul_gf2p4__1138__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1143__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1143__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1143__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1143__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1143__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1143__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1138__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1138__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1138__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1156__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1156__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1156__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1156__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1156__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1156__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1156__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1156__d)));
    __Vfunc_aes_mul_gf2p2__1156__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1156__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1156__d)));
    __Vfunc_aes_mul_gf2p2__1156__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1156__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1156__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1156__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1156__b)));
    __Vfunc_aes_mul_gf2p2__1156__Vfuncout = __Vfunc_aes_mul_gf2p2__1156__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1156__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1157__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1157__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1157__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1157__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1157__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1157__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1157__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1157__d)));
    __Vfunc_aes_mul_gf2p2__1157__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1157__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1157__d)));
    __Vfunc_aes_mul_gf2p2__1157__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1157__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1157__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1157__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1157__b)));
    __Vfunc_aes_mul_gf2p2__1157__Vfuncout = __Vfunc_aes_mul_gf2p2__1157__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1157__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1160__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1160__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1160__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1160__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1160__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1160__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1160__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1160__d)));
    __Vfunc_aes_mul_gf2p2__1160__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1160__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1160__d)));
    __Vfunc_aes_mul_gf2p2__1160__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1160__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1160__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1160__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1160__b)));
    __Vfunc_aes_mul_gf2p2__1160__Vfuncout = __Vfunc_aes_mul_gf2p2__1160__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1160__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1161__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1161__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1161__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1161__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1161__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1161__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1161__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1161__d)));
    __Vfunc_aes_mul_gf2p2__1161__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1161__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1161__d)));
    __Vfunc_aes_mul_gf2p2__1161__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1161__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1161__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1161__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1161__b)));
    __Vfunc_aes_mul_gf2p2__1161__Vfuncout = __Vfunc_aes_mul_gf2p2__1161__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1161__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__u_aes_sb_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (1U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.data_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? (0x63U ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                     [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                     [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                     [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                     [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                     [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                     [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                     [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                     [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1106__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1106__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1106__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1106__Vfuncout)))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1107__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1107__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1107__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1107__Vfuncout))
                             : (0x63U ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                         [0U] = 0x58U;
                        vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                         [1U] = 0x2dU;
                        vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                         [2U] = 0x9eU;
                        vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                         [3U] = 0x0bU;
                        vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                         [4U] = 0xdcU;
                        vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                         [5U] = 4U;
                        vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                         [6U] = 3U;
                        vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                         [7U] = 0x24U;
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_b 
                            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c = 0U;
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                           >> 7U) & 
                                          vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                          [0U])));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 6U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 5U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 4U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 3U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 2U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 1U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                           [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0x03fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 >> 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0x07fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0x0ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0x1ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0x3ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0x7ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                           [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0xfffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0x07fffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0x0ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0x1ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0x3ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0x7ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                           [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0x0ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0x1ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0x3ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0x7ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                           [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                 << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0x1ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0x3ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0x7ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                  [3U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0x3fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0x7fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                  [2U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0x7fffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                  [1U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                  [0U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1108__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1108__vec_b) 
                                                        << 7U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1108__Vfuncout 
                            = vlSelfRef.__Vfunc_aes_mvm__1108__vec_c;
                    }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1108__Vfuncout)))));
    vlSelfRef.mask_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                            [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                            [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                            [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                            [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                            [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                            [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                            [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                            [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1109__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1109__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1109__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1109__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1109__Vfuncout))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1110__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1110__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1110__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1110__Vfuncout))
                             : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1111__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1111__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1111__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1111__Vfuncout))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y_ss__q_o) 
                           >> 4U) ^ (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                      >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma 
        = (0x0000000fU & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y_ss__q_o) 
                          ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                             ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x 
        = ((0x0000000cU & ((0xfffffffcU & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o)) 
                           ^ ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
                              << 2U))) | (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 >> 2U) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x 
        = ((0x0000000cU & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                            ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                           << 2U)) | (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                            ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b 
        = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                  >> 4U) ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b 
        = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                 ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                    >> 2U)));
    __Vfunc_aes_square_gf2p2__1145__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__1145__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1145__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1145__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1145__Vfuncout = __Vfunc_aes_square_gf2p2__1145__d;
    __Vfunc_aes_scale_omega2_gf2p2__1144__g = __Vfunc_aes_square_gf2p2__1145__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1144__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1144__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1144__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1144__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1144__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1144__Vfuncout;
    __Vfunc_aes_square_gf2p2__1147__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__1147__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1147__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1147__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1147__Vfuncout = __Vfunc_aes_square_gf2p2__1147__d;
    __Vfunc_aes_scale_omega2_gf2p2__1146__g = __Vfunc_aes_square_gf2p2__1147__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1146__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1146__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1146__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1146__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1146__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1146__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1162__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__1162__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1162__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1111260794728093289ull);
    __Vfunc_aes_mul_gf2p2__1163__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1162__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1163__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1162__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1163__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1163__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1163__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1163__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1163__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1163__d)));
    __Vfunc_aes_mul_gf2p2__1163__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1163__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1163__d)));
    __Vfunc_aes_mul_gf2p2__1163__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1163__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1163__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1163__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1163__b)));
    __Vfunc_aes_mul_gf2p2__1163__Vfuncout = __Vfunc_aes_mul_gf2p2__1163__f;
    __Vfunc_aes_mul_gf2p4__1162__a = __Vfunc_aes_mul_gf2p2__1163__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1164__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1162__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1162__delta)));
    __Vfunc_aes_mul_gf2p2__1164__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1162__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1162__gamma)));
    __Vfunc_aes_mul_gf2p2__1164__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1164__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1164__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1164__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1164__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1164__d)));
    __Vfunc_aes_mul_gf2p2__1164__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1164__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1164__d)));
    __Vfunc_aes_mul_gf2p2__1164__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1164__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1164__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1164__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1164__b)));
    __Vfunc_aes_mul_gf2p2__1164__Vfuncout = __Vfunc_aes_mul_gf2p2__1164__f;
    __Vfunc_aes_mul_gf2p4__1162__b = __Vfunc_aes_mul_gf2p2__1164__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1165__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1162__delta));
    __Vfunc_aes_mul_gf2p2__1165__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1162__gamma));
    __Vfunc_aes_mul_gf2p2__1165__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1165__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1165__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1165__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1165__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1165__d)));
    __Vfunc_aes_mul_gf2p2__1165__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1165__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1165__d)));
    __Vfunc_aes_mul_gf2p2__1165__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1165__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1165__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1165__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1165__b)));
    __Vfunc_aes_mul_gf2p2__1165__Vfuncout = __Vfunc_aes_mul_gf2p2__1165__f;
    __Vfunc_aes_mul_gf2p4__1162__c = __Vfunc_aes_mul_gf2p2__1165__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1162__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1162__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1166__g 
                        = __Vfunc_aes_mul_gf2p4__1162__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1166__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1166__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1166__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1166__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1166__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1166__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1162__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1162__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1167__g 
                        = __Vfunc_aes_mul_gf2p4__1162__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1167__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1167__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1167__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1167__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1167__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1167__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1162__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1162__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1162__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1180__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    __Vfunc_aes_mul_gf2p4__1180__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1180__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14913167473967505299ull);
    __Vfunc_aes_mul_gf2p2__1181__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1180__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1181__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1180__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1181__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1181__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1181__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1181__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1181__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1181__d)));
    __Vfunc_aes_mul_gf2p2__1181__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1181__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1181__d)));
    __Vfunc_aes_mul_gf2p2__1181__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1181__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1181__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1181__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1181__b)));
    __Vfunc_aes_mul_gf2p2__1181__Vfuncout = __Vfunc_aes_mul_gf2p2__1181__f;
    __Vfunc_aes_mul_gf2p4__1180__a = __Vfunc_aes_mul_gf2p2__1181__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1182__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1180__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1180__delta)));
    __Vfunc_aes_mul_gf2p2__1182__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1180__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1180__gamma)));
    __Vfunc_aes_mul_gf2p2__1182__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1182__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1182__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1182__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1182__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1182__d)));
    __Vfunc_aes_mul_gf2p2__1182__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1182__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1182__d)));
    __Vfunc_aes_mul_gf2p2__1182__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1182__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1182__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1182__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1182__b)));
    __Vfunc_aes_mul_gf2p2__1182__Vfuncout = __Vfunc_aes_mul_gf2p2__1182__f;
    __Vfunc_aes_mul_gf2p4__1180__b = __Vfunc_aes_mul_gf2p2__1182__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1183__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1180__delta));
    __Vfunc_aes_mul_gf2p2__1183__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1180__gamma));
    __Vfunc_aes_mul_gf2p2__1183__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1183__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1183__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1183__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1183__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1183__d)));
    __Vfunc_aes_mul_gf2p2__1183__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1183__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1183__d)));
    __Vfunc_aes_mul_gf2p2__1183__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1183__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1183__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1183__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1183__b)));
    __Vfunc_aes_mul_gf2p2__1183__Vfuncout = __Vfunc_aes_mul_gf2p2__1183__f;
    __Vfunc_aes_mul_gf2p4__1180__c = __Vfunc_aes_mul_gf2p2__1183__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1180__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1180__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1184__g 
                        = __Vfunc_aes_mul_gf2p4__1180__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1184__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1184__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1184__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1184__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1184__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1184__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1180__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1180__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1185__g 
                        = __Vfunc_aes_mul_gf2p4__1180__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1185__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1185__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1185__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1185__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1185__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1185__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1180__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1180__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1180__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1186__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    __Vfunc_aes_mul_gf2p4__1186__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1186__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16243422777461864028ull);
    __Vfunc_aes_mul_gf2p2__1187__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1186__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1187__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1186__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1187__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1187__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1187__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1187__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1187__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1187__d)));
    __Vfunc_aes_mul_gf2p2__1187__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1187__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1187__d)));
    __Vfunc_aes_mul_gf2p2__1187__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1187__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1187__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1187__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1187__b)));
    __Vfunc_aes_mul_gf2p2__1187__Vfuncout = __Vfunc_aes_mul_gf2p2__1187__f;
    __Vfunc_aes_mul_gf2p4__1186__a = __Vfunc_aes_mul_gf2p2__1187__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1188__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1186__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1186__delta)));
    __Vfunc_aes_mul_gf2p2__1188__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1186__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1186__gamma)));
    __Vfunc_aes_mul_gf2p2__1188__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1188__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1188__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1188__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1188__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1188__d)));
    __Vfunc_aes_mul_gf2p2__1188__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1188__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1188__d)));
    __Vfunc_aes_mul_gf2p2__1188__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1188__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1188__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1188__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1188__b)));
    __Vfunc_aes_mul_gf2p2__1188__Vfuncout = __Vfunc_aes_mul_gf2p2__1188__f;
    __Vfunc_aes_mul_gf2p4__1186__b = __Vfunc_aes_mul_gf2p2__1188__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1189__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1186__delta));
    __Vfunc_aes_mul_gf2p2__1189__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1186__gamma));
    __Vfunc_aes_mul_gf2p2__1189__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1189__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1189__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1189__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1189__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1189__d)));
    __Vfunc_aes_mul_gf2p2__1189__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1189__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1189__d)));
    __Vfunc_aes_mul_gf2p2__1189__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1189__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1189__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1189__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1189__b)));
    __Vfunc_aes_mul_gf2p2__1189__Vfuncout = __Vfunc_aes_mul_gf2p2__1189__f;
    __Vfunc_aes_mul_gf2p4__1186__c = __Vfunc_aes_mul_gf2p2__1189__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1186__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1186__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1190__g 
                        = __Vfunc_aes_mul_gf2p4__1186__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1190__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1190__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1190__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1190__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1190__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1190__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1186__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1186__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1191__g 
                        = __Vfunc_aes_mul_gf2p4__1186__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1191__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1191__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1191__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1191__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1191__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1191__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1186__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1186__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1186__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1198__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1198__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1198__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9592105277189730886ull);
    __Vfunc_aes_mul_gf2p2__1199__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1198__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1199__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1198__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1199__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1199__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1199__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1199__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1199__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1199__d)));
    __Vfunc_aes_mul_gf2p2__1199__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1199__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1199__d)));
    __Vfunc_aes_mul_gf2p2__1199__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1199__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1199__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1199__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1199__b)));
    __Vfunc_aes_mul_gf2p2__1199__Vfuncout = __Vfunc_aes_mul_gf2p2__1199__f;
    __Vfunc_aes_mul_gf2p4__1198__a = __Vfunc_aes_mul_gf2p2__1199__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1200__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1198__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1198__delta)));
    __Vfunc_aes_mul_gf2p2__1200__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1198__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1198__gamma)));
    __Vfunc_aes_mul_gf2p2__1200__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1200__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1200__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1200__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1200__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1200__d)));
    __Vfunc_aes_mul_gf2p2__1200__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1200__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1200__d)));
    __Vfunc_aes_mul_gf2p2__1200__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1200__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1200__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1200__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1200__b)));
    __Vfunc_aes_mul_gf2p2__1200__Vfuncout = __Vfunc_aes_mul_gf2p2__1200__f;
    __Vfunc_aes_mul_gf2p4__1198__b = __Vfunc_aes_mul_gf2p2__1200__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1201__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1198__delta));
    __Vfunc_aes_mul_gf2p2__1201__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1198__gamma));
    __Vfunc_aes_mul_gf2p2__1201__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1201__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1201__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1201__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1201__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1201__d)));
    __Vfunc_aes_mul_gf2p2__1201__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1201__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1201__d)));
    __Vfunc_aes_mul_gf2p2__1201__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1201__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1201__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1201__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1201__b)));
    __Vfunc_aes_mul_gf2p2__1201__Vfuncout = __Vfunc_aes_mul_gf2p2__1201__f;
    __Vfunc_aes_mul_gf2p4__1198__c = __Vfunc_aes_mul_gf2p2__1201__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1198__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1198__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1202__g 
                        = __Vfunc_aes_mul_gf2p4__1198__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1202__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1202__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1202__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1202__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1202__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1202__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1198__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1198__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1203__g 
                        = __Vfunc_aes_mul_gf2p4__1198__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1203__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1203__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1203__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1203__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1203__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1203__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1198__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1198__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1198__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1168__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1168__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1168__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9322565266556485078ull);
    __Vfunc_aes_mul_gf2p2__1169__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1168__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1169__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1168__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1169__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1169__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1169__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1169__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1169__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1169__d)));
    __Vfunc_aes_mul_gf2p2__1169__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1169__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1169__d)));
    __Vfunc_aes_mul_gf2p2__1169__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1169__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1169__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1169__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1169__b)));
    __Vfunc_aes_mul_gf2p2__1169__Vfuncout = __Vfunc_aes_mul_gf2p2__1169__f;
    __Vfunc_aes_mul_gf2p4__1168__a = __Vfunc_aes_mul_gf2p2__1169__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1170__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1168__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1168__delta)));
    __Vfunc_aes_mul_gf2p2__1170__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1168__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1168__gamma)));
    __Vfunc_aes_mul_gf2p2__1170__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1170__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1170__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1170__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1170__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1170__d)));
    __Vfunc_aes_mul_gf2p2__1170__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1170__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1170__d)));
    __Vfunc_aes_mul_gf2p2__1170__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1170__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1170__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1170__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1170__b)));
    __Vfunc_aes_mul_gf2p2__1170__Vfuncout = __Vfunc_aes_mul_gf2p2__1170__f;
    __Vfunc_aes_mul_gf2p4__1168__b = __Vfunc_aes_mul_gf2p2__1170__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1171__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1168__delta));
    __Vfunc_aes_mul_gf2p2__1171__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1168__gamma));
    __Vfunc_aes_mul_gf2p2__1171__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1171__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1171__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1171__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1171__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1171__d)));
    __Vfunc_aes_mul_gf2p2__1171__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1171__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1171__d)));
    __Vfunc_aes_mul_gf2p2__1171__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1171__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1171__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1171__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1171__b)));
    __Vfunc_aes_mul_gf2p2__1171__Vfuncout = __Vfunc_aes_mul_gf2p2__1171__f;
    __Vfunc_aes_mul_gf2p4__1168__c = __Vfunc_aes_mul_gf2p2__1171__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1168__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1168__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1172__g 
                        = __Vfunc_aes_mul_gf2p4__1168__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1172__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1172__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1172__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1172__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1172__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1172__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1168__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1168__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1173__g 
                        = __Vfunc_aes_mul_gf2p4__1168__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1173__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1173__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1173__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1173__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1173__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1173__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1168__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1168__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1168__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1174__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1174__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1174__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3709582323046538112ull);
    __Vfunc_aes_mul_gf2p2__1175__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1174__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1175__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1174__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1175__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1175__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1175__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1175__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1175__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1175__d)));
    __Vfunc_aes_mul_gf2p2__1175__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1175__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1175__d)));
    __Vfunc_aes_mul_gf2p2__1175__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1175__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1175__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1175__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1175__b)));
    __Vfunc_aes_mul_gf2p2__1175__Vfuncout = __Vfunc_aes_mul_gf2p2__1175__f;
    __Vfunc_aes_mul_gf2p4__1174__a = __Vfunc_aes_mul_gf2p2__1175__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1176__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1174__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1174__delta)));
    __Vfunc_aes_mul_gf2p2__1176__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1174__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1174__gamma)));
    __Vfunc_aes_mul_gf2p2__1176__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1176__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1176__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1176__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1176__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1176__d)));
    __Vfunc_aes_mul_gf2p2__1176__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1176__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1176__d)));
    __Vfunc_aes_mul_gf2p2__1176__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1176__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1176__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1176__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1176__b)));
    __Vfunc_aes_mul_gf2p2__1176__Vfuncout = __Vfunc_aes_mul_gf2p2__1176__f;
    __Vfunc_aes_mul_gf2p4__1174__b = __Vfunc_aes_mul_gf2p2__1176__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1177__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1174__delta));
    __Vfunc_aes_mul_gf2p2__1177__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1174__gamma));
    __Vfunc_aes_mul_gf2p2__1177__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1177__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1177__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1177__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1177__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1177__d)));
    __Vfunc_aes_mul_gf2p2__1177__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1177__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1177__d)));
    __Vfunc_aes_mul_gf2p2__1177__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1177__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1177__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1177__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1177__b)));
    __Vfunc_aes_mul_gf2p2__1177__Vfuncout = __Vfunc_aes_mul_gf2p2__1177__f;
    __Vfunc_aes_mul_gf2p4__1174__c = __Vfunc_aes_mul_gf2p2__1177__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1174__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1174__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1178__g 
                        = __Vfunc_aes_mul_gf2p4__1174__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1178__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1178__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1178__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1178__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1178__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1178__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1174__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1174__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1179__g 
                        = __Vfunc_aes_mul_gf2p4__1174__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1179__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1179__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1179__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1179__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1179__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1179__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1174__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1174__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1174__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1192__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1192__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1192__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9186196608838957368ull);
    __Vfunc_aes_mul_gf2p2__1193__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1192__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1193__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1192__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1193__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1193__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1193__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1193__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1193__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1193__d)));
    __Vfunc_aes_mul_gf2p2__1193__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1193__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1193__d)));
    __Vfunc_aes_mul_gf2p2__1193__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1193__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1193__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1193__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1193__b)));
    __Vfunc_aes_mul_gf2p2__1193__Vfuncout = __Vfunc_aes_mul_gf2p2__1193__f;
    __Vfunc_aes_mul_gf2p4__1192__a = __Vfunc_aes_mul_gf2p2__1193__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1194__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1192__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1192__delta)));
    __Vfunc_aes_mul_gf2p2__1194__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1192__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1192__gamma)));
    __Vfunc_aes_mul_gf2p2__1194__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1194__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1194__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1194__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1194__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1194__d)));
    __Vfunc_aes_mul_gf2p2__1194__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1194__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1194__d)));
    __Vfunc_aes_mul_gf2p2__1194__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1194__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1194__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1194__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1194__b)));
    __Vfunc_aes_mul_gf2p2__1194__Vfuncout = __Vfunc_aes_mul_gf2p2__1194__f;
    __Vfunc_aes_mul_gf2p4__1192__b = __Vfunc_aes_mul_gf2p2__1194__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1195__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1192__delta));
    __Vfunc_aes_mul_gf2p2__1195__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1192__gamma));
    __Vfunc_aes_mul_gf2p2__1195__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1195__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1195__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1195__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1195__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1195__d)));
    __Vfunc_aes_mul_gf2p2__1195__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1195__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1195__d)));
    __Vfunc_aes_mul_gf2p2__1195__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1195__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1195__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1195__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1195__b)));
    __Vfunc_aes_mul_gf2p2__1195__Vfuncout = __Vfunc_aes_mul_gf2p2__1195__f;
    __Vfunc_aes_mul_gf2p4__1192__c = __Vfunc_aes_mul_gf2p2__1195__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1192__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1192__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1196__g 
                        = __Vfunc_aes_mul_gf2p4__1192__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1196__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1196__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1196__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1196__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1196__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1196__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1192__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1192__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1197__g 
                        = __Vfunc_aes_mul_gf2p4__1192__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1197__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1197__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1197__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1197__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1197__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1197__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1192__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1192__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1192__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1204__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1204__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1204__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15465304161082352712ull);
    __Vfunc_aes_mul_gf2p2__1205__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1204__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1205__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1204__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1205__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1205__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1205__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1205__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1205__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1205__d)));
    __Vfunc_aes_mul_gf2p2__1205__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1205__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1205__d)));
    __Vfunc_aes_mul_gf2p2__1205__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1205__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1205__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1205__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1205__b)));
    __Vfunc_aes_mul_gf2p2__1205__Vfuncout = __Vfunc_aes_mul_gf2p2__1205__f;
    __Vfunc_aes_mul_gf2p4__1204__a = __Vfunc_aes_mul_gf2p2__1205__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1206__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1204__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1204__delta)));
    __Vfunc_aes_mul_gf2p2__1206__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1204__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1204__gamma)));
    __Vfunc_aes_mul_gf2p2__1206__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1206__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1206__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1206__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1206__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1206__d)));
    __Vfunc_aes_mul_gf2p2__1206__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1206__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1206__d)));
    __Vfunc_aes_mul_gf2p2__1206__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1206__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1206__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1206__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1206__b)));
    __Vfunc_aes_mul_gf2p2__1206__Vfuncout = __Vfunc_aes_mul_gf2p2__1206__f;
    __Vfunc_aes_mul_gf2p4__1204__b = __Vfunc_aes_mul_gf2p2__1206__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1207__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1204__delta));
    __Vfunc_aes_mul_gf2p2__1207__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1204__gamma));
    __Vfunc_aes_mul_gf2p2__1207__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1207__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1207__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1207__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1207__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1207__d)));
    __Vfunc_aes_mul_gf2p2__1207__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1207__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1207__d)));
    __Vfunc_aes_mul_gf2p2__1207__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1207__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1207__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1207__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1207__b)));
    __Vfunc_aes_mul_gf2p2__1207__Vfuncout = __Vfunc_aes_mul_gf2p2__1207__f;
    __Vfunc_aes_mul_gf2p4__1204__c = __Vfunc_aes_mul_gf2p2__1207__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1204__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1204__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1208__g 
                        = __Vfunc_aes_mul_gf2p4__1204__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1208__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1208__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1208__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1208__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1208__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1208__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1204__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1204__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1209__g 
                        = __Vfunc_aes_mul_gf2p4__1204__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1209__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1209__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1209__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1209__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1209__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1209__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1204__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1204__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1204__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1152__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1152__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1152__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1152__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1152__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1152__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1152__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1152__d)));
    __Vfunc_aes_mul_gf2p2__1152__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1152__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1152__d)));
    __Vfunc_aes_mul_gf2p2__1152__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1152__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1152__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1152__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1152__b)));
    __Vfunc_aes_mul_gf2p2__1152__Vfuncout = __Vfunc_aes_mul_gf2p2__1152__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1152__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1153__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1153__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1153__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1153__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1153__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1153__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1153__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1153__d)));
    __Vfunc_aes_mul_gf2p2__1153__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1153__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1153__d)));
    __Vfunc_aes_mul_gf2p2__1153__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1153__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1153__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1153__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1153__b)));
    __Vfunc_aes_mul_gf2p2__1153__Vfuncout = __Vfunc_aes_mul_gf2p2__1153__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1153__Vfuncout;
    __Vfunc_aes_square_gf2p2__1148__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 >> 2U) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                               ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                  >> 2U)));
    __Vfunc_aes_square_gf2p2__1148__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1148__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1148__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1148__Vfuncout = __Vfunc_aes_square_gf2p2__1148__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__1148__Vfuncout;
    __Vfunc_aes_square_gf2p2__1149__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                               ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__1149__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1149__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1149__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1149__Vfuncout = __Vfunc_aes_square_gf2p2__1149__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__1149__Vfuncout;
}

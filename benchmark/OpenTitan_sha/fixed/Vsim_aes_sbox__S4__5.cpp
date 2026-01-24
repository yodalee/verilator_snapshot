// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__1(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__460__Vfuncout;
    __Vfunc_aes_mul_gf2p4__460__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__460__gamma;
    __Vfunc_aes_mul_gf2p4__460__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__460__delta;
    __Vfunc_aes_mul_gf2p4__460__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__460__a;
    __Vfunc_aes_mul_gf2p4__460__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__460__b;
    __Vfunc_aes_mul_gf2p4__460__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__460__c;
    __Vfunc_aes_mul_gf2p4__460__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__461__Vfuncout;
    __Vfunc_aes_mul_gf2p2__461__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__461__g;
    __Vfunc_aes_mul_gf2p2__461__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__461__d;
    __Vfunc_aes_mul_gf2p2__461__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__461__f;
    __Vfunc_aes_mul_gf2p2__461__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__461__a;
    __Vfunc_aes_mul_gf2p2__461__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__461__b;
    __Vfunc_aes_mul_gf2p2__461__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__461__c;
    __Vfunc_aes_mul_gf2p2__461__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__462__Vfuncout;
    __Vfunc_aes_mul_gf2p2__462__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__462__g;
    __Vfunc_aes_mul_gf2p2__462__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__462__d;
    __Vfunc_aes_mul_gf2p2__462__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__462__f;
    __Vfunc_aes_mul_gf2p2__462__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__462__a;
    __Vfunc_aes_mul_gf2p2__462__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__462__b;
    __Vfunc_aes_mul_gf2p2__462__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__462__c;
    __Vfunc_aes_mul_gf2p2__462__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__463__Vfuncout;
    __Vfunc_aes_mul_gf2p2__463__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__463__g;
    __Vfunc_aes_mul_gf2p2__463__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__463__d;
    __Vfunc_aes_mul_gf2p2__463__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__463__f;
    __Vfunc_aes_mul_gf2p2__463__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__463__a;
    __Vfunc_aes_mul_gf2p2__463__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__463__b;
    __Vfunc_aes_mul_gf2p2__463__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__463__c;
    __Vfunc_aes_mul_gf2p2__463__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__466__Vfuncout;
    __Vfunc_aes_mul_gf2p4__466__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__466__gamma;
    __Vfunc_aes_mul_gf2p4__466__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__466__delta;
    __Vfunc_aes_mul_gf2p4__466__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__466__a;
    __Vfunc_aes_mul_gf2p4__466__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__466__b;
    __Vfunc_aes_mul_gf2p4__466__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__466__c;
    __Vfunc_aes_mul_gf2p4__466__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__467__Vfuncout;
    __Vfunc_aes_mul_gf2p2__467__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__467__g;
    __Vfunc_aes_mul_gf2p2__467__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__467__d;
    __Vfunc_aes_mul_gf2p2__467__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__467__f;
    __Vfunc_aes_mul_gf2p2__467__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__467__a;
    __Vfunc_aes_mul_gf2p2__467__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__467__b;
    __Vfunc_aes_mul_gf2p2__467__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__467__c;
    __Vfunc_aes_mul_gf2p2__467__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__468__Vfuncout;
    __Vfunc_aes_mul_gf2p2__468__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__468__g;
    __Vfunc_aes_mul_gf2p2__468__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__468__d;
    __Vfunc_aes_mul_gf2p2__468__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__468__f;
    __Vfunc_aes_mul_gf2p2__468__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__468__a;
    __Vfunc_aes_mul_gf2p2__468__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__468__b;
    __Vfunc_aes_mul_gf2p2__468__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__468__c;
    __Vfunc_aes_mul_gf2p2__468__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__469__Vfuncout;
    __Vfunc_aes_mul_gf2p2__469__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__469__g;
    __Vfunc_aes_mul_gf2p2__469__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__469__d;
    __Vfunc_aes_mul_gf2p2__469__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__469__f;
    __Vfunc_aes_mul_gf2p2__469__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__469__a;
    __Vfunc_aes_mul_gf2p2__469__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__469__b;
    __Vfunc_aes_mul_gf2p2__469__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__469__c;
    __Vfunc_aes_mul_gf2p2__469__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__490__Vfuncout;
    __Vfunc_aes_mul_gf2p2__490__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__490__g;
    __Vfunc_aes_mul_gf2p2__490__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__490__d;
    __Vfunc_aes_mul_gf2p2__490__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__490__f;
    __Vfunc_aes_mul_gf2p2__490__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__490__a;
    __Vfunc_aes_mul_gf2p2__490__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__490__b;
    __Vfunc_aes_mul_gf2p2__490__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__490__c;
    __Vfunc_aes_mul_gf2p2__490__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__491__Vfuncout;
    __Vfunc_aes_mul_gf2p2__491__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__491__g;
    __Vfunc_aes_mul_gf2p2__491__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__491__d;
    __Vfunc_aes_mul_gf2p2__491__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__491__f;
    __Vfunc_aes_mul_gf2p2__491__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__491__a;
    __Vfunc_aes_mul_gf2p2__491__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__491__b;
    __Vfunc_aes_mul_gf2p2__491__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__491__c;
    __Vfunc_aes_mul_gf2p2__491__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__494__Vfuncout;
    __Vfunc_aes_mul_gf2p2__494__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__494__g;
    __Vfunc_aes_mul_gf2p2__494__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__494__d;
    __Vfunc_aes_mul_gf2p2__494__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__494__f;
    __Vfunc_aes_mul_gf2p2__494__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__494__a;
    __Vfunc_aes_mul_gf2p2__494__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__494__b;
    __Vfunc_aes_mul_gf2p2__494__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__494__c;
    __Vfunc_aes_mul_gf2p2__494__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__495__Vfuncout;
    __Vfunc_aes_mul_gf2p2__495__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__495__g;
    __Vfunc_aes_mul_gf2p2__495__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__495__d;
    __Vfunc_aes_mul_gf2p2__495__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__495__f;
    __Vfunc_aes_mul_gf2p2__495__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__495__a;
    __Vfunc_aes_mul_gf2p2__495__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__495__b;
    __Vfunc_aes_mul_gf2p2__495__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__495__c;
    __Vfunc_aes_mul_gf2p2__495__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__498__Vfuncout;
    __Vfunc_aes_mul_gf2p2__498__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__498__g;
    __Vfunc_aes_mul_gf2p2__498__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__498__d;
    __Vfunc_aes_mul_gf2p2__498__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__498__f;
    __Vfunc_aes_mul_gf2p2__498__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__498__a;
    __Vfunc_aes_mul_gf2p2__498__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__498__b;
    __Vfunc_aes_mul_gf2p2__498__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__498__c;
    __Vfunc_aes_mul_gf2p2__498__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__499__Vfuncout;
    __Vfunc_aes_mul_gf2p2__499__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__499__g;
    __Vfunc_aes_mul_gf2p2__499__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__499__d;
    __Vfunc_aes_mul_gf2p2__499__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__499__f;
    __Vfunc_aes_mul_gf2p2__499__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__499__a;
    __Vfunc_aes_mul_gf2p2__499__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__499__b;
    __Vfunc_aes_mul_gf2p2__499__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__499__c;
    __Vfunc_aes_mul_gf2p2__499__c = 0;
    // Body
    __Vfunc_aes_mul_gf2p2__490__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__490__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__490__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__490__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__490__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__490__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__490__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__490__d)));
    __Vfunc_aes_mul_gf2p2__490__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__490__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__490__d)));
    __Vfunc_aes_mul_gf2p2__490__f = ((((IData)(__Vfunc_aes_mul_gf2p2__490__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__490__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__490__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__490__b)));
    __Vfunc_aes_mul_gf2p2__490__Vfuncout = __Vfunc_aes_mul_gf2p2__490__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__490__Vfuncout;
    __Vfunc_aes_mul_gf2p2__491__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__491__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__491__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__491__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__491__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__491__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__491__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__491__d)));
    __Vfunc_aes_mul_gf2p2__491__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__491__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__491__d)));
    __Vfunc_aes_mul_gf2p2__491__f = ((((IData)(__Vfunc_aes_mul_gf2p2__491__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__491__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__491__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__491__b)));
    __Vfunc_aes_mul_gf2p2__491__Vfuncout = __Vfunc_aes_mul_gf2p2__491__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__491__Vfuncout;
    __Vfunc_aes_mul_gf2p2__494__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                                           >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__494__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__494__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__494__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__494__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__494__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__494__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__494__d)));
    __Vfunc_aes_mul_gf2p2__494__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__494__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__494__d)));
    __Vfunc_aes_mul_gf2p2__494__f = ((((IData)(__Vfunc_aes_mul_gf2p2__494__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__494__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__494__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__494__b)));
    __Vfunc_aes_mul_gf2p2__494__Vfuncout = __Vfunc_aes_mul_gf2p2__494__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__494__Vfuncout;
    __Vfunc_aes_mul_gf2p2__495__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                                           >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__495__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__495__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__495__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__495__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__495__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__495__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__495__d)));
    __Vfunc_aes_mul_gf2p2__495__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__495__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__495__d)));
    __Vfunc_aes_mul_gf2p2__495__f = ((((IData)(__Vfunc_aes_mul_gf2p2__495__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__495__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__495__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__495__b)));
    __Vfunc_aes_mul_gf2p2__495__Vfuncout = __Vfunc_aes_mul_gf2p2__495__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__495__Vfuncout;
    __Vfunc_aes_mul_gf2p4__460__delta = (0x0000000fU 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__);
    __Vfunc_aes_mul_gf2p4__460__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                            >> 4U));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__460__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3457935290843060380ull);
    __Vfunc_aes_mul_gf2p2__461__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__460__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__461__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__460__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__461__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__461__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__461__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__461__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__461__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__461__d)));
    __Vfunc_aes_mul_gf2p2__461__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__461__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__461__d)));
    __Vfunc_aes_mul_gf2p2__461__f = ((((IData)(__Vfunc_aes_mul_gf2p2__461__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__461__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__461__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__461__b)));
    __Vfunc_aes_mul_gf2p2__461__Vfuncout = __Vfunc_aes_mul_gf2p2__461__f;
    __Vfunc_aes_mul_gf2p4__460__a = __Vfunc_aes_mul_gf2p2__461__Vfuncout;
    __Vfunc_aes_mul_gf2p2__462__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__460__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__460__delta)));
    __Vfunc_aes_mul_gf2p2__462__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__460__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__460__gamma)));
    __Vfunc_aes_mul_gf2p2__462__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__462__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__462__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__462__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__462__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__462__d)));
    __Vfunc_aes_mul_gf2p2__462__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__462__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__462__d)));
    __Vfunc_aes_mul_gf2p2__462__f = ((((IData)(__Vfunc_aes_mul_gf2p2__462__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__462__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__462__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__462__b)));
    __Vfunc_aes_mul_gf2p2__462__Vfuncout = __Vfunc_aes_mul_gf2p2__462__f;
    __Vfunc_aes_mul_gf2p4__460__b = __Vfunc_aes_mul_gf2p2__462__Vfuncout;
    __Vfunc_aes_mul_gf2p2__463__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__460__delta));
    __Vfunc_aes_mul_gf2p2__463__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__460__gamma));
    __Vfunc_aes_mul_gf2p2__463__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__463__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__463__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__463__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__463__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__463__d)));
    __Vfunc_aes_mul_gf2p2__463__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__463__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__463__d)));
    __Vfunc_aes_mul_gf2p2__463__f = ((((IData)(__Vfunc_aes_mul_gf2p2__463__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__463__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__463__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__463__b)));
    __Vfunc_aes_mul_gf2p2__463__Vfuncout = __Vfunc_aes_mul_gf2p2__463__f;
    __Vfunc_aes_mul_gf2p4__460__c = __Vfunc_aes_mul_gf2p2__463__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__460__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__460__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__464__g 
                        = __Vfunc_aes_mul_gf2p4__460__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__464__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__464__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__464__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__464__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__464__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__464__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__460__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__460__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__465__g 
                        = __Vfunc_aes_mul_gf2p4__460__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__465__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__465__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__465__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__465__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__465__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__465__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__460__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__460__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__460__Vfuncout;
    __Vfunc_aes_mul_gf2p4__466__delta = (0x0000000fU 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__);
    __Vfunc_aes_mul_gf2p4__466__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__466__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15199524973835231673ull);
    __Vfunc_aes_mul_gf2p2__467__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__466__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__467__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__466__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__467__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__467__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__467__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__467__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__467__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__467__d)));
    __Vfunc_aes_mul_gf2p2__467__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__467__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__467__d)));
    __Vfunc_aes_mul_gf2p2__467__f = ((((IData)(__Vfunc_aes_mul_gf2p2__467__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__467__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__467__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__467__b)));
    __Vfunc_aes_mul_gf2p2__467__Vfuncout = __Vfunc_aes_mul_gf2p2__467__f;
    __Vfunc_aes_mul_gf2p4__466__a = __Vfunc_aes_mul_gf2p2__467__Vfuncout;
    __Vfunc_aes_mul_gf2p2__468__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__466__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__466__delta)));
    __Vfunc_aes_mul_gf2p2__468__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__466__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__466__gamma)));
    __Vfunc_aes_mul_gf2p2__468__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__468__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__468__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__468__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__468__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__468__d)));
    __Vfunc_aes_mul_gf2p2__468__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__468__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__468__d)));
    __Vfunc_aes_mul_gf2p2__468__f = ((((IData)(__Vfunc_aes_mul_gf2p2__468__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__468__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__468__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__468__b)));
    __Vfunc_aes_mul_gf2p2__468__Vfuncout = __Vfunc_aes_mul_gf2p2__468__f;
    __Vfunc_aes_mul_gf2p4__466__b = __Vfunc_aes_mul_gf2p2__468__Vfuncout;
    __Vfunc_aes_mul_gf2p2__469__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__466__delta));
    __Vfunc_aes_mul_gf2p2__469__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__466__gamma));
    __Vfunc_aes_mul_gf2p2__469__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__469__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__469__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__469__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__469__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__469__d)));
    __Vfunc_aes_mul_gf2p2__469__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__469__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__469__d)));
    __Vfunc_aes_mul_gf2p2__469__f = ((((IData)(__Vfunc_aes_mul_gf2p2__469__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__469__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__469__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__469__b)));
    __Vfunc_aes_mul_gf2p2__469__Vfuncout = __Vfunc_aes_mul_gf2p2__469__f;
    __Vfunc_aes_mul_gf2p4__466__c = __Vfunc_aes_mul_gf2p2__469__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__466__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__466__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__470__g 
                        = __Vfunc_aes_mul_gf2p4__466__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__470__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__470__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__470__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__470__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__470__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__470__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__466__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__466__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__471__g 
                        = __Vfunc_aes_mul_gf2p4__466__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__471__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__471__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__471__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__471__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__471__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__471__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__466__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__466__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__466__Vfuncout;
    __Vfunc_aes_mul_gf2p2__498__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                                           >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__498__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega;
    __Vfunc_aes_mul_gf2p2__498__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__498__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__498__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__498__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__498__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__498__d)));
    __Vfunc_aes_mul_gf2p2__498__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__498__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__498__d)));
    __Vfunc_aes_mul_gf2p2__498__f = ((((IData)(__Vfunc_aes_mul_gf2p2__498__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__498__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__498__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__498__b)));
    __Vfunc_aes_mul_gf2p2__498__Vfuncout = __Vfunc_aes_mul_gf2p2__498__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__498__Vfuncout;
    __Vfunc_aes_mul_gf2p2__499__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                                           >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__499__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega;
    __Vfunc_aes_mul_gf2p2__499__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__499__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__499__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__499__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__499__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__499__d)));
    __Vfunc_aes_mul_gf2p2__499__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__499__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__499__d)));
    __Vfunc_aes_mul_gf2p2__499__f = ((((IData)(__Vfunc_aes_mul_gf2p2__499__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__499__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__499__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__499__b)));
    __Vfunc_aes_mul_gf2p2__499__Vfuncout = __Vfunc_aes_mul_gf2p2__499__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__499__Vfuncout;
}

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__562__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__562__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__562__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__562__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__562__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__562__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__562__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__562__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__562__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__562__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__563__Vfuncout;
    __Vfunc_aes_square_gf2p2__563__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__563__g;
    __Vfunc_aes_square_gf2p2__563__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__563__d;
    __Vfunc_aes_square_gf2p2__563__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__566__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__566__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__566__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__566__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__566__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__566__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__566__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__566__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__566__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__566__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__567__Vfuncout;
    __Vfunc_aes_square_gf2p2__567__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__567__g;
    __Vfunc_aes_square_gf2p2__567__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__567__d;
    __Vfunc_aes_square_gf2p2__567__d = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__582__Vfuncout;
    __Vfunc_aes_mul_gf2p4__582__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__582__gamma;
    __Vfunc_aes_mul_gf2p4__582__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__582__delta;
    __Vfunc_aes_mul_gf2p4__582__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__582__a;
    __Vfunc_aes_mul_gf2p4__582__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__582__b;
    __Vfunc_aes_mul_gf2p4__582__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__582__c;
    __Vfunc_aes_mul_gf2p4__582__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__583__Vfuncout;
    __Vfunc_aes_mul_gf2p2__583__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__583__g;
    __Vfunc_aes_mul_gf2p2__583__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__583__d;
    __Vfunc_aes_mul_gf2p2__583__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__583__f;
    __Vfunc_aes_mul_gf2p2__583__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__583__a;
    __Vfunc_aes_mul_gf2p2__583__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__583__b;
    __Vfunc_aes_mul_gf2p2__583__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__583__c;
    __Vfunc_aes_mul_gf2p2__583__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__584__Vfuncout;
    __Vfunc_aes_mul_gf2p2__584__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__584__g;
    __Vfunc_aes_mul_gf2p2__584__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__584__d;
    __Vfunc_aes_mul_gf2p2__584__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__584__f;
    __Vfunc_aes_mul_gf2p2__584__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__584__a;
    __Vfunc_aes_mul_gf2p2__584__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__584__b;
    __Vfunc_aes_mul_gf2p2__584__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__584__c;
    __Vfunc_aes_mul_gf2p2__584__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__585__Vfuncout;
    __Vfunc_aes_mul_gf2p2__585__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__585__g;
    __Vfunc_aes_mul_gf2p2__585__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__585__d;
    __Vfunc_aes_mul_gf2p2__585__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__585__f;
    __Vfunc_aes_mul_gf2p2__585__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__585__a;
    __Vfunc_aes_mul_gf2p2__585__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__585__b;
    __Vfunc_aes_mul_gf2p2__585__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__585__c;
    __Vfunc_aes_mul_gf2p2__585__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__588__Vfuncout;
    __Vfunc_aes_mul_gf2p4__588__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__588__gamma;
    __Vfunc_aes_mul_gf2p4__588__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__588__delta;
    __Vfunc_aes_mul_gf2p4__588__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__588__a;
    __Vfunc_aes_mul_gf2p4__588__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__588__b;
    __Vfunc_aes_mul_gf2p4__588__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__588__c;
    __Vfunc_aes_mul_gf2p4__588__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__589__Vfuncout;
    __Vfunc_aes_mul_gf2p2__589__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__589__g;
    __Vfunc_aes_mul_gf2p2__589__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__589__d;
    __Vfunc_aes_mul_gf2p2__589__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__589__f;
    __Vfunc_aes_mul_gf2p2__589__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__589__a;
    __Vfunc_aes_mul_gf2p2__589__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__589__b;
    __Vfunc_aes_mul_gf2p2__589__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__589__c;
    __Vfunc_aes_mul_gf2p2__589__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__590__Vfuncout;
    __Vfunc_aes_mul_gf2p2__590__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__590__g;
    __Vfunc_aes_mul_gf2p2__590__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__590__d;
    __Vfunc_aes_mul_gf2p2__590__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__590__f;
    __Vfunc_aes_mul_gf2p2__590__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__590__a;
    __Vfunc_aes_mul_gf2p2__590__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__590__b;
    __Vfunc_aes_mul_gf2p2__590__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__590__c;
    __Vfunc_aes_mul_gf2p2__590__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__591__Vfuncout;
    __Vfunc_aes_mul_gf2p2__591__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__591__g;
    __Vfunc_aes_mul_gf2p2__591__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__591__d;
    __Vfunc_aes_mul_gf2p2__591__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__591__f;
    __Vfunc_aes_mul_gf2p2__591__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__591__a;
    __Vfunc_aes_mul_gf2p2__591__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__591__b;
    __Vfunc_aes_mul_gf2p2__591__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__591__c;
    __Vfunc_aes_mul_gf2p2__591__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__594__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__594__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__594__g;
    __Vfunc_aes_scale_omega2_gf2p2__594__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__594__d;
    __Vfunc_aes_scale_omega2_gf2p2__594__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__595__Vfuncout;
    __Vfunc_aes_square_gf2p2__595__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__595__g;
    __Vfunc_aes_square_gf2p2__595__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__595__d;
    __Vfunc_aes_square_gf2p2__595__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__596__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__596__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__596__g;
    __Vfunc_aes_scale_omega2_gf2p2__596__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__596__d;
    __Vfunc_aes_scale_omega2_gf2p2__596__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__597__Vfuncout;
    __Vfunc_aes_square_gf2p2__597__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__597__g;
    __Vfunc_aes_square_gf2p2__597__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__597__d;
    __Vfunc_aes_square_gf2p2__597__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__598__Vfuncout;
    __Vfunc_aes_square_gf2p2__598__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__598__g;
    __Vfunc_aes_square_gf2p2__598__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__598__d;
    __Vfunc_aes_square_gf2p2__598__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__599__Vfuncout;
    __Vfunc_aes_square_gf2p2__599__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__599__g;
    __Vfunc_aes_square_gf2p2__599__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__599__d;
    __Vfunc_aes_square_gf2p2__599__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__602__Vfuncout;
    __Vfunc_aes_mul_gf2p2__602__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__602__g;
    __Vfunc_aes_mul_gf2p2__602__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__602__d;
    __Vfunc_aes_mul_gf2p2__602__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__602__f;
    __Vfunc_aes_mul_gf2p2__602__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__602__a;
    __Vfunc_aes_mul_gf2p2__602__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__602__b;
    __Vfunc_aes_mul_gf2p2__602__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__602__c;
    __Vfunc_aes_mul_gf2p2__602__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__603__Vfuncout;
    __Vfunc_aes_mul_gf2p2__603__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__603__g;
    __Vfunc_aes_mul_gf2p2__603__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__603__d;
    __Vfunc_aes_mul_gf2p2__603__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__603__f;
    __Vfunc_aes_mul_gf2p2__603__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__603__a;
    __Vfunc_aes_mul_gf2p2__603__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__603__b;
    __Vfunc_aes_mul_gf2p2__603__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__603__c;
    __Vfunc_aes_mul_gf2p2__603__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__606__Vfuncout;
    __Vfunc_aes_mul_gf2p2__606__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__606__g;
    __Vfunc_aes_mul_gf2p2__606__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__606__d;
    __Vfunc_aes_mul_gf2p2__606__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__606__f;
    __Vfunc_aes_mul_gf2p2__606__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__606__a;
    __Vfunc_aes_mul_gf2p2__606__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__606__b;
    __Vfunc_aes_mul_gf2p2__606__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__606__c;
    __Vfunc_aes_mul_gf2p2__606__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__607__Vfuncout;
    __Vfunc_aes_mul_gf2p2__607__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__607__g;
    __Vfunc_aes_mul_gf2p2__607__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__607__d;
    __Vfunc_aes_mul_gf2p2__607__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__607__f;
    __Vfunc_aes_mul_gf2p2__607__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__607__a;
    __Vfunc_aes_mul_gf2p2__607__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__607__b;
    __Vfunc_aes_mul_gf2p2__607__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__607__c;
    __Vfunc_aes_mul_gf2p2__607__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__610__Vfuncout;
    __Vfunc_aes_mul_gf2p2__610__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__610__g;
    __Vfunc_aes_mul_gf2p2__610__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__610__d;
    __Vfunc_aes_mul_gf2p2__610__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__610__f;
    __Vfunc_aes_mul_gf2p2__610__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__610__a;
    __Vfunc_aes_mul_gf2p2__610__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__610__b;
    __Vfunc_aes_mul_gf2p2__610__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__610__c;
    __Vfunc_aes_mul_gf2p2__610__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__611__Vfuncout;
    __Vfunc_aes_mul_gf2p2__611__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__611__g;
    __Vfunc_aes_mul_gf2p2__611__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__611__d;
    __Vfunc_aes_mul_gf2p2__611__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__611__f;
    __Vfunc_aes_mul_gf2p2__611__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__611__a;
    __Vfunc_aes_mul_gf2p2__611__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__611__b;
    __Vfunc_aes_mul_gf2p2__611__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__611__c;
    __Vfunc_aes_mul_gf2p2__611__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__612__Vfuncout;
    __Vfunc_aes_mul_gf2p4__612__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__612__gamma;
    __Vfunc_aes_mul_gf2p4__612__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__612__delta;
    __Vfunc_aes_mul_gf2p4__612__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__612__a;
    __Vfunc_aes_mul_gf2p4__612__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__612__b;
    __Vfunc_aes_mul_gf2p4__612__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__612__c;
    __Vfunc_aes_mul_gf2p4__612__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__613__Vfuncout;
    __Vfunc_aes_mul_gf2p2__613__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__613__g;
    __Vfunc_aes_mul_gf2p2__613__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__613__d;
    __Vfunc_aes_mul_gf2p2__613__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__613__f;
    __Vfunc_aes_mul_gf2p2__613__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__613__a;
    __Vfunc_aes_mul_gf2p2__613__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__613__b;
    __Vfunc_aes_mul_gf2p2__613__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__613__c;
    __Vfunc_aes_mul_gf2p2__613__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__614__Vfuncout;
    __Vfunc_aes_mul_gf2p2__614__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__614__g;
    __Vfunc_aes_mul_gf2p2__614__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__614__d;
    __Vfunc_aes_mul_gf2p2__614__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__614__f;
    __Vfunc_aes_mul_gf2p2__614__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__614__a;
    __Vfunc_aes_mul_gf2p2__614__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__614__b;
    __Vfunc_aes_mul_gf2p2__614__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__614__c;
    __Vfunc_aes_mul_gf2p2__614__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__615__Vfuncout;
    __Vfunc_aes_mul_gf2p2__615__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__615__g;
    __Vfunc_aes_mul_gf2p2__615__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__615__d;
    __Vfunc_aes_mul_gf2p2__615__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__615__f;
    __Vfunc_aes_mul_gf2p2__615__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__615__a;
    __Vfunc_aes_mul_gf2p2__615__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__615__b;
    __Vfunc_aes_mul_gf2p2__615__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__615__c;
    __Vfunc_aes_mul_gf2p2__615__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__618__Vfuncout;
    __Vfunc_aes_mul_gf2p4__618__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__618__gamma;
    __Vfunc_aes_mul_gf2p4__618__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__618__delta;
    __Vfunc_aes_mul_gf2p4__618__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__618__a;
    __Vfunc_aes_mul_gf2p4__618__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__618__b;
    __Vfunc_aes_mul_gf2p4__618__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__618__c;
    __Vfunc_aes_mul_gf2p4__618__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__619__Vfuncout;
    __Vfunc_aes_mul_gf2p2__619__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__619__g;
    __Vfunc_aes_mul_gf2p2__619__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__619__d;
    __Vfunc_aes_mul_gf2p2__619__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__619__f;
    __Vfunc_aes_mul_gf2p2__619__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__619__a;
    __Vfunc_aes_mul_gf2p2__619__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__619__b;
    __Vfunc_aes_mul_gf2p2__619__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__619__c;
    __Vfunc_aes_mul_gf2p2__619__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__620__Vfuncout;
    __Vfunc_aes_mul_gf2p2__620__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__620__g;
    __Vfunc_aes_mul_gf2p2__620__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__620__d;
    __Vfunc_aes_mul_gf2p2__620__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__620__f;
    __Vfunc_aes_mul_gf2p2__620__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__620__a;
    __Vfunc_aes_mul_gf2p2__620__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__620__b;
    __Vfunc_aes_mul_gf2p2__620__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__620__c;
    __Vfunc_aes_mul_gf2p2__620__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__621__Vfuncout;
    __Vfunc_aes_mul_gf2p2__621__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__621__g;
    __Vfunc_aes_mul_gf2p2__621__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__621__d;
    __Vfunc_aes_mul_gf2p2__621__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__621__f;
    __Vfunc_aes_mul_gf2p2__621__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__621__a;
    __Vfunc_aes_mul_gf2p2__621__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__621__b;
    __Vfunc_aes_mul_gf2p2__621__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__621__c;
    __Vfunc_aes_mul_gf2p2__621__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__624__Vfuncout;
    __Vfunc_aes_mul_gf2p4__624__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__624__gamma;
    __Vfunc_aes_mul_gf2p4__624__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__624__delta;
    __Vfunc_aes_mul_gf2p4__624__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__624__a;
    __Vfunc_aes_mul_gf2p4__624__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__624__b;
    __Vfunc_aes_mul_gf2p4__624__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__624__c;
    __Vfunc_aes_mul_gf2p4__624__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__625__Vfuncout;
    __Vfunc_aes_mul_gf2p2__625__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__625__g;
    __Vfunc_aes_mul_gf2p2__625__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__625__d;
    __Vfunc_aes_mul_gf2p2__625__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__625__f;
    __Vfunc_aes_mul_gf2p2__625__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__625__a;
    __Vfunc_aes_mul_gf2p2__625__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__625__b;
    __Vfunc_aes_mul_gf2p2__625__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__625__c;
    __Vfunc_aes_mul_gf2p2__625__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__626__Vfuncout;
    __Vfunc_aes_mul_gf2p2__626__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__626__g;
    __Vfunc_aes_mul_gf2p2__626__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__626__d;
    __Vfunc_aes_mul_gf2p2__626__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__626__f;
    __Vfunc_aes_mul_gf2p2__626__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__626__a;
    __Vfunc_aes_mul_gf2p2__626__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__626__b;
    __Vfunc_aes_mul_gf2p2__626__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__626__c;
    __Vfunc_aes_mul_gf2p2__626__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__627__Vfuncout;
    __Vfunc_aes_mul_gf2p2__627__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__627__g;
    __Vfunc_aes_mul_gf2p2__627__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__627__d;
    __Vfunc_aes_mul_gf2p2__627__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__627__f;
    __Vfunc_aes_mul_gf2p2__627__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__627__a;
    __Vfunc_aes_mul_gf2p2__627__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__627__b;
    __Vfunc_aes_mul_gf2p2__627__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__627__c;
    __Vfunc_aes_mul_gf2p2__627__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__630__Vfuncout;
    __Vfunc_aes_mul_gf2p4__630__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__630__gamma;
    __Vfunc_aes_mul_gf2p4__630__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__630__delta;
    __Vfunc_aes_mul_gf2p4__630__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__630__a;
    __Vfunc_aes_mul_gf2p4__630__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__630__b;
    __Vfunc_aes_mul_gf2p4__630__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__630__c;
    __Vfunc_aes_mul_gf2p4__630__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__631__Vfuncout;
    __Vfunc_aes_mul_gf2p2__631__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__631__g;
    __Vfunc_aes_mul_gf2p2__631__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__631__d;
    __Vfunc_aes_mul_gf2p2__631__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__631__f;
    __Vfunc_aes_mul_gf2p2__631__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__631__a;
    __Vfunc_aes_mul_gf2p2__631__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__631__b;
    __Vfunc_aes_mul_gf2p2__631__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__631__c;
    __Vfunc_aes_mul_gf2p2__631__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__632__Vfuncout;
    __Vfunc_aes_mul_gf2p2__632__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__632__g;
    __Vfunc_aes_mul_gf2p2__632__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__632__d;
    __Vfunc_aes_mul_gf2p2__632__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__632__f;
    __Vfunc_aes_mul_gf2p2__632__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__632__a;
    __Vfunc_aes_mul_gf2p2__632__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__632__b;
    __Vfunc_aes_mul_gf2p2__632__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__632__c;
    __Vfunc_aes_mul_gf2p2__632__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__633__Vfuncout;
    __Vfunc_aes_mul_gf2p2__633__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__633__g;
    __Vfunc_aes_mul_gf2p2__633__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__633__d;
    __Vfunc_aes_mul_gf2p2__633__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__633__f;
    __Vfunc_aes_mul_gf2p2__633__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__633__a;
    __Vfunc_aes_mul_gf2p2__633__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__633__b;
    __Vfunc_aes_mul_gf2p2__633__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__633__c;
    __Vfunc_aes_mul_gf2p2__633__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__636__Vfuncout;
    __Vfunc_aes_mul_gf2p4__636__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__636__gamma;
    __Vfunc_aes_mul_gf2p4__636__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__636__delta;
    __Vfunc_aes_mul_gf2p4__636__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__636__a;
    __Vfunc_aes_mul_gf2p4__636__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__636__b;
    __Vfunc_aes_mul_gf2p4__636__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__636__c;
    __Vfunc_aes_mul_gf2p4__636__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__637__Vfuncout;
    __Vfunc_aes_mul_gf2p2__637__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__637__g;
    __Vfunc_aes_mul_gf2p2__637__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__637__d;
    __Vfunc_aes_mul_gf2p2__637__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__637__f;
    __Vfunc_aes_mul_gf2p2__637__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__637__a;
    __Vfunc_aes_mul_gf2p2__637__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__637__b;
    __Vfunc_aes_mul_gf2p2__637__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__637__c;
    __Vfunc_aes_mul_gf2p2__637__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__638__Vfuncout;
    __Vfunc_aes_mul_gf2p2__638__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__638__g;
    __Vfunc_aes_mul_gf2p2__638__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__638__d;
    __Vfunc_aes_mul_gf2p2__638__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__638__f;
    __Vfunc_aes_mul_gf2p2__638__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__638__a;
    __Vfunc_aes_mul_gf2p2__638__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__638__b;
    __Vfunc_aes_mul_gf2p2__638__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__638__c;
    __Vfunc_aes_mul_gf2p2__638__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__639__Vfuncout;
    __Vfunc_aes_mul_gf2p2__639__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__639__g;
    __Vfunc_aes_mul_gf2p2__639__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__639__d;
    __Vfunc_aes_mul_gf2p2__639__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__639__f;
    __Vfunc_aes_mul_gf2p2__639__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__639__a;
    __Vfunc_aes_mul_gf2p2__639__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__639__b;
    __Vfunc_aes_mul_gf2p2__639__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__639__c;
    __Vfunc_aes_mul_gf2p2__639__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__642__Vfuncout;
    __Vfunc_aes_mul_gf2p4__642__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__642__gamma;
    __Vfunc_aes_mul_gf2p4__642__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__642__delta;
    __Vfunc_aes_mul_gf2p4__642__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__642__a;
    __Vfunc_aes_mul_gf2p4__642__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__642__b;
    __Vfunc_aes_mul_gf2p4__642__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__642__c;
    __Vfunc_aes_mul_gf2p4__642__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__643__Vfuncout;
    __Vfunc_aes_mul_gf2p2__643__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__643__g;
    __Vfunc_aes_mul_gf2p2__643__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__643__d;
    __Vfunc_aes_mul_gf2p2__643__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__643__f;
    __Vfunc_aes_mul_gf2p2__643__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__643__a;
    __Vfunc_aes_mul_gf2p2__643__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__643__b;
    __Vfunc_aes_mul_gf2p2__643__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__643__c;
    __Vfunc_aes_mul_gf2p2__643__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__644__Vfuncout;
    __Vfunc_aes_mul_gf2p2__644__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__644__g;
    __Vfunc_aes_mul_gf2p2__644__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__644__d;
    __Vfunc_aes_mul_gf2p2__644__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__644__f;
    __Vfunc_aes_mul_gf2p2__644__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__644__a;
    __Vfunc_aes_mul_gf2p2__644__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__644__b;
    __Vfunc_aes_mul_gf2p2__644__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__644__c;
    __Vfunc_aes_mul_gf2p2__644__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__645__Vfuncout;
    __Vfunc_aes_mul_gf2p2__645__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__645__g;
    __Vfunc_aes_mul_gf2p2__645__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__645__d;
    __Vfunc_aes_mul_gf2p2__645__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__645__f;
    __Vfunc_aes_mul_gf2p2__645__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__645__a;
    __Vfunc_aes_mul_gf2p2__645__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__645__b;
    __Vfunc_aes_mul_gf2p2__645__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__645__c;
    __Vfunc_aes_mul_gf2p2__645__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__648__Vfuncout;
    __Vfunc_aes_mul_gf2p4__648__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__648__gamma;
    __Vfunc_aes_mul_gf2p4__648__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__648__delta;
    __Vfunc_aes_mul_gf2p4__648__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__648__a;
    __Vfunc_aes_mul_gf2p4__648__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__648__b;
    __Vfunc_aes_mul_gf2p4__648__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__648__c;
    __Vfunc_aes_mul_gf2p4__648__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__649__Vfuncout;
    __Vfunc_aes_mul_gf2p2__649__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__649__g;
    __Vfunc_aes_mul_gf2p2__649__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__649__d;
    __Vfunc_aes_mul_gf2p2__649__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__649__f;
    __Vfunc_aes_mul_gf2p2__649__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__649__a;
    __Vfunc_aes_mul_gf2p2__649__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__649__b;
    __Vfunc_aes_mul_gf2p2__649__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__649__c;
    __Vfunc_aes_mul_gf2p2__649__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__650__Vfuncout;
    __Vfunc_aes_mul_gf2p2__650__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__650__g;
    __Vfunc_aes_mul_gf2p2__650__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__650__d;
    __Vfunc_aes_mul_gf2p2__650__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__650__f;
    __Vfunc_aes_mul_gf2p2__650__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__650__a;
    __Vfunc_aes_mul_gf2p2__650__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__650__b;
    __Vfunc_aes_mul_gf2p2__650__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__650__c;
    __Vfunc_aes_mul_gf2p2__650__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__651__Vfuncout;
    __Vfunc_aes_mul_gf2p2__651__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__651__g;
    __Vfunc_aes_mul_gf2p2__651__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__651__d;
    __Vfunc_aes_mul_gf2p2__651__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__651__f;
    __Vfunc_aes_mul_gf2p2__651__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__651__a;
    __Vfunc_aes_mul_gf2p2__651__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__651__b;
    __Vfunc_aes_mul_gf2p2__651__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__651__c;
    __Vfunc_aes_mul_gf2p2__651__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__654__Vfuncout;
    __Vfunc_aes_mul_gf2p4__654__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__654__gamma;
    __Vfunc_aes_mul_gf2p4__654__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__654__delta;
    __Vfunc_aes_mul_gf2p4__654__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__654__a;
    __Vfunc_aes_mul_gf2p4__654__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__654__b;
    __Vfunc_aes_mul_gf2p4__654__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__654__c;
    __Vfunc_aes_mul_gf2p4__654__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__655__Vfuncout;
    __Vfunc_aes_mul_gf2p2__655__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__655__g;
    __Vfunc_aes_mul_gf2p2__655__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__655__d;
    __Vfunc_aes_mul_gf2p2__655__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__655__f;
    __Vfunc_aes_mul_gf2p2__655__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__655__a;
    __Vfunc_aes_mul_gf2p2__655__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__655__b;
    __Vfunc_aes_mul_gf2p2__655__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__655__c;
    __Vfunc_aes_mul_gf2p2__655__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__656__Vfuncout;
    __Vfunc_aes_mul_gf2p2__656__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__656__g;
    __Vfunc_aes_mul_gf2p2__656__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__656__d;
    __Vfunc_aes_mul_gf2p2__656__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__656__f;
    __Vfunc_aes_mul_gf2p2__656__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__656__a;
    __Vfunc_aes_mul_gf2p2__656__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__656__b;
    __Vfunc_aes_mul_gf2p2__656__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__656__c;
    __Vfunc_aes_mul_gf2p2__656__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__657__Vfuncout;
    __Vfunc_aes_mul_gf2p2__657__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__657__g;
    __Vfunc_aes_mul_gf2p2__657__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__657__d;
    __Vfunc_aes_mul_gf2p2__657__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__657__f;
    __Vfunc_aes_mul_gf2p2__657__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__657__a;
    __Vfunc_aes_mul_gf2p2__657__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__657__b;
    __Vfunc_aes_mul_gf2p2__657__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__657__c;
    __Vfunc_aes_mul_gf2p2__657__c = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d) 
                    << 2U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x00fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                                                 >> 8U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                               >> 0x0000000aU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                    << 2U) ^ (0x03fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                                                 >> 6U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
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
                                    ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__) 
                                   << 4U)) | (0x0000000fU 
                                              & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__)));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0) 
                                    << 4U) ^ (0xfffffff0U 
                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                                                 >> 0x00000010U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                               >> 0x00000012U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x000ffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                                                 >> 0x0000000cU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                               >> 0x0000000eU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
                                    << 2U) ^ (0x0003fffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                                                 >> 0x0000000eU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                               >> 0x00000010U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o 
                = vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o;
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & ((0x3ffffffcU & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                                   >> 2U)) 
                                   ^ (0x003ffffcU & 
                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                                       >> 0x0000000aU)))) 
                   | (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                                                 >> 0x00000014U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                                        >> 0x00000018U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by) 
                                    << 4U) ^ (0x0000fff0U 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                                                 >> 0x00000010U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
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
                vlSelfRef.__Vfunc_aes_mvm__550__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__550__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__550__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__550__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__550__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__550__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__550__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__550__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__550__vec_b 
                    = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                      [0U][1U] >> 8U));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__550__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__550__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__550__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__550__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__550__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_b 
                        = (0x000000ffU & (0x63U ^ (
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                    [0U][1U] 
                                                    << 0x00000018U) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                      [0U][1U] 
                                                      >> 8U))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__551__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__551__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__551__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__551__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__551__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [0U][1U] 
                                          >> 8U));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__552__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__552__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__552__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__552__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__552__Vfuncout))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__553__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__553__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__553__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__553__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__553__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__553__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__553__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__553__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__553__vec_b 
                    = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                      [1U][1U] >> 8U));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__553__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__553__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__553__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__553__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__553__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [1U][1U] 
                                          >> 8U));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__554__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__554__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__554__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__554__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__554__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [1U][1U] 
                                          >> 8U));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__555__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__555__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__555__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__555__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__555__Vfuncout))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__562__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__562__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__562__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__562__gamma)));
    __Vfunc_aes_square_gf2p2__563__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__562__gamma));
    __Vfunc_aes_square_gf2p2__563__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__563__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__563__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__563__Vfuncout = __Vfunc_aes_square_gf2p2__563__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__562__b = __Vfunc_aes_square_gf2p2__563__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__562__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__564__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__562__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__564__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__564__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__564__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__564__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__564__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__564__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__565__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__562__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__565__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__565__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__565__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__565__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__565__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__565__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__562__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__562__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__562__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__566__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__566__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__566__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__566__gamma)));
    __Vfunc_aes_square_gf2p2__567__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__566__gamma));
    __Vfunc_aes_square_gf2p2__567__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__567__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__567__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__567__Vfuncout = __Vfunc_aes_square_gf2p2__567__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__566__b = __Vfunc_aes_square_gf2p2__567__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__566__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__568__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__566__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__568__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__568__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__568__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__568__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__568__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__568__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__569__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__566__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__569__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__569__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__569__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__569__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__569__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__569__Vfuncout)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                    << 4U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma));
        }
    } else {
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o = 0U;
    }
    __Vfunc_aes_square_scale_gf2p4_gf2p2__566__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__566__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__566__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__582__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__582__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                            >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__582__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14446529224253459839ull);
    __Vfunc_aes_mul_gf2p2__583__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__582__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__583__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__582__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__583__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__583__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__583__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__583__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__583__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__583__d)));
    __Vfunc_aes_mul_gf2p2__583__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__583__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__583__d)));
    __Vfunc_aes_mul_gf2p2__583__f = ((((IData)(__Vfunc_aes_mul_gf2p2__583__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__583__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__583__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__583__b)));
    __Vfunc_aes_mul_gf2p2__583__Vfuncout = __Vfunc_aes_mul_gf2p2__583__f;
    __Vfunc_aes_mul_gf2p4__582__a = __Vfunc_aes_mul_gf2p2__583__Vfuncout;
    __Vfunc_aes_mul_gf2p2__584__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__582__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__582__delta)));
    __Vfunc_aes_mul_gf2p2__584__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__582__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__582__gamma)));
    __Vfunc_aes_mul_gf2p2__584__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__584__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__584__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__584__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__584__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__584__d)));
    __Vfunc_aes_mul_gf2p2__584__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__584__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__584__d)));
    __Vfunc_aes_mul_gf2p2__584__f = ((((IData)(__Vfunc_aes_mul_gf2p2__584__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__584__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__584__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__584__b)));
    __Vfunc_aes_mul_gf2p2__584__Vfuncout = __Vfunc_aes_mul_gf2p2__584__f;
    __Vfunc_aes_mul_gf2p4__582__b = __Vfunc_aes_mul_gf2p2__584__Vfuncout;
    __Vfunc_aes_mul_gf2p2__585__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__582__delta));
    __Vfunc_aes_mul_gf2p2__585__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__582__gamma));
    __Vfunc_aes_mul_gf2p2__585__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__585__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__585__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__585__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__585__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__585__d)));
    __Vfunc_aes_mul_gf2p2__585__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__585__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__585__d)));
    __Vfunc_aes_mul_gf2p2__585__f = ((((IData)(__Vfunc_aes_mul_gf2p2__585__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__585__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__585__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__585__b)));
    __Vfunc_aes_mul_gf2p2__585__Vfuncout = __Vfunc_aes_mul_gf2p2__585__f;
    __Vfunc_aes_mul_gf2p4__582__c = __Vfunc_aes_mul_gf2p2__585__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__582__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__582__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__586__g 
                        = __Vfunc_aes_mul_gf2p4__582__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__586__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__586__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__586__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__586__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__586__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__586__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__582__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__582__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__587__g 
                        = __Vfunc_aes_mul_gf2p4__582__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__587__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__587__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__587__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__587__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__587__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__587__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__582__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__582__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__582__Vfuncout;
    __Vfunc_aes_mul_gf2p4__588__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__588__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__588__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15667714012996054800ull);
    __Vfunc_aes_mul_gf2p2__589__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__588__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__589__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__588__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__589__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__589__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__589__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__589__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__589__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__589__d)));
    __Vfunc_aes_mul_gf2p2__589__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__589__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__589__d)));
    __Vfunc_aes_mul_gf2p2__589__f = ((((IData)(__Vfunc_aes_mul_gf2p2__589__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__589__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__589__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__589__b)));
    __Vfunc_aes_mul_gf2p2__589__Vfuncout = __Vfunc_aes_mul_gf2p2__589__f;
    __Vfunc_aes_mul_gf2p4__588__a = __Vfunc_aes_mul_gf2p2__589__Vfuncout;
    __Vfunc_aes_mul_gf2p2__590__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__588__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__588__delta)));
    __Vfunc_aes_mul_gf2p2__590__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__588__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__588__gamma)));
    __Vfunc_aes_mul_gf2p2__590__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__590__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__590__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__590__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__590__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__590__d)));
    __Vfunc_aes_mul_gf2p2__590__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__590__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__590__d)));
    __Vfunc_aes_mul_gf2p2__590__f = ((((IData)(__Vfunc_aes_mul_gf2p2__590__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__590__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__590__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__590__b)));
    __Vfunc_aes_mul_gf2p2__590__Vfuncout = __Vfunc_aes_mul_gf2p2__590__f;
    __Vfunc_aes_mul_gf2p4__588__b = __Vfunc_aes_mul_gf2p2__590__Vfuncout;
    __Vfunc_aes_mul_gf2p2__591__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__588__delta));
    __Vfunc_aes_mul_gf2p2__591__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__588__gamma));
    __Vfunc_aes_mul_gf2p2__591__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__591__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__591__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__591__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__591__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__591__d)));
    __Vfunc_aes_mul_gf2p2__591__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__591__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__591__d)));
    __Vfunc_aes_mul_gf2p2__591__f = ((((IData)(__Vfunc_aes_mul_gf2p2__591__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__591__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__591__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__591__b)));
    __Vfunc_aes_mul_gf2p2__591__Vfuncout = __Vfunc_aes_mul_gf2p2__591__f;
    __Vfunc_aes_mul_gf2p4__588__c = __Vfunc_aes_mul_gf2p2__591__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__588__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__588__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__592__g 
                        = __Vfunc_aes_mul_gf2p4__588__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__592__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__592__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__592__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__592__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__592__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__592__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__588__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__588__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__593__g 
                        = __Vfunc_aes_mul_gf2p4__588__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__593__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__593__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__593__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__593__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__593__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__593__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__588__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__588__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__588__Vfuncout;
    __Vfunc_aes_mul_gf2p2__606__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__606__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__606__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__606__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__606__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__606__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__606__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__606__d)));
    __Vfunc_aes_mul_gf2p2__606__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__606__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__606__d)));
    __Vfunc_aes_mul_gf2p2__606__f = ((((IData)(__Vfunc_aes_mul_gf2p2__606__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__606__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__606__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__606__b)));
    __Vfunc_aes_mul_gf2p2__606__Vfuncout = __Vfunc_aes_mul_gf2p2__606__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__606__Vfuncout;
    __Vfunc_aes_mul_gf2p2__607__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__607__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__607__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__607__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__607__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__607__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__607__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__607__d)));
    __Vfunc_aes_mul_gf2p2__607__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__607__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__607__d)));
    __Vfunc_aes_mul_gf2p2__607__f = ((((IData)(__Vfunc_aes_mul_gf2p2__607__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__607__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__607__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__607__b)));
    __Vfunc_aes_mul_gf2p2__607__Vfuncout = __Vfunc_aes_mul_gf2p2__607__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__607__Vfuncout;
    __Vfunc_aes_mul_gf2p2__610__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__610__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__610__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__610__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__610__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__610__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__610__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__610__d)));
    __Vfunc_aes_mul_gf2p2__610__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__610__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__610__d)));
    __Vfunc_aes_mul_gf2p2__610__f = ((((IData)(__Vfunc_aes_mul_gf2p2__610__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__610__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__610__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__610__b)));
    __Vfunc_aes_mul_gf2p2__610__Vfuncout = __Vfunc_aes_mul_gf2p2__610__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__610__Vfuncout;
    __Vfunc_aes_mul_gf2p2__611__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__611__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__611__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__611__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__611__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__611__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__611__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__611__d)));
    __Vfunc_aes_mul_gf2p2__611__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__611__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__611__d)));
    __Vfunc_aes_mul_gf2p2__611__f = ((((IData)(__Vfunc_aes_mul_gf2p2__611__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__611__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__611__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__611__b)));
    __Vfunc_aes_mul_gf2p2__611__Vfuncout = __Vfunc_aes_mul_gf2p2__611__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__611__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__u_aes_sb_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (1U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.data_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? (0x63U ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                     [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                     [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                     [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                     [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                     [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                     [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                     [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                     [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__556__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__556__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__556__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__556__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__556__Vfuncout)))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__557__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__557__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__557__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__557__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__557__Vfuncout))
                             : (0x63U ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                         [0U] = 0x58U;
                        vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                         [1U] = 0x2dU;
                        vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                         [2U] = 0x9eU;
                        vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                         [3U] = 0x0bU;
                        vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                         [4U] = 0xdcU;
                        vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                         [5U] = 4U;
                        vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                         [6U] = 3U;
                        vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                         [7U] = 0x24U;
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_b 
                            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c = 0U;
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                           >> 7U) & 
                                          vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                          [0U])));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                   >> 6U)))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                   >> 5U)))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                   >> 4U)))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                   >> 3U)))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                   >> 2U)))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                   >> 1U)))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                           [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0x03fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 >> 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0x07fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0x0ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0x1ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0x3ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0x7ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                           [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0xfffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0x07fffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0x0ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0x1ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0x3ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0x7ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                           [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0x0ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0x1ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0x3ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0x7ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                           [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                 << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0x1ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0x3ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0x7ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                  [3U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0x3fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0x7fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                  [2U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0x7fffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                  [1U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                  [0U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__558__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__558__vec_b) 
                                                        << 7U))))));
                        vlSelfRef.__Vfunc_aes_mvm__558__Vfuncout 
                            = vlSelfRef.__Vfunc_aes_mvm__558__vec_c;
                    }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__558__Vfuncout)))));
    vlSelfRef.mask_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                            [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                            [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                            [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                            [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                            [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                            [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                            [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                            [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__559__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__559__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__559__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__559__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__559__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__559__Vfuncout))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__560__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__560__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__560__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__560__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__560__Vfuncout))
                             : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__561__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__561__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__561__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__561__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__561__Vfuncout))));
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
    __Vfunc_aes_square_gf2p2__595__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                               >> 2U) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__595__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__595__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__595__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__595__Vfuncout = __Vfunc_aes_square_gf2p2__595__d;
    __Vfunc_aes_scale_omega2_gf2p2__594__g = __Vfunc_aes_square_gf2p2__595__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__594__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__594__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__594__g)));
    __Vfunc_aes_scale_omega2_gf2p2__594__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__594__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__594__Vfuncout;
    __Vfunc_aes_square_gf2p2__597__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                               >> 2U) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__597__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__597__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__597__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__597__Vfuncout = __Vfunc_aes_square_gf2p2__597__d;
    __Vfunc_aes_scale_omega2_gf2p2__596__g = __Vfunc_aes_square_gf2p2__597__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__596__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__596__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__596__g)));
    __Vfunc_aes_scale_omega2_gf2p2__596__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__596__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__596__Vfuncout;
    __Vfunc_aes_mul_gf2p4__612__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__612__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__612__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2190647013393065861ull);
    __Vfunc_aes_mul_gf2p2__613__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__612__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__613__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__612__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__613__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__613__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__613__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__613__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__613__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__613__d)));
    __Vfunc_aes_mul_gf2p2__613__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__613__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__613__d)));
    __Vfunc_aes_mul_gf2p2__613__f = ((((IData)(__Vfunc_aes_mul_gf2p2__613__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__613__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__613__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__613__b)));
    __Vfunc_aes_mul_gf2p2__613__Vfuncout = __Vfunc_aes_mul_gf2p2__613__f;
    __Vfunc_aes_mul_gf2p4__612__a = __Vfunc_aes_mul_gf2p2__613__Vfuncout;
    __Vfunc_aes_mul_gf2p2__614__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__612__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__612__delta)));
    __Vfunc_aes_mul_gf2p2__614__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__612__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__612__gamma)));
    __Vfunc_aes_mul_gf2p2__614__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__614__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__614__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__614__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__614__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__614__d)));
    __Vfunc_aes_mul_gf2p2__614__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__614__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__614__d)));
    __Vfunc_aes_mul_gf2p2__614__f = ((((IData)(__Vfunc_aes_mul_gf2p2__614__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__614__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__614__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__614__b)));
    __Vfunc_aes_mul_gf2p2__614__Vfuncout = __Vfunc_aes_mul_gf2p2__614__f;
    __Vfunc_aes_mul_gf2p4__612__b = __Vfunc_aes_mul_gf2p2__614__Vfuncout;
    __Vfunc_aes_mul_gf2p2__615__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__612__delta));
    __Vfunc_aes_mul_gf2p2__615__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__612__gamma));
    __Vfunc_aes_mul_gf2p2__615__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__615__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__615__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__615__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__615__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__615__d)));
    __Vfunc_aes_mul_gf2p2__615__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__615__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__615__d)));
    __Vfunc_aes_mul_gf2p2__615__f = ((((IData)(__Vfunc_aes_mul_gf2p2__615__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__615__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__615__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__615__b)));
    __Vfunc_aes_mul_gf2p2__615__Vfuncout = __Vfunc_aes_mul_gf2p2__615__f;
    __Vfunc_aes_mul_gf2p4__612__c = __Vfunc_aes_mul_gf2p2__615__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__612__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__612__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__616__g 
                        = __Vfunc_aes_mul_gf2p4__612__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__616__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__616__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__616__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__616__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__616__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__616__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__612__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__612__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__617__g 
                        = __Vfunc_aes_mul_gf2p4__612__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__617__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__617__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__617__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__617__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__617__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__617__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__612__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__612__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__612__Vfuncout;
    __Vfunc_aes_mul_gf2p4__630__delta = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 4U));
    __Vfunc_aes_mul_gf2p4__630__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__630__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8748177945143096949ull);
    __Vfunc_aes_mul_gf2p2__631__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__630__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__631__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__630__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__631__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__631__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__631__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__631__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__631__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__631__d)));
    __Vfunc_aes_mul_gf2p2__631__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__631__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__631__d)));
    __Vfunc_aes_mul_gf2p2__631__f = ((((IData)(__Vfunc_aes_mul_gf2p2__631__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__631__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__631__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__631__b)));
    __Vfunc_aes_mul_gf2p2__631__Vfuncout = __Vfunc_aes_mul_gf2p2__631__f;
    __Vfunc_aes_mul_gf2p4__630__a = __Vfunc_aes_mul_gf2p2__631__Vfuncout;
    __Vfunc_aes_mul_gf2p2__632__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__630__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__630__delta)));
    __Vfunc_aes_mul_gf2p2__632__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__630__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__630__gamma)));
    __Vfunc_aes_mul_gf2p2__632__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__632__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__632__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__632__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__632__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__632__d)));
    __Vfunc_aes_mul_gf2p2__632__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__632__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__632__d)));
    __Vfunc_aes_mul_gf2p2__632__f = ((((IData)(__Vfunc_aes_mul_gf2p2__632__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__632__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__632__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__632__b)));
    __Vfunc_aes_mul_gf2p2__632__Vfuncout = __Vfunc_aes_mul_gf2p2__632__f;
    __Vfunc_aes_mul_gf2p4__630__b = __Vfunc_aes_mul_gf2p2__632__Vfuncout;
    __Vfunc_aes_mul_gf2p2__633__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__630__delta));
    __Vfunc_aes_mul_gf2p2__633__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__630__gamma));
    __Vfunc_aes_mul_gf2p2__633__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__633__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__633__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__633__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__633__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__633__d)));
    __Vfunc_aes_mul_gf2p2__633__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__633__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__633__d)));
    __Vfunc_aes_mul_gf2p2__633__f = ((((IData)(__Vfunc_aes_mul_gf2p2__633__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__633__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__633__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__633__b)));
    __Vfunc_aes_mul_gf2p2__633__Vfuncout = __Vfunc_aes_mul_gf2p2__633__f;
    __Vfunc_aes_mul_gf2p4__630__c = __Vfunc_aes_mul_gf2p2__633__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__630__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__630__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__634__g 
                        = __Vfunc_aes_mul_gf2p4__630__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__634__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__634__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__634__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__634__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__634__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__634__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__630__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__630__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__635__g 
                        = __Vfunc_aes_mul_gf2p4__630__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__635__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__635__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__635__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__635__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__635__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__635__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__630__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__630__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__630__Vfuncout;
    __Vfunc_aes_mul_gf2p4__636__delta = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p4__636__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__636__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4901900243825872003ull);
    __Vfunc_aes_mul_gf2p2__637__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__636__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__637__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__636__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__637__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__637__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__637__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__637__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__637__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__637__d)));
    __Vfunc_aes_mul_gf2p2__637__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__637__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__637__d)));
    __Vfunc_aes_mul_gf2p2__637__f = ((((IData)(__Vfunc_aes_mul_gf2p2__637__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__637__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__637__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__637__b)));
    __Vfunc_aes_mul_gf2p2__637__Vfuncout = __Vfunc_aes_mul_gf2p2__637__f;
    __Vfunc_aes_mul_gf2p4__636__a = __Vfunc_aes_mul_gf2p2__637__Vfuncout;
    __Vfunc_aes_mul_gf2p2__638__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__636__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__636__delta)));
    __Vfunc_aes_mul_gf2p2__638__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__636__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__636__gamma)));
    __Vfunc_aes_mul_gf2p2__638__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__638__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__638__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__638__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__638__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__638__d)));
    __Vfunc_aes_mul_gf2p2__638__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__638__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__638__d)));
    __Vfunc_aes_mul_gf2p2__638__f = ((((IData)(__Vfunc_aes_mul_gf2p2__638__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__638__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__638__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__638__b)));
    __Vfunc_aes_mul_gf2p2__638__Vfuncout = __Vfunc_aes_mul_gf2p2__638__f;
    __Vfunc_aes_mul_gf2p4__636__b = __Vfunc_aes_mul_gf2p2__638__Vfuncout;
    __Vfunc_aes_mul_gf2p2__639__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__636__delta));
    __Vfunc_aes_mul_gf2p2__639__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__636__gamma));
    __Vfunc_aes_mul_gf2p2__639__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__639__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__639__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__639__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__639__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__639__d)));
    __Vfunc_aes_mul_gf2p2__639__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__639__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__639__d)));
    __Vfunc_aes_mul_gf2p2__639__f = ((((IData)(__Vfunc_aes_mul_gf2p2__639__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__639__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__639__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__639__b)));
    __Vfunc_aes_mul_gf2p2__639__Vfuncout = __Vfunc_aes_mul_gf2p2__639__f;
    __Vfunc_aes_mul_gf2p4__636__c = __Vfunc_aes_mul_gf2p2__639__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__636__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__636__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__640__g 
                        = __Vfunc_aes_mul_gf2p4__636__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__640__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__640__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__640__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__640__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__640__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__640__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__636__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__636__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__641__g 
                        = __Vfunc_aes_mul_gf2p4__636__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__641__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__641__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__641__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__641__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__641__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__641__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__636__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__636__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__636__Vfuncout;
    __Vfunc_aes_mul_gf2p4__648__delta = (0x0000000fU 
                                         & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__648__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__648__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16713862352935022954ull);
    __Vfunc_aes_mul_gf2p2__649__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__648__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__649__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__648__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__649__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__649__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__649__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__649__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__649__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__649__d)));
    __Vfunc_aes_mul_gf2p2__649__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__649__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__649__d)));
    __Vfunc_aes_mul_gf2p2__649__f = ((((IData)(__Vfunc_aes_mul_gf2p2__649__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__649__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__649__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__649__b)));
    __Vfunc_aes_mul_gf2p2__649__Vfuncout = __Vfunc_aes_mul_gf2p2__649__f;
    __Vfunc_aes_mul_gf2p4__648__a = __Vfunc_aes_mul_gf2p2__649__Vfuncout;
    __Vfunc_aes_mul_gf2p2__650__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__648__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__648__delta)));
    __Vfunc_aes_mul_gf2p2__650__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__648__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__648__gamma)));
    __Vfunc_aes_mul_gf2p2__650__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__650__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__650__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__650__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__650__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__650__d)));
    __Vfunc_aes_mul_gf2p2__650__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__650__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__650__d)));
    __Vfunc_aes_mul_gf2p2__650__f = ((((IData)(__Vfunc_aes_mul_gf2p2__650__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__650__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__650__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__650__b)));
    __Vfunc_aes_mul_gf2p2__650__Vfuncout = __Vfunc_aes_mul_gf2p2__650__f;
    __Vfunc_aes_mul_gf2p4__648__b = __Vfunc_aes_mul_gf2p2__650__Vfuncout;
    __Vfunc_aes_mul_gf2p2__651__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__648__delta));
    __Vfunc_aes_mul_gf2p2__651__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__648__gamma));
    __Vfunc_aes_mul_gf2p2__651__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__651__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__651__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__651__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__651__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__651__d)));
    __Vfunc_aes_mul_gf2p2__651__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__651__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__651__d)));
    __Vfunc_aes_mul_gf2p2__651__f = ((((IData)(__Vfunc_aes_mul_gf2p2__651__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__651__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__651__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__651__b)));
    __Vfunc_aes_mul_gf2p2__651__Vfuncout = __Vfunc_aes_mul_gf2p2__651__f;
    __Vfunc_aes_mul_gf2p4__648__c = __Vfunc_aes_mul_gf2p2__651__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__648__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__648__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__652__g 
                        = __Vfunc_aes_mul_gf2p4__648__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__652__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__652__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__652__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__652__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__652__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__652__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__648__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__648__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__653__g 
                        = __Vfunc_aes_mul_gf2p4__648__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__653__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__653__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__653__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__653__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__653__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__653__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__648__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__648__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__648__Vfuncout;
    __Vfunc_aes_mul_gf2p4__618__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__618__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__618__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15525378577272015325ull);
    __Vfunc_aes_mul_gf2p2__619__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__618__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__619__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__618__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__619__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__619__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__619__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__619__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__619__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__619__d)));
    __Vfunc_aes_mul_gf2p2__619__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__619__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__619__d)));
    __Vfunc_aes_mul_gf2p2__619__f = ((((IData)(__Vfunc_aes_mul_gf2p2__619__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__619__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__619__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__619__b)));
    __Vfunc_aes_mul_gf2p2__619__Vfuncout = __Vfunc_aes_mul_gf2p2__619__f;
    __Vfunc_aes_mul_gf2p4__618__a = __Vfunc_aes_mul_gf2p2__619__Vfuncout;
    __Vfunc_aes_mul_gf2p2__620__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__618__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__618__delta)));
    __Vfunc_aes_mul_gf2p2__620__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__618__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__618__gamma)));
    __Vfunc_aes_mul_gf2p2__620__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__620__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__620__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__620__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__620__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__620__d)));
    __Vfunc_aes_mul_gf2p2__620__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__620__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__620__d)));
    __Vfunc_aes_mul_gf2p2__620__f = ((((IData)(__Vfunc_aes_mul_gf2p2__620__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__620__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__620__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__620__b)));
    __Vfunc_aes_mul_gf2p2__620__Vfuncout = __Vfunc_aes_mul_gf2p2__620__f;
    __Vfunc_aes_mul_gf2p4__618__b = __Vfunc_aes_mul_gf2p2__620__Vfuncout;
    __Vfunc_aes_mul_gf2p2__621__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__618__delta));
    __Vfunc_aes_mul_gf2p2__621__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__618__gamma));
    __Vfunc_aes_mul_gf2p2__621__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__621__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__621__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__621__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__621__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__621__d)));
    __Vfunc_aes_mul_gf2p2__621__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__621__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__621__d)));
    __Vfunc_aes_mul_gf2p2__621__f = ((((IData)(__Vfunc_aes_mul_gf2p2__621__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__621__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__621__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__621__b)));
    __Vfunc_aes_mul_gf2p2__621__Vfuncout = __Vfunc_aes_mul_gf2p2__621__f;
    __Vfunc_aes_mul_gf2p4__618__c = __Vfunc_aes_mul_gf2p2__621__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__618__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__618__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__622__g 
                        = __Vfunc_aes_mul_gf2p4__618__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__622__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__622__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__622__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__622__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__622__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__622__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__618__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__618__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__623__g 
                        = __Vfunc_aes_mul_gf2p4__618__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__623__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__623__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__623__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__623__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__623__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__623__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__618__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__618__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__618__Vfuncout;
    __Vfunc_aes_mul_gf2p4__624__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__624__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__624__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11183350200617083678ull);
    __Vfunc_aes_mul_gf2p2__625__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__624__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__625__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__624__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__625__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__625__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__625__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__625__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__625__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__625__d)));
    __Vfunc_aes_mul_gf2p2__625__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__625__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__625__d)));
    __Vfunc_aes_mul_gf2p2__625__f = ((((IData)(__Vfunc_aes_mul_gf2p2__625__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__625__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__625__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__625__b)));
    __Vfunc_aes_mul_gf2p2__625__Vfuncout = __Vfunc_aes_mul_gf2p2__625__f;
    __Vfunc_aes_mul_gf2p4__624__a = __Vfunc_aes_mul_gf2p2__625__Vfuncout;
    __Vfunc_aes_mul_gf2p2__626__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__624__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__624__delta)));
    __Vfunc_aes_mul_gf2p2__626__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__624__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__624__gamma)));
    __Vfunc_aes_mul_gf2p2__626__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__626__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__626__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__626__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__626__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__626__d)));
    __Vfunc_aes_mul_gf2p2__626__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__626__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__626__d)));
    __Vfunc_aes_mul_gf2p2__626__f = ((((IData)(__Vfunc_aes_mul_gf2p2__626__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__626__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__626__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__626__b)));
    __Vfunc_aes_mul_gf2p2__626__Vfuncout = __Vfunc_aes_mul_gf2p2__626__f;
    __Vfunc_aes_mul_gf2p4__624__b = __Vfunc_aes_mul_gf2p2__626__Vfuncout;
    __Vfunc_aes_mul_gf2p2__627__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__624__delta));
    __Vfunc_aes_mul_gf2p2__627__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__624__gamma));
    __Vfunc_aes_mul_gf2p2__627__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__627__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__627__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__627__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__627__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__627__d)));
    __Vfunc_aes_mul_gf2p2__627__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__627__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__627__d)));
    __Vfunc_aes_mul_gf2p2__627__f = ((((IData)(__Vfunc_aes_mul_gf2p2__627__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__627__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__627__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__627__b)));
    __Vfunc_aes_mul_gf2p2__627__Vfuncout = __Vfunc_aes_mul_gf2p2__627__f;
    __Vfunc_aes_mul_gf2p4__624__c = __Vfunc_aes_mul_gf2p2__627__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__624__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__624__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__628__g 
                        = __Vfunc_aes_mul_gf2p4__624__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__628__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__628__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__628__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__628__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__628__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__628__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__624__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__624__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__629__g 
                        = __Vfunc_aes_mul_gf2p4__624__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__629__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__629__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__629__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__629__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__629__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__629__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__624__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__624__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__624__Vfuncout;
    __Vfunc_aes_mul_gf2p4__642__delta = (0x0000000fU 
                                         & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__642__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__642__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15584715449126333733ull);
    __Vfunc_aes_mul_gf2p2__643__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__642__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__643__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__642__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__643__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__643__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__643__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__643__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__643__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__643__d)));
    __Vfunc_aes_mul_gf2p2__643__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__643__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__643__d)));
    __Vfunc_aes_mul_gf2p2__643__f = ((((IData)(__Vfunc_aes_mul_gf2p2__643__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__643__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__643__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__643__b)));
    __Vfunc_aes_mul_gf2p2__643__Vfuncout = __Vfunc_aes_mul_gf2p2__643__f;
    __Vfunc_aes_mul_gf2p4__642__a = __Vfunc_aes_mul_gf2p2__643__Vfuncout;
    __Vfunc_aes_mul_gf2p2__644__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__642__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__642__delta)));
    __Vfunc_aes_mul_gf2p2__644__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__642__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__642__gamma)));
    __Vfunc_aes_mul_gf2p2__644__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__644__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__644__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__644__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__644__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__644__d)));
    __Vfunc_aes_mul_gf2p2__644__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__644__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__644__d)));
    __Vfunc_aes_mul_gf2p2__644__f = ((((IData)(__Vfunc_aes_mul_gf2p2__644__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__644__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__644__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__644__b)));
    __Vfunc_aes_mul_gf2p2__644__Vfuncout = __Vfunc_aes_mul_gf2p2__644__f;
    __Vfunc_aes_mul_gf2p4__642__b = __Vfunc_aes_mul_gf2p2__644__Vfuncout;
    __Vfunc_aes_mul_gf2p2__645__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__642__delta));
    __Vfunc_aes_mul_gf2p2__645__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__642__gamma));
    __Vfunc_aes_mul_gf2p2__645__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__645__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__645__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__645__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__645__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__645__d)));
    __Vfunc_aes_mul_gf2p2__645__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__645__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__645__d)));
    __Vfunc_aes_mul_gf2p2__645__f = ((((IData)(__Vfunc_aes_mul_gf2p2__645__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__645__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__645__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__645__b)));
    __Vfunc_aes_mul_gf2p2__645__Vfuncout = __Vfunc_aes_mul_gf2p2__645__f;
    __Vfunc_aes_mul_gf2p4__642__c = __Vfunc_aes_mul_gf2p2__645__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__642__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__642__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__646__g 
                        = __Vfunc_aes_mul_gf2p4__642__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__646__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__646__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__646__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__646__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__646__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__646__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__642__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__642__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__647__g 
                        = __Vfunc_aes_mul_gf2p4__642__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__647__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__647__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__647__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__647__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__647__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__647__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__642__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__642__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__642__Vfuncout;
    __Vfunc_aes_mul_gf2p4__654__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__654__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__654__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13613260081055661229ull);
    __Vfunc_aes_mul_gf2p2__655__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__654__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__655__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__654__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__655__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__655__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__655__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__655__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__655__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__655__d)));
    __Vfunc_aes_mul_gf2p2__655__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__655__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__655__d)));
    __Vfunc_aes_mul_gf2p2__655__f = ((((IData)(__Vfunc_aes_mul_gf2p2__655__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__655__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__655__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__655__b)));
    __Vfunc_aes_mul_gf2p2__655__Vfuncout = __Vfunc_aes_mul_gf2p2__655__f;
    __Vfunc_aes_mul_gf2p4__654__a = __Vfunc_aes_mul_gf2p2__655__Vfuncout;
    __Vfunc_aes_mul_gf2p2__656__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__654__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__654__delta)));
    __Vfunc_aes_mul_gf2p2__656__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__654__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__654__gamma)));
    __Vfunc_aes_mul_gf2p2__656__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__656__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__656__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__656__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__656__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__656__d)));
    __Vfunc_aes_mul_gf2p2__656__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__656__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__656__d)));
    __Vfunc_aes_mul_gf2p2__656__f = ((((IData)(__Vfunc_aes_mul_gf2p2__656__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__656__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__656__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__656__b)));
    __Vfunc_aes_mul_gf2p2__656__Vfuncout = __Vfunc_aes_mul_gf2p2__656__f;
    __Vfunc_aes_mul_gf2p4__654__b = __Vfunc_aes_mul_gf2p2__656__Vfuncout;
    __Vfunc_aes_mul_gf2p2__657__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__654__delta));
    __Vfunc_aes_mul_gf2p2__657__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__654__gamma));
    __Vfunc_aes_mul_gf2p2__657__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__657__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__657__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__657__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__657__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__657__d)));
    __Vfunc_aes_mul_gf2p2__657__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__657__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__657__d)));
    __Vfunc_aes_mul_gf2p2__657__f = ((((IData)(__Vfunc_aes_mul_gf2p2__657__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__657__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__657__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__657__b)));
    __Vfunc_aes_mul_gf2p2__657__Vfuncout = __Vfunc_aes_mul_gf2p2__657__f;
    __Vfunc_aes_mul_gf2p4__654__c = __Vfunc_aes_mul_gf2p2__657__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__654__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__654__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__658__g 
                        = __Vfunc_aes_mul_gf2p4__654__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__658__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__658__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__658__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__658__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__658__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__658__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__654__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__654__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__659__g 
                        = __Vfunc_aes_mul_gf2p4__654__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__659__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__659__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__659__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__659__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__659__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__659__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__654__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__654__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__654__Vfuncout;
    __Vfunc_aes_mul_gf2p2__602__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__602__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__602__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__602__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__602__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__602__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__602__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__602__d)));
    __Vfunc_aes_mul_gf2p2__602__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__602__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__602__d)));
    __Vfunc_aes_mul_gf2p2__602__f = ((((IData)(__Vfunc_aes_mul_gf2p2__602__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__602__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__602__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__602__b)));
    __Vfunc_aes_mul_gf2p2__602__Vfuncout = __Vfunc_aes_mul_gf2p2__602__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__602__Vfuncout;
    __Vfunc_aes_mul_gf2p2__603__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__603__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__603__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__603__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__603__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__603__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__603__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__603__d)));
    __Vfunc_aes_mul_gf2p2__603__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__603__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__603__d)));
    __Vfunc_aes_mul_gf2p2__603__f = ((((IData)(__Vfunc_aes_mul_gf2p2__603__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__603__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__603__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__603__b)));
    __Vfunc_aes_mul_gf2p2__603__Vfuncout = __Vfunc_aes_mul_gf2p2__603__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__603__Vfuncout;
    __Vfunc_aes_square_gf2p2__598__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                              ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                 >> 2U)));
    __Vfunc_aes_square_gf2p2__598__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__598__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__598__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__598__Vfuncout = __Vfunc_aes_square_gf2p2__598__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__598__Vfuncout;
    __Vfunc_aes_square_gf2p2__599__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                              ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__599__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__599__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__599__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__599__Vfuncout = __Vfunc_aes_square_gf2p2__599__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__599__Vfuncout;
}

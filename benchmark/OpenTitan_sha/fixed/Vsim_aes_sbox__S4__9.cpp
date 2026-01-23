// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__1(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__900__Vfuncout;
    __Vfunc_aes_mul_gf2p4__900__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__900__gamma;
    __Vfunc_aes_mul_gf2p4__900__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__900__delta;
    __Vfunc_aes_mul_gf2p4__900__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__900__a;
    __Vfunc_aes_mul_gf2p4__900__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__900__b;
    __Vfunc_aes_mul_gf2p4__900__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__900__c;
    __Vfunc_aes_mul_gf2p4__900__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__901__Vfuncout;
    __Vfunc_aes_mul_gf2p2__901__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__901__g;
    __Vfunc_aes_mul_gf2p2__901__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__901__d;
    __Vfunc_aes_mul_gf2p2__901__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__901__f;
    __Vfunc_aes_mul_gf2p2__901__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__901__a;
    __Vfunc_aes_mul_gf2p2__901__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__901__b;
    __Vfunc_aes_mul_gf2p2__901__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__901__c;
    __Vfunc_aes_mul_gf2p2__901__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__902__Vfuncout;
    __Vfunc_aes_mul_gf2p2__902__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__902__g;
    __Vfunc_aes_mul_gf2p2__902__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__902__d;
    __Vfunc_aes_mul_gf2p2__902__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__902__f;
    __Vfunc_aes_mul_gf2p2__902__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__902__a;
    __Vfunc_aes_mul_gf2p2__902__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__902__b;
    __Vfunc_aes_mul_gf2p2__902__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__902__c;
    __Vfunc_aes_mul_gf2p2__902__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__903__Vfuncout;
    __Vfunc_aes_mul_gf2p2__903__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__903__g;
    __Vfunc_aes_mul_gf2p2__903__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__903__d;
    __Vfunc_aes_mul_gf2p2__903__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__903__f;
    __Vfunc_aes_mul_gf2p2__903__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__903__a;
    __Vfunc_aes_mul_gf2p2__903__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__903__b;
    __Vfunc_aes_mul_gf2p2__903__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__903__c;
    __Vfunc_aes_mul_gf2p2__903__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__906__Vfuncout;
    __Vfunc_aes_mul_gf2p4__906__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__906__gamma;
    __Vfunc_aes_mul_gf2p4__906__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__906__delta;
    __Vfunc_aes_mul_gf2p4__906__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__906__a;
    __Vfunc_aes_mul_gf2p4__906__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__906__b;
    __Vfunc_aes_mul_gf2p4__906__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__906__c;
    __Vfunc_aes_mul_gf2p4__906__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__907__Vfuncout;
    __Vfunc_aes_mul_gf2p2__907__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__907__g;
    __Vfunc_aes_mul_gf2p2__907__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__907__d;
    __Vfunc_aes_mul_gf2p2__907__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__907__f;
    __Vfunc_aes_mul_gf2p2__907__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__907__a;
    __Vfunc_aes_mul_gf2p2__907__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__907__b;
    __Vfunc_aes_mul_gf2p2__907__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__907__c;
    __Vfunc_aes_mul_gf2p2__907__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__908__Vfuncout;
    __Vfunc_aes_mul_gf2p2__908__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__908__g;
    __Vfunc_aes_mul_gf2p2__908__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__908__d;
    __Vfunc_aes_mul_gf2p2__908__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__908__f;
    __Vfunc_aes_mul_gf2p2__908__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__908__a;
    __Vfunc_aes_mul_gf2p2__908__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__908__b;
    __Vfunc_aes_mul_gf2p2__908__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__908__c;
    __Vfunc_aes_mul_gf2p2__908__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__909__Vfuncout;
    __Vfunc_aes_mul_gf2p2__909__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__909__g;
    __Vfunc_aes_mul_gf2p2__909__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__909__d;
    __Vfunc_aes_mul_gf2p2__909__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__909__f;
    __Vfunc_aes_mul_gf2p2__909__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__909__a;
    __Vfunc_aes_mul_gf2p2__909__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__909__b;
    __Vfunc_aes_mul_gf2p2__909__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__909__c;
    __Vfunc_aes_mul_gf2p2__909__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__930__Vfuncout;
    __Vfunc_aes_mul_gf2p2__930__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__930__g;
    __Vfunc_aes_mul_gf2p2__930__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__930__d;
    __Vfunc_aes_mul_gf2p2__930__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__930__f;
    __Vfunc_aes_mul_gf2p2__930__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__930__a;
    __Vfunc_aes_mul_gf2p2__930__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__930__b;
    __Vfunc_aes_mul_gf2p2__930__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__930__c;
    __Vfunc_aes_mul_gf2p2__930__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__931__Vfuncout;
    __Vfunc_aes_mul_gf2p2__931__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__931__g;
    __Vfunc_aes_mul_gf2p2__931__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__931__d;
    __Vfunc_aes_mul_gf2p2__931__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__931__f;
    __Vfunc_aes_mul_gf2p2__931__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__931__a;
    __Vfunc_aes_mul_gf2p2__931__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__931__b;
    __Vfunc_aes_mul_gf2p2__931__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__931__c;
    __Vfunc_aes_mul_gf2p2__931__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__934__Vfuncout;
    __Vfunc_aes_mul_gf2p2__934__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__934__g;
    __Vfunc_aes_mul_gf2p2__934__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__934__d;
    __Vfunc_aes_mul_gf2p2__934__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__934__f;
    __Vfunc_aes_mul_gf2p2__934__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__934__a;
    __Vfunc_aes_mul_gf2p2__934__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__934__b;
    __Vfunc_aes_mul_gf2p2__934__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__934__c;
    __Vfunc_aes_mul_gf2p2__934__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__935__Vfuncout;
    __Vfunc_aes_mul_gf2p2__935__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__935__g;
    __Vfunc_aes_mul_gf2p2__935__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__935__d;
    __Vfunc_aes_mul_gf2p2__935__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__935__f;
    __Vfunc_aes_mul_gf2p2__935__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__935__a;
    __Vfunc_aes_mul_gf2p2__935__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__935__b;
    __Vfunc_aes_mul_gf2p2__935__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__935__c;
    __Vfunc_aes_mul_gf2p2__935__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__938__Vfuncout;
    __Vfunc_aes_mul_gf2p2__938__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__938__g;
    __Vfunc_aes_mul_gf2p2__938__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__938__d;
    __Vfunc_aes_mul_gf2p2__938__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__938__f;
    __Vfunc_aes_mul_gf2p2__938__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__938__a;
    __Vfunc_aes_mul_gf2p2__938__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__938__b;
    __Vfunc_aes_mul_gf2p2__938__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__938__c;
    __Vfunc_aes_mul_gf2p2__938__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__939__Vfuncout;
    __Vfunc_aes_mul_gf2p2__939__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__939__g;
    __Vfunc_aes_mul_gf2p2__939__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__939__d;
    __Vfunc_aes_mul_gf2p2__939__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__939__f;
    __Vfunc_aes_mul_gf2p2__939__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__939__a;
    __Vfunc_aes_mul_gf2p2__939__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__939__b;
    __Vfunc_aes_mul_gf2p2__939__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__939__c;
    __Vfunc_aes_mul_gf2p2__939__c = 0;
    // Body
    __Vfunc_aes_mul_gf2p2__930__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__930__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__930__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__930__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__930__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__930__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__930__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__930__d)));
    __Vfunc_aes_mul_gf2p2__930__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__930__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__930__d)));
    __Vfunc_aes_mul_gf2p2__930__f = ((((IData)(__Vfunc_aes_mul_gf2p2__930__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__930__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__930__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__930__b)));
    __Vfunc_aes_mul_gf2p2__930__Vfuncout = __Vfunc_aes_mul_gf2p2__930__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__930__Vfuncout;
    __Vfunc_aes_mul_gf2p2__931__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__931__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__931__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__931__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__931__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__931__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__931__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__931__d)));
    __Vfunc_aes_mul_gf2p2__931__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__931__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__931__d)));
    __Vfunc_aes_mul_gf2p2__931__f = ((((IData)(__Vfunc_aes_mul_gf2p2__931__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__931__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__931__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__931__b)));
    __Vfunc_aes_mul_gf2p2__931__Vfuncout = __Vfunc_aes_mul_gf2p2__931__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__931__Vfuncout;
    __Vfunc_aes_mul_gf2p2__934__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                                           >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__934__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__934__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__934__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__934__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__934__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__934__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__934__d)));
    __Vfunc_aes_mul_gf2p2__934__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__934__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__934__d)));
    __Vfunc_aes_mul_gf2p2__934__f = ((((IData)(__Vfunc_aes_mul_gf2p2__934__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__934__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__934__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__934__b)));
    __Vfunc_aes_mul_gf2p2__934__Vfuncout = __Vfunc_aes_mul_gf2p2__934__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__934__Vfuncout;
    __Vfunc_aes_mul_gf2p2__935__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                                           >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__935__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__935__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__935__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__935__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__935__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__935__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__935__d)));
    __Vfunc_aes_mul_gf2p2__935__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__935__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__935__d)));
    __Vfunc_aes_mul_gf2p2__935__f = ((((IData)(__Vfunc_aes_mul_gf2p2__935__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__935__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__935__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__935__b)));
    __Vfunc_aes_mul_gf2p2__935__Vfuncout = __Vfunc_aes_mul_gf2p2__935__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__935__Vfuncout;
    __Vfunc_aes_mul_gf2p4__900__delta = (0x0000000fU 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__);
    __Vfunc_aes_mul_gf2p4__900__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                            >> 4U));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__900__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10056073083748197007ull);
    __Vfunc_aes_mul_gf2p2__901__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__900__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__901__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__900__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__901__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__901__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__901__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__901__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__901__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__901__d)));
    __Vfunc_aes_mul_gf2p2__901__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__901__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__901__d)));
    __Vfunc_aes_mul_gf2p2__901__f = ((((IData)(__Vfunc_aes_mul_gf2p2__901__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__901__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__901__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__901__b)));
    __Vfunc_aes_mul_gf2p2__901__Vfuncout = __Vfunc_aes_mul_gf2p2__901__f;
    __Vfunc_aes_mul_gf2p4__900__a = __Vfunc_aes_mul_gf2p2__901__Vfuncout;
    __Vfunc_aes_mul_gf2p2__902__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__900__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__900__delta)));
    __Vfunc_aes_mul_gf2p2__902__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__900__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__900__gamma)));
    __Vfunc_aes_mul_gf2p2__902__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__902__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__902__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__902__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__902__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__902__d)));
    __Vfunc_aes_mul_gf2p2__902__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__902__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__902__d)));
    __Vfunc_aes_mul_gf2p2__902__f = ((((IData)(__Vfunc_aes_mul_gf2p2__902__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__902__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__902__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__902__b)));
    __Vfunc_aes_mul_gf2p2__902__Vfuncout = __Vfunc_aes_mul_gf2p2__902__f;
    __Vfunc_aes_mul_gf2p4__900__b = __Vfunc_aes_mul_gf2p2__902__Vfuncout;
    __Vfunc_aes_mul_gf2p2__903__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__900__delta));
    __Vfunc_aes_mul_gf2p2__903__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__900__gamma));
    __Vfunc_aes_mul_gf2p2__903__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__903__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__903__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__903__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__903__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__903__d)));
    __Vfunc_aes_mul_gf2p2__903__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__903__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__903__d)));
    __Vfunc_aes_mul_gf2p2__903__f = ((((IData)(__Vfunc_aes_mul_gf2p2__903__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__903__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__903__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__903__b)));
    __Vfunc_aes_mul_gf2p2__903__Vfuncout = __Vfunc_aes_mul_gf2p2__903__f;
    __Vfunc_aes_mul_gf2p4__900__c = __Vfunc_aes_mul_gf2p2__903__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__900__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__900__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__904__g 
                        = __Vfunc_aes_mul_gf2p4__900__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__904__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__904__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__904__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__904__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__904__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__904__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__900__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__900__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__905__g 
                        = __Vfunc_aes_mul_gf2p4__900__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__905__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__905__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__905__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__905__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__905__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__905__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__900__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__900__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__900__Vfuncout;
    __Vfunc_aes_mul_gf2p4__906__delta = (0x0000000fU 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__);
    __Vfunc_aes_mul_gf2p4__906__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__906__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17780366849667044156ull);
    __Vfunc_aes_mul_gf2p2__907__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__906__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__907__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__906__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__907__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__907__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__907__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__907__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__907__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__907__d)));
    __Vfunc_aes_mul_gf2p2__907__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__907__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__907__d)));
    __Vfunc_aes_mul_gf2p2__907__f = ((((IData)(__Vfunc_aes_mul_gf2p2__907__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__907__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__907__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__907__b)));
    __Vfunc_aes_mul_gf2p2__907__Vfuncout = __Vfunc_aes_mul_gf2p2__907__f;
    __Vfunc_aes_mul_gf2p4__906__a = __Vfunc_aes_mul_gf2p2__907__Vfuncout;
    __Vfunc_aes_mul_gf2p2__908__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__906__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__906__delta)));
    __Vfunc_aes_mul_gf2p2__908__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__906__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__906__gamma)));
    __Vfunc_aes_mul_gf2p2__908__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__908__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__908__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__908__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__908__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__908__d)));
    __Vfunc_aes_mul_gf2p2__908__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__908__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__908__d)));
    __Vfunc_aes_mul_gf2p2__908__f = ((((IData)(__Vfunc_aes_mul_gf2p2__908__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__908__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__908__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__908__b)));
    __Vfunc_aes_mul_gf2p2__908__Vfuncout = __Vfunc_aes_mul_gf2p2__908__f;
    __Vfunc_aes_mul_gf2p4__906__b = __Vfunc_aes_mul_gf2p2__908__Vfuncout;
    __Vfunc_aes_mul_gf2p2__909__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__906__delta));
    __Vfunc_aes_mul_gf2p2__909__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__906__gamma));
    __Vfunc_aes_mul_gf2p2__909__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__909__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__909__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__909__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__909__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__909__d)));
    __Vfunc_aes_mul_gf2p2__909__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__909__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__909__d)));
    __Vfunc_aes_mul_gf2p2__909__f = ((((IData)(__Vfunc_aes_mul_gf2p2__909__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__909__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__909__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__909__b)));
    __Vfunc_aes_mul_gf2p2__909__Vfuncout = __Vfunc_aes_mul_gf2p2__909__f;
    __Vfunc_aes_mul_gf2p4__906__c = __Vfunc_aes_mul_gf2p2__909__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__906__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__906__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__910__g 
                        = __Vfunc_aes_mul_gf2p4__906__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__910__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__910__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__910__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__910__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__910__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__910__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__906__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__906__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__911__g 
                        = __Vfunc_aes_mul_gf2p4__906__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__911__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__911__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__911__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__911__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__911__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__911__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__906__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__906__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__906__Vfuncout;
    __Vfunc_aes_mul_gf2p2__938__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                                           >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__938__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega;
    __Vfunc_aes_mul_gf2p2__938__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__938__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__938__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__938__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__938__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__938__d)));
    __Vfunc_aes_mul_gf2p2__938__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__938__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__938__d)));
    __Vfunc_aes_mul_gf2p2__938__f = ((((IData)(__Vfunc_aes_mul_gf2p2__938__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__938__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__938__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__938__b)));
    __Vfunc_aes_mul_gf2p2__938__Vfuncout = __Vfunc_aes_mul_gf2p2__938__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__938__Vfuncout;
    __Vfunc_aes_mul_gf2p2__939__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                                           >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__939__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega;
    __Vfunc_aes_mul_gf2p2__939__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__939__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__939__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__939__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__939__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__939__d)));
    __Vfunc_aes_mul_gf2p2__939__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__939__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__939__d)));
    __Vfunc_aes_mul_gf2p2__939__f = ((((IData)(__Vfunc_aes_mul_gf2p2__939__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__939__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__939__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__939__b)));
    __Vfunc_aes_mul_gf2p2__939__Vfuncout = __Vfunc_aes_mul_gf2p2__939__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__939__Vfuncout;
}

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1003__Vfuncout;
    __Vfunc_aes_square_gf2p2__1003__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1003__g;
    __Vfunc_aes_square_gf2p2__1003__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1003__d;
    __Vfunc_aes_square_gf2p2__1003__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1007__Vfuncout;
    __Vfunc_aes_square_gf2p2__1007__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1007__g;
    __Vfunc_aes_square_gf2p2__1007__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1007__d;
    __Vfunc_aes_square_gf2p2__1007__d = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1022__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1022__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1022__gamma;
    __Vfunc_aes_mul_gf2p4__1022__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1022__delta;
    __Vfunc_aes_mul_gf2p4__1022__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1022__a;
    __Vfunc_aes_mul_gf2p4__1022__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1022__b;
    __Vfunc_aes_mul_gf2p4__1022__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1022__c;
    __Vfunc_aes_mul_gf2p4__1022__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1023__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1023__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1023__g;
    __Vfunc_aes_mul_gf2p2__1023__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1023__d;
    __Vfunc_aes_mul_gf2p2__1023__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1023__f;
    __Vfunc_aes_mul_gf2p2__1023__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1023__a;
    __Vfunc_aes_mul_gf2p2__1023__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1023__b;
    __Vfunc_aes_mul_gf2p2__1023__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1023__c;
    __Vfunc_aes_mul_gf2p2__1023__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1024__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1024__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1024__g;
    __Vfunc_aes_mul_gf2p2__1024__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1024__d;
    __Vfunc_aes_mul_gf2p2__1024__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1024__f;
    __Vfunc_aes_mul_gf2p2__1024__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1024__a;
    __Vfunc_aes_mul_gf2p2__1024__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1024__b;
    __Vfunc_aes_mul_gf2p2__1024__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1024__c;
    __Vfunc_aes_mul_gf2p2__1024__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1025__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1025__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1025__g;
    __Vfunc_aes_mul_gf2p2__1025__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1025__d;
    __Vfunc_aes_mul_gf2p2__1025__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1025__f;
    __Vfunc_aes_mul_gf2p2__1025__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1025__a;
    __Vfunc_aes_mul_gf2p2__1025__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1025__b;
    __Vfunc_aes_mul_gf2p2__1025__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1025__c;
    __Vfunc_aes_mul_gf2p2__1025__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1028__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1028__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1028__gamma;
    __Vfunc_aes_mul_gf2p4__1028__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1028__delta;
    __Vfunc_aes_mul_gf2p4__1028__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1028__a;
    __Vfunc_aes_mul_gf2p4__1028__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1028__b;
    __Vfunc_aes_mul_gf2p4__1028__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1028__c;
    __Vfunc_aes_mul_gf2p4__1028__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1029__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1029__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1029__g;
    __Vfunc_aes_mul_gf2p2__1029__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1029__d;
    __Vfunc_aes_mul_gf2p2__1029__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1029__f;
    __Vfunc_aes_mul_gf2p2__1029__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1029__a;
    __Vfunc_aes_mul_gf2p2__1029__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1029__b;
    __Vfunc_aes_mul_gf2p2__1029__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1029__c;
    __Vfunc_aes_mul_gf2p2__1029__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1030__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1030__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1030__g;
    __Vfunc_aes_mul_gf2p2__1030__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1030__d;
    __Vfunc_aes_mul_gf2p2__1030__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1030__f;
    __Vfunc_aes_mul_gf2p2__1030__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1030__a;
    __Vfunc_aes_mul_gf2p2__1030__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1030__b;
    __Vfunc_aes_mul_gf2p2__1030__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1030__c;
    __Vfunc_aes_mul_gf2p2__1030__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1031__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1031__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1031__g;
    __Vfunc_aes_mul_gf2p2__1031__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1031__d;
    __Vfunc_aes_mul_gf2p2__1031__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1031__f;
    __Vfunc_aes_mul_gf2p2__1031__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1031__a;
    __Vfunc_aes_mul_gf2p2__1031__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1031__b;
    __Vfunc_aes_mul_gf2p2__1031__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1031__c;
    __Vfunc_aes_mul_gf2p2__1031__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1034__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1034__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1034__g;
    __Vfunc_aes_scale_omega2_gf2p2__1034__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1034__d;
    __Vfunc_aes_scale_omega2_gf2p2__1034__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1035__Vfuncout;
    __Vfunc_aes_square_gf2p2__1035__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1035__g;
    __Vfunc_aes_square_gf2p2__1035__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1035__d;
    __Vfunc_aes_square_gf2p2__1035__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1036__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1036__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1036__g;
    __Vfunc_aes_scale_omega2_gf2p2__1036__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1036__d;
    __Vfunc_aes_scale_omega2_gf2p2__1036__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1037__Vfuncout;
    __Vfunc_aes_square_gf2p2__1037__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1037__g;
    __Vfunc_aes_square_gf2p2__1037__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1037__d;
    __Vfunc_aes_square_gf2p2__1037__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1038__Vfuncout;
    __Vfunc_aes_square_gf2p2__1038__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1038__g;
    __Vfunc_aes_square_gf2p2__1038__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1038__d;
    __Vfunc_aes_square_gf2p2__1038__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1039__Vfuncout;
    __Vfunc_aes_square_gf2p2__1039__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1039__g;
    __Vfunc_aes_square_gf2p2__1039__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1039__d;
    __Vfunc_aes_square_gf2p2__1039__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1042__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1042__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1042__g;
    __Vfunc_aes_mul_gf2p2__1042__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1042__d;
    __Vfunc_aes_mul_gf2p2__1042__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1042__f;
    __Vfunc_aes_mul_gf2p2__1042__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1042__a;
    __Vfunc_aes_mul_gf2p2__1042__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1042__b;
    __Vfunc_aes_mul_gf2p2__1042__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1042__c;
    __Vfunc_aes_mul_gf2p2__1042__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1043__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1043__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1043__g;
    __Vfunc_aes_mul_gf2p2__1043__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1043__d;
    __Vfunc_aes_mul_gf2p2__1043__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1043__f;
    __Vfunc_aes_mul_gf2p2__1043__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1043__a;
    __Vfunc_aes_mul_gf2p2__1043__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1043__b;
    __Vfunc_aes_mul_gf2p2__1043__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1043__c;
    __Vfunc_aes_mul_gf2p2__1043__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1046__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1046__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1046__g;
    __Vfunc_aes_mul_gf2p2__1046__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1046__d;
    __Vfunc_aes_mul_gf2p2__1046__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1046__f;
    __Vfunc_aes_mul_gf2p2__1046__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1046__a;
    __Vfunc_aes_mul_gf2p2__1046__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1046__b;
    __Vfunc_aes_mul_gf2p2__1046__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1046__c;
    __Vfunc_aes_mul_gf2p2__1046__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1047__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1047__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1047__g;
    __Vfunc_aes_mul_gf2p2__1047__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1047__d;
    __Vfunc_aes_mul_gf2p2__1047__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1047__f;
    __Vfunc_aes_mul_gf2p2__1047__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1047__a;
    __Vfunc_aes_mul_gf2p2__1047__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1047__b;
    __Vfunc_aes_mul_gf2p2__1047__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1047__c;
    __Vfunc_aes_mul_gf2p2__1047__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1050__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1050__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1050__g;
    __Vfunc_aes_mul_gf2p2__1050__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1050__d;
    __Vfunc_aes_mul_gf2p2__1050__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1050__f;
    __Vfunc_aes_mul_gf2p2__1050__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1050__a;
    __Vfunc_aes_mul_gf2p2__1050__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1050__b;
    __Vfunc_aes_mul_gf2p2__1050__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1050__c;
    __Vfunc_aes_mul_gf2p2__1050__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1051__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1051__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1051__g;
    __Vfunc_aes_mul_gf2p2__1051__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1051__d;
    __Vfunc_aes_mul_gf2p2__1051__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1051__f;
    __Vfunc_aes_mul_gf2p2__1051__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1051__a;
    __Vfunc_aes_mul_gf2p2__1051__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1051__b;
    __Vfunc_aes_mul_gf2p2__1051__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1051__c;
    __Vfunc_aes_mul_gf2p2__1051__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1052__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1052__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1052__gamma;
    __Vfunc_aes_mul_gf2p4__1052__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1052__delta;
    __Vfunc_aes_mul_gf2p4__1052__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1052__a;
    __Vfunc_aes_mul_gf2p4__1052__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1052__b;
    __Vfunc_aes_mul_gf2p4__1052__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1052__c;
    __Vfunc_aes_mul_gf2p4__1052__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1053__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1053__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1053__g;
    __Vfunc_aes_mul_gf2p2__1053__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1053__d;
    __Vfunc_aes_mul_gf2p2__1053__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1053__f;
    __Vfunc_aes_mul_gf2p2__1053__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1053__a;
    __Vfunc_aes_mul_gf2p2__1053__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1053__b;
    __Vfunc_aes_mul_gf2p2__1053__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1053__c;
    __Vfunc_aes_mul_gf2p2__1053__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1054__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1054__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1054__g;
    __Vfunc_aes_mul_gf2p2__1054__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1054__d;
    __Vfunc_aes_mul_gf2p2__1054__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1054__f;
    __Vfunc_aes_mul_gf2p2__1054__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1054__a;
    __Vfunc_aes_mul_gf2p2__1054__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1054__b;
    __Vfunc_aes_mul_gf2p2__1054__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1054__c;
    __Vfunc_aes_mul_gf2p2__1054__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1055__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1055__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1055__g;
    __Vfunc_aes_mul_gf2p2__1055__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1055__d;
    __Vfunc_aes_mul_gf2p2__1055__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1055__f;
    __Vfunc_aes_mul_gf2p2__1055__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1055__a;
    __Vfunc_aes_mul_gf2p2__1055__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1055__b;
    __Vfunc_aes_mul_gf2p2__1055__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1055__c;
    __Vfunc_aes_mul_gf2p2__1055__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1058__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1058__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1058__gamma;
    __Vfunc_aes_mul_gf2p4__1058__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1058__delta;
    __Vfunc_aes_mul_gf2p4__1058__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1058__a;
    __Vfunc_aes_mul_gf2p4__1058__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1058__b;
    __Vfunc_aes_mul_gf2p4__1058__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1058__c;
    __Vfunc_aes_mul_gf2p4__1058__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1059__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1059__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1059__g;
    __Vfunc_aes_mul_gf2p2__1059__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1059__d;
    __Vfunc_aes_mul_gf2p2__1059__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1059__f;
    __Vfunc_aes_mul_gf2p2__1059__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1059__a;
    __Vfunc_aes_mul_gf2p2__1059__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1059__b;
    __Vfunc_aes_mul_gf2p2__1059__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1059__c;
    __Vfunc_aes_mul_gf2p2__1059__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1060__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1060__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1060__g;
    __Vfunc_aes_mul_gf2p2__1060__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1060__d;
    __Vfunc_aes_mul_gf2p2__1060__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1060__f;
    __Vfunc_aes_mul_gf2p2__1060__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1060__a;
    __Vfunc_aes_mul_gf2p2__1060__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1060__b;
    __Vfunc_aes_mul_gf2p2__1060__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1060__c;
    __Vfunc_aes_mul_gf2p2__1060__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1061__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1061__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1061__g;
    __Vfunc_aes_mul_gf2p2__1061__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1061__d;
    __Vfunc_aes_mul_gf2p2__1061__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1061__f;
    __Vfunc_aes_mul_gf2p2__1061__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1061__a;
    __Vfunc_aes_mul_gf2p2__1061__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1061__b;
    __Vfunc_aes_mul_gf2p2__1061__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1061__c;
    __Vfunc_aes_mul_gf2p2__1061__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1064__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1064__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1064__gamma;
    __Vfunc_aes_mul_gf2p4__1064__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1064__delta;
    __Vfunc_aes_mul_gf2p4__1064__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1064__a;
    __Vfunc_aes_mul_gf2p4__1064__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1064__b;
    __Vfunc_aes_mul_gf2p4__1064__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1064__c;
    __Vfunc_aes_mul_gf2p4__1064__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1065__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1065__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1065__g;
    __Vfunc_aes_mul_gf2p2__1065__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1065__d;
    __Vfunc_aes_mul_gf2p2__1065__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1065__f;
    __Vfunc_aes_mul_gf2p2__1065__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1065__a;
    __Vfunc_aes_mul_gf2p2__1065__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1065__b;
    __Vfunc_aes_mul_gf2p2__1065__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1065__c;
    __Vfunc_aes_mul_gf2p2__1065__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1066__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1066__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1066__g;
    __Vfunc_aes_mul_gf2p2__1066__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1066__d;
    __Vfunc_aes_mul_gf2p2__1066__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1066__f;
    __Vfunc_aes_mul_gf2p2__1066__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1066__a;
    __Vfunc_aes_mul_gf2p2__1066__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1066__b;
    __Vfunc_aes_mul_gf2p2__1066__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1066__c;
    __Vfunc_aes_mul_gf2p2__1066__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1067__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1067__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1067__g;
    __Vfunc_aes_mul_gf2p2__1067__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1067__d;
    __Vfunc_aes_mul_gf2p2__1067__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1067__f;
    __Vfunc_aes_mul_gf2p2__1067__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1067__a;
    __Vfunc_aes_mul_gf2p2__1067__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1067__b;
    __Vfunc_aes_mul_gf2p2__1067__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1067__c;
    __Vfunc_aes_mul_gf2p2__1067__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1070__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1070__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1070__gamma;
    __Vfunc_aes_mul_gf2p4__1070__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1070__delta;
    __Vfunc_aes_mul_gf2p4__1070__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1070__a;
    __Vfunc_aes_mul_gf2p4__1070__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1070__b;
    __Vfunc_aes_mul_gf2p4__1070__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1070__c;
    __Vfunc_aes_mul_gf2p4__1070__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1071__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1071__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1071__g;
    __Vfunc_aes_mul_gf2p2__1071__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1071__d;
    __Vfunc_aes_mul_gf2p2__1071__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1071__f;
    __Vfunc_aes_mul_gf2p2__1071__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1071__a;
    __Vfunc_aes_mul_gf2p2__1071__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1071__b;
    __Vfunc_aes_mul_gf2p2__1071__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1071__c;
    __Vfunc_aes_mul_gf2p2__1071__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1072__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1072__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1072__g;
    __Vfunc_aes_mul_gf2p2__1072__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1072__d;
    __Vfunc_aes_mul_gf2p2__1072__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1072__f;
    __Vfunc_aes_mul_gf2p2__1072__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1072__a;
    __Vfunc_aes_mul_gf2p2__1072__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1072__b;
    __Vfunc_aes_mul_gf2p2__1072__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1072__c;
    __Vfunc_aes_mul_gf2p2__1072__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1073__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1073__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1073__g;
    __Vfunc_aes_mul_gf2p2__1073__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1073__d;
    __Vfunc_aes_mul_gf2p2__1073__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1073__f;
    __Vfunc_aes_mul_gf2p2__1073__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1073__a;
    __Vfunc_aes_mul_gf2p2__1073__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1073__b;
    __Vfunc_aes_mul_gf2p2__1073__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1073__c;
    __Vfunc_aes_mul_gf2p2__1073__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1076__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1076__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1076__gamma;
    __Vfunc_aes_mul_gf2p4__1076__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1076__delta;
    __Vfunc_aes_mul_gf2p4__1076__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1076__a;
    __Vfunc_aes_mul_gf2p4__1076__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1076__b;
    __Vfunc_aes_mul_gf2p4__1076__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1076__c;
    __Vfunc_aes_mul_gf2p4__1076__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1077__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1077__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1077__g;
    __Vfunc_aes_mul_gf2p2__1077__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1077__d;
    __Vfunc_aes_mul_gf2p2__1077__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1077__f;
    __Vfunc_aes_mul_gf2p2__1077__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1077__a;
    __Vfunc_aes_mul_gf2p2__1077__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1077__b;
    __Vfunc_aes_mul_gf2p2__1077__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1077__c;
    __Vfunc_aes_mul_gf2p2__1077__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1078__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1078__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1078__g;
    __Vfunc_aes_mul_gf2p2__1078__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1078__d;
    __Vfunc_aes_mul_gf2p2__1078__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1078__f;
    __Vfunc_aes_mul_gf2p2__1078__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1078__a;
    __Vfunc_aes_mul_gf2p2__1078__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1078__b;
    __Vfunc_aes_mul_gf2p2__1078__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1078__c;
    __Vfunc_aes_mul_gf2p2__1078__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1079__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1079__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1079__g;
    __Vfunc_aes_mul_gf2p2__1079__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1079__d;
    __Vfunc_aes_mul_gf2p2__1079__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1079__f;
    __Vfunc_aes_mul_gf2p2__1079__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1079__a;
    __Vfunc_aes_mul_gf2p2__1079__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1079__b;
    __Vfunc_aes_mul_gf2p2__1079__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1079__c;
    __Vfunc_aes_mul_gf2p2__1079__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1082__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1082__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1082__gamma;
    __Vfunc_aes_mul_gf2p4__1082__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1082__delta;
    __Vfunc_aes_mul_gf2p4__1082__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1082__a;
    __Vfunc_aes_mul_gf2p4__1082__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1082__b;
    __Vfunc_aes_mul_gf2p4__1082__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1082__c;
    __Vfunc_aes_mul_gf2p4__1082__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1083__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1083__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1083__g;
    __Vfunc_aes_mul_gf2p2__1083__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1083__d;
    __Vfunc_aes_mul_gf2p2__1083__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1083__f;
    __Vfunc_aes_mul_gf2p2__1083__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1083__a;
    __Vfunc_aes_mul_gf2p2__1083__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1083__b;
    __Vfunc_aes_mul_gf2p2__1083__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1083__c;
    __Vfunc_aes_mul_gf2p2__1083__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1084__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1084__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1084__g;
    __Vfunc_aes_mul_gf2p2__1084__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1084__d;
    __Vfunc_aes_mul_gf2p2__1084__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1084__f;
    __Vfunc_aes_mul_gf2p2__1084__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1084__a;
    __Vfunc_aes_mul_gf2p2__1084__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1084__b;
    __Vfunc_aes_mul_gf2p2__1084__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1084__c;
    __Vfunc_aes_mul_gf2p2__1084__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1085__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1085__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1085__g;
    __Vfunc_aes_mul_gf2p2__1085__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1085__d;
    __Vfunc_aes_mul_gf2p2__1085__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1085__f;
    __Vfunc_aes_mul_gf2p2__1085__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1085__a;
    __Vfunc_aes_mul_gf2p2__1085__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1085__b;
    __Vfunc_aes_mul_gf2p2__1085__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1085__c;
    __Vfunc_aes_mul_gf2p2__1085__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1088__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1088__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1088__gamma;
    __Vfunc_aes_mul_gf2p4__1088__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1088__delta;
    __Vfunc_aes_mul_gf2p4__1088__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1088__a;
    __Vfunc_aes_mul_gf2p4__1088__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1088__b;
    __Vfunc_aes_mul_gf2p4__1088__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1088__c;
    __Vfunc_aes_mul_gf2p4__1088__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1089__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1089__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1089__g;
    __Vfunc_aes_mul_gf2p2__1089__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1089__d;
    __Vfunc_aes_mul_gf2p2__1089__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1089__f;
    __Vfunc_aes_mul_gf2p2__1089__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1089__a;
    __Vfunc_aes_mul_gf2p2__1089__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1089__b;
    __Vfunc_aes_mul_gf2p2__1089__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1089__c;
    __Vfunc_aes_mul_gf2p2__1089__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1090__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1090__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1090__g;
    __Vfunc_aes_mul_gf2p2__1090__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1090__d;
    __Vfunc_aes_mul_gf2p2__1090__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1090__f;
    __Vfunc_aes_mul_gf2p2__1090__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1090__a;
    __Vfunc_aes_mul_gf2p2__1090__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1090__b;
    __Vfunc_aes_mul_gf2p2__1090__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1090__c;
    __Vfunc_aes_mul_gf2p2__1090__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1091__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1091__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1091__g;
    __Vfunc_aes_mul_gf2p2__1091__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1091__d;
    __Vfunc_aes_mul_gf2p2__1091__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1091__f;
    __Vfunc_aes_mul_gf2p2__1091__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1091__a;
    __Vfunc_aes_mul_gf2p2__1091__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1091__b;
    __Vfunc_aes_mul_gf2p2__1091__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1091__c;
    __Vfunc_aes_mul_gf2p2__1091__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1094__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1094__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1094__gamma;
    __Vfunc_aes_mul_gf2p4__1094__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1094__delta;
    __Vfunc_aes_mul_gf2p4__1094__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1094__a;
    __Vfunc_aes_mul_gf2p4__1094__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1094__b;
    __Vfunc_aes_mul_gf2p4__1094__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1094__c;
    __Vfunc_aes_mul_gf2p4__1094__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1095__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1095__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1095__g;
    __Vfunc_aes_mul_gf2p2__1095__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1095__d;
    __Vfunc_aes_mul_gf2p2__1095__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1095__f;
    __Vfunc_aes_mul_gf2p2__1095__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1095__a;
    __Vfunc_aes_mul_gf2p2__1095__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1095__b;
    __Vfunc_aes_mul_gf2p2__1095__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1095__c;
    __Vfunc_aes_mul_gf2p2__1095__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1096__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1096__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1096__g;
    __Vfunc_aes_mul_gf2p2__1096__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1096__d;
    __Vfunc_aes_mul_gf2p2__1096__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1096__f;
    __Vfunc_aes_mul_gf2p2__1096__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1096__a;
    __Vfunc_aes_mul_gf2p2__1096__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1096__b;
    __Vfunc_aes_mul_gf2p2__1096__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1096__c;
    __Vfunc_aes_mul_gf2p2__1096__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1097__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1097__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1097__g;
    __Vfunc_aes_mul_gf2p2__1097__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1097__d;
    __Vfunc_aes_mul_gf2p2__1097__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1097__f;
    __Vfunc_aes_mul_gf2p2__1097__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1097__a;
    __Vfunc_aes_mul_gf2p2__1097__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1097__b;
    __Vfunc_aes_mul_gf2p2__1097__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1097__c;
    __Vfunc_aes_mul_gf2p2__1097__c = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d) 
                    << 2U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x00fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                                                 >> 8U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                               >> 0x0000000aU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                    << 2U) ^ (0x03fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                                                 >> 6U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
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
                                    ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__) 
                                   << 4U)) | (0x0000000fU 
                                              & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__)));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0) 
                                    << 4U) ^ (0xfffffff0U 
                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                                                 >> 0x00000010U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                               >> 0x00000012U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x000ffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                                                 >> 0x0000000cU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                               >> 0x0000000eU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
                                    << 2U) ^ (0x0003fffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                                                 >> 0x0000000eU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                               >> 0x00000010U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o 
                = vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o;
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & ((0x3ffffffcU & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                                   >> 2U)) 
                                   ^ (0x003ffffcU & 
                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                                       >> 0x0000000aU)))) 
                   | (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                                                 >> 0x00000014U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                                        >> 0x00000018U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by) 
                                    << 4U) ^ (0x0000fff0U 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
                                                 >> 0x00000010U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__195__03a168__KET__ 
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
                vlSelfRef.__Vfunc_aes_mvm__990__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__990__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__990__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__990__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__990__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__990__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__990__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__990__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__990__vec_b 
                    = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                      [0U][1U] >> 0x00000010U));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__990__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__990__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__990__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__990__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__990__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_b 
                        = (0x000000ffU & (0x63U ^ (
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                    [0U][1U] 
                                                    << 0x00000010U) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                      [0U][1U] 
                                                      >> 0x00000010U))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__991__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__991__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__991__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__991__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__991__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [0U][1U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__992__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__992__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__992__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__992__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__992__Vfuncout))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__993__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__993__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__993__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__993__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__993__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__993__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__993__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__993__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__993__vec_b 
                    = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                      [1U][1U] >> 0x00000010U));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__993__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__993__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__993__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__993__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__993__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [1U][1U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__994__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__994__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__994__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__994__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__994__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [1U][1U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__995__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__995__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__995__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__995__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__995__Vfuncout))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1002__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1002__gamma)));
    __Vfunc_aes_square_gf2p2__1003__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1002__gamma));
    __Vfunc_aes_square_gf2p2__1003__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1003__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1003__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1003__Vfuncout = __Vfunc_aes_square_gf2p2__1003__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__b = __Vfunc_aes_square_gf2p2__1003__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1004__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1004__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1004__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1004__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1004__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__1004__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1004__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1005__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1005__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1005__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1005__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1005__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1005__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1005__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1006__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1006__gamma)));
    __Vfunc_aes_square_gf2p2__1007__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1006__gamma));
    __Vfunc_aes_square_gf2p2__1007__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1007__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1007__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1007__Vfuncout = __Vfunc_aes_square_gf2p2__1007__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__b = __Vfunc_aes_square_gf2p2__1007__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1008__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1008__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1008__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1008__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1008__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__1008__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1008__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1009__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1009__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1009__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1009__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1009__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1009__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1009__Vfuncout)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                    << 4U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma));
        }
    } else {
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o = 0U;
    }
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__1022__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__1022__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__1022__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18276258519991902572ull);
    __Vfunc_aes_mul_gf2p2__1023__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1022__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1023__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1022__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1023__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1023__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1023__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1023__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1023__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1023__d)));
    __Vfunc_aes_mul_gf2p2__1023__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1023__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1023__d)));
    __Vfunc_aes_mul_gf2p2__1023__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1023__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1023__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1023__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1023__b)));
    __Vfunc_aes_mul_gf2p2__1023__Vfuncout = __Vfunc_aes_mul_gf2p2__1023__f;
    __Vfunc_aes_mul_gf2p4__1022__a = __Vfunc_aes_mul_gf2p2__1023__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1024__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1022__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1022__delta)));
    __Vfunc_aes_mul_gf2p2__1024__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1022__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1022__gamma)));
    __Vfunc_aes_mul_gf2p2__1024__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1024__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1024__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1024__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1024__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1024__d)));
    __Vfunc_aes_mul_gf2p2__1024__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1024__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1024__d)));
    __Vfunc_aes_mul_gf2p2__1024__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1024__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1024__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1024__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1024__b)));
    __Vfunc_aes_mul_gf2p2__1024__Vfuncout = __Vfunc_aes_mul_gf2p2__1024__f;
    __Vfunc_aes_mul_gf2p4__1022__b = __Vfunc_aes_mul_gf2p2__1024__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1025__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1022__delta));
    __Vfunc_aes_mul_gf2p2__1025__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1022__gamma));
    __Vfunc_aes_mul_gf2p2__1025__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1025__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1025__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1025__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1025__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1025__d)));
    __Vfunc_aes_mul_gf2p2__1025__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1025__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1025__d)));
    __Vfunc_aes_mul_gf2p2__1025__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1025__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1025__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1025__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1025__b)));
    __Vfunc_aes_mul_gf2p2__1025__Vfuncout = __Vfunc_aes_mul_gf2p2__1025__f;
    __Vfunc_aes_mul_gf2p4__1022__c = __Vfunc_aes_mul_gf2p2__1025__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1022__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1022__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1026__g 
                        = __Vfunc_aes_mul_gf2p4__1022__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1026__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1026__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1026__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1026__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1026__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1026__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1022__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1022__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1027__g 
                        = __Vfunc_aes_mul_gf2p4__1022__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1027__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1027__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1027__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1027__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1027__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1027__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1022__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1022__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1022__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1028__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__1028__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1028__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1904473998041810106ull);
    __Vfunc_aes_mul_gf2p2__1029__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1028__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1029__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1028__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1029__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1029__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1029__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1029__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1029__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1029__d)));
    __Vfunc_aes_mul_gf2p2__1029__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1029__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1029__d)));
    __Vfunc_aes_mul_gf2p2__1029__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1029__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1029__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1029__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1029__b)));
    __Vfunc_aes_mul_gf2p2__1029__Vfuncout = __Vfunc_aes_mul_gf2p2__1029__f;
    __Vfunc_aes_mul_gf2p4__1028__a = __Vfunc_aes_mul_gf2p2__1029__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1030__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1028__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1028__delta)));
    __Vfunc_aes_mul_gf2p2__1030__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1028__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1028__gamma)));
    __Vfunc_aes_mul_gf2p2__1030__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1030__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1030__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1030__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1030__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1030__d)));
    __Vfunc_aes_mul_gf2p2__1030__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1030__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1030__d)));
    __Vfunc_aes_mul_gf2p2__1030__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1030__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1030__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1030__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1030__b)));
    __Vfunc_aes_mul_gf2p2__1030__Vfuncout = __Vfunc_aes_mul_gf2p2__1030__f;
    __Vfunc_aes_mul_gf2p4__1028__b = __Vfunc_aes_mul_gf2p2__1030__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1031__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1028__delta));
    __Vfunc_aes_mul_gf2p2__1031__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1028__gamma));
    __Vfunc_aes_mul_gf2p2__1031__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1031__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1031__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1031__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1031__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1031__d)));
    __Vfunc_aes_mul_gf2p2__1031__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1031__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1031__d)));
    __Vfunc_aes_mul_gf2p2__1031__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1031__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1031__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1031__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1031__b)));
    __Vfunc_aes_mul_gf2p2__1031__Vfuncout = __Vfunc_aes_mul_gf2p2__1031__f;
    __Vfunc_aes_mul_gf2p4__1028__c = __Vfunc_aes_mul_gf2p2__1031__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1028__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1028__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1032__g 
                        = __Vfunc_aes_mul_gf2p4__1028__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1032__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1032__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1032__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1032__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1032__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1032__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1028__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1028__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1033__g 
                        = __Vfunc_aes_mul_gf2p4__1028__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1033__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1033__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1033__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1033__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1033__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1033__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1028__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1028__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1028__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1046__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1046__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1046__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1046__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1046__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1046__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1046__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1046__d)));
    __Vfunc_aes_mul_gf2p2__1046__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1046__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1046__d)));
    __Vfunc_aes_mul_gf2p2__1046__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1046__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1046__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1046__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1046__b)));
    __Vfunc_aes_mul_gf2p2__1046__Vfuncout = __Vfunc_aes_mul_gf2p2__1046__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1046__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1047__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1047__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1047__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1047__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1047__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1047__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1047__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1047__d)));
    __Vfunc_aes_mul_gf2p2__1047__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1047__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1047__d)));
    __Vfunc_aes_mul_gf2p2__1047__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1047__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1047__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1047__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1047__b)));
    __Vfunc_aes_mul_gf2p2__1047__Vfuncout = __Vfunc_aes_mul_gf2p2__1047__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1047__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1050__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1050__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1050__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1050__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1050__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1050__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1050__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1050__d)));
    __Vfunc_aes_mul_gf2p2__1050__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1050__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1050__d)));
    __Vfunc_aes_mul_gf2p2__1050__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1050__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1050__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1050__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1050__b)));
    __Vfunc_aes_mul_gf2p2__1050__Vfuncout = __Vfunc_aes_mul_gf2p2__1050__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1050__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1051__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1051__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1051__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1051__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1051__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1051__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1051__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1051__d)));
    __Vfunc_aes_mul_gf2p2__1051__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1051__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1051__d)));
    __Vfunc_aes_mul_gf2p2__1051__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1051__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1051__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1051__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1051__b)));
    __Vfunc_aes_mul_gf2p2__1051__Vfuncout = __Vfunc_aes_mul_gf2p2__1051__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1051__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__u_aes_sb_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (1U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.data_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? (0x63U ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                     [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                     [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                     [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                     [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                     [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                     [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                     [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                     [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__996__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__996__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__996__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__996__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__996__Vfuncout)))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__997__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__997__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__997__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__997__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__997__Vfuncout))
                             : (0x63U ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                         [0U] = 0x58U;
                        vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                         [1U] = 0x2dU;
                        vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                         [2U] = 0x9eU;
                        vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                         [3U] = 0x0bU;
                        vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                         [4U] = 0xdcU;
                        vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                         [5U] = 4U;
                        vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                         [6U] = 3U;
                        vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                         [7U] = 0x24U;
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_b 
                            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c = 0U;
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                           >> 7U) & 
                                          vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                          [0U])));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                   >> 6U)))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                   >> 5U)))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                   >> 4U)))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                   >> 3U)))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                   >> 2U)))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                   >> 1U)))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                           [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0x03fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 >> 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0x07fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0x0ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0x1ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0x3ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0x7ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                           [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0xfffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0x07fffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0x0ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0x1ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0x3ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0x7ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                           [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0x0ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0x1ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0x3ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0x7ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                           [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                 << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0x1ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0x3ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0x7ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                  [3U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0x3fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0x7fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                  [2U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0x7fffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                  [1U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                  [0U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__998__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__998__vec_b) 
                                                        << 7U))))));
                        vlSelfRef.__Vfunc_aes_mvm__998__Vfuncout 
                            = vlSelfRef.__Vfunc_aes_mvm__998__vec_c;
                    }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__998__Vfuncout)))));
    vlSelfRef.mask_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                            [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                            [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                            [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                            [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                            [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                            [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                            [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                            [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__999__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__999__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__999__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__999__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__999__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__999__Vfuncout))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1000__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1000__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1000__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1000__Vfuncout))
                             : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1001__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1001__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1001__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1001__Vfuncout))));
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
    __Vfunc_aes_square_gf2p2__1035__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__1035__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1035__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1035__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1035__Vfuncout = __Vfunc_aes_square_gf2p2__1035__d;
    __Vfunc_aes_scale_omega2_gf2p2__1034__g = __Vfunc_aes_square_gf2p2__1035__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1034__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1034__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1034__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1034__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1034__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1034__Vfuncout;
    __Vfunc_aes_square_gf2p2__1037__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__1037__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1037__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1037__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1037__Vfuncout = __Vfunc_aes_square_gf2p2__1037__d;
    __Vfunc_aes_scale_omega2_gf2p2__1036__g = __Vfunc_aes_square_gf2p2__1037__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1036__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1036__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1036__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1036__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1036__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1036__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1052__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__1052__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1052__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13582305811902617773ull);
    __Vfunc_aes_mul_gf2p2__1053__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1052__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1053__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1052__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1053__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1053__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1053__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1053__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1053__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1053__d)));
    __Vfunc_aes_mul_gf2p2__1053__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1053__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1053__d)));
    __Vfunc_aes_mul_gf2p2__1053__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1053__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1053__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1053__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1053__b)));
    __Vfunc_aes_mul_gf2p2__1053__Vfuncout = __Vfunc_aes_mul_gf2p2__1053__f;
    __Vfunc_aes_mul_gf2p4__1052__a = __Vfunc_aes_mul_gf2p2__1053__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1054__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1052__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1052__delta)));
    __Vfunc_aes_mul_gf2p2__1054__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1052__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1052__gamma)));
    __Vfunc_aes_mul_gf2p2__1054__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1054__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1054__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1054__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1054__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1054__d)));
    __Vfunc_aes_mul_gf2p2__1054__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1054__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1054__d)));
    __Vfunc_aes_mul_gf2p2__1054__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1054__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1054__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1054__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1054__b)));
    __Vfunc_aes_mul_gf2p2__1054__Vfuncout = __Vfunc_aes_mul_gf2p2__1054__f;
    __Vfunc_aes_mul_gf2p4__1052__b = __Vfunc_aes_mul_gf2p2__1054__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1055__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1052__delta));
    __Vfunc_aes_mul_gf2p2__1055__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1052__gamma));
    __Vfunc_aes_mul_gf2p2__1055__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1055__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1055__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1055__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1055__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1055__d)));
    __Vfunc_aes_mul_gf2p2__1055__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1055__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1055__d)));
    __Vfunc_aes_mul_gf2p2__1055__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1055__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1055__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1055__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1055__b)));
    __Vfunc_aes_mul_gf2p2__1055__Vfuncout = __Vfunc_aes_mul_gf2p2__1055__f;
    __Vfunc_aes_mul_gf2p4__1052__c = __Vfunc_aes_mul_gf2p2__1055__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1052__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1052__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1056__g 
                        = __Vfunc_aes_mul_gf2p4__1052__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1056__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1056__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1056__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1056__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1056__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1056__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1052__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1052__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1057__g 
                        = __Vfunc_aes_mul_gf2p4__1052__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1057__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1057__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1057__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1057__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1057__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1057__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1052__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1052__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1052__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1070__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    __Vfunc_aes_mul_gf2p4__1070__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1070__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2673822031609350594ull);
    __Vfunc_aes_mul_gf2p2__1071__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1070__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1071__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1070__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1071__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1071__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1071__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1071__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1071__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1071__d)));
    __Vfunc_aes_mul_gf2p2__1071__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1071__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1071__d)));
    __Vfunc_aes_mul_gf2p2__1071__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1071__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1071__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1071__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1071__b)));
    __Vfunc_aes_mul_gf2p2__1071__Vfuncout = __Vfunc_aes_mul_gf2p2__1071__f;
    __Vfunc_aes_mul_gf2p4__1070__a = __Vfunc_aes_mul_gf2p2__1071__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1072__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1070__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1070__delta)));
    __Vfunc_aes_mul_gf2p2__1072__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1070__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1070__gamma)));
    __Vfunc_aes_mul_gf2p2__1072__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1072__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1072__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1072__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1072__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1072__d)));
    __Vfunc_aes_mul_gf2p2__1072__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1072__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1072__d)));
    __Vfunc_aes_mul_gf2p2__1072__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1072__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1072__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1072__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1072__b)));
    __Vfunc_aes_mul_gf2p2__1072__Vfuncout = __Vfunc_aes_mul_gf2p2__1072__f;
    __Vfunc_aes_mul_gf2p4__1070__b = __Vfunc_aes_mul_gf2p2__1072__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1073__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1070__delta));
    __Vfunc_aes_mul_gf2p2__1073__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1070__gamma));
    __Vfunc_aes_mul_gf2p2__1073__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1073__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1073__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1073__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1073__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1073__d)));
    __Vfunc_aes_mul_gf2p2__1073__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1073__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1073__d)));
    __Vfunc_aes_mul_gf2p2__1073__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1073__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1073__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1073__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1073__b)));
    __Vfunc_aes_mul_gf2p2__1073__Vfuncout = __Vfunc_aes_mul_gf2p2__1073__f;
    __Vfunc_aes_mul_gf2p4__1070__c = __Vfunc_aes_mul_gf2p2__1073__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1070__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1070__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1074__g 
                        = __Vfunc_aes_mul_gf2p4__1070__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1074__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1074__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1074__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1074__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1074__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1074__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1070__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1070__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1075__g 
                        = __Vfunc_aes_mul_gf2p4__1070__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1075__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1075__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1075__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1075__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1075__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1075__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1070__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1070__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1070__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1076__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    __Vfunc_aes_mul_gf2p4__1076__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1076__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16634433077412544496ull);
    __Vfunc_aes_mul_gf2p2__1077__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1076__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1077__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1076__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1077__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1077__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1077__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1077__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1077__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1077__d)));
    __Vfunc_aes_mul_gf2p2__1077__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1077__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1077__d)));
    __Vfunc_aes_mul_gf2p2__1077__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1077__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1077__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1077__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1077__b)));
    __Vfunc_aes_mul_gf2p2__1077__Vfuncout = __Vfunc_aes_mul_gf2p2__1077__f;
    __Vfunc_aes_mul_gf2p4__1076__a = __Vfunc_aes_mul_gf2p2__1077__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1078__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1076__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1076__delta)));
    __Vfunc_aes_mul_gf2p2__1078__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1076__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1076__gamma)));
    __Vfunc_aes_mul_gf2p2__1078__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1078__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1078__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1078__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1078__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1078__d)));
    __Vfunc_aes_mul_gf2p2__1078__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1078__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1078__d)));
    __Vfunc_aes_mul_gf2p2__1078__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1078__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1078__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1078__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1078__b)));
    __Vfunc_aes_mul_gf2p2__1078__Vfuncout = __Vfunc_aes_mul_gf2p2__1078__f;
    __Vfunc_aes_mul_gf2p4__1076__b = __Vfunc_aes_mul_gf2p2__1078__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1079__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1076__delta));
    __Vfunc_aes_mul_gf2p2__1079__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1076__gamma));
    __Vfunc_aes_mul_gf2p2__1079__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1079__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1079__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1079__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1079__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1079__d)));
    __Vfunc_aes_mul_gf2p2__1079__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1079__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1079__d)));
    __Vfunc_aes_mul_gf2p2__1079__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1079__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1079__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1079__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1079__b)));
    __Vfunc_aes_mul_gf2p2__1079__Vfuncout = __Vfunc_aes_mul_gf2p2__1079__f;
    __Vfunc_aes_mul_gf2p4__1076__c = __Vfunc_aes_mul_gf2p2__1079__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1076__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1076__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1080__g 
                        = __Vfunc_aes_mul_gf2p4__1076__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1080__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1080__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1080__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1080__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1080__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1080__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1076__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1076__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1081__g 
                        = __Vfunc_aes_mul_gf2p4__1076__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1081__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1081__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1081__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1081__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1081__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1081__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1076__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1076__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1076__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1088__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1088__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1088__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2609263745528464584ull);
    __Vfunc_aes_mul_gf2p2__1089__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1088__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1089__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1088__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1089__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1089__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1089__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1089__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1089__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1089__d)));
    __Vfunc_aes_mul_gf2p2__1089__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1089__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1089__d)));
    __Vfunc_aes_mul_gf2p2__1089__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1089__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1089__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1089__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1089__b)));
    __Vfunc_aes_mul_gf2p2__1089__Vfuncout = __Vfunc_aes_mul_gf2p2__1089__f;
    __Vfunc_aes_mul_gf2p4__1088__a = __Vfunc_aes_mul_gf2p2__1089__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1090__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1088__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1088__delta)));
    __Vfunc_aes_mul_gf2p2__1090__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1088__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1088__gamma)));
    __Vfunc_aes_mul_gf2p2__1090__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1090__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1090__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1090__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1090__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1090__d)));
    __Vfunc_aes_mul_gf2p2__1090__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1090__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1090__d)));
    __Vfunc_aes_mul_gf2p2__1090__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1090__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1090__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1090__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1090__b)));
    __Vfunc_aes_mul_gf2p2__1090__Vfuncout = __Vfunc_aes_mul_gf2p2__1090__f;
    __Vfunc_aes_mul_gf2p4__1088__b = __Vfunc_aes_mul_gf2p2__1090__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1091__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1088__delta));
    __Vfunc_aes_mul_gf2p2__1091__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1088__gamma));
    __Vfunc_aes_mul_gf2p2__1091__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1091__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1091__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1091__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1091__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1091__d)));
    __Vfunc_aes_mul_gf2p2__1091__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1091__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1091__d)));
    __Vfunc_aes_mul_gf2p2__1091__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1091__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1091__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1091__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1091__b)));
    __Vfunc_aes_mul_gf2p2__1091__Vfuncout = __Vfunc_aes_mul_gf2p2__1091__f;
    __Vfunc_aes_mul_gf2p4__1088__c = __Vfunc_aes_mul_gf2p2__1091__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1088__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1088__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1092__g 
                        = __Vfunc_aes_mul_gf2p4__1088__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1092__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1092__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1092__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1092__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1092__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1092__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1088__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1088__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1093__g 
                        = __Vfunc_aes_mul_gf2p4__1088__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1093__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1093__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1093__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1093__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1093__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1093__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1088__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1088__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1088__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1058__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1058__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1058__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14426248652122672843ull);
    __Vfunc_aes_mul_gf2p2__1059__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1058__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1059__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1058__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1059__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1059__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1059__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1059__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1059__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1059__d)));
    __Vfunc_aes_mul_gf2p2__1059__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1059__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1059__d)));
    __Vfunc_aes_mul_gf2p2__1059__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1059__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1059__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1059__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1059__b)));
    __Vfunc_aes_mul_gf2p2__1059__Vfuncout = __Vfunc_aes_mul_gf2p2__1059__f;
    __Vfunc_aes_mul_gf2p4__1058__a = __Vfunc_aes_mul_gf2p2__1059__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1060__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1058__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1058__delta)));
    __Vfunc_aes_mul_gf2p2__1060__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1058__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1058__gamma)));
    __Vfunc_aes_mul_gf2p2__1060__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1060__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1060__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1060__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1060__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1060__d)));
    __Vfunc_aes_mul_gf2p2__1060__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1060__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1060__d)));
    __Vfunc_aes_mul_gf2p2__1060__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1060__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1060__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1060__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1060__b)));
    __Vfunc_aes_mul_gf2p2__1060__Vfuncout = __Vfunc_aes_mul_gf2p2__1060__f;
    __Vfunc_aes_mul_gf2p4__1058__b = __Vfunc_aes_mul_gf2p2__1060__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1061__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1058__delta));
    __Vfunc_aes_mul_gf2p2__1061__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1058__gamma));
    __Vfunc_aes_mul_gf2p2__1061__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1061__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1061__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1061__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1061__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1061__d)));
    __Vfunc_aes_mul_gf2p2__1061__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1061__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1061__d)));
    __Vfunc_aes_mul_gf2p2__1061__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1061__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1061__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1061__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1061__b)));
    __Vfunc_aes_mul_gf2p2__1061__Vfuncout = __Vfunc_aes_mul_gf2p2__1061__f;
    __Vfunc_aes_mul_gf2p4__1058__c = __Vfunc_aes_mul_gf2p2__1061__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1058__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1058__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1062__g 
                        = __Vfunc_aes_mul_gf2p4__1058__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1062__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1062__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1062__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1062__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1062__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1062__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1058__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1058__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1063__g 
                        = __Vfunc_aes_mul_gf2p4__1058__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1063__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1063__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1063__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1063__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1063__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1063__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1058__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1058__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1058__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1064__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1064__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1064__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17180650608883045393ull);
    __Vfunc_aes_mul_gf2p2__1065__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1064__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1065__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1064__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1065__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1065__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1065__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1065__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1065__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1065__d)));
    __Vfunc_aes_mul_gf2p2__1065__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1065__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1065__d)));
    __Vfunc_aes_mul_gf2p2__1065__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1065__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1065__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1065__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1065__b)));
    __Vfunc_aes_mul_gf2p2__1065__Vfuncout = __Vfunc_aes_mul_gf2p2__1065__f;
    __Vfunc_aes_mul_gf2p4__1064__a = __Vfunc_aes_mul_gf2p2__1065__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1066__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1064__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1064__delta)));
    __Vfunc_aes_mul_gf2p2__1066__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1064__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1064__gamma)));
    __Vfunc_aes_mul_gf2p2__1066__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1066__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1066__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1066__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1066__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1066__d)));
    __Vfunc_aes_mul_gf2p2__1066__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1066__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1066__d)));
    __Vfunc_aes_mul_gf2p2__1066__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1066__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1066__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1066__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1066__b)));
    __Vfunc_aes_mul_gf2p2__1066__Vfuncout = __Vfunc_aes_mul_gf2p2__1066__f;
    __Vfunc_aes_mul_gf2p4__1064__b = __Vfunc_aes_mul_gf2p2__1066__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1067__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1064__delta));
    __Vfunc_aes_mul_gf2p2__1067__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1064__gamma));
    __Vfunc_aes_mul_gf2p2__1067__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1067__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1067__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1067__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1067__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1067__d)));
    __Vfunc_aes_mul_gf2p2__1067__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1067__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1067__d)));
    __Vfunc_aes_mul_gf2p2__1067__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1067__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1067__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1067__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1067__b)));
    __Vfunc_aes_mul_gf2p2__1067__Vfuncout = __Vfunc_aes_mul_gf2p2__1067__f;
    __Vfunc_aes_mul_gf2p4__1064__c = __Vfunc_aes_mul_gf2p2__1067__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1064__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1064__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1068__g 
                        = __Vfunc_aes_mul_gf2p4__1064__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1068__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1068__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1068__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1068__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1068__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1068__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1064__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1064__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1069__g 
                        = __Vfunc_aes_mul_gf2p4__1064__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1069__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1069__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1069__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1069__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1069__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1069__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1064__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1064__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1064__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1082__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1082__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1082__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15263906731810721442ull);
    __Vfunc_aes_mul_gf2p2__1083__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1082__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1083__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1082__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1083__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1083__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1083__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1083__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1083__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1083__d)));
    __Vfunc_aes_mul_gf2p2__1083__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1083__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1083__d)));
    __Vfunc_aes_mul_gf2p2__1083__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1083__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1083__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1083__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1083__b)));
    __Vfunc_aes_mul_gf2p2__1083__Vfuncout = __Vfunc_aes_mul_gf2p2__1083__f;
    __Vfunc_aes_mul_gf2p4__1082__a = __Vfunc_aes_mul_gf2p2__1083__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1084__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1082__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1082__delta)));
    __Vfunc_aes_mul_gf2p2__1084__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1082__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1082__gamma)));
    __Vfunc_aes_mul_gf2p2__1084__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1084__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1084__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1084__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1084__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1084__d)));
    __Vfunc_aes_mul_gf2p2__1084__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1084__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1084__d)));
    __Vfunc_aes_mul_gf2p2__1084__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1084__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1084__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1084__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1084__b)));
    __Vfunc_aes_mul_gf2p2__1084__Vfuncout = __Vfunc_aes_mul_gf2p2__1084__f;
    __Vfunc_aes_mul_gf2p4__1082__b = __Vfunc_aes_mul_gf2p2__1084__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1085__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1082__delta));
    __Vfunc_aes_mul_gf2p2__1085__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1082__gamma));
    __Vfunc_aes_mul_gf2p2__1085__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1085__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1085__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1085__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1085__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1085__d)));
    __Vfunc_aes_mul_gf2p2__1085__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1085__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1085__d)));
    __Vfunc_aes_mul_gf2p2__1085__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1085__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1085__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1085__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1085__b)));
    __Vfunc_aes_mul_gf2p2__1085__Vfuncout = __Vfunc_aes_mul_gf2p2__1085__f;
    __Vfunc_aes_mul_gf2p4__1082__c = __Vfunc_aes_mul_gf2p2__1085__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1082__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1082__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1086__g 
                        = __Vfunc_aes_mul_gf2p4__1082__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1086__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1086__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1086__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1086__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1086__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1086__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1082__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1082__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1087__g 
                        = __Vfunc_aes_mul_gf2p4__1082__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1087__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1087__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1087__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1087__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1087__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1087__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1082__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1082__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1082__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1094__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1094__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1094__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6382004429410333094ull);
    __Vfunc_aes_mul_gf2p2__1095__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1094__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1095__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1094__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1095__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1095__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1095__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1095__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1095__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1095__d)));
    __Vfunc_aes_mul_gf2p2__1095__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1095__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1095__d)));
    __Vfunc_aes_mul_gf2p2__1095__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1095__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1095__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1095__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1095__b)));
    __Vfunc_aes_mul_gf2p2__1095__Vfuncout = __Vfunc_aes_mul_gf2p2__1095__f;
    __Vfunc_aes_mul_gf2p4__1094__a = __Vfunc_aes_mul_gf2p2__1095__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1096__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1094__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1094__delta)));
    __Vfunc_aes_mul_gf2p2__1096__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1094__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1094__gamma)));
    __Vfunc_aes_mul_gf2p2__1096__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1096__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1096__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1096__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1096__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1096__d)));
    __Vfunc_aes_mul_gf2p2__1096__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1096__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1096__d)));
    __Vfunc_aes_mul_gf2p2__1096__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1096__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1096__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1096__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1096__b)));
    __Vfunc_aes_mul_gf2p2__1096__Vfuncout = __Vfunc_aes_mul_gf2p2__1096__f;
    __Vfunc_aes_mul_gf2p4__1094__b = __Vfunc_aes_mul_gf2p2__1096__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1097__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1094__delta));
    __Vfunc_aes_mul_gf2p2__1097__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1094__gamma));
    __Vfunc_aes_mul_gf2p2__1097__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1097__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1097__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1097__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1097__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1097__d)));
    __Vfunc_aes_mul_gf2p2__1097__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1097__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1097__d)));
    __Vfunc_aes_mul_gf2p2__1097__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1097__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1097__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1097__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1097__b)));
    __Vfunc_aes_mul_gf2p2__1097__Vfuncout = __Vfunc_aes_mul_gf2p2__1097__f;
    __Vfunc_aes_mul_gf2p4__1094__c = __Vfunc_aes_mul_gf2p2__1097__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1094__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1094__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1098__g 
                        = __Vfunc_aes_mul_gf2p4__1094__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1098__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1098__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1098__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1098__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1098__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1098__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1094__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1094__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1099__g 
                        = __Vfunc_aes_mul_gf2p4__1094__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1099__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1099__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1099__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1099__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1099__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1099__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1094__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1094__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1094__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1042__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1042__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1042__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1042__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1042__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1042__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1042__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1042__d)));
    __Vfunc_aes_mul_gf2p2__1042__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1042__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1042__d)));
    __Vfunc_aes_mul_gf2p2__1042__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1042__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1042__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1042__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1042__b)));
    __Vfunc_aes_mul_gf2p2__1042__Vfuncout = __Vfunc_aes_mul_gf2p2__1042__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1042__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1043__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1043__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1043__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1043__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1043__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1043__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1043__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1043__d)));
    __Vfunc_aes_mul_gf2p2__1043__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1043__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1043__d)));
    __Vfunc_aes_mul_gf2p2__1043__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1043__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1043__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1043__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1043__b)));
    __Vfunc_aes_mul_gf2p2__1043__Vfuncout = __Vfunc_aes_mul_gf2p2__1043__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1043__Vfuncout;
    __Vfunc_aes_square_gf2p2__1038__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 >> 2U) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                               ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                  >> 2U)));
    __Vfunc_aes_square_gf2p2__1038__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1038__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1038__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1038__Vfuncout = __Vfunc_aes_square_gf2p2__1038__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__1038__Vfuncout;
    __Vfunc_aes_square_gf2p2__1039__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                               ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__1039__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1039__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1039__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1039__Vfuncout = __Vfunc_aes_square_gf2p2__1039__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__1039__Vfuncout;
}

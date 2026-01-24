// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__1(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__790__Vfuncout;
    __Vfunc_aes_mul_gf2p4__790__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__790__gamma;
    __Vfunc_aes_mul_gf2p4__790__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__790__delta;
    __Vfunc_aes_mul_gf2p4__790__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__790__a;
    __Vfunc_aes_mul_gf2p4__790__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__790__b;
    __Vfunc_aes_mul_gf2p4__790__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__790__c;
    __Vfunc_aes_mul_gf2p4__790__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__791__Vfuncout;
    __Vfunc_aes_mul_gf2p2__791__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__791__g;
    __Vfunc_aes_mul_gf2p2__791__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__791__d;
    __Vfunc_aes_mul_gf2p2__791__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__791__f;
    __Vfunc_aes_mul_gf2p2__791__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__791__a;
    __Vfunc_aes_mul_gf2p2__791__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__791__b;
    __Vfunc_aes_mul_gf2p2__791__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__791__c;
    __Vfunc_aes_mul_gf2p2__791__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__792__Vfuncout;
    __Vfunc_aes_mul_gf2p2__792__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__792__g;
    __Vfunc_aes_mul_gf2p2__792__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__792__d;
    __Vfunc_aes_mul_gf2p2__792__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__792__f;
    __Vfunc_aes_mul_gf2p2__792__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__792__a;
    __Vfunc_aes_mul_gf2p2__792__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__792__b;
    __Vfunc_aes_mul_gf2p2__792__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__792__c;
    __Vfunc_aes_mul_gf2p2__792__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__793__Vfuncout;
    __Vfunc_aes_mul_gf2p2__793__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__793__g;
    __Vfunc_aes_mul_gf2p2__793__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__793__d;
    __Vfunc_aes_mul_gf2p2__793__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__793__f;
    __Vfunc_aes_mul_gf2p2__793__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__793__a;
    __Vfunc_aes_mul_gf2p2__793__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__793__b;
    __Vfunc_aes_mul_gf2p2__793__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__793__c;
    __Vfunc_aes_mul_gf2p2__793__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__796__Vfuncout;
    __Vfunc_aes_mul_gf2p4__796__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__796__gamma;
    __Vfunc_aes_mul_gf2p4__796__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__796__delta;
    __Vfunc_aes_mul_gf2p4__796__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__796__a;
    __Vfunc_aes_mul_gf2p4__796__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__796__b;
    __Vfunc_aes_mul_gf2p4__796__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__796__c;
    __Vfunc_aes_mul_gf2p4__796__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__797__Vfuncout;
    __Vfunc_aes_mul_gf2p2__797__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__797__g;
    __Vfunc_aes_mul_gf2p2__797__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__797__d;
    __Vfunc_aes_mul_gf2p2__797__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__797__f;
    __Vfunc_aes_mul_gf2p2__797__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__797__a;
    __Vfunc_aes_mul_gf2p2__797__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__797__b;
    __Vfunc_aes_mul_gf2p2__797__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__797__c;
    __Vfunc_aes_mul_gf2p2__797__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__798__Vfuncout;
    __Vfunc_aes_mul_gf2p2__798__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__798__g;
    __Vfunc_aes_mul_gf2p2__798__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__798__d;
    __Vfunc_aes_mul_gf2p2__798__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__798__f;
    __Vfunc_aes_mul_gf2p2__798__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__798__a;
    __Vfunc_aes_mul_gf2p2__798__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__798__b;
    __Vfunc_aes_mul_gf2p2__798__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__798__c;
    __Vfunc_aes_mul_gf2p2__798__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__799__Vfuncout;
    __Vfunc_aes_mul_gf2p2__799__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__799__g;
    __Vfunc_aes_mul_gf2p2__799__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__799__d;
    __Vfunc_aes_mul_gf2p2__799__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__799__f;
    __Vfunc_aes_mul_gf2p2__799__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__799__a;
    __Vfunc_aes_mul_gf2p2__799__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__799__b;
    __Vfunc_aes_mul_gf2p2__799__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__799__c;
    __Vfunc_aes_mul_gf2p2__799__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__820__Vfuncout;
    __Vfunc_aes_mul_gf2p2__820__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__820__g;
    __Vfunc_aes_mul_gf2p2__820__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__820__d;
    __Vfunc_aes_mul_gf2p2__820__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__820__f;
    __Vfunc_aes_mul_gf2p2__820__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__820__a;
    __Vfunc_aes_mul_gf2p2__820__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__820__b;
    __Vfunc_aes_mul_gf2p2__820__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__820__c;
    __Vfunc_aes_mul_gf2p2__820__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__821__Vfuncout;
    __Vfunc_aes_mul_gf2p2__821__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__821__g;
    __Vfunc_aes_mul_gf2p2__821__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__821__d;
    __Vfunc_aes_mul_gf2p2__821__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__821__f;
    __Vfunc_aes_mul_gf2p2__821__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__821__a;
    __Vfunc_aes_mul_gf2p2__821__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__821__b;
    __Vfunc_aes_mul_gf2p2__821__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__821__c;
    __Vfunc_aes_mul_gf2p2__821__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__824__Vfuncout;
    __Vfunc_aes_mul_gf2p2__824__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__824__g;
    __Vfunc_aes_mul_gf2p2__824__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__824__d;
    __Vfunc_aes_mul_gf2p2__824__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__824__f;
    __Vfunc_aes_mul_gf2p2__824__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__824__a;
    __Vfunc_aes_mul_gf2p2__824__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__824__b;
    __Vfunc_aes_mul_gf2p2__824__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__824__c;
    __Vfunc_aes_mul_gf2p2__824__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__825__Vfuncout;
    __Vfunc_aes_mul_gf2p2__825__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__825__g;
    __Vfunc_aes_mul_gf2p2__825__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__825__d;
    __Vfunc_aes_mul_gf2p2__825__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__825__f;
    __Vfunc_aes_mul_gf2p2__825__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__825__a;
    __Vfunc_aes_mul_gf2p2__825__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__825__b;
    __Vfunc_aes_mul_gf2p2__825__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__825__c;
    __Vfunc_aes_mul_gf2p2__825__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__828__Vfuncout;
    __Vfunc_aes_mul_gf2p2__828__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__828__g;
    __Vfunc_aes_mul_gf2p2__828__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__828__d;
    __Vfunc_aes_mul_gf2p2__828__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__828__f;
    __Vfunc_aes_mul_gf2p2__828__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__828__a;
    __Vfunc_aes_mul_gf2p2__828__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__828__b;
    __Vfunc_aes_mul_gf2p2__828__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__828__c;
    __Vfunc_aes_mul_gf2p2__828__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__829__Vfuncout;
    __Vfunc_aes_mul_gf2p2__829__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__829__g;
    __Vfunc_aes_mul_gf2p2__829__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__829__d;
    __Vfunc_aes_mul_gf2p2__829__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__829__f;
    __Vfunc_aes_mul_gf2p2__829__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__829__a;
    __Vfunc_aes_mul_gf2p2__829__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__829__b;
    __Vfunc_aes_mul_gf2p2__829__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__829__c;
    __Vfunc_aes_mul_gf2p2__829__c = 0;
    // Body
    __Vfunc_aes_mul_gf2p2__820__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__391__03a364__KET__ 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__820__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__820__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__820__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__820__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__820__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__820__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__820__d)));
    __Vfunc_aes_mul_gf2p2__820__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__820__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__820__d)));
    __Vfunc_aes_mul_gf2p2__820__f = ((((IData)(__Vfunc_aes_mul_gf2p2__820__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__820__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__820__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__820__b)));
    __Vfunc_aes_mul_gf2p2__820__Vfuncout = __Vfunc_aes_mul_gf2p2__820__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__820__Vfuncout;
    __Vfunc_aes_mul_gf2p2__821__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__391__03a364__KET__ 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__821__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__821__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__821__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__821__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__821__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__821__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__821__d)));
    __Vfunc_aes_mul_gf2p2__821__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__821__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__821__d)));
    __Vfunc_aes_mul_gf2p2__821__f = ((((IData)(__Vfunc_aes_mul_gf2p2__821__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__821__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__821__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__821__b)));
    __Vfunc_aes_mul_gf2p2__821__Vfuncout = __Vfunc_aes_mul_gf2p2__821__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__821__Vfuncout;
    __Vfunc_aes_mul_gf2p2__824__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__391__03a364__KET__ 
                                           >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__824__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__824__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__824__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__824__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__824__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__824__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__824__d)));
    __Vfunc_aes_mul_gf2p2__824__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__824__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__824__d)));
    __Vfunc_aes_mul_gf2p2__824__f = ((((IData)(__Vfunc_aes_mul_gf2p2__824__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__824__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__824__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__824__b)));
    __Vfunc_aes_mul_gf2p2__824__Vfuncout = __Vfunc_aes_mul_gf2p2__824__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__824__Vfuncout;
    __Vfunc_aes_mul_gf2p2__825__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__391__03a364__KET__ 
                                           >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__825__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__825__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__825__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__825__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__825__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__825__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__825__d)));
    __Vfunc_aes_mul_gf2p2__825__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__825__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__825__d)));
    __Vfunc_aes_mul_gf2p2__825__f = ((((IData)(__Vfunc_aes_mul_gf2p2__825__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__825__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__825__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__825__b)));
    __Vfunc_aes_mul_gf2p2__825__Vfuncout = __Vfunc_aes_mul_gf2p2__825__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__825__Vfuncout;
    __Vfunc_aes_mul_gf2p4__790__delta = (0x0000000fU 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__391__03a364__KET__);
    __Vfunc_aes_mul_gf2p4__790__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                            >> 4U));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__790__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12317385378576562700ull);
    __Vfunc_aes_mul_gf2p2__791__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__790__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__791__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__790__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__791__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__791__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__791__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__791__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__791__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__791__d)));
    __Vfunc_aes_mul_gf2p2__791__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__791__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__791__d)));
    __Vfunc_aes_mul_gf2p2__791__f = ((((IData)(__Vfunc_aes_mul_gf2p2__791__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__791__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__791__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__791__b)));
    __Vfunc_aes_mul_gf2p2__791__Vfuncout = __Vfunc_aes_mul_gf2p2__791__f;
    __Vfunc_aes_mul_gf2p4__790__a = __Vfunc_aes_mul_gf2p2__791__Vfuncout;
    __Vfunc_aes_mul_gf2p2__792__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__790__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__790__delta)));
    __Vfunc_aes_mul_gf2p2__792__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__790__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__790__gamma)));
    __Vfunc_aes_mul_gf2p2__792__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__792__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__792__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__792__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__792__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__792__d)));
    __Vfunc_aes_mul_gf2p2__792__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__792__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__792__d)));
    __Vfunc_aes_mul_gf2p2__792__f = ((((IData)(__Vfunc_aes_mul_gf2p2__792__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__792__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__792__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__792__b)));
    __Vfunc_aes_mul_gf2p2__792__Vfuncout = __Vfunc_aes_mul_gf2p2__792__f;
    __Vfunc_aes_mul_gf2p4__790__b = __Vfunc_aes_mul_gf2p2__792__Vfuncout;
    __Vfunc_aes_mul_gf2p2__793__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__790__delta));
    __Vfunc_aes_mul_gf2p2__793__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__790__gamma));
    __Vfunc_aes_mul_gf2p2__793__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__793__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__793__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__793__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__793__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__793__d)));
    __Vfunc_aes_mul_gf2p2__793__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__793__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__793__d)));
    __Vfunc_aes_mul_gf2p2__793__f = ((((IData)(__Vfunc_aes_mul_gf2p2__793__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__793__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__793__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__793__b)));
    __Vfunc_aes_mul_gf2p2__793__Vfuncout = __Vfunc_aes_mul_gf2p2__793__f;
    __Vfunc_aes_mul_gf2p4__790__c = __Vfunc_aes_mul_gf2p2__793__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__790__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__790__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__794__g 
                        = __Vfunc_aes_mul_gf2p4__790__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__794__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__794__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__794__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__794__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__794__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__794__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__790__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__790__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__795__g 
                        = __Vfunc_aes_mul_gf2p4__790__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__795__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__795__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__795__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__795__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__795__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__795__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__790__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__790__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__790__Vfuncout;
    __Vfunc_aes_mul_gf2p4__796__delta = (0x0000000fU 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__391__03a364__KET__);
    __Vfunc_aes_mul_gf2p4__796__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__796__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5996196944212831006ull);
    __Vfunc_aes_mul_gf2p2__797__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__796__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__797__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__796__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__797__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__797__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__797__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__797__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__797__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__797__d)));
    __Vfunc_aes_mul_gf2p2__797__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__797__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__797__d)));
    __Vfunc_aes_mul_gf2p2__797__f = ((((IData)(__Vfunc_aes_mul_gf2p2__797__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__797__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__797__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__797__b)));
    __Vfunc_aes_mul_gf2p2__797__Vfuncout = __Vfunc_aes_mul_gf2p2__797__f;
    __Vfunc_aes_mul_gf2p4__796__a = __Vfunc_aes_mul_gf2p2__797__Vfuncout;
    __Vfunc_aes_mul_gf2p2__798__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__796__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__796__delta)));
    __Vfunc_aes_mul_gf2p2__798__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__796__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__796__gamma)));
    __Vfunc_aes_mul_gf2p2__798__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__798__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__798__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__798__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__798__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__798__d)));
    __Vfunc_aes_mul_gf2p2__798__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__798__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__798__d)));
    __Vfunc_aes_mul_gf2p2__798__f = ((((IData)(__Vfunc_aes_mul_gf2p2__798__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__798__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__798__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__798__b)));
    __Vfunc_aes_mul_gf2p2__798__Vfuncout = __Vfunc_aes_mul_gf2p2__798__f;
    __Vfunc_aes_mul_gf2p4__796__b = __Vfunc_aes_mul_gf2p2__798__Vfuncout;
    __Vfunc_aes_mul_gf2p2__799__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__796__delta));
    __Vfunc_aes_mul_gf2p2__799__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__796__gamma));
    __Vfunc_aes_mul_gf2p2__799__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__799__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__799__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__799__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__799__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__799__d)));
    __Vfunc_aes_mul_gf2p2__799__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__799__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__799__d)));
    __Vfunc_aes_mul_gf2p2__799__f = ((((IData)(__Vfunc_aes_mul_gf2p2__799__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__799__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__799__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__799__b)));
    __Vfunc_aes_mul_gf2p2__799__Vfuncout = __Vfunc_aes_mul_gf2p2__799__f;
    __Vfunc_aes_mul_gf2p4__796__c = __Vfunc_aes_mul_gf2p2__799__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__796__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__796__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__800__g 
                        = __Vfunc_aes_mul_gf2p4__796__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__800__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__800__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__800__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__800__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__800__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__800__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__796__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__796__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__801__g 
                        = __Vfunc_aes_mul_gf2p4__796__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__801__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__801__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__801__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__801__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__801__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__801__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__796__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__796__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__796__Vfuncout;
    __Vfunc_aes_mul_gf2p2__828__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__391__03a364__KET__ 
                                           >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__828__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega;
    __Vfunc_aes_mul_gf2p2__828__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__828__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__828__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__828__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__828__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__828__d)));
    __Vfunc_aes_mul_gf2p2__828__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__828__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__828__d)));
    __Vfunc_aes_mul_gf2p2__828__f = ((((IData)(__Vfunc_aes_mul_gf2p2__828__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__828__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__828__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__828__b)));
    __Vfunc_aes_mul_gf2p2__828__Vfuncout = __Vfunc_aes_mul_gf2p2__828__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__828__Vfuncout;
    __Vfunc_aes_mul_gf2p2__829__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__391__03a364__KET__ 
                                           >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__829__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega;
    __Vfunc_aes_mul_gf2p2__829__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__829__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__829__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__829__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__829__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__829__d)));
    __Vfunc_aes_mul_gf2p2__829__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__829__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__829__d)));
    __Vfunc_aes_mul_gf2p2__829__f = ((((IData)(__Vfunc_aes_mul_gf2p2__829__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__829__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__829__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__829__b)));
    __Vfunc_aes_mul_gf2p2__829__Vfuncout = __Vfunc_aes_mul_gf2p2__829__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__829__Vfuncout;
}

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__892__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__892__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__892__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__892__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__892__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__892__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__892__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__892__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__892__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__892__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__893__Vfuncout;
    __Vfunc_aes_square_gf2p2__893__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__893__g;
    __Vfunc_aes_square_gf2p2__893__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__893__d;
    __Vfunc_aes_square_gf2p2__893__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__896__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__896__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__896__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__896__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__896__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__896__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__896__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__896__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__896__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__896__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__897__Vfuncout;
    __Vfunc_aes_square_gf2p2__897__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__897__g;
    __Vfunc_aes_square_gf2p2__897__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__897__d;
    __Vfunc_aes_square_gf2p2__897__d = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__912__Vfuncout;
    __Vfunc_aes_mul_gf2p4__912__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__912__gamma;
    __Vfunc_aes_mul_gf2p4__912__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__912__delta;
    __Vfunc_aes_mul_gf2p4__912__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__912__a;
    __Vfunc_aes_mul_gf2p4__912__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__912__b;
    __Vfunc_aes_mul_gf2p4__912__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__912__c;
    __Vfunc_aes_mul_gf2p4__912__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__913__Vfuncout;
    __Vfunc_aes_mul_gf2p2__913__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__913__g;
    __Vfunc_aes_mul_gf2p2__913__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__913__d;
    __Vfunc_aes_mul_gf2p2__913__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__913__f;
    __Vfunc_aes_mul_gf2p2__913__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__913__a;
    __Vfunc_aes_mul_gf2p2__913__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__913__b;
    __Vfunc_aes_mul_gf2p2__913__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__913__c;
    __Vfunc_aes_mul_gf2p2__913__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__914__Vfuncout;
    __Vfunc_aes_mul_gf2p2__914__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__914__g;
    __Vfunc_aes_mul_gf2p2__914__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__914__d;
    __Vfunc_aes_mul_gf2p2__914__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__914__f;
    __Vfunc_aes_mul_gf2p2__914__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__914__a;
    __Vfunc_aes_mul_gf2p2__914__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__914__b;
    __Vfunc_aes_mul_gf2p2__914__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__914__c;
    __Vfunc_aes_mul_gf2p2__914__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__915__Vfuncout;
    __Vfunc_aes_mul_gf2p2__915__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__915__g;
    __Vfunc_aes_mul_gf2p2__915__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__915__d;
    __Vfunc_aes_mul_gf2p2__915__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__915__f;
    __Vfunc_aes_mul_gf2p2__915__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__915__a;
    __Vfunc_aes_mul_gf2p2__915__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__915__b;
    __Vfunc_aes_mul_gf2p2__915__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__915__c;
    __Vfunc_aes_mul_gf2p2__915__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__918__Vfuncout;
    __Vfunc_aes_mul_gf2p4__918__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__918__gamma;
    __Vfunc_aes_mul_gf2p4__918__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__918__delta;
    __Vfunc_aes_mul_gf2p4__918__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__918__a;
    __Vfunc_aes_mul_gf2p4__918__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__918__b;
    __Vfunc_aes_mul_gf2p4__918__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__918__c;
    __Vfunc_aes_mul_gf2p4__918__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__919__Vfuncout;
    __Vfunc_aes_mul_gf2p2__919__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__919__g;
    __Vfunc_aes_mul_gf2p2__919__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__919__d;
    __Vfunc_aes_mul_gf2p2__919__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__919__f;
    __Vfunc_aes_mul_gf2p2__919__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__919__a;
    __Vfunc_aes_mul_gf2p2__919__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__919__b;
    __Vfunc_aes_mul_gf2p2__919__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__919__c;
    __Vfunc_aes_mul_gf2p2__919__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__920__Vfuncout;
    __Vfunc_aes_mul_gf2p2__920__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__920__g;
    __Vfunc_aes_mul_gf2p2__920__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__920__d;
    __Vfunc_aes_mul_gf2p2__920__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__920__f;
    __Vfunc_aes_mul_gf2p2__920__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__920__a;
    __Vfunc_aes_mul_gf2p2__920__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__920__b;
    __Vfunc_aes_mul_gf2p2__920__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__920__c;
    __Vfunc_aes_mul_gf2p2__920__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__921__Vfuncout;
    __Vfunc_aes_mul_gf2p2__921__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__921__g;
    __Vfunc_aes_mul_gf2p2__921__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__921__d;
    __Vfunc_aes_mul_gf2p2__921__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__921__f;
    __Vfunc_aes_mul_gf2p2__921__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__921__a;
    __Vfunc_aes_mul_gf2p2__921__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__921__b;
    __Vfunc_aes_mul_gf2p2__921__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__921__c;
    __Vfunc_aes_mul_gf2p2__921__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__924__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__924__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__924__g;
    __Vfunc_aes_scale_omega2_gf2p2__924__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__924__d;
    __Vfunc_aes_scale_omega2_gf2p2__924__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__925__Vfuncout;
    __Vfunc_aes_square_gf2p2__925__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__925__g;
    __Vfunc_aes_square_gf2p2__925__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__925__d;
    __Vfunc_aes_square_gf2p2__925__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__926__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__926__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__926__g;
    __Vfunc_aes_scale_omega2_gf2p2__926__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__926__d;
    __Vfunc_aes_scale_omega2_gf2p2__926__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__927__Vfuncout;
    __Vfunc_aes_square_gf2p2__927__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__927__g;
    __Vfunc_aes_square_gf2p2__927__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__927__d;
    __Vfunc_aes_square_gf2p2__927__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__928__Vfuncout;
    __Vfunc_aes_square_gf2p2__928__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__928__g;
    __Vfunc_aes_square_gf2p2__928__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__928__d;
    __Vfunc_aes_square_gf2p2__928__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__929__Vfuncout;
    __Vfunc_aes_square_gf2p2__929__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__929__g;
    __Vfunc_aes_square_gf2p2__929__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__929__d;
    __Vfunc_aes_square_gf2p2__929__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__932__Vfuncout;
    __Vfunc_aes_mul_gf2p2__932__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__932__g;
    __Vfunc_aes_mul_gf2p2__932__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__932__d;
    __Vfunc_aes_mul_gf2p2__932__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__932__f;
    __Vfunc_aes_mul_gf2p2__932__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__932__a;
    __Vfunc_aes_mul_gf2p2__932__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__932__b;
    __Vfunc_aes_mul_gf2p2__932__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__932__c;
    __Vfunc_aes_mul_gf2p2__932__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__933__Vfuncout;
    __Vfunc_aes_mul_gf2p2__933__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__933__g;
    __Vfunc_aes_mul_gf2p2__933__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__933__d;
    __Vfunc_aes_mul_gf2p2__933__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__933__f;
    __Vfunc_aes_mul_gf2p2__933__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__933__a;
    __Vfunc_aes_mul_gf2p2__933__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__933__b;
    __Vfunc_aes_mul_gf2p2__933__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__933__c;
    __Vfunc_aes_mul_gf2p2__933__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__936__Vfuncout;
    __Vfunc_aes_mul_gf2p2__936__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__936__g;
    __Vfunc_aes_mul_gf2p2__936__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__936__d;
    __Vfunc_aes_mul_gf2p2__936__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__936__f;
    __Vfunc_aes_mul_gf2p2__936__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__936__a;
    __Vfunc_aes_mul_gf2p2__936__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__936__b;
    __Vfunc_aes_mul_gf2p2__936__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__936__c;
    __Vfunc_aes_mul_gf2p2__936__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__937__Vfuncout;
    __Vfunc_aes_mul_gf2p2__937__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__937__g;
    __Vfunc_aes_mul_gf2p2__937__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__937__d;
    __Vfunc_aes_mul_gf2p2__937__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__937__f;
    __Vfunc_aes_mul_gf2p2__937__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__937__a;
    __Vfunc_aes_mul_gf2p2__937__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__937__b;
    __Vfunc_aes_mul_gf2p2__937__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__937__c;
    __Vfunc_aes_mul_gf2p2__937__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__940__Vfuncout;
    __Vfunc_aes_mul_gf2p2__940__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__940__g;
    __Vfunc_aes_mul_gf2p2__940__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__940__d;
    __Vfunc_aes_mul_gf2p2__940__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__940__f;
    __Vfunc_aes_mul_gf2p2__940__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__940__a;
    __Vfunc_aes_mul_gf2p2__940__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__940__b;
    __Vfunc_aes_mul_gf2p2__940__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__940__c;
    __Vfunc_aes_mul_gf2p2__940__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__941__Vfuncout;
    __Vfunc_aes_mul_gf2p2__941__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__941__g;
    __Vfunc_aes_mul_gf2p2__941__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__941__d;
    __Vfunc_aes_mul_gf2p2__941__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__941__f;
    __Vfunc_aes_mul_gf2p2__941__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__941__a;
    __Vfunc_aes_mul_gf2p2__941__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__941__b;
    __Vfunc_aes_mul_gf2p2__941__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__941__c;
    __Vfunc_aes_mul_gf2p2__941__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__942__Vfuncout;
    __Vfunc_aes_mul_gf2p4__942__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__942__gamma;
    __Vfunc_aes_mul_gf2p4__942__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__942__delta;
    __Vfunc_aes_mul_gf2p4__942__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__942__a;
    __Vfunc_aes_mul_gf2p4__942__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__942__b;
    __Vfunc_aes_mul_gf2p4__942__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__942__c;
    __Vfunc_aes_mul_gf2p4__942__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__943__Vfuncout;
    __Vfunc_aes_mul_gf2p2__943__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__943__g;
    __Vfunc_aes_mul_gf2p2__943__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__943__d;
    __Vfunc_aes_mul_gf2p2__943__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__943__f;
    __Vfunc_aes_mul_gf2p2__943__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__943__a;
    __Vfunc_aes_mul_gf2p2__943__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__943__b;
    __Vfunc_aes_mul_gf2p2__943__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__943__c;
    __Vfunc_aes_mul_gf2p2__943__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__944__Vfuncout;
    __Vfunc_aes_mul_gf2p2__944__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__944__g;
    __Vfunc_aes_mul_gf2p2__944__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__944__d;
    __Vfunc_aes_mul_gf2p2__944__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__944__f;
    __Vfunc_aes_mul_gf2p2__944__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__944__a;
    __Vfunc_aes_mul_gf2p2__944__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__944__b;
    __Vfunc_aes_mul_gf2p2__944__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__944__c;
    __Vfunc_aes_mul_gf2p2__944__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__945__Vfuncout;
    __Vfunc_aes_mul_gf2p2__945__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__945__g;
    __Vfunc_aes_mul_gf2p2__945__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__945__d;
    __Vfunc_aes_mul_gf2p2__945__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__945__f;
    __Vfunc_aes_mul_gf2p2__945__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__945__a;
    __Vfunc_aes_mul_gf2p2__945__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__945__b;
    __Vfunc_aes_mul_gf2p2__945__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__945__c;
    __Vfunc_aes_mul_gf2p2__945__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__948__Vfuncout;
    __Vfunc_aes_mul_gf2p4__948__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__948__gamma;
    __Vfunc_aes_mul_gf2p4__948__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__948__delta;
    __Vfunc_aes_mul_gf2p4__948__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__948__a;
    __Vfunc_aes_mul_gf2p4__948__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__948__b;
    __Vfunc_aes_mul_gf2p4__948__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__948__c;
    __Vfunc_aes_mul_gf2p4__948__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__949__Vfuncout;
    __Vfunc_aes_mul_gf2p2__949__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__949__g;
    __Vfunc_aes_mul_gf2p2__949__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__949__d;
    __Vfunc_aes_mul_gf2p2__949__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__949__f;
    __Vfunc_aes_mul_gf2p2__949__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__949__a;
    __Vfunc_aes_mul_gf2p2__949__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__949__b;
    __Vfunc_aes_mul_gf2p2__949__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__949__c;
    __Vfunc_aes_mul_gf2p2__949__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__950__Vfuncout;
    __Vfunc_aes_mul_gf2p2__950__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__950__g;
    __Vfunc_aes_mul_gf2p2__950__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__950__d;
    __Vfunc_aes_mul_gf2p2__950__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__950__f;
    __Vfunc_aes_mul_gf2p2__950__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__950__a;
    __Vfunc_aes_mul_gf2p2__950__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__950__b;
    __Vfunc_aes_mul_gf2p2__950__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__950__c;
    __Vfunc_aes_mul_gf2p2__950__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__951__Vfuncout;
    __Vfunc_aes_mul_gf2p2__951__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__951__g;
    __Vfunc_aes_mul_gf2p2__951__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__951__d;
    __Vfunc_aes_mul_gf2p2__951__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__951__f;
    __Vfunc_aes_mul_gf2p2__951__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__951__a;
    __Vfunc_aes_mul_gf2p2__951__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__951__b;
    __Vfunc_aes_mul_gf2p2__951__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__951__c;
    __Vfunc_aes_mul_gf2p2__951__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__954__Vfuncout;
    __Vfunc_aes_mul_gf2p4__954__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__954__gamma;
    __Vfunc_aes_mul_gf2p4__954__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__954__delta;
    __Vfunc_aes_mul_gf2p4__954__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__954__a;
    __Vfunc_aes_mul_gf2p4__954__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__954__b;
    __Vfunc_aes_mul_gf2p4__954__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__954__c;
    __Vfunc_aes_mul_gf2p4__954__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__955__Vfuncout;
    __Vfunc_aes_mul_gf2p2__955__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__955__g;
    __Vfunc_aes_mul_gf2p2__955__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__955__d;
    __Vfunc_aes_mul_gf2p2__955__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__955__f;
    __Vfunc_aes_mul_gf2p2__955__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__955__a;
    __Vfunc_aes_mul_gf2p2__955__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__955__b;
    __Vfunc_aes_mul_gf2p2__955__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__955__c;
    __Vfunc_aes_mul_gf2p2__955__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__956__Vfuncout;
    __Vfunc_aes_mul_gf2p2__956__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__956__g;
    __Vfunc_aes_mul_gf2p2__956__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__956__d;
    __Vfunc_aes_mul_gf2p2__956__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__956__f;
    __Vfunc_aes_mul_gf2p2__956__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__956__a;
    __Vfunc_aes_mul_gf2p2__956__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__956__b;
    __Vfunc_aes_mul_gf2p2__956__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__956__c;
    __Vfunc_aes_mul_gf2p2__956__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__957__Vfuncout;
    __Vfunc_aes_mul_gf2p2__957__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__957__g;
    __Vfunc_aes_mul_gf2p2__957__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__957__d;
    __Vfunc_aes_mul_gf2p2__957__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__957__f;
    __Vfunc_aes_mul_gf2p2__957__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__957__a;
    __Vfunc_aes_mul_gf2p2__957__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__957__b;
    __Vfunc_aes_mul_gf2p2__957__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__957__c;
    __Vfunc_aes_mul_gf2p2__957__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__960__Vfuncout;
    __Vfunc_aes_mul_gf2p4__960__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__960__gamma;
    __Vfunc_aes_mul_gf2p4__960__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__960__delta;
    __Vfunc_aes_mul_gf2p4__960__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__960__a;
    __Vfunc_aes_mul_gf2p4__960__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__960__b;
    __Vfunc_aes_mul_gf2p4__960__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__960__c;
    __Vfunc_aes_mul_gf2p4__960__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__961__Vfuncout;
    __Vfunc_aes_mul_gf2p2__961__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__961__g;
    __Vfunc_aes_mul_gf2p2__961__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__961__d;
    __Vfunc_aes_mul_gf2p2__961__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__961__f;
    __Vfunc_aes_mul_gf2p2__961__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__961__a;
    __Vfunc_aes_mul_gf2p2__961__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__961__b;
    __Vfunc_aes_mul_gf2p2__961__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__961__c;
    __Vfunc_aes_mul_gf2p2__961__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__962__Vfuncout;
    __Vfunc_aes_mul_gf2p2__962__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__962__g;
    __Vfunc_aes_mul_gf2p2__962__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__962__d;
    __Vfunc_aes_mul_gf2p2__962__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__962__f;
    __Vfunc_aes_mul_gf2p2__962__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__962__a;
    __Vfunc_aes_mul_gf2p2__962__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__962__b;
    __Vfunc_aes_mul_gf2p2__962__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__962__c;
    __Vfunc_aes_mul_gf2p2__962__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__963__Vfuncout;
    __Vfunc_aes_mul_gf2p2__963__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__963__g;
    __Vfunc_aes_mul_gf2p2__963__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__963__d;
    __Vfunc_aes_mul_gf2p2__963__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__963__f;
    __Vfunc_aes_mul_gf2p2__963__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__963__a;
    __Vfunc_aes_mul_gf2p2__963__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__963__b;
    __Vfunc_aes_mul_gf2p2__963__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__963__c;
    __Vfunc_aes_mul_gf2p2__963__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__966__Vfuncout;
    __Vfunc_aes_mul_gf2p4__966__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__966__gamma;
    __Vfunc_aes_mul_gf2p4__966__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__966__delta;
    __Vfunc_aes_mul_gf2p4__966__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__966__a;
    __Vfunc_aes_mul_gf2p4__966__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__966__b;
    __Vfunc_aes_mul_gf2p4__966__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__966__c;
    __Vfunc_aes_mul_gf2p4__966__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__967__Vfuncout;
    __Vfunc_aes_mul_gf2p2__967__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__967__g;
    __Vfunc_aes_mul_gf2p2__967__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__967__d;
    __Vfunc_aes_mul_gf2p2__967__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__967__f;
    __Vfunc_aes_mul_gf2p2__967__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__967__a;
    __Vfunc_aes_mul_gf2p2__967__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__967__b;
    __Vfunc_aes_mul_gf2p2__967__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__967__c;
    __Vfunc_aes_mul_gf2p2__967__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__968__Vfuncout;
    __Vfunc_aes_mul_gf2p2__968__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__968__g;
    __Vfunc_aes_mul_gf2p2__968__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__968__d;
    __Vfunc_aes_mul_gf2p2__968__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__968__f;
    __Vfunc_aes_mul_gf2p2__968__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__968__a;
    __Vfunc_aes_mul_gf2p2__968__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__968__b;
    __Vfunc_aes_mul_gf2p2__968__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__968__c;
    __Vfunc_aes_mul_gf2p2__968__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__969__Vfuncout;
    __Vfunc_aes_mul_gf2p2__969__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__969__g;
    __Vfunc_aes_mul_gf2p2__969__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__969__d;
    __Vfunc_aes_mul_gf2p2__969__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__969__f;
    __Vfunc_aes_mul_gf2p2__969__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__969__a;
    __Vfunc_aes_mul_gf2p2__969__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__969__b;
    __Vfunc_aes_mul_gf2p2__969__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__969__c;
    __Vfunc_aes_mul_gf2p2__969__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__972__Vfuncout;
    __Vfunc_aes_mul_gf2p4__972__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__972__gamma;
    __Vfunc_aes_mul_gf2p4__972__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__972__delta;
    __Vfunc_aes_mul_gf2p4__972__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__972__a;
    __Vfunc_aes_mul_gf2p4__972__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__972__b;
    __Vfunc_aes_mul_gf2p4__972__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__972__c;
    __Vfunc_aes_mul_gf2p4__972__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__973__Vfuncout;
    __Vfunc_aes_mul_gf2p2__973__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__973__g;
    __Vfunc_aes_mul_gf2p2__973__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__973__d;
    __Vfunc_aes_mul_gf2p2__973__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__973__f;
    __Vfunc_aes_mul_gf2p2__973__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__973__a;
    __Vfunc_aes_mul_gf2p2__973__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__973__b;
    __Vfunc_aes_mul_gf2p2__973__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__973__c;
    __Vfunc_aes_mul_gf2p2__973__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__974__Vfuncout;
    __Vfunc_aes_mul_gf2p2__974__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__974__g;
    __Vfunc_aes_mul_gf2p2__974__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__974__d;
    __Vfunc_aes_mul_gf2p2__974__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__974__f;
    __Vfunc_aes_mul_gf2p2__974__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__974__a;
    __Vfunc_aes_mul_gf2p2__974__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__974__b;
    __Vfunc_aes_mul_gf2p2__974__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__974__c;
    __Vfunc_aes_mul_gf2p2__974__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__975__Vfuncout;
    __Vfunc_aes_mul_gf2p2__975__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__975__g;
    __Vfunc_aes_mul_gf2p2__975__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__975__d;
    __Vfunc_aes_mul_gf2p2__975__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__975__f;
    __Vfunc_aes_mul_gf2p2__975__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__975__a;
    __Vfunc_aes_mul_gf2p2__975__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__975__b;
    __Vfunc_aes_mul_gf2p2__975__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__975__c;
    __Vfunc_aes_mul_gf2p2__975__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__978__Vfuncout;
    __Vfunc_aes_mul_gf2p4__978__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__978__gamma;
    __Vfunc_aes_mul_gf2p4__978__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__978__delta;
    __Vfunc_aes_mul_gf2p4__978__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__978__a;
    __Vfunc_aes_mul_gf2p4__978__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__978__b;
    __Vfunc_aes_mul_gf2p4__978__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__978__c;
    __Vfunc_aes_mul_gf2p4__978__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__979__Vfuncout;
    __Vfunc_aes_mul_gf2p2__979__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__979__g;
    __Vfunc_aes_mul_gf2p2__979__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__979__d;
    __Vfunc_aes_mul_gf2p2__979__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__979__f;
    __Vfunc_aes_mul_gf2p2__979__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__979__a;
    __Vfunc_aes_mul_gf2p2__979__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__979__b;
    __Vfunc_aes_mul_gf2p2__979__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__979__c;
    __Vfunc_aes_mul_gf2p2__979__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__980__Vfuncout;
    __Vfunc_aes_mul_gf2p2__980__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__980__g;
    __Vfunc_aes_mul_gf2p2__980__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__980__d;
    __Vfunc_aes_mul_gf2p2__980__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__980__f;
    __Vfunc_aes_mul_gf2p2__980__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__980__a;
    __Vfunc_aes_mul_gf2p2__980__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__980__b;
    __Vfunc_aes_mul_gf2p2__980__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__980__c;
    __Vfunc_aes_mul_gf2p2__980__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__981__Vfuncout;
    __Vfunc_aes_mul_gf2p2__981__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__981__g;
    __Vfunc_aes_mul_gf2p2__981__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__981__d;
    __Vfunc_aes_mul_gf2p2__981__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__981__f;
    __Vfunc_aes_mul_gf2p2__981__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__981__a;
    __Vfunc_aes_mul_gf2p2__981__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__981__b;
    __Vfunc_aes_mul_gf2p2__981__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__981__c;
    __Vfunc_aes_mul_gf2p2__981__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__984__Vfuncout;
    __Vfunc_aes_mul_gf2p4__984__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__984__gamma;
    __Vfunc_aes_mul_gf2p4__984__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__984__delta;
    __Vfunc_aes_mul_gf2p4__984__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__984__a;
    __Vfunc_aes_mul_gf2p4__984__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__984__b;
    __Vfunc_aes_mul_gf2p4__984__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__984__c;
    __Vfunc_aes_mul_gf2p4__984__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__985__Vfuncout;
    __Vfunc_aes_mul_gf2p2__985__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__985__g;
    __Vfunc_aes_mul_gf2p2__985__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__985__d;
    __Vfunc_aes_mul_gf2p2__985__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__985__f;
    __Vfunc_aes_mul_gf2p2__985__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__985__a;
    __Vfunc_aes_mul_gf2p2__985__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__985__b;
    __Vfunc_aes_mul_gf2p2__985__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__985__c;
    __Vfunc_aes_mul_gf2p2__985__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__986__Vfuncout;
    __Vfunc_aes_mul_gf2p2__986__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__986__g;
    __Vfunc_aes_mul_gf2p2__986__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__986__d;
    __Vfunc_aes_mul_gf2p2__986__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__986__f;
    __Vfunc_aes_mul_gf2p2__986__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__986__a;
    __Vfunc_aes_mul_gf2p2__986__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__986__b;
    __Vfunc_aes_mul_gf2p2__986__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__986__c;
    __Vfunc_aes_mul_gf2p2__986__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__987__Vfuncout;
    __Vfunc_aes_mul_gf2p2__987__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__987__g;
    __Vfunc_aes_mul_gf2p2__987__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__987__d;
    __Vfunc_aes_mul_gf2p2__987__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__987__f;
    __Vfunc_aes_mul_gf2p2__987__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__987__a;
    __Vfunc_aes_mul_gf2p2__987__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__987__b;
    __Vfunc_aes_mul_gf2p2__987__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__987__c;
    __Vfunc_aes_mul_gf2p2__987__c = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d) 
                    << 2U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x00fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                                                 >> 8U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                               >> 0x0000000aU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                    << 2U) ^ (0x03fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                                                 >> 6U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
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
                                    ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__) 
                                   << 4U)) | (0x0000000fU 
                                              & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__)));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0) 
                                    << 4U) ^ (0xfffffff0U 
                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                                                 >> 0x00000010U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                               >> 0x00000012U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x000ffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                                                 >> 0x0000000cU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                               >> 0x0000000eU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
                                    << 2U) ^ (0x0003fffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                                                 >> 0x0000000eU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                               >> 0x00000010U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o 
                = vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o;
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & ((0x3ffffffcU & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                                   >> 2U)) 
                                   ^ (0x003ffffcU & 
                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                                       >> 0x0000000aU)))) 
                   | (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                                                 >> 0x00000014U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                                        >> 0x00000018U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by) 
                                    << 4U) ^ (0x0000fff0U 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
                                                 >> 0x00000010U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__83__03a56__KET__ 
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
                vlSelfRef.__Vfunc_aes_mvm__880__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__880__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__880__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__880__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__880__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__880__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__880__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__880__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__880__vec_b 
                    = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                      [0U][0U] >> 0x00000010U));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__880__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__880__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__880__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__880__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__880__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_b 
                        = (0x000000ffU & (0x63U ^ (
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                    [0U][0U] 
                                                    << 0x00000010U) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                      [0U][0U] 
                                                      >> 0x00000010U))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__881__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__881__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__881__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__881__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__881__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [0U][0U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__882__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__882__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__882__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__882__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__882__Vfuncout))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__883__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__883__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__883__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__883__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__883__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__883__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__883__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__883__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__883__vec_b 
                    = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                      [1U][0U] >> 0x00000010U));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__883__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__883__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__883__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__883__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__883__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [1U][0U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__884__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__884__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__884__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__884__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__884__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [1U][0U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__885__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__885__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__885__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__885__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__885__Vfuncout))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__892__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__892__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__892__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__892__gamma)));
    __Vfunc_aes_square_gf2p2__893__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__892__gamma));
    __Vfunc_aes_square_gf2p2__893__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__893__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__893__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__893__Vfuncout = __Vfunc_aes_square_gf2p2__893__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__892__b = __Vfunc_aes_square_gf2p2__893__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__892__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__894__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__892__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__894__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__894__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__894__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__894__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__894__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__894__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__895__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__892__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__895__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__895__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__895__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__895__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__895__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__895__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__892__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__892__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__892__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__896__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__896__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__896__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__896__gamma)));
    __Vfunc_aes_square_gf2p2__897__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__896__gamma));
    __Vfunc_aes_square_gf2p2__897__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__897__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__897__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__897__Vfuncout = __Vfunc_aes_square_gf2p2__897__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__896__b = __Vfunc_aes_square_gf2p2__897__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__896__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__898__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__896__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__898__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__898__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__898__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__898__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__898__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__898__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__899__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__896__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__899__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__899__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__899__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__899__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__899__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__899__Vfuncout)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                    << 4U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma));
        }
    } else {
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o = 0U;
    }
    __Vfunc_aes_square_scale_gf2p4_gf2p2__896__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__896__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__896__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__912__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__912__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                            >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__912__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9346274795569056447ull);
    __Vfunc_aes_mul_gf2p2__913__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__912__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__913__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__912__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__913__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__913__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__913__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__913__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__913__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__913__d)));
    __Vfunc_aes_mul_gf2p2__913__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__913__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__913__d)));
    __Vfunc_aes_mul_gf2p2__913__f = ((((IData)(__Vfunc_aes_mul_gf2p2__913__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__913__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__913__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__913__b)));
    __Vfunc_aes_mul_gf2p2__913__Vfuncout = __Vfunc_aes_mul_gf2p2__913__f;
    __Vfunc_aes_mul_gf2p4__912__a = __Vfunc_aes_mul_gf2p2__913__Vfuncout;
    __Vfunc_aes_mul_gf2p2__914__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__912__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__912__delta)));
    __Vfunc_aes_mul_gf2p2__914__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__912__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__912__gamma)));
    __Vfunc_aes_mul_gf2p2__914__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__914__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__914__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__914__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__914__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__914__d)));
    __Vfunc_aes_mul_gf2p2__914__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__914__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__914__d)));
    __Vfunc_aes_mul_gf2p2__914__f = ((((IData)(__Vfunc_aes_mul_gf2p2__914__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__914__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__914__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__914__b)));
    __Vfunc_aes_mul_gf2p2__914__Vfuncout = __Vfunc_aes_mul_gf2p2__914__f;
    __Vfunc_aes_mul_gf2p4__912__b = __Vfunc_aes_mul_gf2p2__914__Vfuncout;
    __Vfunc_aes_mul_gf2p2__915__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__912__delta));
    __Vfunc_aes_mul_gf2p2__915__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__912__gamma));
    __Vfunc_aes_mul_gf2p2__915__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__915__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__915__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__915__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__915__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__915__d)));
    __Vfunc_aes_mul_gf2p2__915__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__915__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__915__d)));
    __Vfunc_aes_mul_gf2p2__915__f = ((((IData)(__Vfunc_aes_mul_gf2p2__915__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__915__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__915__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__915__b)));
    __Vfunc_aes_mul_gf2p2__915__Vfuncout = __Vfunc_aes_mul_gf2p2__915__f;
    __Vfunc_aes_mul_gf2p4__912__c = __Vfunc_aes_mul_gf2p2__915__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__912__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__912__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__916__g 
                        = __Vfunc_aes_mul_gf2p4__912__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__916__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__916__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__916__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__916__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__916__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__916__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__912__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__912__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__917__g 
                        = __Vfunc_aes_mul_gf2p4__912__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__917__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__917__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__917__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__917__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__917__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__917__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__912__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__912__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__912__Vfuncout;
    __Vfunc_aes_mul_gf2p4__918__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__918__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__918__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15972280855075381362ull);
    __Vfunc_aes_mul_gf2p2__919__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__918__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__919__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__918__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__919__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__919__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__919__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__919__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__919__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__919__d)));
    __Vfunc_aes_mul_gf2p2__919__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__919__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__919__d)));
    __Vfunc_aes_mul_gf2p2__919__f = ((((IData)(__Vfunc_aes_mul_gf2p2__919__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__919__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__919__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__919__b)));
    __Vfunc_aes_mul_gf2p2__919__Vfuncout = __Vfunc_aes_mul_gf2p2__919__f;
    __Vfunc_aes_mul_gf2p4__918__a = __Vfunc_aes_mul_gf2p2__919__Vfuncout;
    __Vfunc_aes_mul_gf2p2__920__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__918__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__918__delta)));
    __Vfunc_aes_mul_gf2p2__920__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__918__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__918__gamma)));
    __Vfunc_aes_mul_gf2p2__920__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__920__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__920__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__920__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__920__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__920__d)));
    __Vfunc_aes_mul_gf2p2__920__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__920__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__920__d)));
    __Vfunc_aes_mul_gf2p2__920__f = ((((IData)(__Vfunc_aes_mul_gf2p2__920__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__920__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__920__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__920__b)));
    __Vfunc_aes_mul_gf2p2__920__Vfuncout = __Vfunc_aes_mul_gf2p2__920__f;
    __Vfunc_aes_mul_gf2p4__918__b = __Vfunc_aes_mul_gf2p2__920__Vfuncout;
    __Vfunc_aes_mul_gf2p2__921__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__918__delta));
    __Vfunc_aes_mul_gf2p2__921__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__918__gamma));
    __Vfunc_aes_mul_gf2p2__921__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__921__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__921__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__921__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__921__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__921__d)));
    __Vfunc_aes_mul_gf2p2__921__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__921__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__921__d)));
    __Vfunc_aes_mul_gf2p2__921__f = ((((IData)(__Vfunc_aes_mul_gf2p2__921__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__921__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__921__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__921__b)));
    __Vfunc_aes_mul_gf2p2__921__Vfuncout = __Vfunc_aes_mul_gf2p2__921__f;
    __Vfunc_aes_mul_gf2p4__918__c = __Vfunc_aes_mul_gf2p2__921__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__918__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__918__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__922__g 
                        = __Vfunc_aes_mul_gf2p4__918__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__922__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__922__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__922__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__922__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__922__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__922__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__918__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__918__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__923__g 
                        = __Vfunc_aes_mul_gf2p4__918__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__923__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__923__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__923__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__923__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__923__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__923__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__918__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__918__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__918__Vfuncout;
    __Vfunc_aes_mul_gf2p2__936__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__936__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__936__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__936__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__936__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__936__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__936__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__936__d)));
    __Vfunc_aes_mul_gf2p2__936__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__936__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__936__d)));
    __Vfunc_aes_mul_gf2p2__936__f = ((((IData)(__Vfunc_aes_mul_gf2p2__936__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__936__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__936__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__936__b)));
    __Vfunc_aes_mul_gf2p2__936__Vfuncout = __Vfunc_aes_mul_gf2p2__936__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__936__Vfuncout;
    __Vfunc_aes_mul_gf2p2__937__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__937__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__937__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__937__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__937__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__937__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__937__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__937__d)));
    __Vfunc_aes_mul_gf2p2__937__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__937__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__937__d)));
    __Vfunc_aes_mul_gf2p2__937__f = ((((IData)(__Vfunc_aes_mul_gf2p2__937__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__937__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__937__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__937__b)));
    __Vfunc_aes_mul_gf2p2__937__Vfuncout = __Vfunc_aes_mul_gf2p2__937__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__937__Vfuncout;
    __Vfunc_aes_mul_gf2p2__940__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__940__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__940__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__940__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__940__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__940__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__940__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__940__d)));
    __Vfunc_aes_mul_gf2p2__940__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__940__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__940__d)));
    __Vfunc_aes_mul_gf2p2__940__f = ((((IData)(__Vfunc_aes_mul_gf2p2__940__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__940__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__940__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__940__b)));
    __Vfunc_aes_mul_gf2p2__940__Vfuncout = __Vfunc_aes_mul_gf2p2__940__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__940__Vfuncout;
    __Vfunc_aes_mul_gf2p2__941__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__941__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__941__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__941__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__941__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__941__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__941__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__941__d)));
    __Vfunc_aes_mul_gf2p2__941__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__941__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__941__d)));
    __Vfunc_aes_mul_gf2p2__941__f = ((((IData)(__Vfunc_aes_mul_gf2p2__941__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__941__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__941__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__941__b)));
    __Vfunc_aes_mul_gf2p2__941__Vfuncout = __Vfunc_aes_mul_gf2p2__941__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__941__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__u_aes_sb_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (1U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.data_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? (0x63U ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                     [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                     [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                     [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                     [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                     [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                     [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                     [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                     [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__886__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__886__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__886__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__886__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__886__Vfuncout)))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__887__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__887__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__887__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__887__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__887__Vfuncout))
                             : (0x63U ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                         [0U] = 0x58U;
                        vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                         [1U] = 0x2dU;
                        vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                         [2U] = 0x9eU;
                        vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                         [3U] = 0x0bU;
                        vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                         [4U] = 0xdcU;
                        vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                         [5U] = 4U;
                        vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                         [6U] = 3U;
                        vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                         [7U] = 0x24U;
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_b 
                            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c = 0U;
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                           >> 7U) & 
                                          vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                          [0U])));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                   >> 6U)))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                   >> 5U)))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                   >> 4U)))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                   >> 3U)))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                   >> 2U)))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                   >> 1U)))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                           [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0x03fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 >> 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0x07fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0x0ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0x1ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0x3ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0x7ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                           [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0xfffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0x07fffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0x0ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0x1ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0x3ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0x7ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                           [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0x0ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0x1ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0x3ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0x7ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                           [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                 << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0x1ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0x3ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0x7ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                  [3U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0x3fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0x7fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                  [2U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0x7fffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                  [1U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                  [0U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__888__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__888__vec_b) 
                                                        << 7U))))));
                        vlSelfRef.__Vfunc_aes_mvm__888__Vfuncout 
                            = vlSelfRef.__Vfunc_aes_mvm__888__vec_c;
                    }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__888__Vfuncout)))));
    vlSelfRef.mask_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                            [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                            [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                            [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                            [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                            [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                            [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                            [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                            [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__889__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__889__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__889__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__889__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__889__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__889__Vfuncout))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__890__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__890__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__890__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__890__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__890__Vfuncout))
                             : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__891__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__891__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__891__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__891__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__891__Vfuncout))));
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
    __Vfunc_aes_square_gf2p2__925__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                               >> 2U) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__925__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__925__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__925__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__925__Vfuncout = __Vfunc_aes_square_gf2p2__925__d;
    __Vfunc_aes_scale_omega2_gf2p2__924__g = __Vfunc_aes_square_gf2p2__925__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__924__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__924__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__924__g)));
    __Vfunc_aes_scale_omega2_gf2p2__924__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__924__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__924__Vfuncout;
    __Vfunc_aes_square_gf2p2__927__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                               >> 2U) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__927__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__927__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__927__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__927__Vfuncout = __Vfunc_aes_square_gf2p2__927__d;
    __Vfunc_aes_scale_omega2_gf2p2__926__g = __Vfunc_aes_square_gf2p2__927__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__926__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__926__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__926__g)));
    __Vfunc_aes_scale_omega2_gf2p2__926__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__926__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__926__Vfuncout;
    __Vfunc_aes_mul_gf2p4__942__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__942__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__942__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7211338747183023556ull);
    __Vfunc_aes_mul_gf2p2__943__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__942__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__943__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__942__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__943__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__943__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__943__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__943__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__943__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__943__d)));
    __Vfunc_aes_mul_gf2p2__943__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__943__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__943__d)));
    __Vfunc_aes_mul_gf2p2__943__f = ((((IData)(__Vfunc_aes_mul_gf2p2__943__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__943__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__943__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__943__b)));
    __Vfunc_aes_mul_gf2p2__943__Vfuncout = __Vfunc_aes_mul_gf2p2__943__f;
    __Vfunc_aes_mul_gf2p4__942__a = __Vfunc_aes_mul_gf2p2__943__Vfuncout;
    __Vfunc_aes_mul_gf2p2__944__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__942__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__942__delta)));
    __Vfunc_aes_mul_gf2p2__944__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__942__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__942__gamma)));
    __Vfunc_aes_mul_gf2p2__944__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__944__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__944__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__944__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__944__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__944__d)));
    __Vfunc_aes_mul_gf2p2__944__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__944__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__944__d)));
    __Vfunc_aes_mul_gf2p2__944__f = ((((IData)(__Vfunc_aes_mul_gf2p2__944__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__944__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__944__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__944__b)));
    __Vfunc_aes_mul_gf2p2__944__Vfuncout = __Vfunc_aes_mul_gf2p2__944__f;
    __Vfunc_aes_mul_gf2p4__942__b = __Vfunc_aes_mul_gf2p2__944__Vfuncout;
    __Vfunc_aes_mul_gf2p2__945__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__942__delta));
    __Vfunc_aes_mul_gf2p2__945__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__942__gamma));
    __Vfunc_aes_mul_gf2p2__945__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__945__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__945__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__945__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__945__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__945__d)));
    __Vfunc_aes_mul_gf2p2__945__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__945__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__945__d)));
    __Vfunc_aes_mul_gf2p2__945__f = ((((IData)(__Vfunc_aes_mul_gf2p2__945__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__945__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__945__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__945__b)));
    __Vfunc_aes_mul_gf2p2__945__Vfuncout = __Vfunc_aes_mul_gf2p2__945__f;
    __Vfunc_aes_mul_gf2p4__942__c = __Vfunc_aes_mul_gf2p2__945__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__942__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__942__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__946__g 
                        = __Vfunc_aes_mul_gf2p4__942__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__946__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__946__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__946__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__946__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__946__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__946__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__942__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__942__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__947__g 
                        = __Vfunc_aes_mul_gf2p4__942__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__947__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__947__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__947__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__947__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__947__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__947__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__942__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__942__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__942__Vfuncout;
    __Vfunc_aes_mul_gf2p4__960__delta = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 4U));
    __Vfunc_aes_mul_gf2p4__960__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__960__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5166926265684573653ull);
    __Vfunc_aes_mul_gf2p2__961__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__960__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__961__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__960__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__961__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__961__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__961__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__961__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__961__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__961__d)));
    __Vfunc_aes_mul_gf2p2__961__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__961__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__961__d)));
    __Vfunc_aes_mul_gf2p2__961__f = ((((IData)(__Vfunc_aes_mul_gf2p2__961__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__961__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__961__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__961__b)));
    __Vfunc_aes_mul_gf2p2__961__Vfuncout = __Vfunc_aes_mul_gf2p2__961__f;
    __Vfunc_aes_mul_gf2p4__960__a = __Vfunc_aes_mul_gf2p2__961__Vfuncout;
    __Vfunc_aes_mul_gf2p2__962__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__960__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__960__delta)));
    __Vfunc_aes_mul_gf2p2__962__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__960__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__960__gamma)));
    __Vfunc_aes_mul_gf2p2__962__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__962__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__962__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__962__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__962__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__962__d)));
    __Vfunc_aes_mul_gf2p2__962__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__962__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__962__d)));
    __Vfunc_aes_mul_gf2p2__962__f = ((((IData)(__Vfunc_aes_mul_gf2p2__962__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__962__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__962__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__962__b)));
    __Vfunc_aes_mul_gf2p2__962__Vfuncout = __Vfunc_aes_mul_gf2p2__962__f;
    __Vfunc_aes_mul_gf2p4__960__b = __Vfunc_aes_mul_gf2p2__962__Vfuncout;
    __Vfunc_aes_mul_gf2p2__963__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__960__delta));
    __Vfunc_aes_mul_gf2p2__963__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__960__gamma));
    __Vfunc_aes_mul_gf2p2__963__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__963__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__963__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__963__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__963__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__963__d)));
    __Vfunc_aes_mul_gf2p2__963__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__963__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__963__d)));
    __Vfunc_aes_mul_gf2p2__963__f = ((((IData)(__Vfunc_aes_mul_gf2p2__963__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__963__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__963__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__963__b)));
    __Vfunc_aes_mul_gf2p2__963__Vfuncout = __Vfunc_aes_mul_gf2p2__963__f;
    __Vfunc_aes_mul_gf2p4__960__c = __Vfunc_aes_mul_gf2p2__963__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__960__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__960__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__964__g 
                        = __Vfunc_aes_mul_gf2p4__960__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__964__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__964__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__964__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__964__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__964__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__964__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__960__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__960__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__965__g 
                        = __Vfunc_aes_mul_gf2p4__960__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__965__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__965__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__965__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__965__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__965__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__965__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__960__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__960__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__960__Vfuncout;
    __Vfunc_aes_mul_gf2p4__966__delta = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p4__966__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__966__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10129756639534162083ull);
    __Vfunc_aes_mul_gf2p2__967__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__966__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__967__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__966__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__967__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__967__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__967__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__967__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__967__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__967__d)));
    __Vfunc_aes_mul_gf2p2__967__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__967__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__967__d)));
    __Vfunc_aes_mul_gf2p2__967__f = ((((IData)(__Vfunc_aes_mul_gf2p2__967__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__967__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__967__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__967__b)));
    __Vfunc_aes_mul_gf2p2__967__Vfuncout = __Vfunc_aes_mul_gf2p2__967__f;
    __Vfunc_aes_mul_gf2p4__966__a = __Vfunc_aes_mul_gf2p2__967__Vfuncout;
    __Vfunc_aes_mul_gf2p2__968__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__966__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__966__delta)));
    __Vfunc_aes_mul_gf2p2__968__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__966__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__966__gamma)));
    __Vfunc_aes_mul_gf2p2__968__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__968__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__968__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__968__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__968__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__968__d)));
    __Vfunc_aes_mul_gf2p2__968__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__968__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__968__d)));
    __Vfunc_aes_mul_gf2p2__968__f = ((((IData)(__Vfunc_aes_mul_gf2p2__968__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__968__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__968__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__968__b)));
    __Vfunc_aes_mul_gf2p2__968__Vfuncout = __Vfunc_aes_mul_gf2p2__968__f;
    __Vfunc_aes_mul_gf2p4__966__b = __Vfunc_aes_mul_gf2p2__968__Vfuncout;
    __Vfunc_aes_mul_gf2p2__969__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__966__delta));
    __Vfunc_aes_mul_gf2p2__969__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__966__gamma));
    __Vfunc_aes_mul_gf2p2__969__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__969__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__969__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__969__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__969__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__969__d)));
    __Vfunc_aes_mul_gf2p2__969__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__969__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__969__d)));
    __Vfunc_aes_mul_gf2p2__969__f = ((((IData)(__Vfunc_aes_mul_gf2p2__969__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__969__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__969__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__969__b)));
    __Vfunc_aes_mul_gf2p2__969__Vfuncout = __Vfunc_aes_mul_gf2p2__969__f;
    __Vfunc_aes_mul_gf2p4__966__c = __Vfunc_aes_mul_gf2p2__969__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__966__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__966__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__970__g 
                        = __Vfunc_aes_mul_gf2p4__966__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__970__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__970__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__970__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__970__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__970__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__970__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__966__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__966__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__971__g 
                        = __Vfunc_aes_mul_gf2p4__966__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__971__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__971__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__971__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__971__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__971__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__971__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__966__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__966__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__966__Vfuncout;
    __Vfunc_aes_mul_gf2p4__978__delta = (0x0000000fU 
                                         & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__978__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__978__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15695096145999962369ull);
    __Vfunc_aes_mul_gf2p2__979__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__978__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__979__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__978__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__979__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__979__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__979__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__979__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__979__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__979__d)));
    __Vfunc_aes_mul_gf2p2__979__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__979__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__979__d)));
    __Vfunc_aes_mul_gf2p2__979__f = ((((IData)(__Vfunc_aes_mul_gf2p2__979__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__979__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__979__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__979__b)));
    __Vfunc_aes_mul_gf2p2__979__Vfuncout = __Vfunc_aes_mul_gf2p2__979__f;
    __Vfunc_aes_mul_gf2p4__978__a = __Vfunc_aes_mul_gf2p2__979__Vfuncout;
    __Vfunc_aes_mul_gf2p2__980__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__978__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__978__delta)));
    __Vfunc_aes_mul_gf2p2__980__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__978__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__978__gamma)));
    __Vfunc_aes_mul_gf2p2__980__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__980__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__980__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__980__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__980__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__980__d)));
    __Vfunc_aes_mul_gf2p2__980__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__980__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__980__d)));
    __Vfunc_aes_mul_gf2p2__980__f = ((((IData)(__Vfunc_aes_mul_gf2p2__980__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__980__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__980__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__980__b)));
    __Vfunc_aes_mul_gf2p2__980__Vfuncout = __Vfunc_aes_mul_gf2p2__980__f;
    __Vfunc_aes_mul_gf2p4__978__b = __Vfunc_aes_mul_gf2p2__980__Vfuncout;
    __Vfunc_aes_mul_gf2p2__981__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__978__delta));
    __Vfunc_aes_mul_gf2p2__981__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__978__gamma));
    __Vfunc_aes_mul_gf2p2__981__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__981__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__981__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__981__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__981__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__981__d)));
    __Vfunc_aes_mul_gf2p2__981__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__981__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__981__d)));
    __Vfunc_aes_mul_gf2p2__981__f = ((((IData)(__Vfunc_aes_mul_gf2p2__981__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__981__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__981__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__981__b)));
    __Vfunc_aes_mul_gf2p2__981__Vfuncout = __Vfunc_aes_mul_gf2p2__981__f;
    __Vfunc_aes_mul_gf2p4__978__c = __Vfunc_aes_mul_gf2p2__981__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__978__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__978__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__982__g 
                        = __Vfunc_aes_mul_gf2p4__978__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__982__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__982__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__982__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__982__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__982__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__982__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__978__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__978__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__983__g 
                        = __Vfunc_aes_mul_gf2p4__978__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__983__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__983__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__983__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__983__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__983__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__983__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__978__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__978__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__978__Vfuncout;
    __Vfunc_aes_mul_gf2p4__948__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__948__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__948__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18183982511998249165ull);
    __Vfunc_aes_mul_gf2p2__949__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__948__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__949__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__948__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__949__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__949__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__949__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__949__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__949__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__949__d)));
    __Vfunc_aes_mul_gf2p2__949__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__949__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__949__d)));
    __Vfunc_aes_mul_gf2p2__949__f = ((((IData)(__Vfunc_aes_mul_gf2p2__949__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__949__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__949__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__949__b)));
    __Vfunc_aes_mul_gf2p2__949__Vfuncout = __Vfunc_aes_mul_gf2p2__949__f;
    __Vfunc_aes_mul_gf2p4__948__a = __Vfunc_aes_mul_gf2p2__949__Vfuncout;
    __Vfunc_aes_mul_gf2p2__950__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__948__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__948__delta)));
    __Vfunc_aes_mul_gf2p2__950__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__948__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__948__gamma)));
    __Vfunc_aes_mul_gf2p2__950__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__950__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__950__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__950__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__950__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__950__d)));
    __Vfunc_aes_mul_gf2p2__950__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__950__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__950__d)));
    __Vfunc_aes_mul_gf2p2__950__f = ((((IData)(__Vfunc_aes_mul_gf2p2__950__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__950__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__950__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__950__b)));
    __Vfunc_aes_mul_gf2p2__950__Vfuncout = __Vfunc_aes_mul_gf2p2__950__f;
    __Vfunc_aes_mul_gf2p4__948__b = __Vfunc_aes_mul_gf2p2__950__Vfuncout;
    __Vfunc_aes_mul_gf2p2__951__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__948__delta));
    __Vfunc_aes_mul_gf2p2__951__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__948__gamma));
    __Vfunc_aes_mul_gf2p2__951__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__951__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__951__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__951__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__951__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__951__d)));
    __Vfunc_aes_mul_gf2p2__951__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__951__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__951__d)));
    __Vfunc_aes_mul_gf2p2__951__f = ((((IData)(__Vfunc_aes_mul_gf2p2__951__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__951__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__951__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__951__b)));
    __Vfunc_aes_mul_gf2p2__951__Vfuncout = __Vfunc_aes_mul_gf2p2__951__f;
    __Vfunc_aes_mul_gf2p4__948__c = __Vfunc_aes_mul_gf2p2__951__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__948__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__948__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__952__g 
                        = __Vfunc_aes_mul_gf2p4__948__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__952__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__952__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__952__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__952__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__952__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__952__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__948__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__948__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__953__g 
                        = __Vfunc_aes_mul_gf2p4__948__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__953__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__953__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__953__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__953__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__953__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__953__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__948__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__948__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__948__Vfuncout;
    __Vfunc_aes_mul_gf2p4__954__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__954__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__954__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9676866960275454852ull);
    __Vfunc_aes_mul_gf2p2__955__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__954__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__955__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__954__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__955__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__955__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__955__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__955__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__955__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__955__d)));
    __Vfunc_aes_mul_gf2p2__955__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__955__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__955__d)));
    __Vfunc_aes_mul_gf2p2__955__f = ((((IData)(__Vfunc_aes_mul_gf2p2__955__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__955__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__955__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__955__b)));
    __Vfunc_aes_mul_gf2p2__955__Vfuncout = __Vfunc_aes_mul_gf2p2__955__f;
    __Vfunc_aes_mul_gf2p4__954__a = __Vfunc_aes_mul_gf2p2__955__Vfuncout;
    __Vfunc_aes_mul_gf2p2__956__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__954__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__954__delta)));
    __Vfunc_aes_mul_gf2p2__956__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__954__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__954__gamma)));
    __Vfunc_aes_mul_gf2p2__956__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__956__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__956__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__956__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__956__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__956__d)));
    __Vfunc_aes_mul_gf2p2__956__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__956__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__956__d)));
    __Vfunc_aes_mul_gf2p2__956__f = ((((IData)(__Vfunc_aes_mul_gf2p2__956__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__956__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__956__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__956__b)));
    __Vfunc_aes_mul_gf2p2__956__Vfuncout = __Vfunc_aes_mul_gf2p2__956__f;
    __Vfunc_aes_mul_gf2p4__954__b = __Vfunc_aes_mul_gf2p2__956__Vfuncout;
    __Vfunc_aes_mul_gf2p2__957__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__954__delta));
    __Vfunc_aes_mul_gf2p2__957__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__954__gamma));
    __Vfunc_aes_mul_gf2p2__957__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__957__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__957__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__957__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__957__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__957__d)));
    __Vfunc_aes_mul_gf2p2__957__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__957__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__957__d)));
    __Vfunc_aes_mul_gf2p2__957__f = ((((IData)(__Vfunc_aes_mul_gf2p2__957__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__957__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__957__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__957__b)));
    __Vfunc_aes_mul_gf2p2__957__Vfuncout = __Vfunc_aes_mul_gf2p2__957__f;
    __Vfunc_aes_mul_gf2p4__954__c = __Vfunc_aes_mul_gf2p2__957__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__954__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__954__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__958__g 
                        = __Vfunc_aes_mul_gf2p4__954__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__958__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__958__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__958__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__958__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__958__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__958__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__954__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__954__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__959__g 
                        = __Vfunc_aes_mul_gf2p4__954__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__959__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__959__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__959__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__959__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__959__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__959__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__954__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__954__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__954__Vfuncout;
    __Vfunc_aes_mul_gf2p4__972__delta = (0x0000000fU 
                                         & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__972__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__972__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13989744253751384531ull);
    __Vfunc_aes_mul_gf2p2__973__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__972__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__973__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__972__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__973__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__973__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__973__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__973__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__973__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__973__d)));
    __Vfunc_aes_mul_gf2p2__973__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__973__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__973__d)));
    __Vfunc_aes_mul_gf2p2__973__f = ((((IData)(__Vfunc_aes_mul_gf2p2__973__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__973__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__973__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__973__b)));
    __Vfunc_aes_mul_gf2p2__973__Vfuncout = __Vfunc_aes_mul_gf2p2__973__f;
    __Vfunc_aes_mul_gf2p4__972__a = __Vfunc_aes_mul_gf2p2__973__Vfuncout;
    __Vfunc_aes_mul_gf2p2__974__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__972__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__972__delta)));
    __Vfunc_aes_mul_gf2p2__974__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__972__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__972__gamma)));
    __Vfunc_aes_mul_gf2p2__974__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__974__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__974__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__974__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__974__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__974__d)));
    __Vfunc_aes_mul_gf2p2__974__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__974__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__974__d)));
    __Vfunc_aes_mul_gf2p2__974__f = ((((IData)(__Vfunc_aes_mul_gf2p2__974__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__974__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__974__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__974__b)));
    __Vfunc_aes_mul_gf2p2__974__Vfuncout = __Vfunc_aes_mul_gf2p2__974__f;
    __Vfunc_aes_mul_gf2p4__972__b = __Vfunc_aes_mul_gf2p2__974__Vfuncout;
    __Vfunc_aes_mul_gf2p2__975__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__972__delta));
    __Vfunc_aes_mul_gf2p2__975__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__972__gamma));
    __Vfunc_aes_mul_gf2p2__975__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__975__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__975__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__975__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__975__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__975__d)));
    __Vfunc_aes_mul_gf2p2__975__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__975__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__975__d)));
    __Vfunc_aes_mul_gf2p2__975__f = ((((IData)(__Vfunc_aes_mul_gf2p2__975__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__975__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__975__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__975__b)));
    __Vfunc_aes_mul_gf2p2__975__Vfuncout = __Vfunc_aes_mul_gf2p2__975__f;
    __Vfunc_aes_mul_gf2p4__972__c = __Vfunc_aes_mul_gf2p2__975__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__972__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__972__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__976__g 
                        = __Vfunc_aes_mul_gf2p4__972__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__976__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__976__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__976__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__976__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__976__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__976__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__972__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__972__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__977__g 
                        = __Vfunc_aes_mul_gf2p4__972__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__977__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__977__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__977__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__977__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__977__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__977__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__972__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__972__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__972__Vfuncout;
    __Vfunc_aes_mul_gf2p4__984__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__984__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__984__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1412679003706775232ull);
    __Vfunc_aes_mul_gf2p2__985__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__984__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__985__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__984__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__985__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__985__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__985__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__985__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__985__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__985__d)));
    __Vfunc_aes_mul_gf2p2__985__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__985__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__985__d)));
    __Vfunc_aes_mul_gf2p2__985__f = ((((IData)(__Vfunc_aes_mul_gf2p2__985__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__985__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__985__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__985__b)));
    __Vfunc_aes_mul_gf2p2__985__Vfuncout = __Vfunc_aes_mul_gf2p2__985__f;
    __Vfunc_aes_mul_gf2p4__984__a = __Vfunc_aes_mul_gf2p2__985__Vfuncout;
    __Vfunc_aes_mul_gf2p2__986__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__984__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__984__delta)));
    __Vfunc_aes_mul_gf2p2__986__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__984__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__984__gamma)));
    __Vfunc_aes_mul_gf2p2__986__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__986__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__986__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__986__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__986__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__986__d)));
    __Vfunc_aes_mul_gf2p2__986__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__986__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__986__d)));
    __Vfunc_aes_mul_gf2p2__986__f = ((((IData)(__Vfunc_aes_mul_gf2p2__986__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__986__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__986__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__986__b)));
    __Vfunc_aes_mul_gf2p2__986__Vfuncout = __Vfunc_aes_mul_gf2p2__986__f;
    __Vfunc_aes_mul_gf2p4__984__b = __Vfunc_aes_mul_gf2p2__986__Vfuncout;
    __Vfunc_aes_mul_gf2p2__987__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__984__delta));
    __Vfunc_aes_mul_gf2p2__987__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__984__gamma));
    __Vfunc_aes_mul_gf2p2__987__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__987__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__987__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__987__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__987__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__987__d)));
    __Vfunc_aes_mul_gf2p2__987__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__987__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__987__d)));
    __Vfunc_aes_mul_gf2p2__987__f = ((((IData)(__Vfunc_aes_mul_gf2p2__987__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__987__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__987__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__987__b)));
    __Vfunc_aes_mul_gf2p2__987__Vfuncout = __Vfunc_aes_mul_gf2p2__987__f;
    __Vfunc_aes_mul_gf2p4__984__c = __Vfunc_aes_mul_gf2p2__987__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__984__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__984__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__988__g 
                        = __Vfunc_aes_mul_gf2p4__984__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__988__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__988__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__988__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__988__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__988__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__988__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__984__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__984__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__989__g 
                        = __Vfunc_aes_mul_gf2p4__984__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__989__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__989__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__989__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__989__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__989__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__989__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__984__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__984__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__984__Vfuncout;
    __Vfunc_aes_mul_gf2p2__932__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__932__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__932__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__932__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__932__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__932__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__932__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__932__d)));
    __Vfunc_aes_mul_gf2p2__932__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__932__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__932__d)));
    __Vfunc_aes_mul_gf2p2__932__f = ((((IData)(__Vfunc_aes_mul_gf2p2__932__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__932__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__932__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__932__b)));
    __Vfunc_aes_mul_gf2p2__932__Vfuncout = __Vfunc_aes_mul_gf2p2__932__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__932__Vfuncout;
    __Vfunc_aes_mul_gf2p2__933__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__933__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__933__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__933__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__933__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__933__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__933__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__933__d)));
    __Vfunc_aes_mul_gf2p2__933__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__933__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__933__d)));
    __Vfunc_aes_mul_gf2p2__933__f = ((((IData)(__Vfunc_aes_mul_gf2p2__933__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__933__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__933__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__933__b)));
    __Vfunc_aes_mul_gf2p2__933__Vfuncout = __Vfunc_aes_mul_gf2p2__933__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__933__Vfuncout;
    __Vfunc_aes_square_gf2p2__928__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                              ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                 >> 2U)));
    __Vfunc_aes_square_gf2p2__928__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__928__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__928__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__928__Vfuncout = __Vfunc_aes_square_gf2p2__928__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__928__Vfuncout;
    __Vfunc_aes_square_gf2p2__929__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                              ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__929__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__929__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__929__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__929__Vfuncout = __Vfunc_aes_square_gf2p2__929__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__929__Vfuncout;
}

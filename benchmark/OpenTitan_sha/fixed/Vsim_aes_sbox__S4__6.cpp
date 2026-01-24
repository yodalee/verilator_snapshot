// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__1(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__570__Vfuncout;
    __Vfunc_aes_mul_gf2p4__570__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__570__gamma;
    __Vfunc_aes_mul_gf2p4__570__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__570__delta;
    __Vfunc_aes_mul_gf2p4__570__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__570__a;
    __Vfunc_aes_mul_gf2p4__570__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__570__b;
    __Vfunc_aes_mul_gf2p4__570__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__570__c;
    __Vfunc_aes_mul_gf2p4__570__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__571__Vfuncout;
    __Vfunc_aes_mul_gf2p2__571__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__571__g;
    __Vfunc_aes_mul_gf2p2__571__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__571__d;
    __Vfunc_aes_mul_gf2p2__571__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__571__f;
    __Vfunc_aes_mul_gf2p2__571__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__571__a;
    __Vfunc_aes_mul_gf2p2__571__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__571__b;
    __Vfunc_aes_mul_gf2p2__571__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__571__c;
    __Vfunc_aes_mul_gf2p2__571__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__572__Vfuncout;
    __Vfunc_aes_mul_gf2p2__572__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__572__g;
    __Vfunc_aes_mul_gf2p2__572__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__572__d;
    __Vfunc_aes_mul_gf2p2__572__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__572__f;
    __Vfunc_aes_mul_gf2p2__572__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__572__a;
    __Vfunc_aes_mul_gf2p2__572__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__572__b;
    __Vfunc_aes_mul_gf2p2__572__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__572__c;
    __Vfunc_aes_mul_gf2p2__572__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__573__Vfuncout;
    __Vfunc_aes_mul_gf2p2__573__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__573__g;
    __Vfunc_aes_mul_gf2p2__573__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__573__d;
    __Vfunc_aes_mul_gf2p2__573__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__573__f;
    __Vfunc_aes_mul_gf2p2__573__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__573__a;
    __Vfunc_aes_mul_gf2p2__573__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__573__b;
    __Vfunc_aes_mul_gf2p2__573__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__573__c;
    __Vfunc_aes_mul_gf2p2__573__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__576__Vfuncout;
    __Vfunc_aes_mul_gf2p4__576__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__576__gamma;
    __Vfunc_aes_mul_gf2p4__576__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__576__delta;
    __Vfunc_aes_mul_gf2p4__576__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__576__a;
    __Vfunc_aes_mul_gf2p4__576__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__576__b;
    __Vfunc_aes_mul_gf2p4__576__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__576__c;
    __Vfunc_aes_mul_gf2p4__576__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__577__Vfuncout;
    __Vfunc_aes_mul_gf2p2__577__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__577__g;
    __Vfunc_aes_mul_gf2p2__577__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__577__d;
    __Vfunc_aes_mul_gf2p2__577__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__577__f;
    __Vfunc_aes_mul_gf2p2__577__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__577__a;
    __Vfunc_aes_mul_gf2p2__577__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__577__b;
    __Vfunc_aes_mul_gf2p2__577__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__577__c;
    __Vfunc_aes_mul_gf2p2__577__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__578__Vfuncout;
    __Vfunc_aes_mul_gf2p2__578__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__578__g;
    __Vfunc_aes_mul_gf2p2__578__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__578__d;
    __Vfunc_aes_mul_gf2p2__578__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__578__f;
    __Vfunc_aes_mul_gf2p2__578__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__578__a;
    __Vfunc_aes_mul_gf2p2__578__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__578__b;
    __Vfunc_aes_mul_gf2p2__578__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__578__c;
    __Vfunc_aes_mul_gf2p2__578__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__579__Vfuncout;
    __Vfunc_aes_mul_gf2p2__579__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__579__g;
    __Vfunc_aes_mul_gf2p2__579__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__579__d;
    __Vfunc_aes_mul_gf2p2__579__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__579__f;
    __Vfunc_aes_mul_gf2p2__579__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__579__a;
    __Vfunc_aes_mul_gf2p2__579__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__579__b;
    __Vfunc_aes_mul_gf2p2__579__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__579__c;
    __Vfunc_aes_mul_gf2p2__579__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__600__Vfuncout;
    __Vfunc_aes_mul_gf2p2__600__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__600__g;
    __Vfunc_aes_mul_gf2p2__600__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__600__d;
    __Vfunc_aes_mul_gf2p2__600__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__600__f;
    __Vfunc_aes_mul_gf2p2__600__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__600__a;
    __Vfunc_aes_mul_gf2p2__600__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__600__b;
    __Vfunc_aes_mul_gf2p2__600__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__600__c;
    __Vfunc_aes_mul_gf2p2__600__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__601__Vfuncout;
    __Vfunc_aes_mul_gf2p2__601__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__601__g;
    __Vfunc_aes_mul_gf2p2__601__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__601__d;
    __Vfunc_aes_mul_gf2p2__601__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__601__f;
    __Vfunc_aes_mul_gf2p2__601__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__601__a;
    __Vfunc_aes_mul_gf2p2__601__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__601__b;
    __Vfunc_aes_mul_gf2p2__601__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__601__c;
    __Vfunc_aes_mul_gf2p2__601__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__604__Vfuncout;
    __Vfunc_aes_mul_gf2p2__604__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__604__g;
    __Vfunc_aes_mul_gf2p2__604__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__604__d;
    __Vfunc_aes_mul_gf2p2__604__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__604__f;
    __Vfunc_aes_mul_gf2p2__604__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__604__a;
    __Vfunc_aes_mul_gf2p2__604__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__604__b;
    __Vfunc_aes_mul_gf2p2__604__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__604__c;
    __Vfunc_aes_mul_gf2p2__604__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__605__Vfuncout;
    __Vfunc_aes_mul_gf2p2__605__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__605__g;
    __Vfunc_aes_mul_gf2p2__605__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__605__d;
    __Vfunc_aes_mul_gf2p2__605__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__605__f;
    __Vfunc_aes_mul_gf2p2__605__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__605__a;
    __Vfunc_aes_mul_gf2p2__605__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__605__b;
    __Vfunc_aes_mul_gf2p2__605__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__605__c;
    __Vfunc_aes_mul_gf2p2__605__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__608__Vfuncout;
    __Vfunc_aes_mul_gf2p2__608__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__608__g;
    __Vfunc_aes_mul_gf2p2__608__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__608__d;
    __Vfunc_aes_mul_gf2p2__608__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__608__f;
    __Vfunc_aes_mul_gf2p2__608__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__608__a;
    __Vfunc_aes_mul_gf2p2__608__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__608__b;
    __Vfunc_aes_mul_gf2p2__608__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__608__c;
    __Vfunc_aes_mul_gf2p2__608__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__609__Vfuncout;
    __Vfunc_aes_mul_gf2p2__609__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__609__g;
    __Vfunc_aes_mul_gf2p2__609__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__609__d;
    __Vfunc_aes_mul_gf2p2__609__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__609__f;
    __Vfunc_aes_mul_gf2p2__609__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__609__a;
    __Vfunc_aes_mul_gf2p2__609__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__609__b;
    __Vfunc_aes_mul_gf2p2__609__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__609__c;
    __Vfunc_aes_mul_gf2p2__609__c = 0;
    // Body
    __Vfunc_aes_mul_gf2p2__600__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__600__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__600__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__600__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__600__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__600__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__600__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__600__d)));
    __Vfunc_aes_mul_gf2p2__600__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__600__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__600__d)));
    __Vfunc_aes_mul_gf2p2__600__f = ((((IData)(__Vfunc_aes_mul_gf2p2__600__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__600__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__600__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__600__b)));
    __Vfunc_aes_mul_gf2p2__600__Vfuncout = __Vfunc_aes_mul_gf2p2__600__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__600__Vfuncout;
    __Vfunc_aes_mul_gf2p2__601__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__601__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__601__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__601__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__601__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__601__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__601__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__601__d)));
    __Vfunc_aes_mul_gf2p2__601__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__601__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__601__d)));
    __Vfunc_aes_mul_gf2p2__601__f = ((((IData)(__Vfunc_aes_mul_gf2p2__601__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__601__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__601__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__601__b)));
    __Vfunc_aes_mul_gf2p2__601__Vfuncout = __Vfunc_aes_mul_gf2p2__601__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__601__Vfuncout;
    __Vfunc_aes_mul_gf2p2__604__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                                           >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__604__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__604__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__604__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__604__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__604__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__604__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__604__d)));
    __Vfunc_aes_mul_gf2p2__604__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__604__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__604__d)));
    __Vfunc_aes_mul_gf2p2__604__f = ((((IData)(__Vfunc_aes_mul_gf2p2__604__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__604__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__604__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__604__b)));
    __Vfunc_aes_mul_gf2p2__604__Vfuncout = __Vfunc_aes_mul_gf2p2__604__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__604__Vfuncout;
    __Vfunc_aes_mul_gf2p2__605__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                                           >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__605__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__605__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__605__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__605__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__605__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__605__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__605__d)));
    __Vfunc_aes_mul_gf2p2__605__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__605__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__605__d)));
    __Vfunc_aes_mul_gf2p2__605__f = ((((IData)(__Vfunc_aes_mul_gf2p2__605__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__605__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__605__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__605__b)));
    __Vfunc_aes_mul_gf2p2__605__Vfuncout = __Vfunc_aes_mul_gf2p2__605__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__605__Vfuncout;
    __Vfunc_aes_mul_gf2p4__570__delta = (0x0000000fU 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__);
    __Vfunc_aes_mul_gf2p4__570__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                            >> 4U));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__570__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6097861444244117747ull);
    __Vfunc_aes_mul_gf2p2__571__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__570__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__571__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__570__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__571__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__571__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__571__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__571__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__571__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__571__d)));
    __Vfunc_aes_mul_gf2p2__571__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__571__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__571__d)));
    __Vfunc_aes_mul_gf2p2__571__f = ((((IData)(__Vfunc_aes_mul_gf2p2__571__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__571__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__571__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__571__b)));
    __Vfunc_aes_mul_gf2p2__571__Vfuncout = __Vfunc_aes_mul_gf2p2__571__f;
    __Vfunc_aes_mul_gf2p4__570__a = __Vfunc_aes_mul_gf2p2__571__Vfuncout;
    __Vfunc_aes_mul_gf2p2__572__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__570__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__570__delta)));
    __Vfunc_aes_mul_gf2p2__572__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__570__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__570__gamma)));
    __Vfunc_aes_mul_gf2p2__572__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__572__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__572__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__572__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__572__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__572__d)));
    __Vfunc_aes_mul_gf2p2__572__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__572__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__572__d)));
    __Vfunc_aes_mul_gf2p2__572__f = ((((IData)(__Vfunc_aes_mul_gf2p2__572__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__572__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__572__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__572__b)));
    __Vfunc_aes_mul_gf2p2__572__Vfuncout = __Vfunc_aes_mul_gf2p2__572__f;
    __Vfunc_aes_mul_gf2p4__570__b = __Vfunc_aes_mul_gf2p2__572__Vfuncout;
    __Vfunc_aes_mul_gf2p2__573__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__570__delta));
    __Vfunc_aes_mul_gf2p2__573__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__570__gamma));
    __Vfunc_aes_mul_gf2p2__573__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__573__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__573__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__573__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__573__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__573__d)));
    __Vfunc_aes_mul_gf2p2__573__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__573__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__573__d)));
    __Vfunc_aes_mul_gf2p2__573__f = ((((IData)(__Vfunc_aes_mul_gf2p2__573__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__573__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__573__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__573__b)));
    __Vfunc_aes_mul_gf2p2__573__Vfuncout = __Vfunc_aes_mul_gf2p2__573__f;
    __Vfunc_aes_mul_gf2p4__570__c = __Vfunc_aes_mul_gf2p2__573__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__570__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__570__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__574__g 
                        = __Vfunc_aes_mul_gf2p4__570__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__574__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__574__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__574__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__574__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__574__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__574__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__570__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__570__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__575__g 
                        = __Vfunc_aes_mul_gf2p4__570__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__575__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__575__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__575__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__575__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__575__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__575__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__570__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__570__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__570__Vfuncout;
    __Vfunc_aes_mul_gf2p4__576__delta = (0x0000000fU 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__);
    __Vfunc_aes_mul_gf2p4__576__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__576__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5880084540988403693ull);
    __Vfunc_aes_mul_gf2p2__577__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__576__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__577__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__576__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__577__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__577__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__577__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__577__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__577__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__577__d)));
    __Vfunc_aes_mul_gf2p2__577__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__577__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__577__d)));
    __Vfunc_aes_mul_gf2p2__577__f = ((((IData)(__Vfunc_aes_mul_gf2p2__577__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__577__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__577__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__577__b)));
    __Vfunc_aes_mul_gf2p2__577__Vfuncout = __Vfunc_aes_mul_gf2p2__577__f;
    __Vfunc_aes_mul_gf2p4__576__a = __Vfunc_aes_mul_gf2p2__577__Vfuncout;
    __Vfunc_aes_mul_gf2p2__578__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__576__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__576__delta)));
    __Vfunc_aes_mul_gf2p2__578__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__576__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__576__gamma)));
    __Vfunc_aes_mul_gf2p2__578__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__578__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__578__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__578__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__578__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__578__d)));
    __Vfunc_aes_mul_gf2p2__578__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__578__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__578__d)));
    __Vfunc_aes_mul_gf2p2__578__f = ((((IData)(__Vfunc_aes_mul_gf2p2__578__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__578__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__578__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__578__b)));
    __Vfunc_aes_mul_gf2p2__578__Vfuncout = __Vfunc_aes_mul_gf2p2__578__f;
    __Vfunc_aes_mul_gf2p4__576__b = __Vfunc_aes_mul_gf2p2__578__Vfuncout;
    __Vfunc_aes_mul_gf2p2__579__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__576__delta));
    __Vfunc_aes_mul_gf2p2__579__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__576__gamma));
    __Vfunc_aes_mul_gf2p2__579__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__579__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__579__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__579__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__579__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__579__d)));
    __Vfunc_aes_mul_gf2p2__579__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__579__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__579__d)));
    __Vfunc_aes_mul_gf2p2__579__f = ((((IData)(__Vfunc_aes_mul_gf2p2__579__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__579__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__579__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__579__b)));
    __Vfunc_aes_mul_gf2p2__579__Vfuncout = __Vfunc_aes_mul_gf2p2__579__f;
    __Vfunc_aes_mul_gf2p4__576__c = __Vfunc_aes_mul_gf2p2__579__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__576__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__576__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__580__g 
                        = __Vfunc_aes_mul_gf2p4__576__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__580__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__580__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__580__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__580__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__580__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__580__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__576__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__576__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__581__g 
                        = __Vfunc_aes_mul_gf2p4__576__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__581__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__581__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__581__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__581__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__581__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__581__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__576__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__576__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__576__Vfuncout;
    __Vfunc_aes_mul_gf2p2__608__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                                           >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__608__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega;
    __Vfunc_aes_mul_gf2p2__608__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__608__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__608__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__608__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__608__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__608__d)));
    __Vfunc_aes_mul_gf2p2__608__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__608__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__608__d)));
    __Vfunc_aes_mul_gf2p2__608__f = ((((IData)(__Vfunc_aes_mul_gf2p2__608__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__608__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__608__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__608__b)));
    __Vfunc_aes_mul_gf2p2__608__Vfuncout = __Vfunc_aes_mul_gf2p2__608__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__608__Vfuncout;
    __Vfunc_aes_mul_gf2p2__609__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__167__03a140__KET__ 
                                           >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__609__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega;
    __Vfunc_aes_mul_gf2p2__609__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__609__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__609__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__609__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__609__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__609__d)));
    __Vfunc_aes_mul_gf2p2__609__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__609__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__609__d)));
    __Vfunc_aes_mul_gf2p2__609__f = ((((IData)(__Vfunc_aes_mul_gf2p2__609__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__609__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__609__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__609__b)));
    __Vfunc_aes_mul_gf2p2__609__Vfuncout = __Vfunc_aes_mul_gf2p2__609__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__609__Vfuncout;
}

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__672__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__672__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__672__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__672__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__672__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__673__Vfuncout;
    __Vfunc_aes_square_gf2p2__673__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__673__g;
    __Vfunc_aes_square_gf2p2__673__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__673__d;
    __Vfunc_aes_square_gf2p2__673__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__676__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__676__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__676__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__676__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__676__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__677__Vfuncout;
    __Vfunc_aes_square_gf2p2__677__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__677__g;
    __Vfunc_aes_square_gf2p2__677__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__677__d;
    __Vfunc_aes_square_gf2p2__677__d = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__692__Vfuncout;
    __Vfunc_aes_mul_gf2p4__692__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__692__gamma;
    __Vfunc_aes_mul_gf2p4__692__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__692__delta;
    __Vfunc_aes_mul_gf2p4__692__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__692__a;
    __Vfunc_aes_mul_gf2p4__692__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__692__b;
    __Vfunc_aes_mul_gf2p4__692__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__692__c;
    __Vfunc_aes_mul_gf2p4__692__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__693__Vfuncout;
    __Vfunc_aes_mul_gf2p2__693__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__693__g;
    __Vfunc_aes_mul_gf2p2__693__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__693__d;
    __Vfunc_aes_mul_gf2p2__693__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__693__f;
    __Vfunc_aes_mul_gf2p2__693__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__693__a;
    __Vfunc_aes_mul_gf2p2__693__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__693__b;
    __Vfunc_aes_mul_gf2p2__693__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__693__c;
    __Vfunc_aes_mul_gf2p2__693__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__694__Vfuncout;
    __Vfunc_aes_mul_gf2p2__694__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__694__g;
    __Vfunc_aes_mul_gf2p2__694__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__694__d;
    __Vfunc_aes_mul_gf2p2__694__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__694__f;
    __Vfunc_aes_mul_gf2p2__694__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__694__a;
    __Vfunc_aes_mul_gf2p2__694__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__694__b;
    __Vfunc_aes_mul_gf2p2__694__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__694__c;
    __Vfunc_aes_mul_gf2p2__694__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__695__Vfuncout;
    __Vfunc_aes_mul_gf2p2__695__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__695__g;
    __Vfunc_aes_mul_gf2p2__695__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__695__d;
    __Vfunc_aes_mul_gf2p2__695__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__695__f;
    __Vfunc_aes_mul_gf2p2__695__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__695__a;
    __Vfunc_aes_mul_gf2p2__695__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__695__b;
    __Vfunc_aes_mul_gf2p2__695__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__695__c;
    __Vfunc_aes_mul_gf2p2__695__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__698__Vfuncout;
    __Vfunc_aes_mul_gf2p4__698__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__698__gamma;
    __Vfunc_aes_mul_gf2p4__698__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__698__delta;
    __Vfunc_aes_mul_gf2p4__698__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__698__a;
    __Vfunc_aes_mul_gf2p4__698__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__698__b;
    __Vfunc_aes_mul_gf2p4__698__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__698__c;
    __Vfunc_aes_mul_gf2p4__698__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__699__Vfuncout;
    __Vfunc_aes_mul_gf2p2__699__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__699__g;
    __Vfunc_aes_mul_gf2p2__699__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__699__d;
    __Vfunc_aes_mul_gf2p2__699__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__699__f;
    __Vfunc_aes_mul_gf2p2__699__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__699__a;
    __Vfunc_aes_mul_gf2p2__699__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__699__b;
    __Vfunc_aes_mul_gf2p2__699__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__699__c;
    __Vfunc_aes_mul_gf2p2__699__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__700__Vfuncout;
    __Vfunc_aes_mul_gf2p2__700__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__700__g;
    __Vfunc_aes_mul_gf2p2__700__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__700__d;
    __Vfunc_aes_mul_gf2p2__700__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__700__f;
    __Vfunc_aes_mul_gf2p2__700__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__700__a;
    __Vfunc_aes_mul_gf2p2__700__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__700__b;
    __Vfunc_aes_mul_gf2p2__700__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__700__c;
    __Vfunc_aes_mul_gf2p2__700__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__701__Vfuncout;
    __Vfunc_aes_mul_gf2p2__701__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__701__g;
    __Vfunc_aes_mul_gf2p2__701__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__701__d;
    __Vfunc_aes_mul_gf2p2__701__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__701__f;
    __Vfunc_aes_mul_gf2p2__701__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__701__a;
    __Vfunc_aes_mul_gf2p2__701__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__701__b;
    __Vfunc_aes_mul_gf2p2__701__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__701__c;
    __Vfunc_aes_mul_gf2p2__701__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__704__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__704__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__704__g;
    __Vfunc_aes_scale_omega2_gf2p2__704__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__704__d;
    __Vfunc_aes_scale_omega2_gf2p2__704__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__705__Vfuncout;
    __Vfunc_aes_square_gf2p2__705__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__705__g;
    __Vfunc_aes_square_gf2p2__705__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__705__d;
    __Vfunc_aes_square_gf2p2__705__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__706__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__706__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__706__g;
    __Vfunc_aes_scale_omega2_gf2p2__706__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__706__d;
    __Vfunc_aes_scale_omega2_gf2p2__706__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__707__Vfuncout;
    __Vfunc_aes_square_gf2p2__707__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__707__g;
    __Vfunc_aes_square_gf2p2__707__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__707__d;
    __Vfunc_aes_square_gf2p2__707__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__708__Vfuncout;
    __Vfunc_aes_square_gf2p2__708__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__708__g;
    __Vfunc_aes_square_gf2p2__708__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__708__d;
    __Vfunc_aes_square_gf2p2__708__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__709__Vfuncout;
    __Vfunc_aes_square_gf2p2__709__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__709__g;
    __Vfunc_aes_square_gf2p2__709__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__709__d;
    __Vfunc_aes_square_gf2p2__709__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__712__Vfuncout;
    __Vfunc_aes_mul_gf2p2__712__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__712__g;
    __Vfunc_aes_mul_gf2p2__712__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__712__d;
    __Vfunc_aes_mul_gf2p2__712__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__712__f;
    __Vfunc_aes_mul_gf2p2__712__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__712__a;
    __Vfunc_aes_mul_gf2p2__712__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__712__b;
    __Vfunc_aes_mul_gf2p2__712__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__712__c;
    __Vfunc_aes_mul_gf2p2__712__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__713__Vfuncout;
    __Vfunc_aes_mul_gf2p2__713__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__713__g;
    __Vfunc_aes_mul_gf2p2__713__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__713__d;
    __Vfunc_aes_mul_gf2p2__713__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__713__f;
    __Vfunc_aes_mul_gf2p2__713__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__713__a;
    __Vfunc_aes_mul_gf2p2__713__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__713__b;
    __Vfunc_aes_mul_gf2p2__713__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__713__c;
    __Vfunc_aes_mul_gf2p2__713__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__716__Vfuncout;
    __Vfunc_aes_mul_gf2p2__716__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__716__g;
    __Vfunc_aes_mul_gf2p2__716__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__716__d;
    __Vfunc_aes_mul_gf2p2__716__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__716__f;
    __Vfunc_aes_mul_gf2p2__716__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__716__a;
    __Vfunc_aes_mul_gf2p2__716__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__716__b;
    __Vfunc_aes_mul_gf2p2__716__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__716__c;
    __Vfunc_aes_mul_gf2p2__716__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__717__Vfuncout;
    __Vfunc_aes_mul_gf2p2__717__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__717__g;
    __Vfunc_aes_mul_gf2p2__717__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__717__d;
    __Vfunc_aes_mul_gf2p2__717__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__717__f;
    __Vfunc_aes_mul_gf2p2__717__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__717__a;
    __Vfunc_aes_mul_gf2p2__717__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__717__b;
    __Vfunc_aes_mul_gf2p2__717__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__717__c;
    __Vfunc_aes_mul_gf2p2__717__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__720__Vfuncout;
    __Vfunc_aes_mul_gf2p2__720__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__720__g;
    __Vfunc_aes_mul_gf2p2__720__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__720__d;
    __Vfunc_aes_mul_gf2p2__720__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__720__f;
    __Vfunc_aes_mul_gf2p2__720__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__720__a;
    __Vfunc_aes_mul_gf2p2__720__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__720__b;
    __Vfunc_aes_mul_gf2p2__720__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__720__c;
    __Vfunc_aes_mul_gf2p2__720__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__721__Vfuncout;
    __Vfunc_aes_mul_gf2p2__721__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__721__g;
    __Vfunc_aes_mul_gf2p2__721__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__721__d;
    __Vfunc_aes_mul_gf2p2__721__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__721__f;
    __Vfunc_aes_mul_gf2p2__721__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__721__a;
    __Vfunc_aes_mul_gf2p2__721__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__721__b;
    __Vfunc_aes_mul_gf2p2__721__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__721__c;
    __Vfunc_aes_mul_gf2p2__721__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__722__Vfuncout;
    __Vfunc_aes_mul_gf2p4__722__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__722__gamma;
    __Vfunc_aes_mul_gf2p4__722__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__722__delta;
    __Vfunc_aes_mul_gf2p4__722__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__722__a;
    __Vfunc_aes_mul_gf2p4__722__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__722__b;
    __Vfunc_aes_mul_gf2p4__722__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__722__c;
    __Vfunc_aes_mul_gf2p4__722__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__723__Vfuncout;
    __Vfunc_aes_mul_gf2p2__723__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__723__g;
    __Vfunc_aes_mul_gf2p2__723__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__723__d;
    __Vfunc_aes_mul_gf2p2__723__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__723__f;
    __Vfunc_aes_mul_gf2p2__723__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__723__a;
    __Vfunc_aes_mul_gf2p2__723__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__723__b;
    __Vfunc_aes_mul_gf2p2__723__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__723__c;
    __Vfunc_aes_mul_gf2p2__723__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__724__Vfuncout;
    __Vfunc_aes_mul_gf2p2__724__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__724__g;
    __Vfunc_aes_mul_gf2p2__724__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__724__d;
    __Vfunc_aes_mul_gf2p2__724__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__724__f;
    __Vfunc_aes_mul_gf2p2__724__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__724__a;
    __Vfunc_aes_mul_gf2p2__724__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__724__b;
    __Vfunc_aes_mul_gf2p2__724__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__724__c;
    __Vfunc_aes_mul_gf2p2__724__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__725__Vfuncout;
    __Vfunc_aes_mul_gf2p2__725__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__725__g;
    __Vfunc_aes_mul_gf2p2__725__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__725__d;
    __Vfunc_aes_mul_gf2p2__725__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__725__f;
    __Vfunc_aes_mul_gf2p2__725__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__725__a;
    __Vfunc_aes_mul_gf2p2__725__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__725__b;
    __Vfunc_aes_mul_gf2p2__725__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__725__c;
    __Vfunc_aes_mul_gf2p2__725__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__728__Vfuncout;
    __Vfunc_aes_mul_gf2p4__728__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__728__gamma;
    __Vfunc_aes_mul_gf2p4__728__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__728__delta;
    __Vfunc_aes_mul_gf2p4__728__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__728__a;
    __Vfunc_aes_mul_gf2p4__728__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__728__b;
    __Vfunc_aes_mul_gf2p4__728__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__728__c;
    __Vfunc_aes_mul_gf2p4__728__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__729__Vfuncout;
    __Vfunc_aes_mul_gf2p2__729__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__729__g;
    __Vfunc_aes_mul_gf2p2__729__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__729__d;
    __Vfunc_aes_mul_gf2p2__729__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__729__f;
    __Vfunc_aes_mul_gf2p2__729__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__729__a;
    __Vfunc_aes_mul_gf2p2__729__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__729__b;
    __Vfunc_aes_mul_gf2p2__729__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__729__c;
    __Vfunc_aes_mul_gf2p2__729__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__730__Vfuncout;
    __Vfunc_aes_mul_gf2p2__730__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__730__g;
    __Vfunc_aes_mul_gf2p2__730__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__730__d;
    __Vfunc_aes_mul_gf2p2__730__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__730__f;
    __Vfunc_aes_mul_gf2p2__730__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__730__a;
    __Vfunc_aes_mul_gf2p2__730__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__730__b;
    __Vfunc_aes_mul_gf2p2__730__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__730__c;
    __Vfunc_aes_mul_gf2p2__730__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__731__Vfuncout;
    __Vfunc_aes_mul_gf2p2__731__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__731__g;
    __Vfunc_aes_mul_gf2p2__731__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__731__d;
    __Vfunc_aes_mul_gf2p2__731__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__731__f;
    __Vfunc_aes_mul_gf2p2__731__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__731__a;
    __Vfunc_aes_mul_gf2p2__731__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__731__b;
    __Vfunc_aes_mul_gf2p2__731__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__731__c;
    __Vfunc_aes_mul_gf2p2__731__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__734__Vfuncout;
    __Vfunc_aes_mul_gf2p4__734__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__734__gamma;
    __Vfunc_aes_mul_gf2p4__734__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__734__delta;
    __Vfunc_aes_mul_gf2p4__734__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__734__a;
    __Vfunc_aes_mul_gf2p4__734__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__734__b;
    __Vfunc_aes_mul_gf2p4__734__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__734__c;
    __Vfunc_aes_mul_gf2p4__734__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__735__Vfuncout;
    __Vfunc_aes_mul_gf2p2__735__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__735__g;
    __Vfunc_aes_mul_gf2p2__735__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__735__d;
    __Vfunc_aes_mul_gf2p2__735__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__735__f;
    __Vfunc_aes_mul_gf2p2__735__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__735__a;
    __Vfunc_aes_mul_gf2p2__735__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__735__b;
    __Vfunc_aes_mul_gf2p2__735__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__735__c;
    __Vfunc_aes_mul_gf2p2__735__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__736__Vfuncout;
    __Vfunc_aes_mul_gf2p2__736__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__736__g;
    __Vfunc_aes_mul_gf2p2__736__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__736__d;
    __Vfunc_aes_mul_gf2p2__736__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__736__f;
    __Vfunc_aes_mul_gf2p2__736__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__736__a;
    __Vfunc_aes_mul_gf2p2__736__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__736__b;
    __Vfunc_aes_mul_gf2p2__736__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__736__c;
    __Vfunc_aes_mul_gf2p2__736__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__737__Vfuncout;
    __Vfunc_aes_mul_gf2p2__737__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__737__g;
    __Vfunc_aes_mul_gf2p2__737__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__737__d;
    __Vfunc_aes_mul_gf2p2__737__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__737__f;
    __Vfunc_aes_mul_gf2p2__737__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__737__a;
    __Vfunc_aes_mul_gf2p2__737__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__737__b;
    __Vfunc_aes_mul_gf2p2__737__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__737__c;
    __Vfunc_aes_mul_gf2p2__737__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__740__Vfuncout;
    __Vfunc_aes_mul_gf2p4__740__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__740__gamma;
    __Vfunc_aes_mul_gf2p4__740__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__740__delta;
    __Vfunc_aes_mul_gf2p4__740__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__740__a;
    __Vfunc_aes_mul_gf2p4__740__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__740__b;
    __Vfunc_aes_mul_gf2p4__740__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__740__c;
    __Vfunc_aes_mul_gf2p4__740__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__741__Vfuncout;
    __Vfunc_aes_mul_gf2p2__741__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__741__g;
    __Vfunc_aes_mul_gf2p2__741__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__741__d;
    __Vfunc_aes_mul_gf2p2__741__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__741__f;
    __Vfunc_aes_mul_gf2p2__741__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__741__a;
    __Vfunc_aes_mul_gf2p2__741__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__741__b;
    __Vfunc_aes_mul_gf2p2__741__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__741__c;
    __Vfunc_aes_mul_gf2p2__741__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__742__Vfuncout;
    __Vfunc_aes_mul_gf2p2__742__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__742__g;
    __Vfunc_aes_mul_gf2p2__742__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__742__d;
    __Vfunc_aes_mul_gf2p2__742__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__742__f;
    __Vfunc_aes_mul_gf2p2__742__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__742__a;
    __Vfunc_aes_mul_gf2p2__742__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__742__b;
    __Vfunc_aes_mul_gf2p2__742__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__742__c;
    __Vfunc_aes_mul_gf2p2__742__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__743__Vfuncout;
    __Vfunc_aes_mul_gf2p2__743__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__743__g;
    __Vfunc_aes_mul_gf2p2__743__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__743__d;
    __Vfunc_aes_mul_gf2p2__743__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__743__f;
    __Vfunc_aes_mul_gf2p2__743__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__743__a;
    __Vfunc_aes_mul_gf2p2__743__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__743__b;
    __Vfunc_aes_mul_gf2p2__743__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__743__c;
    __Vfunc_aes_mul_gf2p2__743__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__746__Vfuncout;
    __Vfunc_aes_mul_gf2p4__746__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__746__gamma;
    __Vfunc_aes_mul_gf2p4__746__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__746__delta;
    __Vfunc_aes_mul_gf2p4__746__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__746__a;
    __Vfunc_aes_mul_gf2p4__746__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__746__b;
    __Vfunc_aes_mul_gf2p4__746__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__746__c;
    __Vfunc_aes_mul_gf2p4__746__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__747__Vfuncout;
    __Vfunc_aes_mul_gf2p2__747__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__747__g;
    __Vfunc_aes_mul_gf2p2__747__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__747__d;
    __Vfunc_aes_mul_gf2p2__747__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__747__f;
    __Vfunc_aes_mul_gf2p2__747__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__747__a;
    __Vfunc_aes_mul_gf2p2__747__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__747__b;
    __Vfunc_aes_mul_gf2p2__747__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__747__c;
    __Vfunc_aes_mul_gf2p2__747__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__748__Vfuncout;
    __Vfunc_aes_mul_gf2p2__748__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__748__g;
    __Vfunc_aes_mul_gf2p2__748__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__748__d;
    __Vfunc_aes_mul_gf2p2__748__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__748__f;
    __Vfunc_aes_mul_gf2p2__748__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__748__a;
    __Vfunc_aes_mul_gf2p2__748__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__748__b;
    __Vfunc_aes_mul_gf2p2__748__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__748__c;
    __Vfunc_aes_mul_gf2p2__748__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__749__Vfuncout;
    __Vfunc_aes_mul_gf2p2__749__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__749__g;
    __Vfunc_aes_mul_gf2p2__749__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__749__d;
    __Vfunc_aes_mul_gf2p2__749__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__749__f;
    __Vfunc_aes_mul_gf2p2__749__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__749__a;
    __Vfunc_aes_mul_gf2p2__749__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__749__b;
    __Vfunc_aes_mul_gf2p2__749__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__749__c;
    __Vfunc_aes_mul_gf2p2__749__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__752__Vfuncout;
    __Vfunc_aes_mul_gf2p4__752__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__752__gamma;
    __Vfunc_aes_mul_gf2p4__752__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__752__delta;
    __Vfunc_aes_mul_gf2p4__752__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__752__a;
    __Vfunc_aes_mul_gf2p4__752__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__752__b;
    __Vfunc_aes_mul_gf2p4__752__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__752__c;
    __Vfunc_aes_mul_gf2p4__752__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__753__Vfuncout;
    __Vfunc_aes_mul_gf2p2__753__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__753__g;
    __Vfunc_aes_mul_gf2p2__753__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__753__d;
    __Vfunc_aes_mul_gf2p2__753__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__753__f;
    __Vfunc_aes_mul_gf2p2__753__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__753__a;
    __Vfunc_aes_mul_gf2p2__753__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__753__b;
    __Vfunc_aes_mul_gf2p2__753__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__753__c;
    __Vfunc_aes_mul_gf2p2__753__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__754__Vfuncout;
    __Vfunc_aes_mul_gf2p2__754__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__754__g;
    __Vfunc_aes_mul_gf2p2__754__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__754__d;
    __Vfunc_aes_mul_gf2p2__754__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__754__f;
    __Vfunc_aes_mul_gf2p2__754__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__754__a;
    __Vfunc_aes_mul_gf2p2__754__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__754__b;
    __Vfunc_aes_mul_gf2p2__754__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__754__c;
    __Vfunc_aes_mul_gf2p2__754__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__755__Vfuncout;
    __Vfunc_aes_mul_gf2p2__755__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__755__g;
    __Vfunc_aes_mul_gf2p2__755__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__755__d;
    __Vfunc_aes_mul_gf2p2__755__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__755__f;
    __Vfunc_aes_mul_gf2p2__755__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__755__a;
    __Vfunc_aes_mul_gf2p2__755__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__755__b;
    __Vfunc_aes_mul_gf2p2__755__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__755__c;
    __Vfunc_aes_mul_gf2p2__755__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__758__Vfuncout;
    __Vfunc_aes_mul_gf2p4__758__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__758__gamma;
    __Vfunc_aes_mul_gf2p4__758__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__758__delta;
    __Vfunc_aes_mul_gf2p4__758__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__758__a;
    __Vfunc_aes_mul_gf2p4__758__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__758__b;
    __Vfunc_aes_mul_gf2p4__758__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__758__c;
    __Vfunc_aes_mul_gf2p4__758__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__759__Vfuncout;
    __Vfunc_aes_mul_gf2p2__759__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__759__g;
    __Vfunc_aes_mul_gf2p2__759__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__759__d;
    __Vfunc_aes_mul_gf2p2__759__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__759__f;
    __Vfunc_aes_mul_gf2p2__759__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__759__a;
    __Vfunc_aes_mul_gf2p2__759__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__759__b;
    __Vfunc_aes_mul_gf2p2__759__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__759__c;
    __Vfunc_aes_mul_gf2p2__759__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__760__Vfuncout;
    __Vfunc_aes_mul_gf2p2__760__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__760__g;
    __Vfunc_aes_mul_gf2p2__760__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__760__d;
    __Vfunc_aes_mul_gf2p2__760__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__760__f;
    __Vfunc_aes_mul_gf2p2__760__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__760__a;
    __Vfunc_aes_mul_gf2p2__760__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__760__b;
    __Vfunc_aes_mul_gf2p2__760__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__760__c;
    __Vfunc_aes_mul_gf2p2__760__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__761__Vfuncout;
    __Vfunc_aes_mul_gf2p2__761__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__761__g;
    __Vfunc_aes_mul_gf2p2__761__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__761__d;
    __Vfunc_aes_mul_gf2p2__761__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__761__f;
    __Vfunc_aes_mul_gf2p2__761__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__761__a;
    __Vfunc_aes_mul_gf2p2__761__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__761__b;
    __Vfunc_aes_mul_gf2p2__761__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__761__c;
    __Vfunc_aes_mul_gf2p2__761__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__764__Vfuncout;
    __Vfunc_aes_mul_gf2p4__764__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__764__gamma;
    __Vfunc_aes_mul_gf2p4__764__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__764__delta;
    __Vfunc_aes_mul_gf2p4__764__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__764__a;
    __Vfunc_aes_mul_gf2p4__764__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__764__b;
    __Vfunc_aes_mul_gf2p4__764__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__764__c;
    __Vfunc_aes_mul_gf2p4__764__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__765__Vfuncout;
    __Vfunc_aes_mul_gf2p2__765__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__765__g;
    __Vfunc_aes_mul_gf2p2__765__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__765__d;
    __Vfunc_aes_mul_gf2p2__765__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__765__f;
    __Vfunc_aes_mul_gf2p2__765__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__765__a;
    __Vfunc_aes_mul_gf2p2__765__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__765__b;
    __Vfunc_aes_mul_gf2p2__765__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__765__c;
    __Vfunc_aes_mul_gf2p2__765__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__766__Vfuncout;
    __Vfunc_aes_mul_gf2p2__766__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__766__g;
    __Vfunc_aes_mul_gf2p2__766__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__766__d;
    __Vfunc_aes_mul_gf2p2__766__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__766__f;
    __Vfunc_aes_mul_gf2p2__766__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__766__a;
    __Vfunc_aes_mul_gf2p2__766__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__766__b;
    __Vfunc_aes_mul_gf2p2__766__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__766__c;
    __Vfunc_aes_mul_gf2p2__766__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__767__Vfuncout;
    __Vfunc_aes_mul_gf2p2__767__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__767__g;
    __Vfunc_aes_mul_gf2p2__767__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__767__d;
    __Vfunc_aes_mul_gf2p2__767__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__767__f;
    __Vfunc_aes_mul_gf2p2__767__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__767__a;
    __Vfunc_aes_mul_gf2p2__767__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__767__b;
    __Vfunc_aes_mul_gf2p2__767__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__767__c;
    __Vfunc_aes_mul_gf2p2__767__c = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d) 
                    << 2U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x00fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__ 
                                                 >> 8U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__ 
                               >> 0x0000000aU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                    << 2U) ^ (0x03fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__ 
                                                 >> 6U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__ 
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
                                    ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__) 
                                   << 4U)) | (0x0000000fU 
                                              & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__)));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0) 
                                    << 4U) ^ (0xfffffff0U 
                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__ 
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__ 
                                                 >> 0x00000010U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__ 
                               >> 0x00000012U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x000ffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__ 
                                                 >> 0x0000000cU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__ 
                               >> 0x0000000eU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
                                    << 2U) ^ (0x0003fffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__ 
                                                 >> 0x0000000eU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__ 
                               >> 0x00000010U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o 
                = vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o;
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & ((0x3ffffffcU & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                                   >> 2U)) 
                                   ^ (0x003ffffcU & 
                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__ 
                                       >> 0x0000000aU)))) 
                   | (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__ 
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__ 
                                                 >> 0x00000014U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__ 
                                        >> 0x00000018U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by) 
                                    << 4U) ^ (0x0000fff0U 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__ 
                                                 >> 0x00000010U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__279__03a252__KET__ 
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
                vlSelfRef.__Vfunc_aes_mvm__660__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__660__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__660__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__660__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__660__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__660__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__660__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__660__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__660__vec_b 
                    = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                      [0U][2U] >> 8U));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__660__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__660__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__660__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__660__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__660__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_b 
                        = (0x000000ffU & (0x63U ^ (
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                    [0U][2U] 
                                                    << 0x00000018U) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                      [0U][2U] 
                                                      >> 8U))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__661__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__661__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__661__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__661__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__661__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [0U][2U] 
                                          >> 8U));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__662__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__662__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__662__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__662__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__662__Vfuncout))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__663__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__663__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__663__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__663__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__663__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__663__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__663__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__663__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__663__vec_b 
                    = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                      [1U][2U] >> 8U));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__663__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__663__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__663__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__663__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__663__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [1U][2U] 
                                          >> 8U));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__664__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__664__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__664__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__664__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__664__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [1U][2U] 
                                          >> 8U));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__665__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__665__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__665__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__665__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__665__Vfuncout))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__672__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__672__gamma)));
    __Vfunc_aes_square_gf2p2__673__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__672__gamma));
    __Vfunc_aes_square_gf2p2__673__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__673__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__673__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__673__Vfuncout = __Vfunc_aes_square_gf2p2__673__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__b = __Vfunc_aes_square_gf2p2__673__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__674__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__672__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__674__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__674__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__674__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__674__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__674__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__674__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__675__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__672__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__675__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__675__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__675__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__675__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__675__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__675__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__672__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__672__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__676__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__676__gamma)));
    __Vfunc_aes_square_gf2p2__677__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__676__gamma));
    __Vfunc_aes_square_gf2p2__677__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__677__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__677__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__677__Vfuncout = __Vfunc_aes_square_gf2p2__677__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__b = __Vfunc_aes_square_gf2p2__677__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__678__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__676__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__678__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__678__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__678__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__678__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__678__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__678__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__679__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__676__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__679__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__679__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__679__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__679__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__679__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__679__Vfuncout)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                    << 4U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma));
        }
    } else {
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o = 0U;
    }
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__676__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__676__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__692__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__692__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                            >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__692__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16686152350622296818ull);
    __Vfunc_aes_mul_gf2p2__693__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__692__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__693__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__692__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__693__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__693__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__693__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__693__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__693__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__693__d)));
    __Vfunc_aes_mul_gf2p2__693__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__693__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__693__d)));
    __Vfunc_aes_mul_gf2p2__693__f = ((((IData)(__Vfunc_aes_mul_gf2p2__693__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__693__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__693__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__693__b)));
    __Vfunc_aes_mul_gf2p2__693__Vfuncout = __Vfunc_aes_mul_gf2p2__693__f;
    __Vfunc_aes_mul_gf2p4__692__a = __Vfunc_aes_mul_gf2p2__693__Vfuncout;
    __Vfunc_aes_mul_gf2p2__694__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__692__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__692__delta)));
    __Vfunc_aes_mul_gf2p2__694__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__692__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__692__gamma)));
    __Vfunc_aes_mul_gf2p2__694__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__694__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__694__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__694__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__694__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__694__d)));
    __Vfunc_aes_mul_gf2p2__694__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__694__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__694__d)));
    __Vfunc_aes_mul_gf2p2__694__f = ((((IData)(__Vfunc_aes_mul_gf2p2__694__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__694__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__694__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__694__b)));
    __Vfunc_aes_mul_gf2p2__694__Vfuncout = __Vfunc_aes_mul_gf2p2__694__f;
    __Vfunc_aes_mul_gf2p4__692__b = __Vfunc_aes_mul_gf2p2__694__Vfuncout;
    __Vfunc_aes_mul_gf2p2__695__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__692__delta));
    __Vfunc_aes_mul_gf2p2__695__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__692__gamma));
    __Vfunc_aes_mul_gf2p2__695__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__695__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__695__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__695__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__695__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__695__d)));
    __Vfunc_aes_mul_gf2p2__695__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__695__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__695__d)));
    __Vfunc_aes_mul_gf2p2__695__f = ((((IData)(__Vfunc_aes_mul_gf2p2__695__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__695__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__695__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__695__b)));
    __Vfunc_aes_mul_gf2p2__695__Vfuncout = __Vfunc_aes_mul_gf2p2__695__f;
    __Vfunc_aes_mul_gf2p4__692__c = __Vfunc_aes_mul_gf2p2__695__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__692__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__692__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__696__g 
                        = __Vfunc_aes_mul_gf2p4__692__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__696__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__696__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__696__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__696__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__696__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__696__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__692__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__692__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__697__g 
                        = __Vfunc_aes_mul_gf2p4__692__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__697__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__697__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__697__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__697__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__697__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__697__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__692__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__692__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__692__Vfuncout;
    __Vfunc_aes_mul_gf2p4__698__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__698__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__698__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6532085378728394984ull);
    __Vfunc_aes_mul_gf2p2__699__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__698__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__699__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__698__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__699__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__699__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__699__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__699__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__699__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__699__d)));
    __Vfunc_aes_mul_gf2p2__699__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__699__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__699__d)));
    __Vfunc_aes_mul_gf2p2__699__f = ((((IData)(__Vfunc_aes_mul_gf2p2__699__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__699__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__699__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__699__b)));
    __Vfunc_aes_mul_gf2p2__699__Vfuncout = __Vfunc_aes_mul_gf2p2__699__f;
    __Vfunc_aes_mul_gf2p4__698__a = __Vfunc_aes_mul_gf2p2__699__Vfuncout;
    __Vfunc_aes_mul_gf2p2__700__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__698__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__698__delta)));
    __Vfunc_aes_mul_gf2p2__700__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__698__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__698__gamma)));
    __Vfunc_aes_mul_gf2p2__700__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__700__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__700__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__700__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__700__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__700__d)));
    __Vfunc_aes_mul_gf2p2__700__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__700__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__700__d)));
    __Vfunc_aes_mul_gf2p2__700__f = ((((IData)(__Vfunc_aes_mul_gf2p2__700__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__700__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__700__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__700__b)));
    __Vfunc_aes_mul_gf2p2__700__Vfuncout = __Vfunc_aes_mul_gf2p2__700__f;
    __Vfunc_aes_mul_gf2p4__698__b = __Vfunc_aes_mul_gf2p2__700__Vfuncout;
    __Vfunc_aes_mul_gf2p2__701__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__698__delta));
    __Vfunc_aes_mul_gf2p2__701__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__698__gamma));
    __Vfunc_aes_mul_gf2p2__701__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__701__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__701__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__701__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__701__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__701__d)));
    __Vfunc_aes_mul_gf2p2__701__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__701__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__701__d)));
    __Vfunc_aes_mul_gf2p2__701__f = ((((IData)(__Vfunc_aes_mul_gf2p2__701__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__701__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__701__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__701__b)));
    __Vfunc_aes_mul_gf2p2__701__Vfuncout = __Vfunc_aes_mul_gf2p2__701__f;
    __Vfunc_aes_mul_gf2p4__698__c = __Vfunc_aes_mul_gf2p2__701__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__698__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__698__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__702__g 
                        = __Vfunc_aes_mul_gf2p4__698__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__702__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__702__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__702__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__702__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__702__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__702__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__698__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__698__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__703__g 
                        = __Vfunc_aes_mul_gf2p4__698__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__703__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__703__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__703__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__703__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__703__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__703__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__698__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__698__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__698__Vfuncout;
    __Vfunc_aes_mul_gf2p2__716__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__716__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__716__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__716__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__716__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__716__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__716__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__716__d)));
    __Vfunc_aes_mul_gf2p2__716__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__716__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__716__d)));
    __Vfunc_aes_mul_gf2p2__716__f = ((((IData)(__Vfunc_aes_mul_gf2p2__716__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__716__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__716__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__716__b)));
    __Vfunc_aes_mul_gf2p2__716__Vfuncout = __Vfunc_aes_mul_gf2p2__716__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__716__Vfuncout;
    __Vfunc_aes_mul_gf2p2__717__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__717__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__717__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__717__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__717__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__717__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__717__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__717__d)));
    __Vfunc_aes_mul_gf2p2__717__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__717__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__717__d)));
    __Vfunc_aes_mul_gf2p2__717__f = ((((IData)(__Vfunc_aes_mul_gf2p2__717__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__717__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__717__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__717__b)));
    __Vfunc_aes_mul_gf2p2__717__Vfuncout = __Vfunc_aes_mul_gf2p2__717__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__717__Vfuncout;
    __Vfunc_aes_mul_gf2p2__720__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__720__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__720__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__720__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__720__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__720__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__720__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__720__d)));
    __Vfunc_aes_mul_gf2p2__720__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__720__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__720__d)));
    __Vfunc_aes_mul_gf2p2__720__f = ((((IData)(__Vfunc_aes_mul_gf2p2__720__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__720__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__720__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__720__b)));
    __Vfunc_aes_mul_gf2p2__720__Vfuncout = __Vfunc_aes_mul_gf2p2__720__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__720__Vfuncout;
    __Vfunc_aes_mul_gf2p2__721__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__721__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__721__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__721__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__721__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__721__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__721__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__721__d)));
    __Vfunc_aes_mul_gf2p2__721__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__721__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__721__d)));
    __Vfunc_aes_mul_gf2p2__721__f = ((((IData)(__Vfunc_aes_mul_gf2p2__721__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__721__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__721__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__721__b)));
    __Vfunc_aes_mul_gf2p2__721__Vfuncout = __Vfunc_aes_mul_gf2p2__721__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__721__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__u_aes_sb_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (1U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.data_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? (0x63U ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                     [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                     [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                     [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                     [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                     [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                     [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                     [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                     [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__666__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__666__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__666__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__666__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__666__Vfuncout)))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__667__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__667__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__667__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__667__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__667__Vfuncout))
                             : (0x63U ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                         [0U] = 0x58U;
                        vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                         [1U] = 0x2dU;
                        vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                         [2U] = 0x9eU;
                        vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                         [3U] = 0x0bU;
                        vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                         [4U] = 0xdcU;
                        vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                         [5U] = 4U;
                        vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                         [6U] = 3U;
                        vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                         [7U] = 0x24U;
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_b 
                            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c = 0U;
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                           >> 7U) & 
                                          vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                          [0U])));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                   >> 6U)))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                   >> 5U)))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                   >> 4U)))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                   >> 3U)))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                   >> 2U)))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                   >> 1U)))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                           [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0x03fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 >> 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0x07fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0x0ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0x1ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0x3ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0x7ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                           [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0xfffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0x07fffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0x0ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0x1ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0x3ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0x7ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                           [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0x0ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0x1ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0x3ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0x7ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                           [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                 << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0x1ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0x3ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0x7ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                  [3U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0x3fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0x7fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                  [2U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0x7fffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                  [1U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                  [0U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__668__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__668__vec_b) 
                                                        << 7U))))));
                        vlSelfRef.__Vfunc_aes_mvm__668__Vfuncout 
                            = vlSelfRef.__Vfunc_aes_mvm__668__vec_c;
                    }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__668__Vfuncout)))));
    vlSelfRef.mask_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                            [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                            [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                            [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                            [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                            [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                            [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                            [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                            [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__669__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__669__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__669__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__669__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__669__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__669__Vfuncout))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__670__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__670__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__670__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__670__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__670__Vfuncout))
                             : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__671__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__671__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__671__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__671__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__671__Vfuncout))));
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
    __Vfunc_aes_square_gf2p2__705__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                               >> 2U) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__705__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__705__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__705__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__705__Vfuncout = __Vfunc_aes_square_gf2p2__705__d;
    __Vfunc_aes_scale_omega2_gf2p2__704__g = __Vfunc_aes_square_gf2p2__705__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__704__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__704__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__704__g)));
    __Vfunc_aes_scale_omega2_gf2p2__704__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__704__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__704__Vfuncout;
    __Vfunc_aes_square_gf2p2__707__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                               >> 2U) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__707__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__707__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__707__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__707__Vfuncout = __Vfunc_aes_square_gf2p2__707__d;
    __Vfunc_aes_scale_omega2_gf2p2__706__g = __Vfunc_aes_square_gf2p2__707__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__706__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__706__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__706__g)));
    __Vfunc_aes_scale_omega2_gf2p2__706__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__706__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__706__Vfuncout;
    __Vfunc_aes_mul_gf2p4__722__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__722__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__722__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1228600365801109671ull);
    __Vfunc_aes_mul_gf2p2__723__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__722__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__723__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__722__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__723__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__723__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__723__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__723__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__723__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__723__d)));
    __Vfunc_aes_mul_gf2p2__723__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__723__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__723__d)));
    __Vfunc_aes_mul_gf2p2__723__f = ((((IData)(__Vfunc_aes_mul_gf2p2__723__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__723__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__723__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__723__b)));
    __Vfunc_aes_mul_gf2p2__723__Vfuncout = __Vfunc_aes_mul_gf2p2__723__f;
    __Vfunc_aes_mul_gf2p4__722__a = __Vfunc_aes_mul_gf2p2__723__Vfuncout;
    __Vfunc_aes_mul_gf2p2__724__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__722__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__722__delta)));
    __Vfunc_aes_mul_gf2p2__724__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__722__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__722__gamma)));
    __Vfunc_aes_mul_gf2p2__724__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__724__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__724__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__724__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__724__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__724__d)));
    __Vfunc_aes_mul_gf2p2__724__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__724__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__724__d)));
    __Vfunc_aes_mul_gf2p2__724__f = ((((IData)(__Vfunc_aes_mul_gf2p2__724__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__724__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__724__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__724__b)));
    __Vfunc_aes_mul_gf2p2__724__Vfuncout = __Vfunc_aes_mul_gf2p2__724__f;
    __Vfunc_aes_mul_gf2p4__722__b = __Vfunc_aes_mul_gf2p2__724__Vfuncout;
    __Vfunc_aes_mul_gf2p2__725__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__722__delta));
    __Vfunc_aes_mul_gf2p2__725__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__722__gamma));
    __Vfunc_aes_mul_gf2p2__725__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__725__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__725__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__725__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__725__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__725__d)));
    __Vfunc_aes_mul_gf2p2__725__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__725__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__725__d)));
    __Vfunc_aes_mul_gf2p2__725__f = ((((IData)(__Vfunc_aes_mul_gf2p2__725__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__725__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__725__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__725__b)));
    __Vfunc_aes_mul_gf2p2__725__Vfuncout = __Vfunc_aes_mul_gf2p2__725__f;
    __Vfunc_aes_mul_gf2p4__722__c = __Vfunc_aes_mul_gf2p2__725__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__722__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__722__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__726__g 
                        = __Vfunc_aes_mul_gf2p4__722__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__726__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__726__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__726__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__726__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__726__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__726__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__722__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__722__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__727__g 
                        = __Vfunc_aes_mul_gf2p4__722__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__727__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__727__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__727__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__727__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__727__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__727__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__722__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__722__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__722__Vfuncout;
    __Vfunc_aes_mul_gf2p4__740__delta = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 4U));
    __Vfunc_aes_mul_gf2p4__740__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__740__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5976012998977363497ull);
    __Vfunc_aes_mul_gf2p2__741__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__740__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__741__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__740__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__741__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__741__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__741__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__741__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__741__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__741__d)));
    __Vfunc_aes_mul_gf2p2__741__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__741__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__741__d)));
    __Vfunc_aes_mul_gf2p2__741__f = ((((IData)(__Vfunc_aes_mul_gf2p2__741__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__741__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__741__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__741__b)));
    __Vfunc_aes_mul_gf2p2__741__Vfuncout = __Vfunc_aes_mul_gf2p2__741__f;
    __Vfunc_aes_mul_gf2p4__740__a = __Vfunc_aes_mul_gf2p2__741__Vfuncout;
    __Vfunc_aes_mul_gf2p2__742__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__740__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__740__delta)));
    __Vfunc_aes_mul_gf2p2__742__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__740__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__740__gamma)));
    __Vfunc_aes_mul_gf2p2__742__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__742__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__742__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__742__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__742__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__742__d)));
    __Vfunc_aes_mul_gf2p2__742__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__742__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__742__d)));
    __Vfunc_aes_mul_gf2p2__742__f = ((((IData)(__Vfunc_aes_mul_gf2p2__742__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__742__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__742__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__742__b)));
    __Vfunc_aes_mul_gf2p2__742__Vfuncout = __Vfunc_aes_mul_gf2p2__742__f;
    __Vfunc_aes_mul_gf2p4__740__b = __Vfunc_aes_mul_gf2p2__742__Vfuncout;
    __Vfunc_aes_mul_gf2p2__743__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__740__delta));
    __Vfunc_aes_mul_gf2p2__743__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__740__gamma));
    __Vfunc_aes_mul_gf2p2__743__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__743__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__743__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__743__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__743__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__743__d)));
    __Vfunc_aes_mul_gf2p2__743__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__743__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__743__d)));
    __Vfunc_aes_mul_gf2p2__743__f = ((((IData)(__Vfunc_aes_mul_gf2p2__743__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__743__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__743__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__743__b)));
    __Vfunc_aes_mul_gf2p2__743__Vfuncout = __Vfunc_aes_mul_gf2p2__743__f;
    __Vfunc_aes_mul_gf2p4__740__c = __Vfunc_aes_mul_gf2p2__743__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__740__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__740__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__744__g 
                        = __Vfunc_aes_mul_gf2p4__740__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__744__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__744__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__744__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__744__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__744__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__744__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__740__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__740__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__745__g 
                        = __Vfunc_aes_mul_gf2p4__740__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__745__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__745__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__745__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__745__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__745__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__745__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__740__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__740__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__740__Vfuncout;
    __Vfunc_aes_mul_gf2p4__746__delta = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p4__746__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__746__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1940420199774219938ull);
    __Vfunc_aes_mul_gf2p2__747__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__746__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__747__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__746__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__747__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__747__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__747__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__747__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__747__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__747__d)));
    __Vfunc_aes_mul_gf2p2__747__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__747__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__747__d)));
    __Vfunc_aes_mul_gf2p2__747__f = ((((IData)(__Vfunc_aes_mul_gf2p2__747__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__747__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__747__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__747__b)));
    __Vfunc_aes_mul_gf2p2__747__Vfuncout = __Vfunc_aes_mul_gf2p2__747__f;
    __Vfunc_aes_mul_gf2p4__746__a = __Vfunc_aes_mul_gf2p2__747__Vfuncout;
    __Vfunc_aes_mul_gf2p2__748__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__746__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__746__delta)));
    __Vfunc_aes_mul_gf2p2__748__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__746__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__746__gamma)));
    __Vfunc_aes_mul_gf2p2__748__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__748__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__748__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__748__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__748__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__748__d)));
    __Vfunc_aes_mul_gf2p2__748__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__748__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__748__d)));
    __Vfunc_aes_mul_gf2p2__748__f = ((((IData)(__Vfunc_aes_mul_gf2p2__748__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__748__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__748__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__748__b)));
    __Vfunc_aes_mul_gf2p2__748__Vfuncout = __Vfunc_aes_mul_gf2p2__748__f;
    __Vfunc_aes_mul_gf2p4__746__b = __Vfunc_aes_mul_gf2p2__748__Vfuncout;
    __Vfunc_aes_mul_gf2p2__749__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__746__delta));
    __Vfunc_aes_mul_gf2p2__749__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__746__gamma));
    __Vfunc_aes_mul_gf2p2__749__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__749__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__749__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__749__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__749__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__749__d)));
    __Vfunc_aes_mul_gf2p2__749__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__749__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__749__d)));
    __Vfunc_aes_mul_gf2p2__749__f = ((((IData)(__Vfunc_aes_mul_gf2p2__749__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__749__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__749__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__749__b)));
    __Vfunc_aes_mul_gf2p2__749__Vfuncout = __Vfunc_aes_mul_gf2p2__749__f;
    __Vfunc_aes_mul_gf2p4__746__c = __Vfunc_aes_mul_gf2p2__749__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__746__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__746__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__750__g 
                        = __Vfunc_aes_mul_gf2p4__746__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__750__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__750__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__750__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__750__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__750__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__750__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__746__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__746__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__751__g 
                        = __Vfunc_aes_mul_gf2p4__746__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__751__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__751__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__751__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__751__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__751__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__751__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__746__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__746__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__746__Vfuncout;
    __Vfunc_aes_mul_gf2p4__758__delta = (0x0000000fU 
                                         & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__758__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__758__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4566778490880983393ull);
    __Vfunc_aes_mul_gf2p2__759__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__758__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__759__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__758__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__759__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__759__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__759__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__759__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__759__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__759__d)));
    __Vfunc_aes_mul_gf2p2__759__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__759__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__759__d)));
    __Vfunc_aes_mul_gf2p2__759__f = ((((IData)(__Vfunc_aes_mul_gf2p2__759__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__759__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__759__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__759__b)));
    __Vfunc_aes_mul_gf2p2__759__Vfuncout = __Vfunc_aes_mul_gf2p2__759__f;
    __Vfunc_aes_mul_gf2p4__758__a = __Vfunc_aes_mul_gf2p2__759__Vfuncout;
    __Vfunc_aes_mul_gf2p2__760__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__758__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__758__delta)));
    __Vfunc_aes_mul_gf2p2__760__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__758__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__758__gamma)));
    __Vfunc_aes_mul_gf2p2__760__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__760__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__760__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__760__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__760__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__760__d)));
    __Vfunc_aes_mul_gf2p2__760__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__760__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__760__d)));
    __Vfunc_aes_mul_gf2p2__760__f = ((((IData)(__Vfunc_aes_mul_gf2p2__760__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__760__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__760__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__760__b)));
    __Vfunc_aes_mul_gf2p2__760__Vfuncout = __Vfunc_aes_mul_gf2p2__760__f;
    __Vfunc_aes_mul_gf2p4__758__b = __Vfunc_aes_mul_gf2p2__760__Vfuncout;
    __Vfunc_aes_mul_gf2p2__761__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__758__delta));
    __Vfunc_aes_mul_gf2p2__761__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__758__gamma));
    __Vfunc_aes_mul_gf2p2__761__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__761__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__761__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__761__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__761__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__761__d)));
    __Vfunc_aes_mul_gf2p2__761__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__761__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__761__d)));
    __Vfunc_aes_mul_gf2p2__761__f = ((((IData)(__Vfunc_aes_mul_gf2p2__761__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__761__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__761__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__761__b)));
    __Vfunc_aes_mul_gf2p2__761__Vfuncout = __Vfunc_aes_mul_gf2p2__761__f;
    __Vfunc_aes_mul_gf2p4__758__c = __Vfunc_aes_mul_gf2p2__761__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__758__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__758__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__762__g 
                        = __Vfunc_aes_mul_gf2p4__758__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__762__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__762__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__762__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__762__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__762__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__762__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__758__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__758__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__763__g 
                        = __Vfunc_aes_mul_gf2p4__758__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__763__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__763__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__763__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__763__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__763__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__763__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__758__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__758__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__758__Vfuncout;
    __Vfunc_aes_mul_gf2p4__728__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__728__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__728__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12175662571071694069ull);
    __Vfunc_aes_mul_gf2p2__729__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__728__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__729__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__728__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__729__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__729__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__729__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__729__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__729__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__729__d)));
    __Vfunc_aes_mul_gf2p2__729__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__729__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__729__d)));
    __Vfunc_aes_mul_gf2p2__729__f = ((((IData)(__Vfunc_aes_mul_gf2p2__729__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__729__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__729__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__729__b)));
    __Vfunc_aes_mul_gf2p2__729__Vfuncout = __Vfunc_aes_mul_gf2p2__729__f;
    __Vfunc_aes_mul_gf2p4__728__a = __Vfunc_aes_mul_gf2p2__729__Vfuncout;
    __Vfunc_aes_mul_gf2p2__730__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__728__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__728__delta)));
    __Vfunc_aes_mul_gf2p2__730__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__728__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__728__gamma)));
    __Vfunc_aes_mul_gf2p2__730__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__730__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__730__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__730__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__730__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__730__d)));
    __Vfunc_aes_mul_gf2p2__730__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__730__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__730__d)));
    __Vfunc_aes_mul_gf2p2__730__f = ((((IData)(__Vfunc_aes_mul_gf2p2__730__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__730__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__730__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__730__b)));
    __Vfunc_aes_mul_gf2p2__730__Vfuncout = __Vfunc_aes_mul_gf2p2__730__f;
    __Vfunc_aes_mul_gf2p4__728__b = __Vfunc_aes_mul_gf2p2__730__Vfuncout;
    __Vfunc_aes_mul_gf2p2__731__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__728__delta));
    __Vfunc_aes_mul_gf2p2__731__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__728__gamma));
    __Vfunc_aes_mul_gf2p2__731__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__731__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__731__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__731__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__731__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__731__d)));
    __Vfunc_aes_mul_gf2p2__731__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__731__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__731__d)));
    __Vfunc_aes_mul_gf2p2__731__f = ((((IData)(__Vfunc_aes_mul_gf2p2__731__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__731__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__731__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__731__b)));
    __Vfunc_aes_mul_gf2p2__731__Vfuncout = __Vfunc_aes_mul_gf2p2__731__f;
    __Vfunc_aes_mul_gf2p4__728__c = __Vfunc_aes_mul_gf2p2__731__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__728__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__728__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__732__g 
                        = __Vfunc_aes_mul_gf2p4__728__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__732__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__732__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__732__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__732__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__732__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__732__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__728__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__728__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__733__g 
                        = __Vfunc_aes_mul_gf2p4__728__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__733__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__733__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__733__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__733__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__733__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__733__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__728__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__728__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__728__Vfuncout;
    __Vfunc_aes_mul_gf2p4__734__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__734__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__734__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5098137027088792972ull);
    __Vfunc_aes_mul_gf2p2__735__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__734__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__735__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__734__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__735__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__735__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__735__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__735__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__735__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__735__d)));
    __Vfunc_aes_mul_gf2p2__735__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__735__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__735__d)));
    __Vfunc_aes_mul_gf2p2__735__f = ((((IData)(__Vfunc_aes_mul_gf2p2__735__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__735__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__735__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__735__b)));
    __Vfunc_aes_mul_gf2p2__735__Vfuncout = __Vfunc_aes_mul_gf2p2__735__f;
    __Vfunc_aes_mul_gf2p4__734__a = __Vfunc_aes_mul_gf2p2__735__Vfuncout;
    __Vfunc_aes_mul_gf2p2__736__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__734__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__734__delta)));
    __Vfunc_aes_mul_gf2p2__736__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__734__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__734__gamma)));
    __Vfunc_aes_mul_gf2p2__736__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__736__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__736__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__736__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__736__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__736__d)));
    __Vfunc_aes_mul_gf2p2__736__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__736__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__736__d)));
    __Vfunc_aes_mul_gf2p2__736__f = ((((IData)(__Vfunc_aes_mul_gf2p2__736__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__736__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__736__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__736__b)));
    __Vfunc_aes_mul_gf2p2__736__Vfuncout = __Vfunc_aes_mul_gf2p2__736__f;
    __Vfunc_aes_mul_gf2p4__734__b = __Vfunc_aes_mul_gf2p2__736__Vfuncout;
    __Vfunc_aes_mul_gf2p2__737__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__734__delta));
    __Vfunc_aes_mul_gf2p2__737__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__734__gamma));
    __Vfunc_aes_mul_gf2p2__737__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__737__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__737__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__737__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__737__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__737__d)));
    __Vfunc_aes_mul_gf2p2__737__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__737__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__737__d)));
    __Vfunc_aes_mul_gf2p2__737__f = ((((IData)(__Vfunc_aes_mul_gf2p2__737__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__737__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__737__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__737__b)));
    __Vfunc_aes_mul_gf2p2__737__Vfuncout = __Vfunc_aes_mul_gf2p2__737__f;
    __Vfunc_aes_mul_gf2p4__734__c = __Vfunc_aes_mul_gf2p2__737__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__734__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__734__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__738__g 
                        = __Vfunc_aes_mul_gf2p4__734__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__738__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__738__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__738__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__738__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__738__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__738__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__734__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__734__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__739__g 
                        = __Vfunc_aes_mul_gf2p4__734__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__739__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__739__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__739__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__739__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__739__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__739__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__734__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__734__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__734__Vfuncout;
    __Vfunc_aes_mul_gf2p4__752__delta = (0x0000000fU 
                                         & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__752__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__752__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4963963057915097451ull);
    __Vfunc_aes_mul_gf2p2__753__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__752__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__753__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__752__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__753__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__753__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__753__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__753__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__753__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__753__d)));
    __Vfunc_aes_mul_gf2p2__753__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__753__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__753__d)));
    __Vfunc_aes_mul_gf2p2__753__f = ((((IData)(__Vfunc_aes_mul_gf2p2__753__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__753__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__753__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__753__b)));
    __Vfunc_aes_mul_gf2p2__753__Vfuncout = __Vfunc_aes_mul_gf2p2__753__f;
    __Vfunc_aes_mul_gf2p4__752__a = __Vfunc_aes_mul_gf2p2__753__Vfuncout;
    __Vfunc_aes_mul_gf2p2__754__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__752__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__752__delta)));
    __Vfunc_aes_mul_gf2p2__754__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__752__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__752__gamma)));
    __Vfunc_aes_mul_gf2p2__754__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__754__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__754__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__754__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__754__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__754__d)));
    __Vfunc_aes_mul_gf2p2__754__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__754__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__754__d)));
    __Vfunc_aes_mul_gf2p2__754__f = ((((IData)(__Vfunc_aes_mul_gf2p2__754__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__754__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__754__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__754__b)));
    __Vfunc_aes_mul_gf2p2__754__Vfuncout = __Vfunc_aes_mul_gf2p2__754__f;
    __Vfunc_aes_mul_gf2p4__752__b = __Vfunc_aes_mul_gf2p2__754__Vfuncout;
    __Vfunc_aes_mul_gf2p2__755__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__752__delta));
    __Vfunc_aes_mul_gf2p2__755__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__752__gamma));
    __Vfunc_aes_mul_gf2p2__755__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__755__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__755__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__755__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__755__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__755__d)));
    __Vfunc_aes_mul_gf2p2__755__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__755__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__755__d)));
    __Vfunc_aes_mul_gf2p2__755__f = ((((IData)(__Vfunc_aes_mul_gf2p2__755__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__755__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__755__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__755__b)));
    __Vfunc_aes_mul_gf2p2__755__Vfuncout = __Vfunc_aes_mul_gf2p2__755__f;
    __Vfunc_aes_mul_gf2p4__752__c = __Vfunc_aes_mul_gf2p2__755__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__752__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__752__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__756__g 
                        = __Vfunc_aes_mul_gf2p4__752__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__756__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__756__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__756__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__756__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__756__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__756__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__752__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__752__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__757__g 
                        = __Vfunc_aes_mul_gf2p4__752__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__757__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__757__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__757__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__757__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__757__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__757__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__752__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__752__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__752__Vfuncout;
    __Vfunc_aes_mul_gf2p4__764__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__764__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__764__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16776609898520172899ull);
    __Vfunc_aes_mul_gf2p2__765__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__764__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__765__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__764__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__765__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__765__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__765__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__765__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__765__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__765__d)));
    __Vfunc_aes_mul_gf2p2__765__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__765__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__765__d)));
    __Vfunc_aes_mul_gf2p2__765__f = ((((IData)(__Vfunc_aes_mul_gf2p2__765__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__765__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__765__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__765__b)));
    __Vfunc_aes_mul_gf2p2__765__Vfuncout = __Vfunc_aes_mul_gf2p2__765__f;
    __Vfunc_aes_mul_gf2p4__764__a = __Vfunc_aes_mul_gf2p2__765__Vfuncout;
    __Vfunc_aes_mul_gf2p2__766__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__764__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__764__delta)));
    __Vfunc_aes_mul_gf2p2__766__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__764__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__764__gamma)));
    __Vfunc_aes_mul_gf2p2__766__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__766__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__766__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__766__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__766__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__766__d)));
    __Vfunc_aes_mul_gf2p2__766__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__766__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__766__d)));
    __Vfunc_aes_mul_gf2p2__766__f = ((((IData)(__Vfunc_aes_mul_gf2p2__766__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__766__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__766__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__766__b)));
    __Vfunc_aes_mul_gf2p2__766__Vfuncout = __Vfunc_aes_mul_gf2p2__766__f;
    __Vfunc_aes_mul_gf2p4__764__b = __Vfunc_aes_mul_gf2p2__766__Vfuncout;
    __Vfunc_aes_mul_gf2p2__767__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__764__delta));
    __Vfunc_aes_mul_gf2p2__767__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__764__gamma));
    __Vfunc_aes_mul_gf2p2__767__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__767__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__767__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__767__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__767__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__767__d)));
    __Vfunc_aes_mul_gf2p2__767__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__767__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__767__d)));
    __Vfunc_aes_mul_gf2p2__767__f = ((((IData)(__Vfunc_aes_mul_gf2p2__767__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__767__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__767__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__767__b)));
    __Vfunc_aes_mul_gf2p2__767__Vfuncout = __Vfunc_aes_mul_gf2p2__767__f;
    __Vfunc_aes_mul_gf2p4__764__c = __Vfunc_aes_mul_gf2p2__767__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__764__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__764__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__768__g 
                        = __Vfunc_aes_mul_gf2p4__764__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__768__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__768__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__768__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__768__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__768__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__768__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__764__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__764__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__769__g 
                        = __Vfunc_aes_mul_gf2p4__764__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__769__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__769__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__769__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__769__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__769__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__769__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__764__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__764__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__764__Vfuncout;
    __Vfunc_aes_mul_gf2p2__712__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__712__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__712__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__712__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__712__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__712__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__712__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__712__d)));
    __Vfunc_aes_mul_gf2p2__712__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__712__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__712__d)));
    __Vfunc_aes_mul_gf2p2__712__f = ((((IData)(__Vfunc_aes_mul_gf2p2__712__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__712__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__712__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__712__b)));
    __Vfunc_aes_mul_gf2p2__712__Vfuncout = __Vfunc_aes_mul_gf2p2__712__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__712__Vfuncout;
    __Vfunc_aes_mul_gf2p2__713__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__713__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__713__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__713__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__713__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__713__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__713__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__713__d)));
    __Vfunc_aes_mul_gf2p2__713__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__713__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__713__d)));
    __Vfunc_aes_mul_gf2p2__713__f = ((((IData)(__Vfunc_aes_mul_gf2p2__713__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__713__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__713__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__713__b)));
    __Vfunc_aes_mul_gf2p2__713__Vfuncout = __Vfunc_aes_mul_gf2p2__713__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__713__Vfuncout;
    __Vfunc_aes_square_gf2p2__708__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                              ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                 >> 2U)));
    __Vfunc_aes_square_gf2p2__708__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__708__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__708__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__708__Vfuncout = __Vfunc_aes_square_gf2p2__708__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__708__Vfuncout;
    __Vfunc_aes_square_gf2p2__709__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                              ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__709__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__709__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__709__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__709__Vfuncout = __Vfunc_aes_square_gf2p2__709__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__709__Vfuncout;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__1(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2140__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2140__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2140__g;
    __Vfunc_aes_mul_gf2p2__2140__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2140__d;
    __Vfunc_aes_mul_gf2p2__2140__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2140__f;
    __Vfunc_aes_mul_gf2p2__2140__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2140__a;
    __Vfunc_aes_mul_gf2p2__2140__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2140__b;
    __Vfunc_aes_mul_gf2p2__2140__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2140__c;
    __Vfunc_aes_mul_gf2p2__2140__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2141__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2141__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2141__g;
    __Vfunc_aes_mul_gf2p2__2141__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2141__d;
    __Vfunc_aes_mul_gf2p2__2141__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2141__f;
    __Vfunc_aes_mul_gf2p2__2141__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2141__a;
    __Vfunc_aes_mul_gf2p2__2141__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2141__b;
    __Vfunc_aes_mul_gf2p2__2141__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2141__c;
    __Vfunc_aes_mul_gf2p2__2141__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2144__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2144__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2144__g;
    __Vfunc_aes_mul_gf2p2__2144__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2144__d;
    __Vfunc_aes_mul_gf2p2__2144__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2144__f;
    __Vfunc_aes_mul_gf2p2__2144__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2144__a;
    __Vfunc_aes_mul_gf2p2__2144__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2144__b;
    __Vfunc_aes_mul_gf2p2__2144__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2144__c;
    __Vfunc_aes_mul_gf2p2__2144__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2145__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2145__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2145__g;
    __Vfunc_aes_mul_gf2p2__2145__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2145__d;
    __Vfunc_aes_mul_gf2p2__2145__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2145__f;
    __Vfunc_aes_mul_gf2p2__2145__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2145__a;
    __Vfunc_aes_mul_gf2p2__2145__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2145__b;
    __Vfunc_aes_mul_gf2p2__2145__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2145__c;
    __Vfunc_aes_mul_gf2p2__2145__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2148__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2148__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2148__g;
    __Vfunc_aes_mul_gf2p2__2148__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2148__d;
    __Vfunc_aes_mul_gf2p2__2148__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2148__f;
    __Vfunc_aes_mul_gf2p2__2148__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2148__a;
    __Vfunc_aes_mul_gf2p2__2148__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2148__b;
    __Vfunc_aes_mul_gf2p2__2148__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2148__c;
    __Vfunc_aes_mul_gf2p2__2148__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2149__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2149__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2149__g;
    __Vfunc_aes_mul_gf2p2__2149__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2149__d;
    __Vfunc_aes_mul_gf2p2__2149__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2149__f;
    __Vfunc_aes_mul_gf2p2__2149__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2149__a;
    __Vfunc_aes_mul_gf2p2__2149__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2149__b;
    __Vfunc_aes_mul_gf2p2__2149__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2149__c;
    __Vfunc_aes_mul_gf2p2__2149__c = 0;
    // Body
    __Vfunc_aes_mul_gf2p2__2140__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__2140__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2140__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2140__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2140__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2140__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2140__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2140__d)));
    __Vfunc_aes_mul_gf2p2__2140__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2140__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2140__d)));
    __Vfunc_aes_mul_gf2p2__2140__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2140__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2140__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2140__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2140__b)));
    __Vfunc_aes_mul_gf2p2__2140__Vfuncout = __Vfunc_aes_mul_gf2p2__2140__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__2140__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2141__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__2141__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2141__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2141__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2141__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2141__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2141__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2141__d)));
    __Vfunc_aes_mul_gf2p2__2141__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2141__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2141__d)));
    __Vfunc_aes_mul_gf2p2__2141__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2141__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2141__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2141__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2141__b)));
    __Vfunc_aes_mul_gf2p2__2141__Vfuncout = __Vfunc_aes_mul_gf2p2__2141__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__2141__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2144__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__2144__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__2144__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2144__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2144__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2144__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2144__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2144__d)));
    __Vfunc_aes_mul_gf2p2__2144__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2144__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2144__d)));
    __Vfunc_aes_mul_gf2p2__2144__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2144__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2144__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2144__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2144__b)));
    __Vfunc_aes_mul_gf2p2__2144__Vfuncout = __Vfunc_aes_mul_gf2p2__2144__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__2144__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2145__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__2145__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2145__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2145__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2145__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2145__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2145__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2145__d)));
    __Vfunc_aes_mul_gf2p2__2145__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2145__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2145__d)));
    __Vfunc_aes_mul_gf2p2__2145__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2145__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2145__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2145__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2145__b)));
    __Vfunc_aes_mul_gf2p2__2145__Vfuncout = __Vfunc_aes_mul_gf2p2__2145__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__2145__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2148__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__2148__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega;
    __Vfunc_aes_mul_gf2p2__2148__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2148__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2148__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2148__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2148__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2148__d)));
    __Vfunc_aes_mul_gf2p2__2148__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2148__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2148__d)));
    __Vfunc_aes_mul_gf2p2__2148__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2148__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2148__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2148__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2148__b)));
    __Vfunc_aes_mul_gf2p2__2148__Vfuncout = __Vfunc_aes_mul_gf2p2__2148__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__2148__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2149__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__2149__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega;
    __Vfunc_aes_mul_gf2p2__2149__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2149__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2149__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2149__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2149__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2149__d)));
    __Vfunc_aes_mul_gf2p2__2149__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2149__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2149__d)));
    __Vfunc_aes_mul_gf2p2__2149__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2149__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2149__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2149__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2149__b)));
    __Vfunc_aes_mul_gf2p2__2149__Vfuncout = __Vfunc_aes_mul_gf2p2__2149__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__2149__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d 
        = (((IData)(vlSelfRef.out_req_o) & (3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_out_ack_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)))
            ? 0U : (7U & ((IData)(vlSelfRef.out_req_o)
                           ? (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)
                           : ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q) 
                              + (3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))))));
}

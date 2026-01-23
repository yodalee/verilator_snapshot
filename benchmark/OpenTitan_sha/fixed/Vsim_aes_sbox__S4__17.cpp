// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i__1(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1920__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1920__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1920__g;
    __Vfunc_aes_mul_gf2p2__1920__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1920__d;
    __Vfunc_aes_mul_gf2p2__1920__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1920__f;
    __Vfunc_aes_mul_gf2p2__1920__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1920__a;
    __Vfunc_aes_mul_gf2p2__1920__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1920__b;
    __Vfunc_aes_mul_gf2p2__1920__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1920__c;
    __Vfunc_aes_mul_gf2p2__1920__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1921__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1921__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1921__g;
    __Vfunc_aes_mul_gf2p2__1921__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1921__d;
    __Vfunc_aes_mul_gf2p2__1921__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1921__f;
    __Vfunc_aes_mul_gf2p2__1921__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1921__a;
    __Vfunc_aes_mul_gf2p2__1921__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1921__b;
    __Vfunc_aes_mul_gf2p2__1921__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1921__c;
    __Vfunc_aes_mul_gf2p2__1921__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1924__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1924__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1924__g;
    __Vfunc_aes_mul_gf2p2__1924__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1924__d;
    __Vfunc_aes_mul_gf2p2__1924__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1924__f;
    __Vfunc_aes_mul_gf2p2__1924__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1924__a;
    __Vfunc_aes_mul_gf2p2__1924__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1924__b;
    __Vfunc_aes_mul_gf2p2__1924__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1924__c;
    __Vfunc_aes_mul_gf2p2__1924__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1925__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1925__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1925__g;
    __Vfunc_aes_mul_gf2p2__1925__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1925__d;
    __Vfunc_aes_mul_gf2p2__1925__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1925__f;
    __Vfunc_aes_mul_gf2p2__1925__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1925__a;
    __Vfunc_aes_mul_gf2p2__1925__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1925__b;
    __Vfunc_aes_mul_gf2p2__1925__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1925__c;
    __Vfunc_aes_mul_gf2p2__1925__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1928__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1928__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1928__g;
    __Vfunc_aes_mul_gf2p2__1928__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1928__d;
    __Vfunc_aes_mul_gf2p2__1928__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1928__f;
    __Vfunc_aes_mul_gf2p2__1928__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1928__a;
    __Vfunc_aes_mul_gf2p2__1928__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1928__b;
    __Vfunc_aes_mul_gf2p2__1928__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1928__c;
    __Vfunc_aes_mul_gf2p2__1928__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1929__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1929__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1929__g;
    __Vfunc_aes_mul_gf2p2__1929__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1929__d;
    __Vfunc_aes_mul_gf2p2__1929__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1929__f;
    __Vfunc_aes_mul_gf2p2__1929__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1929__a;
    __Vfunc_aes_mul_gf2p2__1929__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1929__b;
    __Vfunc_aes_mul_gf2p2__1929__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1929__c;
    __Vfunc_aes_mul_gf2p2__1929__c = 0;
    // Body
    __Vfunc_aes_mul_gf2p2__1920__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__55__03a28__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1920__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1920__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1920__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1920__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1920__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1920__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1920__d)));
    __Vfunc_aes_mul_gf2p2__1920__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1920__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1920__d)));
    __Vfunc_aes_mul_gf2p2__1920__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1920__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1920__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1920__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1920__b)));
    __Vfunc_aes_mul_gf2p2__1920__Vfuncout = __Vfunc_aes_mul_gf2p2__1920__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1920__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1921__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__55__03a28__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1921__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1921__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1921__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1921__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1921__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1921__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1921__d)));
    __Vfunc_aes_mul_gf2p2__1921__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1921__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1921__d)));
    __Vfunc_aes_mul_gf2p2__1921__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1921__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1921__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1921__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1921__b)));
    __Vfunc_aes_mul_gf2p2__1921__Vfuncout = __Vfunc_aes_mul_gf2p2__1921__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1921__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1924__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__55__03a28__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__1924__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1924__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1924__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1924__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1924__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1924__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1924__d)));
    __Vfunc_aes_mul_gf2p2__1924__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1924__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1924__d)));
    __Vfunc_aes_mul_gf2p2__1924__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1924__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1924__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1924__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1924__b)));
    __Vfunc_aes_mul_gf2p2__1924__Vfuncout = __Vfunc_aes_mul_gf2p2__1924__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1924__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1925__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__55__03a28__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__1925__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1925__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1925__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1925__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1925__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1925__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1925__d)));
    __Vfunc_aes_mul_gf2p2__1925__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1925__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1925__d)));
    __Vfunc_aes_mul_gf2p2__1925__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1925__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1925__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1925__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1925__b)));
    __Vfunc_aes_mul_gf2p2__1925__Vfuncout = __Vfunc_aes_mul_gf2p2__1925__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1925__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1928__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__55__03a28__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__1928__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega;
    __Vfunc_aes_mul_gf2p2__1928__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1928__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1928__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1928__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1928__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1928__d)));
    __Vfunc_aes_mul_gf2p2__1928__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1928__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1928__d)));
    __Vfunc_aes_mul_gf2p2__1928__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1928__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1928__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1928__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1928__b)));
    __Vfunc_aes_mul_gf2p2__1928__Vfuncout = __Vfunc_aes_mul_gf2p2__1928__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1928__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1929__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__55__03a28__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__1929__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega;
    __Vfunc_aes_mul_gf2p2__1929__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1929__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1929__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1929__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1929__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1929__d)));
    __Vfunc_aes_mul_gf2p2__1929__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1929__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1929__d)));
    __Vfunc_aes_mul_gf2p2__1929__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1929__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1929__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1929__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1929__b)));
    __Vfunc_aes_mul_gf2p2__1929__Vfuncout = __Vfunc_aes_mul_gf2p2__1929__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1929__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d 
        = (((IData)(vlSelfRef.out_req_o) & (3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_out_ack_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)))
            ? 0U : (7U & ((IData)(vlSelfRef.out_req_o)
                           ? (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)
                           : ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q) 
                              + (3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))))));
}

void Vsim_aes_sbox__S4___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1993__Vfuncout;
    __Vfunc_aes_square_gf2p2__1993__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1993__g;
    __Vfunc_aes_square_gf2p2__1993__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1993__d;
    __Vfunc_aes_square_gf2p2__1993__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1997__Vfuncout;
    __Vfunc_aes_square_gf2p2__1997__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1997__g;
    __Vfunc_aes_square_gf2p2__1997__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1997__d;
    __Vfunc_aes_square_gf2p2__1997__d = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2000__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2000__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2000__gamma;
    __Vfunc_aes_mul_gf2p4__2000__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2000__delta;
    __Vfunc_aes_mul_gf2p4__2000__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2000__a;
    __Vfunc_aes_mul_gf2p4__2000__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2000__b;
    __Vfunc_aes_mul_gf2p4__2000__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2000__c;
    __Vfunc_aes_mul_gf2p4__2000__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2001__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2001__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2001__g;
    __Vfunc_aes_mul_gf2p2__2001__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2001__d;
    __Vfunc_aes_mul_gf2p2__2001__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2001__f;
    __Vfunc_aes_mul_gf2p2__2001__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2001__a;
    __Vfunc_aes_mul_gf2p2__2001__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2001__b;
    __Vfunc_aes_mul_gf2p2__2001__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2001__c;
    __Vfunc_aes_mul_gf2p2__2001__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2002__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2002__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2002__g;
    __Vfunc_aes_mul_gf2p2__2002__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2002__d;
    __Vfunc_aes_mul_gf2p2__2002__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2002__f;
    __Vfunc_aes_mul_gf2p2__2002__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2002__a;
    __Vfunc_aes_mul_gf2p2__2002__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2002__b;
    __Vfunc_aes_mul_gf2p2__2002__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2002__c;
    __Vfunc_aes_mul_gf2p2__2002__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2003__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2003__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2003__g;
    __Vfunc_aes_mul_gf2p2__2003__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2003__d;
    __Vfunc_aes_mul_gf2p2__2003__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2003__f;
    __Vfunc_aes_mul_gf2p2__2003__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2003__a;
    __Vfunc_aes_mul_gf2p2__2003__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2003__b;
    __Vfunc_aes_mul_gf2p2__2003__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2003__c;
    __Vfunc_aes_mul_gf2p2__2003__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2006__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2006__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2006__gamma;
    __Vfunc_aes_mul_gf2p4__2006__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2006__delta;
    __Vfunc_aes_mul_gf2p4__2006__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2006__a;
    __Vfunc_aes_mul_gf2p4__2006__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2006__b;
    __Vfunc_aes_mul_gf2p4__2006__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2006__c;
    __Vfunc_aes_mul_gf2p4__2006__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2007__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2007__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2007__g;
    __Vfunc_aes_mul_gf2p2__2007__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2007__d;
    __Vfunc_aes_mul_gf2p2__2007__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2007__f;
    __Vfunc_aes_mul_gf2p2__2007__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2007__a;
    __Vfunc_aes_mul_gf2p2__2007__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2007__b;
    __Vfunc_aes_mul_gf2p2__2007__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2007__c;
    __Vfunc_aes_mul_gf2p2__2007__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2008__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2008__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2008__g;
    __Vfunc_aes_mul_gf2p2__2008__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2008__d;
    __Vfunc_aes_mul_gf2p2__2008__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2008__f;
    __Vfunc_aes_mul_gf2p2__2008__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2008__a;
    __Vfunc_aes_mul_gf2p2__2008__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2008__b;
    __Vfunc_aes_mul_gf2p2__2008__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2008__c;
    __Vfunc_aes_mul_gf2p2__2008__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2009__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2009__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2009__g;
    __Vfunc_aes_mul_gf2p2__2009__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2009__d;
    __Vfunc_aes_mul_gf2p2__2009__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2009__f;
    __Vfunc_aes_mul_gf2p2__2009__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2009__a;
    __Vfunc_aes_mul_gf2p2__2009__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2009__b;
    __Vfunc_aes_mul_gf2p2__2009__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2009__c;
    __Vfunc_aes_mul_gf2p2__2009__c = 0;
    // Body
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ([&]() {
            vlSelfRef.__Vfunc_aes_mvm__1980__mat_a[0U] = 0x98U;
            vlSelfRef.__Vfunc_aes_mvm__1980__mat_a[1U] = 0xf3U;
            vlSelfRef.__Vfunc_aes_mvm__1980__mat_a[2U] = 0xf2U;
            vlSelfRef.__Vfunc_aes_mvm__1980__mat_a[3U] = 0x48U;
            vlSelfRef.__Vfunc_aes_mvm__1980__mat_a[4U] = 9U;
            vlSelfRef.__Vfunc_aes_mvm__1980__mat_a[5U] = 0x81U;
            vlSelfRef.__Vfunc_aes_mvm__1980__mat_a[6U] = 0xa9U;
            vlSelfRef.__Vfunc_aes_mvm__1980__mat_a[7U] = 0xffU;
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_b 
                = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__sub_word_in 
                                  >> 0x00000010U));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c = 0U;
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                               >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                              [0U])));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                               [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                       >> 6U)))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                               [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                       >> 5U)))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                               [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                       >> 4U)))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                               [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                       >> 3U)))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                               [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                       >> 2U)))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                               [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                       >> 1U)))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                               [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 >> 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 >> 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                               [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 >> 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                               [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                               [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                 << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0x1ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0x3ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0x7ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                        [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0x3fffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0x7fffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                        [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0x7fffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                        [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                        [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1980__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1980__vec_b) 
                                                   << 7U))))));
            vlSelfRef.__Vfunc_aes_mvm__1980__Vfuncout 
                = vlSelfRef.__Vfunc_aes_mvm__1980__vec_c;
        }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1980__Vfuncout));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ([&]() {
            vlSelfRef.__Vfunc_aes_mvm__1983__mat_a[0U] = 0x98U;
            vlSelfRef.__Vfunc_aes_mvm__1983__mat_a[1U] = 0xf3U;
            vlSelfRef.__Vfunc_aes_mvm__1983__mat_a[2U] = 0xf2U;
            vlSelfRef.__Vfunc_aes_mvm__1983__mat_a[3U] = 0x48U;
            vlSelfRef.__Vfunc_aes_mvm__1983__mat_a[4U] = 9U;
            vlSelfRef.__Vfunc_aes_mvm__1983__mat_a[5U] = 0x81U;
            vlSelfRef.__Vfunc_aes_mvm__1983__mat_a[6U] = 0xa9U;
            vlSelfRef.__Vfunc_aes_mvm__1983__mat_a[7U] = 0xffU;
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_b 
                = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__sw_in_mask 
                                  >> 0x00000010U));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c = 0U;
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                               >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                              [0U])));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                               [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                       >> 6U)))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                               [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                       >> 5U)))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                               [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                       >> 4U)))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                               [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                       >> 3U)))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                               [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                       >> 2U)))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                               [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                       >> 1U)))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                               [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 >> 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 >> 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                               [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 >> 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                               [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                               [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                 << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0x1ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0x3ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0x7ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                        [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0x3fffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0x7fffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                        [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0x7fffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                        [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                        [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1983__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1983__vec_b) 
                                                   << 7U))))));
            vlSelfRef.__Vfunc_aes_mvm__1983__Vfuncout 
                = vlSelfRef.__Vfunc_aes_mvm__1983__vec_c;
        }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1983__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1992__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1992__gamma)));
    __Vfunc_aes_square_gf2p2__1993__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1992__gamma));
    __Vfunc_aes_square_gf2p2__1993__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1993__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1993__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1993__Vfuncout = __Vfunc_aes_square_gf2p2__1993__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__b = __Vfunc_aes_square_gf2p2__1993__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1994__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1994__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1994__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1994__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1994__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__1994__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1994__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1995__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1995__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1995__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1995__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1995__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1995__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1995__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2000__delta = (0x0000000fU 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__);
    __Vfunc_aes_mul_gf2p4__2000__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                             >> 4U));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__2000__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5249307914231779325ull);
    __Vfunc_aes_mul_gf2p2__2001__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2000__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2001__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2000__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2001__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2001__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2001__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2001__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2001__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2001__d)));
    __Vfunc_aes_mul_gf2p2__2001__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2001__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2001__d)));
    __Vfunc_aes_mul_gf2p2__2001__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2001__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2001__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2001__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2001__b)));
    __Vfunc_aes_mul_gf2p2__2001__Vfuncout = __Vfunc_aes_mul_gf2p2__2001__f;
    __Vfunc_aes_mul_gf2p4__2000__a = __Vfunc_aes_mul_gf2p2__2001__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2002__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2000__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2000__delta)));
    __Vfunc_aes_mul_gf2p2__2002__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2000__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2000__gamma)));
    __Vfunc_aes_mul_gf2p2__2002__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2002__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2002__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2002__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2002__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2002__d)));
    __Vfunc_aes_mul_gf2p2__2002__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2002__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2002__d)));
    __Vfunc_aes_mul_gf2p2__2002__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2002__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2002__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2002__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2002__b)));
    __Vfunc_aes_mul_gf2p2__2002__Vfuncout = __Vfunc_aes_mul_gf2p2__2002__f;
    __Vfunc_aes_mul_gf2p4__2000__b = __Vfunc_aes_mul_gf2p2__2002__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2003__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2000__delta));
    __Vfunc_aes_mul_gf2p2__2003__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2000__gamma));
    __Vfunc_aes_mul_gf2p2__2003__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2003__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2003__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2003__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2003__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2003__d)));
    __Vfunc_aes_mul_gf2p2__2003__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2003__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2003__d)));
    __Vfunc_aes_mul_gf2p2__2003__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2003__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2003__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2003__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2003__b)));
    __Vfunc_aes_mul_gf2p2__2003__Vfuncout = __Vfunc_aes_mul_gf2p2__2003__f;
    __Vfunc_aes_mul_gf2p4__2000__c = __Vfunc_aes_mul_gf2p2__2003__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2000__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2000__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2004__g 
                        = __Vfunc_aes_mul_gf2p4__2000__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2004__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2004__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2004__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2004__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2004__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2004__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2000__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2000__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2005__g 
                        = __Vfunc_aes_mul_gf2p4__2000__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2005__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2005__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2005__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2005__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2005__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2005__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2000__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2000__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__2000__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1996__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1996__gamma)));
    __Vfunc_aes_square_gf2p2__1997__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1996__gamma));
    __Vfunc_aes_square_gf2p2__1997__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1997__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1997__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1997__Vfuncout = __Vfunc_aes_square_gf2p2__1997__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__b = __Vfunc_aes_square_gf2p2__1997__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1998__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1998__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1998__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1998__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1998__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__1998__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1998__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1999__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1999__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1999__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1999__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1999__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1999__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1999__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2006__delta = (0x0000000fU 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__);
    __Vfunc_aes_mul_gf2p4__2006__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__2006__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4971937297070799134ull);
    __Vfunc_aes_mul_gf2p2__2007__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2006__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2007__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2006__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2007__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2007__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2007__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2007__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2007__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2007__d)));
    __Vfunc_aes_mul_gf2p2__2007__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2007__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2007__d)));
    __Vfunc_aes_mul_gf2p2__2007__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2007__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2007__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2007__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2007__b)));
    __Vfunc_aes_mul_gf2p2__2007__Vfuncout = __Vfunc_aes_mul_gf2p2__2007__f;
    __Vfunc_aes_mul_gf2p4__2006__a = __Vfunc_aes_mul_gf2p2__2007__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2008__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2006__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2006__delta)));
    __Vfunc_aes_mul_gf2p2__2008__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2006__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2006__gamma)));
    __Vfunc_aes_mul_gf2p2__2008__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2008__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2008__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2008__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2008__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2008__d)));
    __Vfunc_aes_mul_gf2p2__2008__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2008__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2008__d)));
    __Vfunc_aes_mul_gf2p2__2008__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2008__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2008__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2008__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2008__b)));
    __Vfunc_aes_mul_gf2p2__2008__Vfuncout = __Vfunc_aes_mul_gf2p2__2008__f;
    __Vfunc_aes_mul_gf2p4__2006__b = __Vfunc_aes_mul_gf2p2__2008__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2009__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2006__delta));
    __Vfunc_aes_mul_gf2p2__2009__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2006__gamma));
    __Vfunc_aes_mul_gf2p2__2009__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2009__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2009__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2009__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2009__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2009__d)));
    __Vfunc_aes_mul_gf2p2__2009__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2009__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2009__d)));
    __Vfunc_aes_mul_gf2p2__2009__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2009__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2009__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2009__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2009__b)));
    __Vfunc_aes_mul_gf2p2__2009__Vfuncout = __Vfunc_aes_mul_gf2p2__2009__f;
    __Vfunc_aes_mul_gf2p4__2006__c = __Vfunc_aes_mul_gf2p2__2009__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2006__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2006__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2010__g 
                        = __Vfunc_aes_mul_gf2p4__2006__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2010__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2010__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2010__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2010__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2010__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2010__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2006__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2006__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2011__g 
                        = __Vfunc_aes_mul_gf2p4__2006__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2011__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2011__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2011__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2011__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2011__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2011__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2006__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2006__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__2006__Vfuncout;
}

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2012__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2012__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2012__gamma;
    __Vfunc_aes_mul_gf2p4__2012__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2012__delta;
    __Vfunc_aes_mul_gf2p4__2012__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2012__a;
    __Vfunc_aes_mul_gf2p4__2012__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2012__b;
    __Vfunc_aes_mul_gf2p4__2012__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2012__c;
    __Vfunc_aes_mul_gf2p4__2012__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2013__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2013__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2013__g;
    __Vfunc_aes_mul_gf2p2__2013__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2013__d;
    __Vfunc_aes_mul_gf2p2__2013__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2013__f;
    __Vfunc_aes_mul_gf2p2__2013__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2013__a;
    __Vfunc_aes_mul_gf2p2__2013__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2013__b;
    __Vfunc_aes_mul_gf2p2__2013__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2013__c;
    __Vfunc_aes_mul_gf2p2__2013__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2014__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2014__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2014__g;
    __Vfunc_aes_mul_gf2p2__2014__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2014__d;
    __Vfunc_aes_mul_gf2p2__2014__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2014__f;
    __Vfunc_aes_mul_gf2p2__2014__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2014__a;
    __Vfunc_aes_mul_gf2p2__2014__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2014__b;
    __Vfunc_aes_mul_gf2p2__2014__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2014__c;
    __Vfunc_aes_mul_gf2p2__2014__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2015__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2015__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2015__g;
    __Vfunc_aes_mul_gf2p2__2015__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2015__d;
    __Vfunc_aes_mul_gf2p2__2015__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2015__f;
    __Vfunc_aes_mul_gf2p2__2015__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2015__a;
    __Vfunc_aes_mul_gf2p2__2015__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2015__b;
    __Vfunc_aes_mul_gf2p2__2015__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2015__c;
    __Vfunc_aes_mul_gf2p2__2015__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2018__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2018__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2018__gamma;
    __Vfunc_aes_mul_gf2p4__2018__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2018__delta;
    __Vfunc_aes_mul_gf2p4__2018__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2018__a;
    __Vfunc_aes_mul_gf2p4__2018__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2018__b;
    __Vfunc_aes_mul_gf2p4__2018__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2018__c;
    __Vfunc_aes_mul_gf2p4__2018__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2019__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2019__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2019__g;
    __Vfunc_aes_mul_gf2p2__2019__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2019__d;
    __Vfunc_aes_mul_gf2p2__2019__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2019__f;
    __Vfunc_aes_mul_gf2p2__2019__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2019__a;
    __Vfunc_aes_mul_gf2p2__2019__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2019__b;
    __Vfunc_aes_mul_gf2p2__2019__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2019__c;
    __Vfunc_aes_mul_gf2p2__2019__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2020__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2020__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2020__g;
    __Vfunc_aes_mul_gf2p2__2020__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2020__d;
    __Vfunc_aes_mul_gf2p2__2020__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2020__f;
    __Vfunc_aes_mul_gf2p2__2020__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2020__a;
    __Vfunc_aes_mul_gf2p2__2020__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2020__b;
    __Vfunc_aes_mul_gf2p2__2020__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2020__c;
    __Vfunc_aes_mul_gf2p2__2020__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2021__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2021__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2021__g;
    __Vfunc_aes_mul_gf2p2__2021__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2021__d;
    __Vfunc_aes_mul_gf2p2__2021__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2021__f;
    __Vfunc_aes_mul_gf2p2__2021__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2021__a;
    __Vfunc_aes_mul_gf2p2__2021__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2021__b;
    __Vfunc_aes_mul_gf2p2__2021__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2021__c;
    __Vfunc_aes_mul_gf2p2__2021__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2024__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2024__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2024__g;
    __Vfunc_aes_scale_omega2_gf2p2__2024__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2024__d;
    __Vfunc_aes_scale_omega2_gf2p2__2024__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2025__Vfuncout;
    __Vfunc_aes_square_gf2p2__2025__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2025__g;
    __Vfunc_aes_square_gf2p2__2025__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2025__d;
    __Vfunc_aes_square_gf2p2__2025__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2026__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2026__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2026__g;
    __Vfunc_aes_scale_omega2_gf2p2__2026__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2026__d;
    __Vfunc_aes_scale_omega2_gf2p2__2026__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2027__Vfuncout;
    __Vfunc_aes_square_gf2p2__2027__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2027__g;
    __Vfunc_aes_square_gf2p2__2027__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2027__d;
    __Vfunc_aes_square_gf2p2__2027__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2028__Vfuncout;
    __Vfunc_aes_square_gf2p2__2028__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2028__g;
    __Vfunc_aes_square_gf2p2__2028__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2028__d;
    __Vfunc_aes_square_gf2p2__2028__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2029__Vfuncout;
    __Vfunc_aes_square_gf2p2__2029__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2029__g;
    __Vfunc_aes_square_gf2p2__2029__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2029__d;
    __Vfunc_aes_square_gf2p2__2029__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2032__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2032__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2032__g;
    __Vfunc_aes_mul_gf2p2__2032__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2032__d;
    __Vfunc_aes_mul_gf2p2__2032__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2032__f;
    __Vfunc_aes_mul_gf2p2__2032__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2032__a;
    __Vfunc_aes_mul_gf2p2__2032__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2032__b;
    __Vfunc_aes_mul_gf2p2__2032__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2032__c;
    __Vfunc_aes_mul_gf2p2__2032__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2033__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2033__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2033__g;
    __Vfunc_aes_mul_gf2p2__2033__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2033__d;
    __Vfunc_aes_mul_gf2p2__2033__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2033__f;
    __Vfunc_aes_mul_gf2p2__2033__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2033__a;
    __Vfunc_aes_mul_gf2p2__2033__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2033__b;
    __Vfunc_aes_mul_gf2p2__2033__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2033__c;
    __Vfunc_aes_mul_gf2p2__2033__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2036__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2036__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2036__g;
    __Vfunc_aes_mul_gf2p2__2036__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2036__d;
    __Vfunc_aes_mul_gf2p2__2036__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2036__f;
    __Vfunc_aes_mul_gf2p2__2036__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2036__a;
    __Vfunc_aes_mul_gf2p2__2036__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2036__b;
    __Vfunc_aes_mul_gf2p2__2036__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2036__c;
    __Vfunc_aes_mul_gf2p2__2036__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2037__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2037__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2037__g;
    __Vfunc_aes_mul_gf2p2__2037__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2037__d;
    __Vfunc_aes_mul_gf2p2__2037__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2037__f;
    __Vfunc_aes_mul_gf2p2__2037__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2037__a;
    __Vfunc_aes_mul_gf2p2__2037__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2037__b;
    __Vfunc_aes_mul_gf2p2__2037__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2037__c;
    __Vfunc_aes_mul_gf2p2__2037__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2040__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2040__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2040__g;
    __Vfunc_aes_mul_gf2p2__2040__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2040__d;
    __Vfunc_aes_mul_gf2p2__2040__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2040__f;
    __Vfunc_aes_mul_gf2p2__2040__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2040__a;
    __Vfunc_aes_mul_gf2p2__2040__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2040__b;
    __Vfunc_aes_mul_gf2p2__2040__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2040__c;
    __Vfunc_aes_mul_gf2p2__2040__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2041__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2041__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2041__g;
    __Vfunc_aes_mul_gf2p2__2041__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2041__d;
    __Vfunc_aes_mul_gf2p2__2041__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2041__f;
    __Vfunc_aes_mul_gf2p2__2041__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2041__a;
    __Vfunc_aes_mul_gf2p2__2041__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2041__b;
    __Vfunc_aes_mul_gf2p2__2041__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2041__c;
    __Vfunc_aes_mul_gf2p2__2041__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2042__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2042__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2042__gamma;
    __Vfunc_aes_mul_gf2p4__2042__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2042__delta;
    __Vfunc_aes_mul_gf2p4__2042__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2042__a;
    __Vfunc_aes_mul_gf2p4__2042__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2042__b;
    __Vfunc_aes_mul_gf2p4__2042__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2042__c;
    __Vfunc_aes_mul_gf2p4__2042__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2043__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2043__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2043__g;
    __Vfunc_aes_mul_gf2p2__2043__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2043__d;
    __Vfunc_aes_mul_gf2p2__2043__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2043__f;
    __Vfunc_aes_mul_gf2p2__2043__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2043__a;
    __Vfunc_aes_mul_gf2p2__2043__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2043__b;
    __Vfunc_aes_mul_gf2p2__2043__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2043__c;
    __Vfunc_aes_mul_gf2p2__2043__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2044__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2044__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2044__g;
    __Vfunc_aes_mul_gf2p2__2044__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2044__d;
    __Vfunc_aes_mul_gf2p2__2044__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2044__f;
    __Vfunc_aes_mul_gf2p2__2044__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2044__a;
    __Vfunc_aes_mul_gf2p2__2044__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2044__b;
    __Vfunc_aes_mul_gf2p2__2044__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2044__c;
    __Vfunc_aes_mul_gf2p2__2044__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2045__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2045__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2045__g;
    __Vfunc_aes_mul_gf2p2__2045__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2045__d;
    __Vfunc_aes_mul_gf2p2__2045__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2045__f;
    __Vfunc_aes_mul_gf2p2__2045__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2045__a;
    __Vfunc_aes_mul_gf2p2__2045__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2045__b;
    __Vfunc_aes_mul_gf2p2__2045__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2045__c;
    __Vfunc_aes_mul_gf2p2__2045__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2048__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2048__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2048__gamma;
    __Vfunc_aes_mul_gf2p4__2048__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2048__delta;
    __Vfunc_aes_mul_gf2p4__2048__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2048__a;
    __Vfunc_aes_mul_gf2p4__2048__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2048__b;
    __Vfunc_aes_mul_gf2p4__2048__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2048__c;
    __Vfunc_aes_mul_gf2p4__2048__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2049__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2049__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2049__g;
    __Vfunc_aes_mul_gf2p2__2049__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2049__d;
    __Vfunc_aes_mul_gf2p2__2049__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2049__f;
    __Vfunc_aes_mul_gf2p2__2049__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2049__a;
    __Vfunc_aes_mul_gf2p2__2049__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2049__b;
    __Vfunc_aes_mul_gf2p2__2049__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2049__c;
    __Vfunc_aes_mul_gf2p2__2049__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2050__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2050__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2050__g;
    __Vfunc_aes_mul_gf2p2__2050__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2050__d;
    __Vfunc_aes_mul_gf2p2__2050__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2050__f;
    __Vfunc_aes_mul_gf2p2__2050__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2050__a;
    __Vfunc_aes_mul_gf2p2__2050__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2050__b;
    __Vfunc_aes_mul_gf2p2__2050__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2050__c;
    __Vfunc_aes_mul_gf2p2__2050__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2051__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2051__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2051__g;
    __Vfunc_aes_mul_gf2p2__2051__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2051__d;
    __Vfunc_aes_mul_gf2p2__2051__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2051__f;
    __Vfunc_aes_mul_gf2p2__2051__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2051__a;
    __Vfunc_aes_mul_gf2p2__2051__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2051__b;
    __Vfunc_aes_mul_gf2p2__2051__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2051__c;
    __Vfunc_aes_mul_gf2p2__2051__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2054__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2054__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2054__gamma;
    __Vfunc_aes_mul_gf2p4__2054__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2054__delta;
    __Vfunc_aes_mul_gf2p4__2054__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2054__a;
    __Vfunc_aes_mul_gf2p4__2054__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2054__b;
    __Vfunc_aes_mul_gf2p4__2054__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2054__c;
    __Vfunc_aes_mul_gf2p4__2054__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2055__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2055__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2055__g;
    __Vfunc_aes_mul_gf2p2__2055__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2055__d;
    __Vfunc_aes_mul_gf2p2__2055__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2055__f;
    __Vfunc_aes_mul_gf2p2__2055__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2055__a;
    __Vfunc_aes_mul_gf2p2__2055__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2055__b;
    __Vfunc_aes_mul_gf2p2__2055__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2055__c;
    __Vfunc_aes_mul_gf2p2__2055__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2056__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2056__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2056__g;
    __Vfunc_aes_mul_gf2p2__2056__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2056__d;
    __Vfunc_aes_mul_gf2p2__2056__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2056__f;
    __Vfunc_aes_mul_gf2p2__2056__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2056__a;
    __Vfunc_aes_mul_gf2p2__2056__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2056__b;
    __Vfunc_aes_mul_gf2p2__2056__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2056__c;
    __Vfunc_aes_mul_gf2p2__2056__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2057__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2057__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2057__g;
    __Vfunc_aes_mul_gf2p2__2057__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2057__d;
    __Vfunc_aes_mul_gf2p2__2057__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2057__f;
    __Vfunc_aes_mul_gf2p2__2057__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2057__a;
    __Vfunc_aes_mul_gf2p2__2057__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2057__b;
    __Vfunc_aes_mul_gf2p2__2057__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2057__c;
    __Vfunc_aes_mul_gf2p2__2057__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2060__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2060__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2060__gamma;
    __Vfunc_aes_mul_gf2p4__2060__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2060__delta;
    __Vfunc_aes_mul_gf2p4__2060__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2060__a;
    __Vfunc_aes_mul_gf2p4__2060__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2060__b;
    __Vfunc_aes_mul_gf2p4__2060__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2060__c;
    __Vfunc_aes_mul_gf2p4__2060__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2061__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2061__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2061__g;
    __Vfunc_aes_mul_gf2p2__2061__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2061__d;
    __Vfunc_aes_mul_gf2p2__2061__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2061__f;
    __Vfunc_aes_mul_gf2p2__2061__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2061__a;
    __Vfunc_aes_mul_gf2p2__2061__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2061__b;
    __Vfunc_aes_mul_gf2p2__2061__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2061__c;
    __Vfunc_aes_mul_gf2p2__2061__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2062__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2062__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2062__g;
    __Vfunc_aes_mul_gf2p2__2062__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2062__d;
    __Vfunc_aes_mul_gf2p2__2062__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2062__f;
    __Vfunc_aes_mul_gf2p2__2062__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2062__a;
    __Vfunc_aes_mul_gf2p2__2062__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2062__b;
    __Vfunc_aes_mul_gf2p2__2062__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2062__c;
    __Vfunc_aes_mul_gf2p2__2062__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2063__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2063__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2063__g;
    __Vfunc_aes_mul_gf2p2__2063__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2063__d;
    __Vfunc_aes_mul_gf2p2__2063__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2063__f;
    __Vfunc_aes_mul_gf2p2__2063__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2063__a;
    __Vfunc_aes_mul_gf2p2__2063__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2063__b;
    __Vfunc_aes_mul_gf2p2__2063__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2063__c;
    __Vfunc_aes_mul_gf2p2__2063__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2066__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2066__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2066__gamma;
    __Vfunc_aes_mul_gf2p4__2066__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2066__delta;
    __Vfunc_aes_mul_gf2p4__2066__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2066__a;
    __Vfunc_aes_mul_gf2p4__2066__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2066__b;
    __Vfunc_aes_mul_gf2p4__2066__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2066__c;
    __Vfunc_aes_mul_gf2p4__2066__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2067__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2067__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2067__g;
    __Vfunc_aes_mul_gf2p2__2067__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2067__d;
    __Vfunc_aes_mul_gf2p2__2067__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2067__f;
    __Vfunc_aes_mul_gf2p2__2067__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2067__a;
    __Vfunc_aes_mul_gf2p2__2067__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2067__b;
    __Vfunc_aes_mul_gf2p2__2067__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2067__c;
    __Vfunc_aes_mul_gf2p2__2067__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2068__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2068__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2068__g;
    __Vfunc_aes_mul_gf2p2__2068__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2068__d;
    __Vfunc_aes_mul_gf2p2__2068__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2068__f;
    __Vfunc_aes_mul_gf2p2__2068__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2068__a;
    __Vfunc_aes_mul_gf2p2__2068__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2068__b;
    __Vfunc_aes_mul_gf2p2__2068__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2068__c;
    __Vfunc_aes_mul_gf2p2__2068__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2069__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2069__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2069__g;
    __Vfunc_aes_mul_gf2p2__2069__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2069__d;
    __Vfunc_aes_mul_gf2p2__2069__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2069__f;
    __Vfunc_aes_mul_gf2p2__2069__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2069__a;
    __Vfunc_aes_mul_gf2p2__2069__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2069__b;
    __Vfunc_aes_mul_gf2p2__2069__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2069__c;
    __Vfunc_aes_mul_gf2p2__2069__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2072__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2072__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2072__gamma;
    __Vfunc_aes_mul_gf2p4__2072__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2072__delta;
    __Vfunc_aes_mul_gf2p4__2072__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2072__a;
    __Vfunc_aes_mul_gf2p4__2072__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2072__b;
    __Vfunc_aes_mul_gf2p4__2072__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2072__c;
    __Vfunc_aes_mul_gf2p4__2072__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2073__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2073__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2073__g;
    __Vfunc_aes_mul_gf2p2__2073__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2073__d;
    __Vfunc_aes_mul_gf2p2__2073__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2073__f;
    __Vfunc_aes_mul_gf2p2__2073__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2073__a;
    __Vfunc_aes_mul_gf2p2__2073__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2073__b;
    __Vfunc_aes_mul_gf2p2__2073__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2073__c;
    __Vfunc_aes_mul_gf2p2__2073__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2074__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2074__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2074__g;
    __Vfunc_aes_mul_gf2p2__2074__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2074__d;
    __Vfunc_aes_mul_gf2p2__2074__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2074__f;
    __Vfunc_aes_mul_gf2p2__2074__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2074__a;
    __Vfunc_aes_mul_gf2p2__2074__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2074__b;
    __Vfunc_aes_mul_gf2p2__2074__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2074__c;
    __Vfunc_aes_mul_gf2p2__2074__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2075__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2075__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2075__g;
    __Vfunc_aes_mul_gf2p2__2075__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2075__d;
    __Vfunc_aes_mul_gf2p2__2075__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2075__f;
    __Vfunc_aes_mul_gf2p2__2075__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2075__a;
    __Vfunc_aes_mul_gf2p2__2075__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2075__b;
    __Vfunc_aes_mul_gf2p2__2075__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2075__c;
    __Vfunc_aes_mul_gf2p2__2075__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2078__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2078__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2078__gamma;
    __Vfunc_aes_mul_gf2p4__2078__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2078__delta;
    __Vfunc_aes_mul_gf2p4__2078__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2078__a;
    __Vfunc_aes_mul_gf2p4__2078__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2078__b;
    __Vfunc_aes_mul_gf2p4__2078__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2078__c;
    __Vfunc_aes_mul_gf2p4__2078__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2079__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2079__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2079__g;
    __Vfunc_aes_mul_gf2p2__2079__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2079__d;
    __Vfunc_aes_mul_gf2p2__2079__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2079__f;
    __Vfunc_aes_mul_gf2p2__2079__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2079__a;
    __Vfunc_aes_mul_gf2p2__2079__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2079__b;
    __Vfunc_aes_mul_gf2p2__2079__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2079__c;
    __Vfunc_aes_mul_gf2p2__2079__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2080__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2080__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2080__g;
    __Vfunc_aes_mul_gf2p2__2080__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2080__d;
    __Vfunc_aes_mul_gf2p2__2080__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2080__f;
    __Vfunc_aes_mul_gf2p2__2080__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2080__a;
    __Vfunc_aes_mul_gf2p2__2080__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2080__b;
    __Vfunc_aes_mul_gf2p2__2080__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2080__c;
    __Vfunc_aes_mul_gf2p2__2080__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2081__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2081__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2081__g;
    __Vfunc_aes_mul_gf2p2__2081__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2081__d;
    __Vfunc_aes_mul_gf2p2__2081__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2081__f;
    __Vfunc_aes_mul_gf2p2__2081__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2081__a;
    __Vfunc_aes_mul_gf2p2__2081__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2081__b;
    __Vfunc_aes_mul_gf2p2__2081__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2081__c;
    __Vfunc_aes_mul_gf2p2__2081__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2084__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2084__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2084__gamma;
    __Vfunc_aes_mul_gf2p4__2084__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2084__delta;
    __Vfunc_aes_mul_gf2p4__2084__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2084__a;
    __Vfunc_aes_mul_gf2p4__2084__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2084__b;
    __Vfunc_aes_mul_gf2p4__2084__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2084__c;
    __Vfunc_aes_mul_gf2p4__2084__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2085__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2085__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2085__g;
    __Vfunc_aes_mul_gf2p2__2085__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2085__d;
    __Vfunc_aes_mul_gf2p2__2085__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2085__f;
    __Vfunc_aes_mul_gf2p2__2085__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2085__a;
    __Vfunc_aes_mul_gf2p2__2085__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2085__b;
    __Vfunc_aes_mul_gf2p2__2085__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2085__c;
    __Vfunc_aes_mul_gf2p2__2085__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2086__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2086__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2086__g;
    __Vfunc_aes_mul_gf2p2__2086__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2086__d;
    __Vfunc_aes_mul_gf2p2__2086__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2086__f;
    __Vfunc_aes_mul_gf2p2__2086__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2086__a;
    __Vfunc_aes_mul_gf2p2__2086__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2086__b;
    __Vfunc_aes_mul_gf2p2__2086__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2086__c;
    __Vfunc_aes_mul_gf2p2__2086__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2087__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2087__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2087__g;
    __Vfunc_aes_mul_gf2p2__2087__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2087__d;
    __Vfunc_aes_mul_gf2p2__2087__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2087__f;
    __Vfunc_aes_mul_gf2p2__2087__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2087__a;
    __Vfunc_aes_mul_gf2p2__2087__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2087__b;
    __Vfunc_aes_mul_gf2p2__2087__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2087__c;
    __Vfunc_aes_mul_gf2p2__2087__c = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y_ss__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d) 
                    << 4U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o 
                = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                    ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__) 
                                   << 4U)) | (0x0000000fU 
                                              & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__)));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0) 
                                    << 4U) ^ (0xfffffff0U 
                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                                        >> 4U))));
        }
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                                                 >> 0x00000014U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                                        >> 0x00000018U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by) 
                                    << 4U) ^ (0x0000fff0U 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                                                 >> 0x00000010U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                                        >> 0x00000014U))));
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                                                 >> 0x00000010U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                               >> 0x00000012U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x000ffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                                                 >> 0x0000000cU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                               >> 0x0000000eU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
                                    << 2U) ^ (0x0003fffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                                                 >> 0x0000000eU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                               >> 0x00000010U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o 
                = vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o;
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & ((0x3ffffffcU & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                                   >> 2U)) 
                                   ^ (0x003ffffcU & 
                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                                       >> 0x0000000aU)))) 
                   | (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                               >> 0x0000000cU))));
        }
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d) 
                    << 2U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x00fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                                                 >> 8U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                               >> 0x0000000aU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                    << 2U) ^ (0x03fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                                                 >> 6U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                               >> 8U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                    << 4U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma));
        }
        vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q 
            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d;
    } else {
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y_ss__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o = 0U;
    }
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv 
        = ((0x000000f0U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                            ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o)) 
                           << 4U)) | (0x0000000fU & 
                                      ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                                       ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv 
        = ((0x000000f0U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                           ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o))) 
           | (0x0000000fU & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                              ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o)) 
                             >> 4U)));
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
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (2U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (3U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (0U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.out_req_o = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                           & (4U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.mask_o = ([&]() {
            vlSelfRef.__Vfunc_aes_mvm__1989__mat_a[0U] = 0x58U;
            vlSelfRef.__Vfunc_aes_mvm__1989__mat_a[1U] = 0x2dU;
            vlSelfRef.__Vfunc_aes_mvm__1989__mat_a[2U] = 0x9eU;
            vlSelfRef.__Vfunc_aes_mvm__1989__mat_a[3U] = 0x0bU;
            vlSelfRef.__Vfunc_aes_mvm__1989__mat_a[4U] = 0xdcU;
            vlSelfRef.__Vfunc_aes_mvm__1989__mat_a[5U] = 4U;
            vlSelfRef.__Vfunc_aes_mvm__1989__mat_a[6U] = 3U;
            vlSelfRef.__Vfunc_aes_mvm__1989__mat_a[7U] = 0x24U;
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_b 
                = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c = 0U;
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                               >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                              [0U])));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                               [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                       >> 6U)))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                               [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                       >> 5U)))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                               [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                       >> 4U)))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                               [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                       >> 3U)))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                               [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                       >> 2U)))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                               [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                       >> 1U)))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                               [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 >> 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 >> 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                               [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 >> 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                               [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                               [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                 << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0x1ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0x3ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0x7ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                        [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0x3fffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0x7fffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                        [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0x7fffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                        [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                        [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1989__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1989__vec_b) 
                                                   << 7U))))));
            vlSelfRef.__Vfunc_aes_mvm__1989__Vfuncout 
                = vlSelfRef.__Vfunc_aes_mvm__1989__vec_c;
        }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1989__Vfuncout));
    vlSelfRef.data_o = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                 [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                 [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                 [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                 [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                 [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                 [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                 [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                 [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1986__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1986__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1986__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1986__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1986__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2012__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__2012__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__2012__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15643314743092009157ull);
    __Vfunc_aes_mul_gf2p2__2013__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2012__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2013__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2012__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2013__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2013__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2013__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2013__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2013__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2013__d)));
    __Vfunc_aes_mul_gf2p2__2013__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2013__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2013__d)));
    __Vfunc_aes_mul_gf2p2__2013__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2013__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2013__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2013__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2013__b)));
    __Vfunc_aes_mul_gf2p2__2013__Vfuncout = __Vfunc_aes_mul_gf2p2__2013__f;
    __Vfunc_aes_mul_gf2p4__2012__a = __Vfunc_aes_mul_gf2p2__2013__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2014__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2012__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2012__delta)));
    __Vfunc_aes_mul_gf2p2__2014__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2012__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2012__gamma)));
    __Vfunc_aes_mul_gf2p2__2014__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2014__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2014__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2014__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2014__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2014__d)));
    __Vfunc_aes_mul_gf2p2__2014__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2014__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2014__d)));
    __Vfunc_aes_mul_gf2p2__2014__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2014__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2014__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2014__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2014__b)));
    __Vfunc_aes_mul_gf2p2__2014__Vfuncout = __Vfunc_aes_mul_gf2p2__2014__f;
    __Vfunc_aes_mul_gf2p4__2012__b = __Vfunc_aes_mul_gf2p2__2014__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2015__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2012__delta));
    __Vfunc_aes_mul_gf2p2__2015__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2012__gamma));
    __Vfunc_aes_mul_gf2p2__2015__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2015__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2015__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2015__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2015__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2015__d)));
    __Vfunc_aes_mul_gf2p2__2015__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2015__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2015__d)));
    __Vfunc_aes_mul_gf2p2__2015__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2015__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2015__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2015__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2015__b)));
    __Vfunc_aes_mul_gf2p2__2015__Vfuncout = __Vfunc_aes_mul_gf2p2__2015__f;
    __Vfunc_aes_mul_gf2p4__2012__c = __Vfunc_aes_mul_gf2p2__2015__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2012__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2012__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2016__g 
                        = __Vfunc_aes_mul_gf2p4__2012__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2016__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2016__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2016__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2016__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2016__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2016__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2012__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2012__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2017__g 
                        = __Vfunc_aes_mul_gf2p4__2012__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2017__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2017__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2017__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2017__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2017__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2017__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2012__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2012__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__2012__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2018__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__2018__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__2018__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3329542561789010338ull);
    __Vfunc_aes_mul_gf2p2__2019__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2018__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2019__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2018__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2019__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2019__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2019__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2019__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2019__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2019__d)));
    __Vfunc_aes_mul_gf2p2__2019__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2019__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2019__d)));
    __Vfunc_aes_mul_gf2p2__2019__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2019__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2019__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2019__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2019__b)));
    __Vfunc_aes_mul_gf2p2__2019__Vfuncout = __Vfunc_aes_mul_gf2p2__2019__f;
    __Vfunc_aes_mul_gf2p4__2018__a = __Vfunc_aes_mul_gf2p2__2019__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2020__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2018__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2018__delta)));
    __Vfunc_aes_mul_gf2p2__2020__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2018__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2018__gamma)));
    __Vfunc_aes_mul_gf2p2__2020__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2020__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2020__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2020__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2020__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2020__d)));
    __Vfunc_aes_mul_gf2p2__2020__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2020__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2020__d)));
    __Vfunc_aes_mul_gf2p2__2020__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2020__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2020__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2020__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2020__b)));
    __Vfunc_aes_mul_gf2p2__2020__Vfuncout = __Vfunc_aes_mul_gf2p2__2020__f;
    __Vfunc_aes_mul_gf2p4__2018__b = __Vfunc_aes_mul_gf2p2__2020__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2021__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2018__delta));
    __Vfunc_aes_mul_gf2p2__2021__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2018__gamma));
    __Vfunc_aes_mul_gf2p2__2021__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2021__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2021__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2021__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2021__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2021__d)));
    __Vfunc_aes_mul_gf2p2__2021__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2021__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2021__d)));
    __Vfunc_aes_mul_gf2p2__2021__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2021__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2021__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2021__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2021__b)));
    __Vfunc_aes_mul_gf2p2__2021__Vfuncout = __Vfunc_aes_mul_gf2p2__2021__f;
    __Vfunc_aes_mul_gf2p4__2018__c = __Vfunc_aes_mul_gf2p2__2021__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2018__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2018__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2022__g 
                        = __Vfunc_aes_mul_gf2p4__2018__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2022__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2022__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2022__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2022__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2022__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2022__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2018__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2018__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2023__g 
                        = __Vfunc_aes_mul_gf2p4__2018__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2023__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2023__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2023__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2023__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2023__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2023__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2018__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2018__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__2018__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2036__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__2036__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__2036__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2036__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2036__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2036__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2036__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2036__d)));
    __Vfunc_aes_mul_gf2p2__2036__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2036__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2036__d)));
    __Vfunc_aes_mul_gf2p2__2036__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2036__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2036__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2036__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2036__b)));
    __Vfunc_aes_mul_gf2p2__2036__Vfuncout = __Vfunc_aes_mul_gf2p2__2036__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__2036__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2037__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__2037__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2037__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2037__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2037__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2037__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2037__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2037__d)));
    __Vfunc_aes_mul_gf2p2__2037__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2037__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2037__d)));
    __Vfunc_aes_mul_gf2p2__2037__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2037__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2037__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2037__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2037__b)));
    __Vfunc_aes_mul_gf2p2__2037__Vfuncout = __Vfunc_aes_mul_gf2p2__2037__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__2037__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2040__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__2040__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2040__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2040__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2040__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2040__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2040__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2040__d)));
    __Vfunc_aes_mul_gf2p2__2040__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2040__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2040__d)));
    __Vfunc_aes_mul_gf2p2__2040__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2040__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2040__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2040__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2040__b)));
    __Vfunc_aes_mul_gf2p2__2040__Vfuncout = __Vfunc_aes_mul_gf2p2__2040__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__2040__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2041__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__2041__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__2041__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2041__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2041__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2041__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2041__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2041__d)));
    __Vfunc_aes_mul_gf2p2__2041__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2041__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2041__d)));
    __Vfunc_aes_mul_gf2p2__2041__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2041__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2041__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2041__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2041__b)));
    __Vfunc_aes_mul_gf2p2__2041__Vfuncout = __Vfunc_aes_mul_gf2p2__2041__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__2041__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (1U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
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
    __Vfunc_aes_square_gf2p2__2025__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__2025__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__2025__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__2025__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__2025__Vfuncout = __Vfunc_aes_square_gf2p2__2025__d;
    __Vfunc_aes_scale_omega2_gf2p2__2024__g = __Vfunc_aes_square_gf2p2__2025__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2024__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2024__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2024__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2024__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2024__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__2024__Vfuncout;
    __Vfunc_aes_square_gf2p2__2027__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__2027__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__2027__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__2027__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__2027__Vfuncout = __Vfunc_aes_square_gf2p2__2027__d;
    __Vfunc_aes_scale_omega2_gf2p2__2026__g = __Vfunc_aes_square_gf2p2__2027__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2026__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2026__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2026__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2026__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2026__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__2026__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2042__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__2042__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__2042__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 901005617718756964ull);
    __Vfunc_aes_mul_gf2p2__2043__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2042__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2043__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2042__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2043__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2043__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2043__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2043__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2043__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2043__d)));
    __Vfunc_aes_mul_gf2p2__2043__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2043__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2043__d)));
    __Vfunc_aes_mul_gf2p2__2043__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2043__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2043__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2043__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2043__b)));
    __Vfunc_aes_mul_gf2p2__2043__Vfuncout = __Vfunc_aes_mul_gf2p2__2043__f;
    __Vfunc_aes_mul_gf2p4__2042__a = __Vfunc_aes_mul_gf2p2__2043__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2044__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2042__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2042__delta)));
    __Vfunc_aes_mul_gf2p2__2044__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2042__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2042__gamma)));
    __Vfunc_aes_mul_gf2p2__2044__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2044__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2044__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2044__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2044__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2044__d)));
    __Vfunc_aes_mul_gf2p2__2044__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2044__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2044__d)));
    __Vfunc_aes_mul_gf2p2__2044__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2044__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2044__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2044__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2044__b)));
    __Vfunc_aes_mul_gf2p2__2044__Vfuncout = __Vfunc_aes_mul_gf2p2__2044__f;
    __Vfunc_aes_mul_gf2p4__2042__b = __Vfunc_aes_mul_gf2p2__2044__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2045__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2042__delta));
    __Vfunc_aes_mul_gf2p2__2045__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2042__gamma));
    __Vfunc_aes_mul_gf2p2__2045__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2045__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2045__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2045__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2045__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2045__d)));
    __Vfunc_aes_mul_gf2p2__2045__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2045__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2045__d)));
    __Vfunc_aes_mul_gf2p2__2045__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2045__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2045__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2045__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2045__b)));
    __Vfunc_aes_mul_gf2p2__2045__Vfuncout = __Vfunc_aes_mul_gf2p2__2045__f;
    __Vfunc_aes_mul_gf2p4__2042__c = __Vfunc_aes_mul_gf2p2__2045__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2042__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2042__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2046__g 
                        = __Vfunc_aes_mul_gf2p4__2042__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2046__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2046__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2046__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2046__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2046__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2046__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2042__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2042__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2047__g 
                        = __Vfunc_aes_mul_gf2p4__2042__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2047__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2047__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2047__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2047__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2047__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2047__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2042__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2042__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__2042__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2060__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    __Vfunc_aes_mul_gf2p4__2060__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__2060__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14472110551045195501ull);
    __Vfunc_aes_mul_gf2p2__2061__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2060__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2061__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2060__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2061__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2061__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2061__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2061__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2061__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2061__d)));
    __Vfunc_aes_mul_gf2p2__2061__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2061__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2061__d)));
    __Vfunc_aes_mul_gf2p2__2061__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2061__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2061__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2061__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2061__b)));
    __Vfunc_aes_mul_gf2p2__2061__Vfuncout = __Vfunc_aes_mul_gf2p2__2061__f;
    __Vfunc_aes_mul_gf2p4__2060__a = __Vfunc_aes_mul_gf2p2__2061__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2062__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2060__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2060__delta)));
    __Vfunc_aes_mul_gf2p2__2062__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2060__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2060__gamma)));
    __Vfunc_aes_mul_gf2p2__2062__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2062__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2062__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2062__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2062__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2062__d)));
    __Vfunc_aes_mul_gf2p2__2062__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2062__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2062__d)));
    __Vfunc_aes_mul_gf2p2__2062__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2062__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2062__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2062__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2062__b)));
    __Vfunc_aes_mul_gf2p2__2062__Vfuncout = __Vfunc_aes_mul_gf2p2__2062__f;
    __Vfunc_aes_mul_gf2p4__2060__b = __Vfunc_aes_mul_gf2p2__2062__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2063__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2060__delta));
    __Vfunc_aes_mul_gf2p2__2063__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2060__gamma));
    __Vfunc_aes_mul_gf2p2__2063__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2063__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2063__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2063__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2063__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2063__d)));
    __Vfunc_aes_mul_gf2p2__2063__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2063__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2063__d)));
    __Vfunc_aes_mul_gf2p2__2063__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2063__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2063__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2063__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2063__b)));
    __Vfunc_aes_mul_gf2p2__2063__Vfuncout = __Vfunc_aes_mul_gf2p2__2063__f;
    __Vfunc_aes_mul_gf2p4__2060__c = __Vfunc_aes_mul_gf2p2__2063__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2060__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2060__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2064__g 
                        = __Vfunc_aes_mul_gf2p4__2060__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2064__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2064__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2064__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2064__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2064__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2064__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2060__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2060__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2065__g 
                        = __Vfunc_aes_mul_gf2p4__2060__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2065__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2065__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2065__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2065__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2065__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2065__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2060__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2060__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__2060__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2066__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    __Vfunc_aes_mul_gf2p4__2066__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__2066__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10185937525304532440ull);
    __Vfunc_aes_mul_gf2p2__2067__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2066__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2067__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2066__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2067__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2067__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2067__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2067__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2067__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2067__d)));
    __Vfunc_aes_mul_gf2p2__2067__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2067__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2067__d)));
    __Vfunc_aes_mul_gf2p2__2067__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2067__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2067__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2067__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2067__b)));
    __Vfunc_aes_mul_gf2p2__2067__Vfuncout = __Vfunc_aes_mul_gf2p2__2067__f;
    __Vfunc_aes_mul_gf2p4__2066__a = __Vfunc_aes_mul_gf2p2__2067__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2068__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2066__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2066__delta)));
    __Vfunc_aes_mul_gf2p2__2068__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2066__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2066__gamma)));
    __Vfunc_aes_mul_gf2p2__2068__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2068__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2068__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2068__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2068__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2068__d)));
    __Vfunc_aes_mul_gf2p2__2068__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2068__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2068__d)));
    __Vfunc_aes_mul_gf2p2__2068__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2068__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2068__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2068__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2068__b)));
    __Vfunc_aes_mul_gf2p2__2068__Vfuncout = __Vfunc_aes_mul_gf2p2__2068__f;
    __Vfunc_aes_mul_gf2p4__2066__b = __Vfunc_aes_mul_gf2p2__2068__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2069__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2066__delta));
    __Vfunc_aes_mul_gf2p2__2069__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2066__gamma));
    __Vfunc_aes_mul_gf2p2__2069__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2069__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2069__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2069__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2069__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2069__d)));
    __Vfunc_aes_mul_gf2p2__2069__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2069__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2069__d)));
    __Vfunc_aes_mul_gf2p2__2069__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2069__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2069__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2069__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2069__b)));
    __Vfunc_aes_mul_gf2p2__2069__Vfuncout = __Vfunc_aes_mul_gf2p2__2069__f;
    __Vfunc_aes_mul_gf2p4__2066__c = __Vfunc_aes_mul_gf2p2__2069__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2066__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2066__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2070__g 
                        = __Vfunc_aes_mul_gf2p4__2066__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2070__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2070__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2070__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2070__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2070__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2070__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2066__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2066__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2071__g 
                        = __Vfunc_aes_mul_gf2p4__2066__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2071__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2071__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2071__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2071__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2071__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2071__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2066__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2066__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__2066__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2078__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__2078__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__2078__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5783376924700311135ull);
    __Vfunc_aes_mul_gf2p2__2079__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2078__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2079__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2078__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2079__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2079__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2079__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2079__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2079__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2079__d)));
    __Vfunc_aes_mul_gf2p2__2079__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2079__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2079__d)));
    __Vfunc_aes_mul_gf2p2__2079__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2079__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2079__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2079__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2079__b)));
    __Vfunc_aes_mul_gf2p2__2079__Vfuncout = __Vfunc_aes_mul_gf2p2__2079__f;
    __Vfunc_aes_mul_gf2p4__2078__a = __Vfunc_aes_mul_gf2p2__2079__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2080__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2078__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2078__delta)));
    __Vfunc_aes_mul_gf2p2__2080__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2078__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2078__gamma)));
    __Vfunc_aes_mul_gf2p2__2080__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2080__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2080__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2080__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2080__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2080__d)));
    __Vfunc_aes_mul_gf2p2__2080__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2080__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2080__d)));
    __Vfunc_aes_mul_gf2p2__2080__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2080__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2080__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2080__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2080__b)));
    __Vfunc_aes_mul_gf2p2__2080__Vfuncout = __Vfunc_aes_mul_gf2p2__2080__f;
    __Vfunc_aes_mul_gf2p4__2078__b = __Vfunc_aes_mul_gf2p2__2080__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2081__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2078__delta));
    __Vfunc_aes_mul_gf2p2__2081__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2078__gamma));
    __Vfunc_aes_mul_gf2p2__2081__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2081__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2081__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2081__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2081__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2081__d)));
    __Vfunc_aes_mul_gf2p2__2081__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2081__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2081__d)));
    __Vfunc_aes_mul_gf2p2__2081__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2081__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2081__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2081__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2081__b)));
    __Vfunc_aes_mul_gf2p2__2081__Vfuncout = __Vfunc_aes_mul_gf2p2__2081__f;
    __Vfunc_aes_mul_gf2p4__2078__c = __Vfunc_aes_mul_gf2p2__2081__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2078__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2078__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2082__g 
                        = __Vfunc_aes_mul_gf2p4__2078__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2082__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2082__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2082__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2082__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2082__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2082__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2078__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2078__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2083__g 
                        = __Vfunc_aes_mul_gf2p4__2078__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2083__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2083__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2083__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2083__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2083__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2083__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2078__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2078__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__2078__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2048__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__2048__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__2048__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11122795582720719430ull);
    __Vfunc_aes_mul_gf2p2__2049__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2048__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2049__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2048__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2049__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2049__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2049__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2049__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2049__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2049__d)));
    __Vfunc_aes_mul_gf2p2__2049__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2049__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2049__d)));
    __Vfunc_aes_mul_gf2p2__2049__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2049__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2049__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2049__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2049__b)));
    __Vfunc_aes_mul_gf2p2__2049__Vfuncout = __Vfunc_aes_mul_gf2p2__2049__f;
    __Vfunc_aes_mul_gf2p4__2048__a = __Vfunc_aes_mul_gf2p2__2049__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2050__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2048__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2048__delta)));
    __Vfunc_aes_mul_gf2p2__2050__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2048__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2048__gamma)));
    __Vfunc_aes_mul_gf2p2__2050__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2050__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2050__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2050__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2050__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2050__d)));
    __Vfunc_aes_mul_gf2p2__2050__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2050__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2050__d)));
    __Vfunc_aes_mul_gf2p2__2050__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2050__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2050__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2050__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2050__b)));
    __Vfunc_aes_mul_gf2p2__2050__Vfuncout = __Vfunc_aes_mul_gf2p2__2050__f;
    __Vfunc_aes_mul_gf2p4__2048__b = __Vfunc_aes_mul_gf2p2__2050__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2051__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2048__delta));
    __Vfunc_aes_mul_gf2p2__2051__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2048__gamma));
    __Vfunc_aes_mul_gf2p2__2051__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2051__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2051__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2051__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2051__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2051__d)));
    __Vfunc_aes_mul_gf2p2__2051__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2051__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2051__d)));
    __Vfunc_aes_mul_gf2p2__2051__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2051__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2051__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2051__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2051__b)));
    __Vfunc_aes_mul_gf2p2__2051__Vfuncout = __Vfunc_aes_mul_gf2p2__2051__f;
    __Vfunc_aes_mul_gf2p4__2048__c = __Vfunc_aes_mul_gf2p2__2051__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2048__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2048__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2052__g 
                        = __Vfunc_aes_mul_gf2p4__2048__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2052__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2052__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2052__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2052__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2052__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2052__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2048__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2048__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2053__g 
                        = __Vfunc_aes_mul_gf2p4__2048__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2053__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2053__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2053__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2053__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2053__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2053__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2048__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2048__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__2048__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2054__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__2054__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__2054__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6989819827954112504ull);
    __Vfunc_aes_mul_gf2p2__2055__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2054__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2055__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2054__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2055__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2055__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2055__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2055__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2055__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2055__d)));
    __Vfunc_aes_mul_gf2p2__2055__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2055__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2055__d)));
    __Vfunc_aes_mul_gf2p2__2055__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2055__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2055__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2055__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2055__b)));
    __Vfunc_aes_mul_gf2p2__2055__Vfuncout = __Vfunc_aes_mul_gf2p2__2055__f;
    __Vfunc_aes_mul_gf2p4__2054__a = __Vfunc_aes_mul_gf2p2__2055__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2056__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2054__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2054__delta)));
    __Vfunc_aes_mul_gf2p2__2056__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2054__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2054__gamma)));
    __Vfunc_aes_mul_gf2p2__2056__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2056__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2056__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2056__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2056__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2056__d)));
    __Vfunc_aes_mul_gf2p2__2056__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2056__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2056__d)));
    __Vfunc_aes_mul_gf2p2__2056__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2056__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2056__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2056__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2056__b)));
    __Vfunc_aes_mul_gf2p2__2056__Vfuncout = __Vfunc_aes_mul_gf2p2__2056__f;
    __Vfunc_aes_mul_gf2p4__2054__b = __Vfunc_aes_mul_gf2p2__2056__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2057__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2054__delta));
    __Vfunc_aes_mul_gf2p2__2057__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2054__gamma));
    __Vfunc_aes_mul_gf2p2__2057__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2057__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2057__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2057__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2057__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2057__d)));
    __Vfunc_aes_mul_gf2p2__2057__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2057__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2057__d)));
    __Vfunc_aes_mul_gf2p2__2057__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2057__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2057__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2057__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2057__b)));
    __Vfunc_aes_mul_gf2p2__2057__Vfuncout = __Vfunc_aes_mul_gf2p2__2057__f;
    __Vfunc_aes_mul_gf2p4__2054__c = __Vfunc_aes_mul_gf2p2__2057__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2054__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2054__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2058__g 
                        = __Vfunc_aes_mul_gf2p4__2054__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2058__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2058__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2058__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2058__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2058__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2058__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2054__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2054__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2059__g 
                        = __Vfunc_aes_mul_gf2p4__2054__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2059__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2059__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2059__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2059__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2059__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2059__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2054__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2054__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__2054__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2072__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__2072__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__2072__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5227356164796471787ull);
    __Vfunc_aes_mul_gf2p2__2073__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2072__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2073__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2072__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2073__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2073__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2073__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2073__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2073__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2073__d)));
    __Vfunc_aes_mul_gf2p2__2073__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2073__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2073__d)));
    __Vfunc_aes_mul_gf2p2__2073__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2073__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2073__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2073__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2073__b)));
    __Vfunc_aes_mul_gf2p2__2073__Vfuncout = __Vfunc_aes_mul_gf2p2__2073__f;
    __Vfunc_aes_mul_gf2p4__2072__a = __Vfunc_aes_mul_gf2p2__2073__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2074__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2072__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2072__delta)));
    __Vfunc_aes_mul_gf2p2__2074__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2072__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2072__gamma)));
    __Vfunc_aes_mul_gf2p2__2074__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2074__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2074__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2074__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2074__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2074__d)));
    __Vfunc_aes_mul_gf2p2__2074__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2074__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2074__d)));
    __Vfunc_aes_mul_gf2p2__2074__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2074__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2074__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2074__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2074__b)));
    __Vfunc_aes_mul_gf2p2__2074__Vfuncout = __Vfunc_aes_mul_gf2p2__2074__f;
    __Vfunc_aes_mul_gf2p4__2072__b = __Vfunc_aes_mul_gf2p2__2074__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2075__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2072__delta));
    __Vfunc_aes_mul_gf2p2__2075__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2072__gamma));
    __Vfunc_aes_mul_gf2p2__2075__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2075__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2075__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2075__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2075__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2075__d)));
    __Vfunc_aes_mul_gf2p2__2075__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2075__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2075__d)));
    __Vfunc_aes_mul_gf2p2__2075__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2075__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2075__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2075__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2075__b)));
    __Vfunc_aes_mul_gf2p2__2075__Vfuncout = __Vfunc_aes_mul_gf2p2__2075__f;
    __Vfunc_aes_mul_gf2p4__2072__c = __Vfunc_aes_mul_gf2p2__2075__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2072__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2072__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2076__g 
                        = __Vfunc_aes_mul_gf2p4__2072__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2076__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2076__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2076__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2076__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2076__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2076__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2072__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2072__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2077__g 
                        = __Vfunc_aes_mul_gf2p4__2072__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2077__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2077__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2077__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2077__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2077__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2077__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2072__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2072__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__2072__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2084__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__2084__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__2084__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7915426988251232204ull);
    __Vfunc_aes_mul_gf2p2__2085__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2084__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2085__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2084__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2085__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2085__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2085__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2085__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2085__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2085__d)));
    __Vfunc_aes_mul_gf2p2__2085__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2085__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2085__d)));
    __Vfunc_aes_mul_gf2p2__2085__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2085__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2085__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2085__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2085__b)));
    __Vfunc_aes_mul_gf2p2__2085__Vfuncout = __Vfunc_aes_mul_gf2p2__2085__f;
    __Vfunc_aes_mul_gf2p4__2084__a = __Vfunc_aes_mul_gf2p2__2085__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2086__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2084__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2084__delta)));
    __Vfunc_aes_mul_gf2p2__2086__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2084__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2084__gamma)));
    __Vfunc_aes_mul_gf2p2__2086__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2086__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2086__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2086__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2086__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2086__d)));
    __Vfunc_aes_mul_gf2p2__2086__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2086__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2086__d)));
    __Vfunc_aes_mul_gf2p2__2086__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2086__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2086__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2086__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2086__b)));
    __Vfunc_aes_mul_gf2p2__2086__Vfuncout = __Vfunc_aes_mul_gf2p2__2086__f;
    __Vfunc_aes_mul_gf2p4__2084__b = __Vfunc_aes_mul_gf2p2__2086__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2087__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2084__delta));
    __Vfunc_aes_mul_gf2p2__2087__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2084__gamma));
    __Vfunc_aes_mul_gf2p2__2087__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2087__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2087__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2087__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2087__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2087__d)));
    __Vfunc_aes_mul_gf2p2__2087__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2087__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2087__d)));
    __Vfunc_aes_mul_gf2p2__2087__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2087__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2087__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2087__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2087__b)));
    __Vfunc_aes_mul_gf2p2__2087__Vfuncout = __Vfunc_aes_mul_gf2p2__2087__f;
    __Vfunc_aes_mul_gf2p4__2084__c = __Vfunc_aes_mul_gf2p2__2087__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2084__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2084__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2088__g 
                        = __Vfunc_aes_mul_gf2p4__2084__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2088__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2088__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2088__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2088__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2088__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2088__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2084__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2084__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2089__g 
                        = __Vfunc_aes_mul_gf2p4__2084__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2089__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2089__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2089__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2089__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2089__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2089__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2084__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2084__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__2084__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2032__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__2032__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__2032__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2032__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2032__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2032__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2032__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2032__d)));
    __Vfunc_aes_mul_gf2p2__2032__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2032__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2032__d)));
    __Vfunc_aes_mul_gf2p2__2032__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2032__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2032__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2032__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2032__b)));
    __Vfunc_aes_mul_gf2p2__2032__Vfuncout = __Vfunc_aes_mul_gf2p2__2032__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__2032__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2033__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__2033__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2033__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2033__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2033__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2033__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2033__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2033__d)));
    __Vfunc_aes_mul_gf2p2__2033__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2033__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2033__d)));
    __Vfunc_aes_mul_gf2p2__2033__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2033__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2033__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2033__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2033__b)));
    __Vfunc_aes_mul_gf2p2__2033__Vfuncout = __Vfunc_aes_mul_gf2p2__2033__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__2033__Vfuncout;
    __Vfunc_aes_square_gf2p2__2028__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 >> 2U) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                               ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                  >> 2U)));
    __Vfunc_aes_square_gf2p2__2028__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__2028__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__2028__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__2028__Vfuncout = __Vfunc_aes_square_gf2p2__2028__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__2028__Vfuncout;
    __Vfunc_aes_square_gf2p2__2029__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                               ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__2029__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__2029__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__2029__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__2029__Vfuncout = __Vfunc_aes_square_gf2p2__2029__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__2029__Vfuncout;
}

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__1(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2030__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2030__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2030__g;
    __Vfunc_aes_mul_gf2p2__2030__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2030__d;
    __Vfunc_aes_mul_gf2p2__2030__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2030__f;
    __Vfunc_aes_mul_gf2p2__2030__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2030__a;
    __Vfunc_aes_mul_gf2p2__2030__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2030__b;
    __Vfunc_aes_mul_gf2p2__2030__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2030__c;
    __Vfunc_aes_mul_gf2p2__2030__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2031__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2031__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2031__g;
    __Vfunc_aes_mul_gf2p2__2031__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2031__d;
    __Vfunc_aes_mul_gf2p2__2031__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2031__f;
    __Vfunc_aes_mul_gf2p2__2031__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2031__a;
    __Vfunc_aes_mul_gf2p2__2031__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2031__b;
    __Vfunc_aes_mul_gf2p2__2031__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2031__c;
    __Vfunc_aes_mul_gf2p2__2031__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2034__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2034__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2034__g;
    __Vfunc_aes_mul_gf2p2__2034__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2034__d;
    __Vfunc_aes_mul_gf2p2__2034__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2034__f;
    __Vfunc_aes_mul_gf2p2__2034__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2034__a;
    __Vfunc_aes_mul_gf2p2__2034__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2034__b;
    __Vfunc_aes_mul_gf2p2__2034__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2034__c;
    __Vfunc_aes_mul_gf2p2__2034__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2035__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2035__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2035__g;
    __Vfunc_aes_mul_gf2p2__2035__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2035__d;
    __Vfunc_aes_mul_gf2p2__2035__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2035__f;
    __Vfunc_aes_mul_gf2p2__2035__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2035__a;
    __Vfunc_aes_mul_gf2p2__2035__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2035__b;
    __Vfunc_aes_mul_gf2p2__2035__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2035__c;
    __Vfunc_aes_mul_gf2p2__2035__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2038__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2038__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2038__g;
    __Vfunc_aes_mul_gf2p2__2038__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2038__d;
    __Vfunc_aes_mul_gf2p2__2038__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2038__f;
    __Vfunc_aes_mul_gf2p2__2038__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2038__a;
    __Vfunc_aes_mul_gf2p2__2038__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2038__b;
    __Vfunc_aes_mul_gf2p2__2038__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2038__c;
    __Vfunc_aes_mul_gf2p2__2038__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2039__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2039__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2039__g;
    __Vfunc_aes_mul_gf2p2__2039__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2039__d;
    __Vfunc_aes_mul_gf2p2__2039__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2039__f;
    __Vfunc_aes_mul_gf2p2__2039__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2039__a;
    __Vfunc_aes_mul_gf2p2__2039__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2039__b;
    __Vfunc_aes_mul_gf2p2__2039__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2039__c;
    __Vfunc_aes_mul_gf2p2__2039__c = 0;
    // Body
    __Vfunc_aes_mul_gf2p2__2030__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__2030__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2030__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2030__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2030__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2030__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2030__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2030__d)));
    __Vfunc_aes_mul_gf2p2__2030__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2030__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2030__d)));
    __Vfunc_aes_mul_gf2p2__2030__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2030__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2030__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2030__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2030__b)));
    __Vfunc_aes_mul_gf2p2__2030__Vfuncout = __Vfunc_aes_mul_gf2p2__2030__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__2030__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2031__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__2031__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2031__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2031__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2031__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2031__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2031__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2031__d)));
    __Vfunc_aes_mul_gf2p2__2031__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2031__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2031__d)));
    __Vfunc_aes_mul_gf2p2__2031__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2031__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2031__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2031__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2031__b)));
    __Vfunc_aes_mul_gf2p2__2031__Vfuncout = __Vfunc_aes_mul_gf2p2__2031__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__2031__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2034__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__2034__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__2034__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2034__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2034__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2034__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2034__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2034__d)));
    __Vfunc_aes_mul_gf2p2__2034__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2034__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2034__d)));
    __Vfunc_aes_mul_gf2p2__2034__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2034__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2034__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2034__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2034__b)));
    __Vfunc_aes_mul_gf2p2__2034__Vfuncout = __Vfunc_aes_mul_gf2p2__2034__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__2034__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2035__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__2035__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2035__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2035__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2035__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2035__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2035__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2035__d)));
    __Vfunc_aes_mul_gf2p2__2035__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2035__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2035__d)));
    __Vfunc_aes_mul_gf2p2__2035__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2035__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2035__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2035__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2035__b)));
    __Vfunc_aes_mul_gf2p2__2035__Vfuncout = __Vfunc_aes_mul_gf2p2__2035__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__2035__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2038__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__2038__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega;
    __Vfunc_aes_mul_gf2p2__2038__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2038__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2038__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2038__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2038__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2038__d)));
    __Vfunc_aes_mul_gf2p2__2038__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2038__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2038__d)));
    __Vfunc_aes_mul_gf2p2__2038__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2038__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2038__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2038__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2038__b)));
    __Vfunc_aes_mul_gf2p2__2038__Vfuncout = __Vfunc_aes_mul_gf2p2__2038__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__2038__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2039__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__83__03a56__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__2039__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega;
    __Vfunc_aes_mul_gf2p2__2039__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2039__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2039__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2039__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2039__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2039__d)));
    __Vfunc_aes_mul_gf2p2__2039__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2039__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2039__d)));
    __Vfunc_aes_mul_gf2p2__2039__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2039__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2039__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2039__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2039__b)));
    __Vfunc_aes_mul_gf2p2__2039__Vfuncout = __Vfunc_aes_mul_gf2p2__2039__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__2039__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d 
        = (((IData)(vlSelfRef.out_req_o) & (3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_out_ack_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)))
            ? 0U : (7U & ((IData)(vlSelfRef.out_req_o)
                           ? (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)
                           : ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q) 
                              + (3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))))));
}

void Vsim_aes_sbox__S4___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2103__Vfuncout;
    __Vfunc_aes_square_gf2p2__2103__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2103__g;
    __Vfunc_aes_square_gf2p2__2103__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2103__d;
    __Vfunc_aes_square_gf2p2__2103__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2107__Vfuncout;
    __Vfunc_aes_square_gf2p2__2107__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2107__g;
    __Vfunc_aes_square_gf2p2__2107__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2107__d;
    __Vfunc_aes_square_gf2p2__2107__d = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2110__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2110__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2110__gamma;
    __Vfunc_aes_mul_gf2p4__2110__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2110__delta;
    __Vfunc_aes_mul_gf2p4__2110__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2110__a;
    __Vfunc_aes_mul_gf2p4__2110__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2110__b;
    __Vfunc_aes_mul_gf2p4__2110__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2110__c;
    __Vfunc_aes_mul_gf2p4__2110__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2111__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2111__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2111__g;
    __Vfunc_aes_mul_gf2p2__2111__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2111__d;
    __Vfunc_aes_mul_gf2p2__2111__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2111__f;
    __Vfunc_aes_mul_gf2p2__2111__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2111__a;
    __Vfunc_aes_mul_gf2p2__2111__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2111__b;
    __Vfunc_aes_mul_gf2p2__2111__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2111__c;
    __Vfunc_aes_mul_gf2p2__2111__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2112__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2112__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2112__g;
    __Vfunc_aes_mul_gf2p2__2112__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2112__d;
    __Vfunc_aes_mul_gf2p2__2112__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2112__f;
    __Vfunc_aes_mul_gf2p2__2112__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2112__a;
    __Vfunc_aes_mul_gf2p2__2112__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2112__b;
    __Vfunc_aes_mul_gf2p2__2112__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2112__c;
    __Vfunc_aes_mul_gf2p2__2112__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2113__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2113__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2113__g;
    __Vfunc_aes_mul_gf2p2__2113__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2113__d;
    __Vfunc_aes_mul_gf2p2__2113__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2113__f;
    __Vfunc_aes_mul_gf2p2__2113__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2113__a;
    __Vfunc_aes_mul_gf2p2__2113__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2113__b;
    __Vfunc_aes_mul_gf2p2__2113__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2113__c;
    __Vfunc_aes_mul_gf2p2__2113__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2116__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2116__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2116__gamma;
    __Vfunc_aes_mul_gf2p4__2116__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2116__delta;
    __Vfunc_aes_mul_gf2p4__2116__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2116__a;
    __Vfunc_aes_mul_gf2p4__2116__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2116__b;
    __Vfunc_aes_mul_gf2p4__2116__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2116__c;
    __Vfunc_aes_mul_gf2p4__2116__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2117__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2117__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2117__g;
    __Vfunc_aes_mul_gf2p2__2117__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2117__d;
    __Vfunc_aes_mul_gf2p2__2117__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2117__f;
    __Vfunc_aes_mul_gf2p2__2117__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2117__a;
    __Vfunc_aes_mul_gf2p2__2117__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2117__b;
    __Vfunc_aes_mul_gf2p2__2117__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2117__c;
    __Vfunc_aes_mul_gf2p2__2117__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2118__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2118__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2118__g;
    __Vfunc_aes_mul_gf2p2__2118__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2118__d;
    __Vfunc_aes_mul_gf2p2__2118__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2118__f;
    __Vfunc_aes_mul_gf2p2__2118__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2118__a;
    __Vfunc_aes_mul_gf2p2__2118__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2118__b;
    __Vfunc_aes_mul_gf2p2__2118__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2118__c;
    __Vfunc_aes_mul_gf2p2__2118__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2119__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2119__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2119__g;
    __Vfunc_aes_mul_gf2p2__2119__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2119__d;
    __Vfunc_aes_mul_gf2p2__2119__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2119__f;
    __Vfunc_aes_mul_gf2p2__2119__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2119__a;
    __Vfunc_aes_mul_gf2p2__2119__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2119__b;
    __Vfunc_aes_mul_gf2p2__2119__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2119__c;
    __Vfunc_aes_mul_gf2p2__2119__c = 0;
    // Body
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ([&]() {
            vlSelfRef.__Vfunc_aes_mvm__2090__mat_a[0U] = 0x98U;
            vlSelfRef.__Vfunc_aes_mvm__2090__mat_a[1U] = 0xf3U;
            vlSelfRef.__Vfunc_aes_mvm__2090__mat_a[2U] = 0xf2U;
            vlSelfRef.__Vfunc_aes_mvm__2090__mat_a[3U] = 0x48U;
            vlSelfRef.__Vfunc_aes_mvm__2090__mat_a[4U] = 9U;
            vlSelfRef.__Vfunc_aes_mvm__2090__mat_a[5U] = 0x81U;
            vlSelfRef.__Vfunc_aes_mvm__2090__mat_a[6U] = 0xa9U;
            vlSelfRef.__Vfunc_aes_mvm__2090__mat_a[7U] = 0xffU;
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_b 
                = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__sub_word_in 
                   >> 0x00000018U);
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c = 0U;
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                               >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                              [0U])));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                               [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                       >> 6U)))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                               [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                       >> 5U)))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                               [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                       >> 4U)))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                               [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                       >> 3U)))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                               [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                       >> 2U)))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                               [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                       >> 1U)))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                               [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 >> 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 >> 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                               [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 >> 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                               [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                               [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                 << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0x1ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0x3ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0x7ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                        [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0x3fffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0x7fffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                        [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0x7fffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                        [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                        [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2090__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2090__vec_b) 
                                                   << 7U))))));
            vlSelfRef.__Vfunc_aes_mvm__2090__Vfuncout 
                = vlSelfRef.__Vfunc_aes_mvm__2090__vec_c;
        }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2090__Vfuncout));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ([&]() {
            vlSelfRef.__Vfunc_aes_mvm__2093__mat_a[0U] = 0x98U;
            vlSelfRef.__Vfunc_aes_mvm__2093__mat_a[1U] = 0xf3U;
            vlSelfRef.__Vfunc_aes_mvm__2093__mat_a[2U] = 0xf2U;
            vlSelfRef.__Vfunc_aes_mvm__2093__mat_a[3U] = 0x48U;
            vlSelfRef.__Vfunc_aes_mvm__2093__mat_a[4U] = 9U;
            vlSelfRef.__Vfunc_aes_mvm__2093__mat_a[5U] = 0x81U;
            vlSelfRef.__Vfunc_aes_mvm__2093__mat_a[6U] = 0xa9U;
            vlSelfRef.__Vfunc_aes_mvm__2093__mat_a[7U] = 0xffU;
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_b 
                = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__sw_in_mask 
                   >> 0x00000018U);
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c = 0U;
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                               >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                              [0U])));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                               [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                       >> 6U)))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                               [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                       >> 5U)))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                               [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                       >> 4U)))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                               [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                       >> 3U)))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                               [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                       >> 2U)))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                               [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                       >> 1U)))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                               [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 >> 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 >> 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                               [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 >> 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                               [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                               [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                 << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0x1ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0x3ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0x7ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                        [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0x3fffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0x7fffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                        [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0x7fffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                        [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                        [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2093__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2093__vec_b) 
                                                   << 7U))))));
            vlSelfRef.__Vfunc_aes_mvm__2093__Vfuncout 
                = vlSelfRef.__Vfunc_aes_mvm__2093__vec_c;
        }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2093__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__2102__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__2102__gamma)));
    __Vfunc_aes_square_gf2p2__2103__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__2102__gamma));
    __Vfunc_aes_square_gf2p2__2103__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__2103__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__2103__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__2103__Vfuncout = __Vfunc_aes_square_gf2p2__2103__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__b = __Vfunc_aes_square_gf2p2__2103__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__2104__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__2104__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__2104__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__2104__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__2104__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__2104__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__2104__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__2105__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__2105__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__2105__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__2105__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__2105__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__2105__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__2105__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__2102__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2110__delta = (0x0000000fU 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__);
    __Vfunc_aes_mul_gf2p4__2110__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                             >> 4U));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__2110__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2461614429454231272ull);
    __Vfunc_aes_mul_gf2p2__2111__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2110__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2111__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2110__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2111__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2111__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2111__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2111__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2111__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2111__d)));
    __Vfunc_aes_mul_gf2p2__2111__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2111__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2111__d)));
    __Vfunc_aes_mul_gf2p2__2111__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2111__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2111__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2111__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2111__b)));
    __Vfunc_aes_mul_gf2p2__2111__Vfuncout = __Vfunc_aes_mul_gf2p2__2111__f;
    __Vfunc_aes_mul_gf2p4__2110__a = __Vfunc_aes_mul_gf2p2__2111__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2112__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2110__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2110__delta)));
    __Vfunc_aes_mul_gf2p2__2112__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2110__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2110__gamma)));
    __Vfunc_aes_mul_gf2p2__2112__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2112__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2112__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2112__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2112__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2112__d)));
    __Vfunc_aes_mul_gf2p2__2112__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2112__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2112__d)));
    __Vfunc_aes_mul_gf2p2__2112__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2112__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2112__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2112__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2112__b)));
    __Vfunc_aes_mul_gf2p2__2112__Vfuncout = __Vfunc_aes_mul_gf2p2__2112__f;
    __Vfunc_aes_mul_gf2p4__2110__b = __Vfunc_aes_mul_gf2p2__2112__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2113__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2110__delta));
    __Vfunc_aes_mul_gf2p2__2113__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2110__gamma));
    __Vfunc_aes_mul_gf2p2__2113__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2113__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2113__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2113__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2113__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2113__d)));
    __Vfunc_aes_mul_gf2p2__2113__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2113__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2113__d)));
    __Vfunc_aes_mul_gf2p2__2113__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2113__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2113__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2113__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2113__b)));
    __Vfunc_aes_mul_gf2p2__2113__Vfuncout = __Vfunc_aes_mul_gf2p2__2113__f;
    __Vfunc_aes_mul_gf2p4__2110__c = __Vfunc_aes_mul_gf2p2__2113__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2110__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2110__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2114__g 
                        = __Vfunc_aes_mul_gf2p4__2110__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2114__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2114__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2114__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2114__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2114__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2114__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2110__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2110__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2115__g 
                        = __Vfunc_aes_mul_gf2p4__2110__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2115__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2115__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2115__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2115__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2115__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2115__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2110__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2110__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__2110__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__2106__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__2106__gamma)));
    __Vfunc_aes_square_gf2p2__2107__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__2106__gamma));
    __Vfunc_aes_square_gf2p2__2107__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__2107__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__2107__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__2107__Vfuncout = __Vfunc_aes_square_gf2p2__2107__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__b = __Vfunc_aes_square_gf2p2__2107__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__2108__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__2108__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__2108__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__2108__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__2108__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__2108__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__2108__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__2109__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__2109__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__2109__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__2109__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__2109__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__2109__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__2109__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__2106__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2116__delta = (0x0000000fU 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__);
    __Vfunc_aes_mul_gf2p4__2116__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__2116__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18060328852215155881ull);
    __Vfunc_aes_mul_gf2p2__2117__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2116__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2117__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2116__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2117__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2117__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2117__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2117__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2117__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2117__d)));
    __Vfunc_aes_mul_gf2p2__2117__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2117__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2117__d)));
    __Vfunc_aes_mul_gf2p2__2117__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2117__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2117__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2117__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2117__b)));
    __Vfunc_aes_mul_gf2p2__2117__Vfuncout = __Vfunc_aes_mul_gf2p2__2117__f;
    __Vfunc_aes_mul_gf2p4__2116__a = __Vfunc_aes_mul_gf2p2__2117__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2118__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2116__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2116__delta)));
    __Vfunc_aes_mul_gf2p2__2118__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2116__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2116__gamma)));
    __Vfunc_aes_mul_gf2p2__2118__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2118__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2118__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2118__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2118__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2118__d)));
    __Vfunc_aes_mul_gf2p2__2118__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2118__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2118__d)));
    __Vfunc_aes_mul_gf2p2__2118__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2118__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2118__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2118__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2118__b)));
    __Vfunc_aes_mul_gf2p2__2118__Vfuncout = __Vfunc_aes_mul_gf2p2__2118__f;
    __Vfunc_aes_mul_gf2p4__2116__b = __Vfunc_aes_mul_gf2p2__2118__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2119__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2116__delta));
    __Vfunc_aes_mul_gf2p2__2119__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2116__gamma));
    __Vfunc_aes_mul_gf2p2__2119__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2119__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2119__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2119__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2119__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2119__d)));
    __Vfunc_aes_mul_gf2p2__2119__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2119__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2119__d)));
    __Vfunc_aes_mul_gf2p2__2119__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2119__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2119__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2119__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2119__b)));
    __Vfunc_aes_mul_gf2p2__2119__Vfuncout = __Vfunc_aes_mul_gf2p2__2119__f;
    __Vfunc_aes_mul_gf2p4__2116__c = __Vfunc_aes_mul_gf2p2__2119__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2116__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2116__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2120__g 
                        = __Vfunc_aes_mul_gf2p4__2116__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2120__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2120__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2120__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2120__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2120__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2120__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2116__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2116__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2121__g 
                        = __Vfunc_aes_mul_gf2p4__2116__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2121__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2121__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2121__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2121__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2121__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2121__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2116__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2116__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__2116__Vfuncout;
}

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2122__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2122__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2122__gamma;
    __Vfunc_aes_mul_gf2p4__2122__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2122__delta;
    __Vfunc_aes_mul_gf2p4__2122__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2122__a;
    __Vfunc_aes_mul_gf2p4__2122__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2122__b;
    __Vfunc_aes_mul_gf2p4__2122__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2122__c;
    __Vfunc_aes_mul_gf2p4__2122__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2123__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2123__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2123__g;
    __Vfunc_aes_mul_gf2p2__2123__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2123__d;
    __Vfunc_aes_mul_gf2p2__2123__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2123__f;
    __Vfunc_aes_mul_gf2p2__2123__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2123__a;
    __Vfunc_aes_mul_gf2p2__2123__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2123__b;
    __Vfunc_aes_mul_gf2p2__2123__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2123__c;
    __Vfunc_aes_mul_gf2p2__2123__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2124__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2124__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2124__g;
    __Vfunc_aes_mul_gf2p2__2124__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2124__d;
    __Vfunc_aes_mul_gf2p2__2124__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2124__f;
    __Vfunc_aes_mul_gf2p2__2124__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2124__a;
    __Vfunc_aes_mul_gf2p2__2124__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2124__b;
    __Vfunc_aes_mul_gf2p2__2124__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2124__c;
    __Vfunc_aes_mul_gf2p2__2124__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2125__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2125__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2125__g;
    __Vfunc_aes_mul_gf2p2__2125__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2125__d;
    __Vfunc_aes_mul_gf2p2__2125__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2125__f;
    __Vfunc_aes_mul_gf2p2__2125__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2125__a;
    __Vfunc_aes_mul_gf2p2__2125__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2125__b;
    __Vfunc_aes_mul_gf2p2__2125__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2125__c;
    __Vfunc_aes_mul_gf2p2__2125__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2128__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2128__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2128__gamma;
    __Vfunc_aes_mul_gf2p4__2128__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2128__delta;
    __Vfunc_aes_mul_gf2p4__2128__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2128__a;
    __Vfunc_aes_mul_gf2p4__2128__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2128__b;
    __Vfunc_aes_mul_gf2p4__2128__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2128__c;
    __Vfunc_aes_mul_gf2p4__2128__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2129__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2129__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2129__g;
    __Vfunc_aes_mul_gf2p2__2129__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2129__d;
    __Vfunc_aes_mul_gf2p2__2129__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2129__f;
    __Vfunc_aes_mul_gf2p2__2129__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2129__a;
    __Vfunc_aes_mul_gf2p2__2129__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2129__b;
    __Vfunc_aes_mul_gf2p2__2129__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2129__c;
    __Vfunc_aes_mul_gf2p2__2129__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2130__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2130__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2130__g;
    __Vfunc_aes_mul_gf2p2__2130__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2130__d;
    __Vfunc_aes_mul_gf2p2__2130__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2130__f;
    __Vfunc_aes_mul_gf2p2__2130__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2130__a;
    __Vfunc_aes_mul_gf2p2__2130__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2130__b;
    __Vfunc_aes_mul_gf2p2__2130__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2130__c;
    __Vfunc_aes_mul_gf2p2__2130__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2131__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2131__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2131__g;
    __Vfunc_aes_mul_gf2p2__2131__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2131__d;
    __Vfunc_aes_mul_gf2p2__2131__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2131__f;
    __Vfunc_aes_mul_gf2p2__2131__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2131__a;
    __Vfunc_aes_mul_gf2p2__2131__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2131__b;
    __Vfunc_aes_mul_gf2p2__2131__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2131__c;
    __Vfunc_aes_mul_gf2p2__2131__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2134__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2134__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2134__g;
    __Vfunc_aes_scale_omega2_gf2p2__2134__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2134__d;
    __Vfunc_aes_scale_omega2_gf2p2__2134__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2135__Vfuncout;
    __Vfunc_aes_square_gf2p2__2135__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2135__g;
    __Vfunc_aes_square_gf2p2__2135__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2135__d;
    __Vfunc_aes_square_gf2p2__2135__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2136__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2136__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2136__g;
    __Vfunc_aes_scale_omega2_gf2p2__2136__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2136__d;
    __Vfunc_aes_scale_omega2_gf2p2__2136__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2137__Vfuncout;
    __Vfunc_aes_square_gf2p2__2137__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2137__g;
    __Vfunc_aes_square_gf2p2__2137__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2137__d;
    __Vfunc_aes_square_gf2p2__2137__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2138__Vfuncout;
    __Vfunc_aes_square_gf2p2__2138__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2138__g;
    __Vfunc_aes_square_gf2p2__2138__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2138__d;
    __Vfunc_aes_square_gf2p2__2138__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2139__Vfuncout;
    __Vfunc_aes_square_gf2p2__2139__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2139__g;
    __Vfunc_aes_square_gf2p2__2139__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2139__d;
    __Vfunc_aes_square_gf2p2__2139__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2142__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2142__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2142__g;
    __Vfunc_aes_mul_gf2p2__2142__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2142__d;
    __Vfunc_aes_mul_gf2p2__2142__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2142__f;
    __Vfunc_aes_mul_gf2p2__2142__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2142__a;
    __Vfunc_aes_mul_gf2p2__2142__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2142__b;
    __Vfunc_aes_mul_gf2p2__2142__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2142__c;
    __Vfunc_aes_mul_gf2p2__2142__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2143__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2143__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2143__g;
    __Vfunc_aes_mul_gf2p2__2143__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2143__d;
    __Vfunc_aes_mul_gf2p2__2143__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2143__f;
    __Vfunc_aes_mul_gf2p2__2143__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2143__a;
    __Vfunc_aes_mul_gf2p2__2143__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2143__b;
    __Vfunc_aes_mul_gf2p2__2143__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2143__c;
    __Vfunc_aes_mul_gf2p2__2143__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2146__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2146__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2146__g;
    __Vfunc_aes_mul_gf2p2__2146__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2146__d;
    __Vfunc_aes_mul_gf2p2__2146__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2146__f;
    __Vfunc_aes_mul_gf2p2__2146__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2146__a;
    __Vfunc_aes_mul_gf2p2__2146__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2146__b;
    __Vfunc_aes_mul_gf2p2__2146__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2146__c;
    __Vfunc_aes_mul_gf2p2__2146__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2147__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2147__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2147__g;
    __Vfunc_aes_mul_gf2p2__2147__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2147__d;
    __Vfunc_aes_mul_gf2p2__2147__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2147__f;
    __Vfunc_aes_mul_gf2p2__2147__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2147__a;
    __Vfunc_aes_mul_gf2p2__2147__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2147__b;
    __Vfunc_aes_mul_gf2p2__2147__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2147__c;
    __Vfunc_aes_mul_gf2p2__2147__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2150__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2150__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2150__g;
    __Vfunc_aes_mul_gf2p2__2150__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2150__d;
    __Vfunc_aes_mul_gf2p2__2150__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2150__f;
    __Vfunc_aes_mul_gf2p2__2150__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2150__a;
    __Vfunc_aes_mul_gf2p2__2150__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2150__b;
    __Vfunc_aes_mul_gf2p2__2150__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2150__c;
    __Vfunc_aes_mul_gf2p2__2150__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2151__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2151__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2151__g;
    __Vfunc_aes_mul_gf2p2__2151__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2151__d;
    __Vfunc_aes_mul_gf2p2__2151__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2151__f;
    __Vfunc_aes_mul_gf2p2__2151__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2151__a;
    __Vfunc_aes_mul_gf2p2__2151__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2151__b;
    __Vfunc_aes_mul_gf2p2__2151__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2151__c;
    __Vfunc_aes_mul_gf2p2__2151__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2152__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2152__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2152__gamma;
    __Vfunc_aes_mul_gf2p4__2152__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2152__delta;
    __Vfunc_aes_mul_gf2p4__2152__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2152__a;
    __Vfunc_aes_mul_gf2p4__2152__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2152__b;
    __Vfunc_aes_mul_gf2p4__2152__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2152__c;
    __Vfunc_aes_mul_gf2p4__2152__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2153__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2153__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2153__g;
    __Vfunc_aes_mul_gf2p2__2153__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2153__d;
    __Vfunc_aes_mul_gf2p2__2153__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2153__f;
    __Vfunc_aes_mul_gf2p2__2153__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2153__a;
    __Vfunc_aes_mul_gf2p2__2153__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2153__b;
    __Vfunc_aes_mul_gf2p2__2153__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2153__c;
    __Vfunc_aes_mul_gf2p2__2153__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2154__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2154__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2154__g;
    __Vfunc_aes_mul_gf2p2__2154__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2154__d;
    __Vfunc_aes_mul_gf2p2__2154__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2154__f;
    __Vfunc_aes_mul_gf2p2__2154__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2154__a;
    __Vfunc_aes_mul_gf2p2__2154__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2154__b;
    __Vfunc_aes_mul_gf2p2__2154__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2154__c;
    __Vfunc_aes_mul_gf2p2__2154__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2155__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2155__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2155__g;
    __Vfunc_aes_mul_gf2p2__2155__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2155__d;
    __Vfunc_aes_mul_gf2p2__2155__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2155__f;
    __Vfunc_aes_mul_gf2p2__2155__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2155__a;
    __Vfunc_aes_mul_gf2p2__2155__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2155__b;
    __Vfunc_aes_mul_gf2p2__2155__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2155__c;
    __Vfunc_aes_mul_gf2p2__2155__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2158__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2158__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2158__gamma;
    __Vfunc_aes_mul_gf2p4__2158__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2158__delta;
    __Vfunc_aes_mul_gf2p4__2158__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2158__a;
    __Vfunc_aes_mul_gf2p4__2158__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2158__b;
    __Vfunc_aes_mul_gf2p4__2158__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2158__c;
    __Vfunc_aes_mul_gf2p4__2158__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2159__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2159__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2159__g;
    __Vfunc_aes_mul_gf2p2__2159__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2159__d;
    __Vfunc_aes_mul_gf2p2__2159__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2159__f;
    __Vfunc_aes_mul_gf2p2__2159__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2159__a;
    __Vfunc_aes_mul_gf2p2__2159__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2159__b;
    __Vfunc_aes_mul_gf2p2__2159__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2159__c;
    __Vfunc_aes_mul_gf2p2__2159__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2160__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2160__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2160__g;
    __Vfunc_aes_mul_gf2p2__2160__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2160__d;
    __Vfunc_aes_mul_gf2p2__2160__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2160__f;
    __Vfunc_aes_mul_gf2p2__2160__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2160__a;
    __Vfunc_aes_mul_gf2p2__2160__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2160__b;
    __Vfunc_aes_mul_gf2p2__2160__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2160__c;
    __Vfunc_aes_mul_gf2p2__2160__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2161__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2161__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2161__g;
    __Vfunc_aes_mul_gf2p2__2161__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2161__d;
    __Vfunc_aes_mul_gf2p2__2161__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2161__f;
    __Vfunc_aes_mul_gf2p2__2161__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2161__a;
    __Vfunc_aes_mul_gf2p2__2161__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2161__b;
    __Vfunc_aes_mul_gf2p2__2161__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2161__c;
    __Vfunc_aes_mul_gf2p2__2161__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2164__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2164__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2164__gamma;
    __Vfunc_aes_mul_gf2p4__2164__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2164__delta;
    __Vfunc_aes_mul_gf2p4__2164__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2164__a;
    __Vfunc_aes_mul_gf2p4__2164__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2164__b;
    __Vfunc_aes_mul_gf2p4__2164__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2164__c;
    __Vfunc_aes_mul_gf2p4__2164__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2165__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2165__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2165__g;
    __Vfunc_aes_mul_gf2p2__2165__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2165__d;
    __Vfunc_aes_mul_gf2p2__2165__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2165__f;
    __Vfunc_aes_mul_gf2p2__2165__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2165__a;
    __Vfunc_aes_mul_gf2p2__2165__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2165__b;
    __Vfunc_aes_mul_gf2p2__2165__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2165__c;
    __Vfunc_aes_mul_gf2p2__2165__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2166__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2166__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2166__g;
    __Vfunc_aes_mul_gf2p2__2166__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2166__d;
    __Vfunc_aes_mul_gf2p2__2166__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2166__f;
    __Vfunc_aes_mul_gf2p2__2166__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2166__a;
    __Vfunc_aes_mul_gf2p2__2166__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2166__b;
    __Vfunc_aes_mul_gf2p2__2166__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2166__c;
    __Vfunc_aes_mul_gf2p2__2166__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2167__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2167__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2167__g;
    __Vfunc_aes_mul_gf2p2__2167__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2167__d;
    __Vfunc_aes_mul_gf2p2__2167__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2167__f;
    __Vfunc_aes_mul_gf2p2__2167__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2167__a;
    __Vfunc_aes_mul_gf2p2__2167__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2167__b;
    __Vfunc_aes_mul_gf2p2__2167__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2167__c;
    __Vfunc_aes_mul_gf2p2__2167__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2170__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2170__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2170__gamma;
    __Vfunc_aes_mul_gf2p4__2170__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2170__delta;
    __Vfunc_aes_mul_gf2p4__2170__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2170__a;
    __Vfunc_aes_mul_gf2p4__2170__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2170__b;
    __Vfunc_aes_mul_gf2p4__2170__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2170__c;
    __Vfunc_aes_mul_gf2p4__2170__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2171__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2171__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2171__g;
    __Vfunc_aes_mul_gf2p2__2171__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2171__d;
    __Vfunc_aes_mul_gf2p2__2171__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2171__f;
    __Vfunc_aes_mul_gf2p2__2171__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2171__a;
    __Vfunc_aes_mul_gf2p2__2171__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2171__b;
    __Vfunc_aes_mul_gf2p2__2171__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2171__c;
    __Vfunc_aes_mul_gf2p2__2171__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2172__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2172__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2172__g;
    __Vfunc_aes_mul_gf2p2__2172__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2172__d;
    __Vfunc_aes_mul_gf2p2__2172__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2172__f;
    __Vfunc_aes_mul_gf2p2__2172__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2172__a;
    __Vfunc_aes_mul_gf2p2__2172__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2172__b;
    __Vfunc_aes_mul_gf2p2__2172__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2172__c;
    __Vfunc_aes_mul_gf2p2__2172__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2173__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2173__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2173__g;
    __Vfunc_aes_mul_gf2p2__2173__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2173__d;
    __Vfunc_aes_mul_gf2p2__2173__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2173__f;
    __Vfunc_aes_mul_gf2p2__2173__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2173__a;
    __Vfunc_aes_mul_gf2p2__2173__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2173__b;
    __Vfunc_aes_mul_gf2p2__2173__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2173__c;
    __Vfunc_aes_mul_gf2p2__2173__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2176__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2176__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2176__gamma;
    __Vfunc_aes_mul_gf2p4__2176__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2176__delta;
    __Vfunc_aes_mul_gf2p4__2176__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2176__a;
    __Vfunc_aes_mul_gf2p4__2176__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2176__b;
    __Vfunc_aes_mul_gf2p4__2176__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2176__c;
    __Vfunc_aes_mul_gf2p4__2176__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2177__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2177__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2177__g;
    __Vfunc_aes_mul_gf2p2__2177__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2177__d;
    __Vfunc_aes_mul_gf2p2__2177__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2177__f;
    __Vfunc_aes_mul_gf2p2__2177__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2177__a;
    __Vfunc_aes_mul_gf2p2__2177__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2177__b;
    __Vfunc_aes_mul_gf2p2__2177__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2177__c;
    __Vfunc_aes_mul_gf2p2__2177__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2178__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2178__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2178__g;
    __Vfunc_aes_mul_gf2p2__2178__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2178__d;
    __Vfunc_aes_mul_gf2p2__2178__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2178__f;
    __Vfunc_aes_mul_gf2p2__2178__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2178__a;
    __Vfunc_aes_mul_gf2p2__2178__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2178__b;
    __Vfunc_aes_mul_gf2p2__2178__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2178__c;
    __Vfunc_aes_mul_gf2p2__2178__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2179__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2179__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2179__g;
    __Vfunc_aes_mul_gf2p2__2179__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2179__d;
    __Vfunc_aes_mul_gf2p2__2179__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2179__f;
    __Vfunc_aes_mul_gf2p2__2179__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2179__a;
    __Vfunc_aes_mul_gf2p2__2179__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2179__b;
    __Vfunc_aes_mul_gf2p2__2179__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2179__c;
    __Vfunc_aes_mul_gf2p2__2179__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2182__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2182__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2182__gamma;
    __Vfunc_aes_mul_gf2p4__2182__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2182__delta;
    __Vfunc_aes_mul_gf2p4__2182__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2182__a;
    __Vfunc_aes_mul_gf2p4__2182__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2182__b;
    __Vfunc_aes_mul_gf2p4__2182__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2182__c;
    __Vfunc_aes_mul_gf2p4__2182__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2183__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2183__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2183__g;
    __Vfunc_aes_mul_gf2p2__2183__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2183__d;
    __Vfunc_aes_mul_gf2p2__2183__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2183__f;
    __Vfunc_aes_mul_gf2p2__2183__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2183__a;
    __Vfunc_aes_mul_gf2p2__2183__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2183__b;
    __Vfunc_aes_mul_gf2p2__2183__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2183__c;
    __Vfunc_aes_mul_gf2p2__2183__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2184__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2184__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2184__g;
    __Vfunc_aes_mul_gf2p2__2184__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2184__d;
    __Vfunc_aes_mul_gf2p2__2184__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2184__f;
    __Vfunc_aes_mul_gf2p2__2184__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2184__a;
    __Vfunc_aes_mul_gf2p2__2184__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2184__b;
    __Vfunc_aes_mul_gf2p2__2184__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2184__c;
    __Vfunc_aes_mul_gf2p2__2184__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2185__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2185__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2185__g;
    __Vfunc_aes_mul_gf2p2__2185__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2185__d;
    __Vfunc_aes_mul_gf2p2__2185__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2185__f;
    __Vfunc_aes_mul_gf2p2__2185__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2185__a;
    __Vfunc_aes_mul_gf2p2__2185__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2185__b;
    __Vfunc_aes_mul_gf2p2__2185__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2185__c;
    __Vfunc_aes_mul_gf2p2__2185__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2188__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2188__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2188__gamma;
    __Vfunc_aes_mul_gf2p4__2188__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2188__delta;
    __Vfunc_aes_mul_gf2p4__2188__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2188__a;
    __Vfunc_aes_mul_gf2p4__2188__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2188__b;
    __Vfunc_aes_mul_gf2p4__2188__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2188__c;
    __Vfunc_aes_mul_gf2p4__2188__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2189__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2189__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2189__g;
    __Vfunc_aes_mul_gf2p2__2189__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2189__d;
    __Vfunc_aes_mul_gf2p2__2189__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2189__f;
    __Vfunc_aes_mul_gf2p2__2189__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2189__a;
    __Vfunc_aes_mul_gf2p2__2189__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2189__b;
    __Vfunc_aes_mul_gf2p2__2189__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2189__c;
    __Vfunc_aes_mul_gf2p2__2189__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2190__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2190__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2190__g;
    __Vfunc_aes_mul_gf2p2__2190__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2190__d;
    __Vfunc_aes_mul_gf2p2__2190__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2190__f;
    __Vfunc_aes_mul_gf2p2__2190__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2190__a;
    __Vfunc_aes_mul_gf2p2__2190__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2190__b;
    __Vfunc_aes_mul_gf2p2__2190__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2190__c;
    __Vfunc_aes_mul_gf2p2__2190__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2191__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2191__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2191__g;
    __Vfunc_aes_mul_gf2p2__2191__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2191__d;
    __Vfunc_aes_mul_gf2p2__2191__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2191__f;
    __Vfunc_aes_mul_gf2p2__2191__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2191__a;
    __Vfunc_aes_mul_gf2p2__2191__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2191__b;
    __Vfunc_aes_mul_gf2p2__2191__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2191__c;
    __Vfunc_aes_mul_gf2p2__2191__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2194__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2194__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2194__gamma;
    __Vfunc_aes_mul_gf2p4__2194__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2194__delta;
    __Vfunc_aes_mul_gf2p4__2194__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2194__a;
    __Vfunc_aes_mul_gf2p4__2194__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2194__b;
    __Vfunc_aes_mul_gf2p4__2194__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2194__c;
    __Vfunc_aes_mul_gf2p4__2194__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2195__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2195__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2195__g;
    __Vfunc_aes_mul_gf2p2__2195__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2195__d;
    __Vfunc_aes_mul_gf2p2__2195__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2195__f;
    __Vfunc_aes_mul_gf2p2__2195__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2195__a;
    __Vfunc_aes_mul_gf2p2__2195__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2195__b;
    __Vfunc_aes_mul_gf2p2__2195__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2195__c;
    __Vfunc_aes_mul_gf2p2__2195__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2196__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2196__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2196__g;
    __Vfunc_aes_mul_gf2p2__2196__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2196__d;
    __Vfunc_aes_mul_gf2p2__2196__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2196__f;
    __Vfunc_aes_mul_gf2p2__2196__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2196__a;
    __Vfunc_aes_mul_gf2p2__2196__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2196__b;
    __Vfunc_aes_mul_gf2p2__2196__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2196__c;
    __Vfunc_aes_mul_gf2p2__2196__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2197__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2197__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2197__g;
    __Vfunc_aes_mul_gf2p2__2197__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2197__d;
    __Vfunc_aes_mul_gf2p2__2197__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2197__f;
    __Vfunc_aes_mul_gf2p2__2197__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2197__a;
    __Vfunc_aes_mul_gf2p2__2197__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2197__b;
    __Vfunc_aes_mul_gf2p2__2197__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2197__c;
    __Vfunc_aes_mul_gf2p2__2197__c = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y_ss__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d) 
                    << 4U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o 
                = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                    ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__) 
                                   << 4U)) | (0x0000000fU 
                                              & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__)));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0) 
                                    << 4U) ^ (0xfffffff0U 
                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                                        >> 4U))));
        }
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                                                 >> 0x00000014U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                                        >> 0x00000018U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by) 
                                    << 4U) ^ (0x0000fff0U 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                                                 >> 0x00000010U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                                        >> 0x00000014U))));
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                                                 >> 0x00000010U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                               >> 0x00000012U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x000ffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                                                 >> 0x0000000cU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                               >> 0x0000000eU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
                                    << 2U) ^ (0x0003fffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                                                 >> 0x0000000eU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                               >> 0x00000010U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o 
                = vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o;
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & ((0x3ffffffcU & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                                   >> 2U)) 
                                   ^ (0x003ffffcU & 
                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                                       >> 0x0000000aU)))) 
                   | (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                               >> 0x0000000cU))));
        }
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d) 
                    << 2U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x00fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                                                 >> 8U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                               >> 0x0000000aU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                    << 2U) ^ (0x03fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                                                 >> 6U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__111__03a84__KET__ 
                               >> 8U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                    << 4U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma));
        }
        vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q 
            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d;
    } else {
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y_ss__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q = 0U;
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o = 0U;
    }
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv 
        = ((0x000000f0U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                            ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o)) 
                           << 4U)) | (0x0000000fU & 
                                      ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                                       ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv 
        = ((0x000000f0U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                           ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o))) 
           | (0x0000000fU & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                              ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o)) 
                             >> 4U)));
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
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (2U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (3U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (0U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.out_req_o = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                           & (4U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.mask_o = ([&]() {
            vlSelfRef.__Vfunc_aes_mvm__2099__mat_a[0U] = 0x58U;
            vlSelfRef.__Vfunc_aes_mvm__2099__mat_a[1U] = 0x2dU;
            vlSelfRef.__Vfunc_aes_mvm__2099__mat_a[2U] = 0x9eU;
            vlSelfRef.__Vfunc_aes_mvm__2099__mat_a[3U] = 0x0bU;
            vlSelfRef.__Vfunc_aes_mvm__2099__mat_a[4U] = 0xdcU;
            vlSelfRef.__Vfunc_aes_mvm__2099__mat_a[5U] = 4U;
            vlSelfRef.__Vfunc_aes_mvm__2099__mat_a[6U] = 3U;
            vlSelfRef.__Vfunc_aes_mvm__2099__mat_a[7U] = 0x24U;
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_b 
                = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c = 0U;
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                               >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                              [0U])));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                               [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                       >> 6U)))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                               [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                       >> 5U)))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                               [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                       >> 4U)))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                               [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                       >> 3U)))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                               [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                       >> 2U)))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                               [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                       >> 1U)))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                               [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 >> 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 >> 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                               [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 >> 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                               [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                               [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                 << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0x1ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0x3ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0x7ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                        [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0x3fffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0x7fffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                        [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0x7fffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                        [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                        [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__2099__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2099__vec_b) 
                                                   << 7U))))));
            vlSelfRef.__Vfunc_aes_mvm__2099__Vfuncout 
                = vlSelfRef.__Vfunc_aes_mvm__2099__vec_c;
        }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2099__Vfuncout));
    vlSelfRef.data_o = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                 [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                 [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                 [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                 [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                 [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                 [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                 [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                 [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2096__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2096__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2096__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2096__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2096__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2122__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__2122__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__2122__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1959015824353778234ull);
    __Vfunc_aes_mul_gf2p2__2123__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2122__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2123__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2122__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2123__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2123__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2123__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2123__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2123__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2123__d)));
    __Vfunc_aes_mul_gf2p2__2123__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2123__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2123__d)));
    __Vfunc_aes_mul_gf2p2__2123__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2123__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2123__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2123__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2123__b)));
    __Vfunc_aes_mul_gf2p2__2123__Vfuncout = __Vfunc_aes_mul_gf2p2__2123__f;
    __Vfunc_aes_mul_gf2p4__2122__a = __Vfunc_aes_mul_gf2p2__2123__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2124__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2122__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2122__delta)));
    __Vfunc_aes_mul_gf2p2__2124__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2122__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2122__gamma)));
    __Vfunc_aes_mul_gf2p2__2124__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2124__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2124__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2124__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2124__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2124__d)));
    __Vfunc_aes_mul_gf2p2__2124__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2124__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2124__d)));
    __Vfunc_aes_mul_gf2p2__2124__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2124__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2124__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2124__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2124__b)));
    __Vfunc_aes_mul_gf2p2__2124__Vfuncout = __Vfunc_aes_mul_gf2p2__2124__f;
    __Vfunc_aes_mul_gf2p4__2122__b = __Vfunc_aes_mul_gf2p2__2124__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2125__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2122__delta));
    __Vfunc_aes_mul_gf2p2__2125__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2122__gamma));
    __Vfunc_aes_mul_gf2p2__2125__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2125__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2125__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2125__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2125__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2125__d)));
    __Vfunc_aes_mul_gf2p2__2125__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2125__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2125__d)));
    __Vfunc_aes_mul_gf2p2__2125__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2125__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2125__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2125__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2125__b)));
    __Vfunc_aes_mul_gf2p2__2125__Vfuncout = __Vfunc_aes_mul_gf2p2__2125__f;
    __Vfunc_aes_mul_gf2p4__2122__c = __Vfunc_aes_mul_gf2p2__2125__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2122__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2122__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2126__g 
                        = __Vfunc_aes_mul_gf2p4__2122__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2126__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2126__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2126__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2126__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2126__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2126__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2122__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2122__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2127__g 
                        = __Vfunc_aes_mul_gf2p4__2122__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2127__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2127__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2127__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2127__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2127__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2127__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2122__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2122__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__2122__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2128__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__2128__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__2128__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16388939503312394450ull);
    __Vfunc_aes_mul_gf2p2__2129__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2128__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2129__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2128__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2129__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2129__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2129__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2129__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2129__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2129__d)));
    __Vfunc_aes_mul_gf2p2__2129__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2129__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2129__d)));
    __Vfunc_aes_mul_gf2p2__2129__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2129__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2129__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2129__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2129__b)));
    __Vfunc_aes_mul_gf2p2__2129__Vfuncout = __Vfunc_aes_mul_gf2p2__2129__f;
    __Vfunc_aes_mul_gf2p4__2128__a = __Vfunc_aes_mul_gf2p2__2129__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2130__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2128__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2128__delta)));
    __Vfunc_aes_mul_gf2p2__2130__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2128__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2128__gamma)));
    __Vfunc_aes_mul_gf2p2__2130__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2130__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2130__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2130__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2130__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2130__d)));
    __Vfunc_aes_mul_gf2p2__2130__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2130__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2130__d)));
    __Vfunc_aes_mul_gf2p2__2130__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2130__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2130__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2130__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2130__b)));
    __Vfunc_aes_mul_gf2p2__2130__Vfuncout = __Vfunc_aes_mul_gf2p2__2130__f;
    __Vfunc_aes_mul_gf2p4__2128__b = __Vfunc_aes_mul_gf2p2__2130__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2131__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2128__delta));
    __Vfunc_aes_mul_gf2p2__2131__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2128__gamma));
    __Vfunc_aes_mul_gf2p2__2131__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2131__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2131__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2131__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2131__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2131__d)));
    __Vfunc_aes_mul_gf2p2__2131__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2131__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2131__d)));
    __Vfunc_aes_mul_gf2p2__2131__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2131__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2131__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2131__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2131__b)));
    __Vfunc_aes_mul_gf2p2__2131__Vfuncout = __Vfunc_aes_mul_gf2p2__2131__f;
    __Vfunc_aes_mul_gf2p4__2128__c = __Vfunc_aes_mul_gf2p2__2131__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2128__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2128__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2132__g 
                        = __Vfunc_aes_mul_gf2p4__2128__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2132__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2132__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2132__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2132__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2132__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2132__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2128__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2128__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2133__g 
                        = __Vfunc_aes_mul_gf2p4__2128__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2133__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2133__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2133__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2133__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2133__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2133__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2128__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2128__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__2128__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2146__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__2146__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__2146__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2146__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2146__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2146__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2146__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2146__d)));
    __Vfunc_aes_mul_gf2p2__2146__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2146__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2146__d)));
    __Vfunc_aes_mul_gf2p2__2146__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2146__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2146__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2146__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2146__b)));
    __Vfunc_aes_mul_gf2p2__2146__Vfuncout = __Vfunc_aes_mul_gf2p2__2146__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__2146__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2147__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__2147__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2147__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2147__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2147__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2147__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2147__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2147__d)));
    __Vfunc_aes_mul_gf2p2__2147__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2147__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2147__d)));
    __Vfunc_aes_mul_gf2p2__2147__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2147__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2147__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2147__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2147__b)));
    __Vfunc_aes_mul_gf2p2__2147__Vfuncout = __Vfunc_aes_mul_gf2p2__2147__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__2147__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2150__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__2150__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2150__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2150__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2150__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2150__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2150__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2150__d)));
    __Vfunc_aes_mul_gf2p2__2150__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2150__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2150__d)));
    __Vfunc_aes_mul_gf2p2__2150__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2150__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2150__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2150__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2150__b)));
    __Vfunc_aes_mul_gf2p2__2150__Vfuncout = __Vfunc_aes_mul_gf2p2__2150__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__2150__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2151__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__2151__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__2151__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2151__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2151__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2151__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2151__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2151__d)));
    __Vfunc_aes_mul_gf2p2__2151__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2151__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2151__d)));
    __Vfunc_aes_mul_gf2p2__2151__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2151__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2151__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2151__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2151__b)));
    __Vfunc_aes_mul_gf2p2__2151__Vfuncout = __Vfunc_aes_mul_gf2p2__2151__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__2151__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (1U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
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
    __Vfunc_aes_square_gf2p2__2135__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__2135__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__2135__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__2135__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__2135__Vfuncout = __Vfunc_aes_square_gf2p2__2135__d;
    __Vfunc_aes_scale_omega2_gf2p2__2134__g = __Vfunc_aes_square_gf2p2__2135__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2134__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2134__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2134__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2134__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2134__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__2134__Vfuncout;
    __Vfunc_aes_square_gf2p2__2137__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__2137__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__2137__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__2137__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__2137__Vfuncout = __Vfunc_aes_square_gf2p2__2137__d;
    __Vfunc_aes_scale_omega2_gf2p2__2136__g = __Vfunc_aes_square_gf2p2__2137__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2136__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2136__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2136__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2136__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2136__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__2136__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2152__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__2152__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__2152__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13416184284064779871ull);
    __Vfunc_aes_mul_gf2p2__2153__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2152__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2153__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2152__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2153__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2153__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2153__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2153__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2153__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2153__d)));
    __Vfunc_aes_mul_gf2p2__2153__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2153__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2153__d)));
    __Vfunc_aes_mul_gf2p2__2153__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2153__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2153__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2153__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2153__b)));
    __Vfunc_aes_mul_gf2p2__2153__Vfuncout = __Vfunc_aes_mul_gf2p2__2153__f;
    __Vfunc_aes_mul_gf2p4__2152__a = __Vfunc_aes_mul_gf2p2__2153__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2154__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2152__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2152__delta)));
    __Vfunc_aes_mul_gf2p2__2154__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2152__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2152__gamma)));
    __Vfunc_aes_mul_gf2p2__2154__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2154__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2154__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2154__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2154__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2154__d)));
    __Vfunc_aes_mul_gf2p2__2154__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2154__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2154__d)));
    __Vfunc_aes_mul_gf2p2__2154__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2154__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2154__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2154__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2154__b)));
    __Vfunc_aes_mul_gf2p2__2154__Vfuncout = __Vfunc_aes_mul_gf2p2__2154__f;
    __Vfunc_aes_mul_gf2p4__2152__b = __Vfunc_aes_mul_gf2p2__2154__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2155__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2152__delta));
    __Vfunc_aes_mul_gf2p2__2155__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2152__gamma));
    __Vfunc_aes_mul_gf2p2__2155__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2155__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2155__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2155__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2155__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2155__d)));
    __Vfunc_aes_mul_gf2p2__2155__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2155__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2155__d)));
    __Vfunc_aes_mul_gf2p2__2155__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2155__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2155__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2155__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2155__b)));
    __Vfunc_aes_mul_gf2p2__2155__Vfuncout = __Vfunc_aes_mul_gf2p2__2155__f;
    __Vfunc_aes_mul_gf2p4__2152__c = __Vfunc_aes_mul_gf2p2__2155__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2152__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2152__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2156__g 
                        = __Vfunc_aes_mul_gf2p4__2152__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2156__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2156__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2156__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2156__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2156__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2156__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2152__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2152__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2157__g 
                        = __Vfunc_aes_mul_gf2p4__2152__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2157__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2157__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2157__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2157__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2157__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2157__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2152__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2152__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__2152__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2170__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    __Vfunc_aes_mul_gf2p4__2170__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__2170__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12160045954116016994ull);
    __Vfunc_aes_mul_gf2p2__2171__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2170__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2171__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2170__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2171__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2171__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2171__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2171__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2171__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2171__d)));
    __Vfunc_aes_mul_gf2p2__2171__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2171__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2171__d)));
    __Vfunc_aes_mul_gf2p2__2171__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2171__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2171__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2171__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2171__b)));
    __Vfunc_aes_mul_gf2p2__2171__Vfuncout = __Vfunc_aes_mul_gf2p2__2171__f;
    __Vfunc_aes_mul_gf2p4__2170__a = __Vfunc_aes_mul_gf2p2__2171__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2172__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2170__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2170__delta)));
    __Vfunc_aes_mul_gf2p2__2172__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2170__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2170__gamma)));
    __Vfunc_aes_mul_gf2p2__2172__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2172__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2172__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2172__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2172__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2172__d)));
    __Vfunc_aes_mul_gf2p2__2172__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2172__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2172__d)));
    __Vfunc_aes_mul_gf2p2__2172__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2172__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2172__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2172__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2172__b)));
    __Vfunc_aes_mul_gf2p2__2172__Vfuncout = __Vfunc_aes_mul_gf2p2__2172__f;
    __Vfunc_aes_mul_gf2p4__2170__b = __Vfunc_aes_mul_gf2p2__2172__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2173__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2170__delta));
    __Vfunc_aes_mul_gf2p2__2173__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2170__gamma));
    __Vfunc_aes_mul_gf2p2__2173__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2173__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2173__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2173__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2173__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2173__d)));
    __Vfunc_aes_mul_gf2p2__2173__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2173__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2173__d)));
    __Vfunc_aes_mul_gf2p2__2173__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2173__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2173__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2173__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2173__b)));
    __Vfunc_aes_mul_gf2p2__2173__Vfuncout = __Vfunc_aes_mul_gf2p2__2173__f;
    __Vfunc_aes_mul_gf2p4__2170__c = __Vfunc_aes_mul_gf2p2__2173__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2170__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2170__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2174__g 
                        = __Vfunc_aes_mul_gf2p4__2170__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2174__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2174__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2174__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2174__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2174__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2174__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2170__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2170__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2175__g 
                        = __Vfunc_aes_mul_gf2p4__2170__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2175__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2175__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2175__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2175__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2175__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2175__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2170__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2170__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__2170__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2176__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    __Vfunc_aes_mul_gf2p4__2176__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__2176__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17230590910913763990ull);
    __Vfunc_aes_mul_gf2p2__2177__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2176__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2177__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2176__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2177__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2177__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2177__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2177__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2177__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2177__d)));
    __Vfunc_aes_mul_gf2p2__2177__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2177__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2177__d)));
    __Vfunc_aes_mul_gf2p2__2177__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2177__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2177__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2177__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2177__b)));
    __Vfunc_aes_mul_gf2p2__2177__Vfuncout = __Vfunc_aes_mul_gf2p2__2177__f;
    __Vfunc_aes_mul_gf2p4__2176__a = __Vfunc_aes_mul_gf2p2__2177__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2178__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2176__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2176__delta)));
    __Vfunc_aes_mul_gf2p2__2178__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2176__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2176__gamma)));
    __Vfunc_aes_mul_gf2p2__2178__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2178__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2178__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2178__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2178__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2178__d)));
    __Vfunc_aes_mul_gf2p2__2178__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2178__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2178__d)));
    __Vfunc_aes_mul_gf2p2__2178__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2178__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2178__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2178__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2178__b)));
    __Vfunc_aes_mul_gf2p2__2178__Vfuncout = __Vfunc_aes_mul_gf2p2__2178__f;
    __Vfunc_aes_mul_gf2p4__2176__b = __Vfunc_aes_mul_gf2p2__2178__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2179__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2176__delta));
    __Vfunc_aes_mul_gf2p2__2179__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2176__gamma));
    __Vfunc_aes_mul_gf2p2__2179__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2179__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2179__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2179__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2179__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2179__d)));
    __Vfunc_aes_mul_gf2p2__2179__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2179__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2179__d)));
    __Vfunc_aes_mul_gf2p2__2179__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2179__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2179__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2179__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2179__b)));
    __Vfunc_aes_mul_gf2p2__2179__Vfuncout = __Vfunc_aes_mul_gf2p2__2179__f;
    __Vfunc_aes_mul_gf2p4__2176__c = __Vfunc_aes_mul_gf2p2__2179__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2176__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2176__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2180__g 
                        = __Vfunc_aes_mul_gf2p4__2176__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2180__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2180__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2180__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2180__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2180__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2180__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2176__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2176__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2181__g 
                        = __Vfunc_aes_mul_gf2p4__2176__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2181__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2181__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2181__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2181__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2181__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2181__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2176__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2176__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__2176__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2188__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__2188__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__2188__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 427792141733209874ull);
    __Vfunc_aes_mul_gf2p2__2189__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2188__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2189__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2188__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2189__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2189__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2189__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2189__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2189__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2189__d)));
    __Vfunc_aes_mul_gf2p2__2189__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2189__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2189__d)));
    __Vfunc_aes_mul_gf2p2__2189__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2189__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2189__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2189__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2189__b)));
    __Vfunc_aes_mul_gf2p2__2189__Vfuncout = __Vfunc_aes_mul_gf2p2__2189__f;
    __Vfunc_aes_mul_gf2p4__2188__a = __Vfunc_aes_mul_gf2p2__2189__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2190__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2188__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2188__delta)));
    __Vfunc_aes_mul_gf2p2__2190__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2188__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2188__gamma)));
    __Vfunc_aes_mul_gf2p2__2190__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2190__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2190__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2190__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2190__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2190__d)));
    __Vfunc_aes_mul_gf2p2__2190__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2190__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2190__d)));
    __Vfunc_aes_mul_gf2p2__2190__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2190__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2190__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2190__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2190__b)));
    __Vfunc_aes_mul_gf2p2__2190__Vfuncout = __Vfunc_aes_mul_gf2p2__2190__f;
    __Vfunc_aes_mul_gf2p4__2188__b = __Vfunc_aes_mul_gf2p2__2190__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2191__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2188__delta));
    __Vfunc_aes_mul_gf2p2__2191__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2188__gamma));
    __Vfunc_aes_mul_gf2p2__2191__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2191__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2191__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2191__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2191__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2191__d)));
    __Vfunc_aes_mul_gf2p2__2191__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2191__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2191__d)));
    __Vfunc_aes_mul_gf2p2__2191__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2191__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2191__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2191__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2191__b)));
    __Vfunc_aes_mul_gf2p2__2191__Vfuncout = __Vfunc_aes_mul_gf2p2__2191__f;
    __Vfunc_aes_mul_gf2p4__2188__c = __Vfunc_aes_mul_gf2p2__2191__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2188__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2188__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2192__g 
                        = __Vfunc_aes_mul_gf2p4__2188__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2192__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2192__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2192__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2192__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2192__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2192__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2188__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2188__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2193__g 
                        = __Vfunc_aes_mul_gf2p4__2188__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2193__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2193__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2193__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2193__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2193__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2193__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2188__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2188__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__2188__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2158__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__2158__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__2158__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 976468517594248328ull);
    __Vfunc_aes_mul_gf2p2__2159__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2158__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2159__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2158__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2159__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2159__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2159__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2159__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2159__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2159__d)));
    __Vfunc_aes_mul_gf2p2__2159__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2159__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2159__d)));
    __Vfunc_aes_mul_gf2p2__2159__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2159__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2159__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2159__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2159__b)));
    __Vfunc_aes_mul_gf2p2__2159__Vfuncout = __Vfunc_aes_mul_gf2p2__2159__f;
    __Vfunc_aes_mul_gf2p4__2158__a = __Vfunc_aes_mul_gf2p2__2159__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2160__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2158__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2158__delta)));
    __Vfunc_aes_mul_gf2p2__2160__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2158__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2158__gamma)));
    __Vfunc_aes_mul_gf2p2__2160__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2160__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2160__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2160__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2160__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2160__d)));
    __Vfunc_aes_mul_gf2p2__2160__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2160__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2160__d)));
    __Vfunc_aes_mul_gf2p2__2160__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2160__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2160__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2160__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2160__b)));
    __Vfunc_aes_mul_gf2p2__2160__Vfuncout = __Vfunc_aes_mul_gf2p2__2160__f;
    __Vfunc_aes_mul_gf2p4__2158__b = __Vfunc_aes_mul_gf2p2__2160__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2161__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2158__delta));
    __Vfunc_aes_mul_gf2p2__2161__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2158__gamma));
    __Vfunc_aes_mul_gf2p2__2161__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2161__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2161__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2161__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2161__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2161__d)));
    __Vfunc_aes_mul_gf2p2__2161__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2161__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2161__d)));
    __Vfunc_aes_mul_gf2p2__2161__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2161__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2161__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2161__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2161__b)));
    __Vfunc_aes_mul_gf2p2__2161__Vfuncout = __Vfunc_aes_mul_gf2p2__2161__f;
    __Vfunc_aes_mul_gf2p4__2158__c = __Vfunc_aes_mul_gf2p2__2161__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2158__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2158__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2162__g 
                        = __Vfunc_aes_mul_gf2p4__2158__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2162__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2162__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2162__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2162__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2162__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2162__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2158__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2158__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2163__g 
                        = __Vfunc_aes_mul_gf2p4__2158__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2163__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2163__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2163__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2163__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2163__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2163__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2158__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2158__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__2158__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2164__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__2164__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__2164__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18066045982544320305ull);
    __Vfunc_aes_mul_gf2p2__2165__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2164__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2165__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2164__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2165__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2165__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2165__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2165__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2165__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2165__d)));
    __Vfunc_aes_mul_gf2p2__2165__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2165__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2165__d)));
    __Vfunc_aes_mul_gf2p2__2165__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2165__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2165__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2165__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2165__b)));
    __Vfunc_aes_mul_gf2p2__2165__Vfuncout = __Vfunc_aes_mul_gf2p2__2165__f;
    __Vfunc_aes_mul_gf2p4__2164__a = __Vfunc_aes_mul_gf2p2__2165__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2166__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2164__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2164__delta)));
    __Vfunc_aes_mul_gf2p2__2166__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2164__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2164__gamma)));
    __Vfunc_aes_mul_gf2p2__2166__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2166__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2166__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2166__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2166__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2166__d)));
    __Vfunc_aes_mul_gf2p2__2166__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2166__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2166__d)));
    __Vfunc_aes_mul_gf2p2__2166__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2166__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2166__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2166__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2166__b)));
    __Vfunc_aes_mul_gf2p2__2166__Vfuncout = __Vfunc_aes_mul_gf2p2__2166__f;
    __Vfunc_aes_mul_gf2p4__2164__b = __Vfunc_aes_mul_gf2p2__2166__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2167__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2164__delta));
    __Vfunc_aes_mul_gf2p2__2167__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2164__gamma));
    __Vfunc_aes_mul_gf2p2__2167__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2167__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2167__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2167__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2167__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2167__d)));
    __Vfunc_aes_mul_gf2p2__2167__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2167__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2167__d)));
    __Vfunc_aes_mul_gf2p2__2167__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2167__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2167__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2167__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2167__b)));
    __Vfunc_aes_mul_gf2p2__2167__Vfuncout = __Vfunc_aes_mul_gf2p2__2167__f;
    __Vfunc_aes_mul_gf2p4__2164__c = __Vfunc_aes_mul_gf2p2__2167__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2164__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2164__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2168__g 
                        = __Vfunc_aes_mul_gf2p4__2164__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2168__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2168__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2168__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2168__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2168__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2168__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2164__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2164__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2169__g 
                        = __Vfunc_aes_mul_gf2p4__2164__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2169__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2169__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2169__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2169__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2169__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2169__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2164__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2164__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__2164__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2182__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__2182__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__2182__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16242657313747265739ull);
    __Vfunc_aes_mul_gf2p2__2183__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2182__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2183__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2182__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2183__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2183__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2183__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2183__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2183__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2183__d)));
    __Vfunc_aes_mul_gf2p2__2183__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2183__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2183__d)));
    __Vfunc_aes_mul_gf2p2__2183__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2183__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2183__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2183__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2183__b)));
    __Vfunc_aes_mul_gf2p2__2183__Vfuncout = __Vfunc_aes_mul_gf2p2__2183__f;
    __Vfunc_aes_mul_gf2p4__2182__a = __Vfunc_aes_mul_gf2p2__2183__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2184__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2182__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2182__delta)));
    __Vfunc_aes_mul_gf2p2__2184__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2182__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2182__gamma)));
    __Vfunc_aes_mul_gf2p2__2184__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2184__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2184__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2184__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2184__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2184__d)));
    __Vfunc_aes_mul_gf2p2__2184__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2184__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2184__d)));
    __Vfunc_aes_mul_gf2p2__2184__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2184__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2184__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2184__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2184__b)));
    __Vfunc_aes_mul_gf2p2__2184__Vfuncout = __Vfunc_aes_mul_gf2p2__2184__f;
    __Vfunc_aes_mul_gf2p4__2182__b = __Vfunc_aes_mul_gf2p2__2184__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2185__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2182__delta));
    __Vfunc_aes_mul_gf2p2__2185__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2182__gamma));
    __Vfunc_aes_mul_gf2p2__2185__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2185__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2185__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2185__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2185__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2185__d)));
    __Vfunc_aes_mul_gf2p2__2185__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2185__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2185__d)));
    __Vfunc_aes_mul_gf2p2__2185__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2185__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2185__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2185__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2185__b)));
    __Vfunc_aes_mul_gf2p2__2185__Vfuncout = __Vfunc_aes_mul_gf2p2__2185__f;
    __Vfunc_aes_mul_gf2p4__2182__c = __Vfunc_aes_mul_gf2p2__2185__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2182__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2182__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2186__g 
                        = __Vfunc_aes_mul_gf2p4__2182__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2186__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2186__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2186__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2186__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2186__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2186__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2182__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2182__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2187__g 
                        = __Vfunc_aes_mul_gf2p4__2182__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2187__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2187__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2187__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2187__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2187__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2187__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2182__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2182__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__2182__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2194__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__2194__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__2194__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 565414387639504982ull);
    __Vfunc_aes_mul_gf2p2__2195__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2194__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2195__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2194__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2195__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2195__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2195__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2195__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2195__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2195__d)));
    __Vfunc_aes_mul_gf2p2__2195__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2195__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2195__d)));
    __Vfunc_aes_mul_gf2p2__2195__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2195__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2195__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2195__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2195__b)));
    __Vfunc_aes_mul_gf2p2__2195__Vfuncout = __Vfunc_aes_mul_gf2p2__2195__f;
    __Vfunc_aes_mul_gf2p4__2194__a = __Vfunc_aes_mul_gf2p2__2195__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2196__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2194__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2194__delta)));
    __Vfunc_aes_mul_gf2p2__2196__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2194__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2194__gamma)));
    __Vfunc_aes_mul_gf2p2__2196__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2196__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2196__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2196__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2196__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2196__d)));
    __Vfunc_aes_mul_gf2p2__2196__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2196__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2196__d)));
    __Vfunc_aes_mul_gf2p2__2196__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2196__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2196__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2196__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2196__b)));
    __Vfunc_aes_mul_gf2p2__2196__Vfuncout = __Vfunc_aes_mul_gf2p2__2196__f;
    __Vfunc_aes_mul_gf2p4__2194__b = __Vfunc_aes_mul_gf2p2__2196__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2197__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2194__delta));
    __Vfunc_aes_mul_gf2p2__2197__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2194__gamma));
    __Vfunc_aes_mul_gf2p2__2197__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2197__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2197__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2197__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2197__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2197__d)));
    __Vfunc_aes_mul_gf2p2__2197__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2197__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2197__d)));
    __Vfunc_aes_mul_gf2p2__2197__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2197__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2197__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2197__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2197__b)));
    __Vfunc_aes_mul_gf2p2__2197__Vfuncout = __Vfunc_aes_mul_gf2p2__2197__f;
    __Vfunc_aes_mul_gf2p4__2194__c = __Vfunc_aes_mul_gf2p2__2197__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2194__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2194__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2198__g 
                        = __Vfunc_aes_mul_gf2p4__2194__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2198__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2198__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2198__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2198__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2198__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2198__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__2194__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__2194__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2199__g 
                        = __Vfunc_aes_mul_gf2p4__2194__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2199__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2199__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2199__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2199__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2199__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__2199__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__2194__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__2194__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__2194__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2142__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__2142__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__2142__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2142__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2142__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2142__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2142__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2142__d)));
    __Vfunc_aes_mul_gf2p2__2142__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2142__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2142__d)));
    __Vfunc_aes_mul_gf2p2__2142__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2142__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2142__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2142__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2142__b)));
    __Vfunc_aes_mul_gf2p2__2142__Vfuncout = __Vfunc_aes_mul_gf2p2__2142__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__2142__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2143__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__2143__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2143__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2143__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2143__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2143__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2143__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2143__d)));
    __Vfunc_aes_mul_gf2p2__2143__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2143__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2143__d)));
    __Vfunc_aes_mul_gf2p2__2143__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2143__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2143__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2143__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2143__b)));
    __Vfunc_aes_mul_gf2p2__2143__Vfuncout = __Vfunc_aes_mul_gf2p2__2143__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__2143__Vfuncout;
    __Vfunc_aes_square_gf2p2__2138__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 >> 2U) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                               ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                  >> 2U)));
    __Vfunc_aes_square_gf2p2__2138__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__2138__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__2138__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__2138__Vfuncout = __Vfunc_aes_square_gf2p2__2138__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__2138__Vfuncout;
    __Vfunc_aes_square_gf2p2__2139__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                               ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__2139__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__2139__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__2139__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__2139__Vfuncout = __Vfunc_aes_square_gf2p2__2139__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__2139__Vfuncout;
}

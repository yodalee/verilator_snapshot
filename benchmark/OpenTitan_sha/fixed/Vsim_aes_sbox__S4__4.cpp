// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__1(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__350__Vfuncout;
    __Vfunc_aes_mul_gf2p4__350__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__350__gamma;
    __Vfunc_aes_mul_gf2p4__350__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__350__delta;
    __Vfunc_aes_mul_gf2p4__350__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__350__a;
    __Vfunc_aes_mul_gf2p4__350__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__350__b;
    __Vfunc_aes_mul_gf2p4__350__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__350__c;
    __Vfunc_aes_mul_gf2p4__350__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__351__Vfuncout;
    __Vfunc_aes_mul_gf2p2__351__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__351__g;
    __Vfunc_aes_mul_gf2p2__351__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__351__d;
    __Vfunc_aes_mul_gf2p2__351__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__351__f;
    __Vfunc_aes_mul_gf2p2__351__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__351__a;
    __Vfunc_aes_mul_gf2p2__351__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__351__b;
    __Vfunc_aes_mul_gf2p2__351__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__351__c;
    __Vfunc_aes_mul_gf2p2__351__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__352__Vfuncout;
    __Vfunc_aes_mul_gf2p2__352__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__352__g;
    __Vfunc_aes_mul_gf2p2__352__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__352__d;
    __Vfunc_aes_mul_gf2p2__352__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__352__f;
    __Vfunc_aes_mul_gf2p2__352__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__352__a;
    __Vfunc_aes_mul_gf2p2__352__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__352__b;
    __Vfunc_aes_mul_gf2p2__352__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__352__c;
    __Vfunc_aes_mul_gf2p2__352__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__353__Vfuncout;
    __Vfunc_aes_mul_gf2p2__353__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__353__g;
    __Vfunc_aes_mul_gf2p2__353__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__353__d;
    __Vfunc_aes_mul_gf2p2__353__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__353__f;
    __Vfunc_aes_mul_gf2p2__353__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__353__a;
    __Vfunc_aes_mul_gf2p2__353__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__353__b;
    __Vfunc_aes_mul_gf2p2__353__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__353__c;
    __Vfunc_aes_mul_gf2p2__353__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__356__Vfuncout;
    __Vfunc_aes_mul_gf2p4__356__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__356__gamma;
    __Vfunc_aes_mul_gf2p4__356__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__356__delta;
    __Vfunc_aes_mul_gf2p4__356__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__356__a;
    __Vfunc_aes_mul_gf2p4__356__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__356__b;
    __Vfunc_aes_mul_gf2p4__356__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__356__c;
    __Vfunc_aes_mul_gf2p4__356__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__357__Vfuncout;
    __Vfunc_aes_mul_gf2p2__357__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__357__g;
    __Vfunc_aes_mul_gf2p2__357__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__357__d;
    __Vfunc_aes_mul_gf2p2__357__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__357__f;
    __Vfunc_aes_mul_gf2p2__357__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__357__a;
    __Vfunc_aes_mul_gf2p2__357__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__357__b;
    __Vfunc_aes_mul_gf2p2__357__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__357__c;
    __Vfunc_aes_mul_gf2p2__357__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__358__Vfuncout;
    __Vfunc_aes_mul_gf2p2__358__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__358__g;
    __Vfunc_aes_mul_gf2p2__358__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__358__d;
    __Vfunc_aes_mul_gf2p2__358__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__358__f;
    __Vfunc_aes_mul_gf2p2__358__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__358__a;
    __Vfunc_aes_mul_gf2p2__358__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__358__b;
    __Vfunc_aes_mul_gf2p2__358__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__358__c;
    __Vfunc_aes_mul_gf2p2__358__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__359__Vfuncout;
    __Vfunc_aes_mul_gf2p2__359__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__359__g;
    __Vfunc_aes_mul_gf2p2__359__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__359__d;
    __Vfunc_aes_mul_gf2p2__359__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__359__f;
    __Vfunc_aes_mul_gf2p2__359__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__359__a;
    __Vfunc_aes_mul_gf2p2__359__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__359__b;
    __Vfunc_aes_mul_gf2p2__359__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__359__c;
    __Vfunc_aes_mul_gf2p2__359__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__380__Vfuncout;
    __Vfunc_aes_mul_gf2p2__380__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__380__g;
    __Vfunc_aes_mul_gf2p2__380__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__380__d;
    __Vfunc_aes_mul_gf2p2__380__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__380__f;
    __Vfunc_aes_mul_gf2p2__380__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__380__a;
    __Vfunc_aes_mul_gf2p2__380__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__380__b;
    __Vfunc_aes_mul_gf2p2__380__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__380__c;
    __Vfunc_aes_mul_gf2p2__380__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__381__Vfuncout;
    __Vfunc_aes_mul_gf2p2__381__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__381__g;
    __Vfunc_aes_mul_gf2p2__381__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__381__d;
    __Vfunc_aes_mul_gf2p2__381__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__381__f;
    __Vfunc_aes_mul_gf2p2__381__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__381__a;
    __Vfunc_aes_mul_gf2p2__381__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__381__b;
    __Vfunc_aes_mul_gf2p2__381__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__381__c;
    __Vfunc_aes_mul_gf2p2__381__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__384__Vfuncout;
    __Vfunc_aes_mul_gf2p2__384__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__384__g;
    __Vfunc_aes_mul_gf2p2__384__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__384__d;
    __Vfunc_aes_mul_gf2p2__384__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__384__f;
    __Vfunc_aes_mul_gf2p2__384__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__384__a;
    __Vfunc_aes_mul_gf2p2__384__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__384__b;
    __Vfunc_aes_mul_gf2p2__384__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__384__c;
    __Vfunc_aes_mul_gf2p2__384__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__385__Vfuncout;
    __Vfunc_aes_mul_gf2p2__385__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__385__g;
    __Vfunc_aes_mul_gf2p2__385__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__385__d;
    __Vfunc_aes_mul_gf2p2__385__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__385__f;
    __Vfunc_aes_mul_gf2p2__385__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__385__a;
    __Vfunc_aes_mul_gf2p2__385__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__385__b;
    __Vfunc_aes_mul_gf2p2__385__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__385__c;
    __Vfunc_aes_mul_gf2p2__385__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__388__Vfuncout;
    __Vfunc_aes_mul_gf2p2__388__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__388__g;
    __Vfunc_aes_mul_gf2p2__388__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__388__d;
    __Vfunc_aes_mul_gf2p2__388__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__388__f;
    __Vfunc_aes_mul_gf2p2__388__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__388__a;
    __Vfunc_aes_mul_gf2p2__388__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__388__b;
    __Vfunc_aes_mul_gf2p2__388__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__388__c;
    __Vfunc_aes_mul_gf2p2__388__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__389__Vfuncout;
    __Vfunc_aes_mul_gf2p2__389__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__389__g;
    __Vfunc_aes_mul_gf2p2__389__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__389__d;
    __Vfunc_aes_mul_gf2p2__389__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__389__f;
    __Vfunc_aes_mul_gf2p2__389__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__389__a;
    __Vfunc_aes_mul_gf2p2__389__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__389__b;
    __Vfunc_aes_mul_gf2p2__389__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__389__c;
    __Vfunc_aes_mul_gf2p2__389__c = 0;
    // Body
    __Vfunc_aes_mul_gf2p2__380__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__363__03a336__KET__ 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__380__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__380__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__380__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__380__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__380__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__380__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__380__d)));
    __Vfunc_aes_mul_gf2p2__380__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__380__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__380__d)));
    __Vfunc_aes_mul_gf2p2__380__f = ((((IData)(__Vfunc_aes_mul_gf2p2__380__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__380__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__380__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__380__b)));
    __Vfunc_aes_mul_gf2p2__380__Vfuncout = __Vfunc_aes_mul_gf2p2__380__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__380__Vfuncout;
    __Vfunc_aes_mul_gf2p2__381__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__363__03a336__KET__ 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__381__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__381__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__381__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__381__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__381__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__381__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__381__d)));
    __Vfunc_aes_mul_gf2p2__381__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__381__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__381__d)));
    __Vfunc_aes_mul_gf2p2__381__f = ((((IData)(__Vfunc_aes_mul_gf2p2__381__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__381__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__381__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__381__b)));
    __Vfunc_aes_mul_gf2p2__381__Vfuncout = __Vfunc_aes_mul_gf2p2__381__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__381__Vfuncout;
    __Vfunc_aes_mul_gf2p2__384__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__363__03a336__KET__ 
                                           >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__384__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__384__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__384__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__384__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__384__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__384__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__384__d)));
    __Vfunc_aes_mul_gf2p2__384__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__384__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__384__d)));
    __Vfunc_aes_mul_gf2p2__384__f = ((((IData)(__Vfunc_aes_mul_gf2p2__384__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__384__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__384__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__384__b)));
    __Vfunc_aes_mul_gf2p2__384__Vfuncout = __Vfunc_aes_mul_gf2p2__384__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__384__Vfuncout;
    __Vfunc_aes_mul_gf2p2__385__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__363__03a336__KET__ 
                                           >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__385__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__385__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__385__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__385__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__385__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__385__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__385__d)));
    __Vfunc_aes_mul_gf2p2__385__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__385__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__385__d)));
    __Vfunc_aes_mul_gf2p2__385__f = ((((IData)(__Vfunc_aes_mul_gf2p2__385__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__385__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__385__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__385__b)));
    __Vfunc_aes_mul_gf2p2__385__Vfuncout = __Vfunc_aes_mul_gf2p2__385__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__385__Vfuncout;
    __Vfunc_aes_mul_gf2p4__350__delta = (0x0000000fU 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__363__03a336__KET__);
    __Vfunc_aes_mul_gf2p4__350__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                            >> 4U));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__350__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4575511822678433427ull);
    __Vfunc_aes_mul_gf2p2__351__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__350__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__351__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__350__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__351__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__351__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__351__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__351__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__351__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__351__d)));
    __Vfunc_aes_mul_gf2p2__351__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__351__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__351__d)));
    __Vfunc_aes_mul_gf2p2__351__f = ((((IData)(__Vfunc_aes_mul_gf2p2__351__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__351__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__351__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__351__b)));
    __Vfunc_aes_mul_gf2p2__351__Vfuncout = __Vfunc_aes_mul_gf2p2__351__f;
    __Vfunc_aes_mul_gf2p4__350__a = __Vfunc_aes_mul_gf2p2__351__Vfuncout;
    __Vfunc_aes_mul_gf2p2__352__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__350__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__350__delta)));
    __Vfunc_aes_mul_gf2p2__352__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__350__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__350__gamma)));
    __Vfunc_aes_mul_gf2p2__352__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__352__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__352__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__352__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__352__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__352__d)));
    __Vfunc_aes_mul_gf2p2__352__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__352__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__352__d)));
    __Vfunc_aes_mul_gf2p2__352__f = ((((IData)(__Vfunc_aes_mul_gf2p2__352__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__352__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__352__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__352__b)));
    __Vfunc_aes_mul_gf2p2__352__Vfuncout = __Vfunc_aes_mul_gf2p2__352__f;
    __Vfunc_aes_mul_gf2p4__350__b = __Vfunc_aes_mul_gf2p2__352__Vfuncout;
    __Vfunc_aes_mul_gf2p2__353__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__350__delta));
    __Vfunc_aes_mul_gf2p2__353__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__350__gamma));
    __Vfunc_aes_mul_gf2p2__353__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__353__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__353__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__353__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__353__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__353__d)));
    __Vfunc_aes_mul_gf2p2__353__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__353__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__353__d)));
    __Vfunc_aes_mul_gf2p2__353__f = ((((IData)(__Vfunc_aes_mul_gf2p2__353__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__353__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__353__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__353__b)));
    __Vfunc_aes_mul_gf2p2__353__Vfuncout = __Vfunc_aes_mul_gf2p2__353__f;
    __Vfunc_aes_mul_gf2p4__350__c = __Vfunc_aes_mul_gf2p2__353__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__350__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__350__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__354__g 
                        = __Vfunc_aes_mul_gf2p4__350__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__354__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__354__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__354__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__354__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__354__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__354__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__350__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__350__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__355__g 
                        = __Vfunc_aes_mul_gf2p4__350__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__355__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__355__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__355__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__355__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__355__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__355__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__350__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__350__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__350__Vfuncout;
    __Vfunc_aes_mul_gf2p4__356__delta = (0x0000000fU 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__363__03a336__KET__);
    __Vfunc_aes_mul_gf2p4__356__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__356__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6976905185745150880ull);
    __Vfunc_aes_mul_gf2p2__357__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__356__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__357__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__356__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__357__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__357__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__357__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__357__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__357__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__357__d)));
    __Vfunc_aes_mul_gf2p2__357__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__357__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__357__d)));
    __Vfunc_aes_mul_gf2p2__357__f = ((((IData)(__Vfunc_aes_mul_gf2p2__357__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__357__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__357__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__357__b)));
    __Vfunc_aes_mul_gf2p2__357__Vfuncout = __Vfunc_aes_mul_gf2p2__357__f;
    __Vfunc_aes_mul_gf2p4__356__a = __Vfunc_aes_mul_gf2p2__357__Vfuncout;
    __Vfunc_aes_mul_gf2p2__358__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__356__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__356__delta)));
    __Vfunc_aes_mul_gf2p2__358__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__356__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__356__gamma)));
    __Vfunc_aes_mul_gf2p2__358__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__358__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__358__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__358__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__358__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__358__d)));
    __Vfunc_aes_mul_gf2p2__358__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__358__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__358__d)));
    __Vfunc_aes_mul_gf2p2__358__f = ((((IData)(__Vfunc_aes_mul_gf2p2__358__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__358__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__358__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__358__b)));
    __Vfunc_aes_mul_gf2p2__358__Vfuncout = __Vfunc_aes_mul_gf2p2__358__f;
    __Vfunc_aes_mul_gf2p4__356__b = __Vfunc_aes_mul_gf2p2__358__Vfuncout;
    __Vfunc_aes_mul_gf2p2__359__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__356__delta));
    __Vfunc_aes_mul_gf2p2__359__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__356__gamma));
    __Vfunc_aes_mul_gf2p2__359__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__359__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__359__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__359__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__359__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__359__d)));
    __Vfunc_aes_mul_gf2p2__359__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__359__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__359__d)));
    __Vfunc_aes_mul_gf2p2__359__f = ((((IData)(__Vfunc_aes_mul_gf2p2__359__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__359__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__359__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__359__b)));
    __Vfunc_aes_mul_gf2p2__359__Vfuncout = __Vfunc_aes_mul_gf2p2__359__f;
    __Vfunc_aes_mul_gf2p4__356__c = __Vfunc_aes_mul_gf2p2__359__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__356__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__356__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__360__g 
                        = __Vfunc_aes_mul_gf2p4__356__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__360__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__360__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__360__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__360__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__360__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__360__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__356__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__356__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__361__g 
                        = __Vfunc_aes_mul_gf2p4__356__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__361__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__361__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__361__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__361__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__361__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__361__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__356__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__356__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__356__Vfuncout;
    __Vfunc_aes_mul_gf2p2__388__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__363__03a336__KET__ 
                                           >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__388__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega;
    __Vfunc_aes_mul_gf2p2__388__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__388__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__388__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__388__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__388__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__388__d)));
    __Vfunc_aes_mul_gf2p2__388__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__388__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__388__d)));
    __Vfunc_aes_mul_gf2p2__388__f = ((((IData)(__Vfunc_aes_mul_gf2p2__388__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__388__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__388__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__388__b)));
    __Vfunc_aes_mul_gf2p2__388__Vfuncout = __Vfunc_aes_mul_gf2p2__388__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__388__Vfuncout;
    __Vfunc_aes_mul_gf2p2__389__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__363__03a336__KET__ 
                                           >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__389__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega;
    __Vfunc_aes_mul_gf2p2__389__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__389__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__389__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__389__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__389__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__389__d)));
    __Vfunc_aes_mul_gf2p2__389__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__389__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__389__d)));
    __Vfunc_aes_mul_gf2p2__389__f = ((((IData)(__Vfunc_aes_mul_gf2p2__389__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__389__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__389__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__389__b)));
    __Vfunc_aes_mul_gf2p2__389__Vfuncout = __Vfunc_aes_mul_gf2p2__389__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__389__Vfuncout;
}

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__452__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__452__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__452__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__452__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__452__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__452__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__452__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__452__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__452__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__452__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__453__Vfuncout;
    __Vfunc_aes_square_gf2p2__453__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__453__g;
    __Vfunc_aes_square_gf2p2__453__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__453__d;
    __Vfunc_aes_square_gf2p2__453__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__456__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__456__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__456__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__456__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__456__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__456__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__456__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__456__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__456__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__456__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__457__Vfuncout;
    __Vfunc_aes_square_gf2p2__457__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__457__g;
    __Vfunc_aes_square_gf2p2__457__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__457__d;
    __Vfunc_aes_square_gf2p2__457__d = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__472__Vfuncout;
    __Vfunc_aes_mul_gf2p4__472__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__472__gamma;
    __Vfunc_aes_mul_gf2p4__472__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__472__delta;
    __Vfunc_aes_mul_gf2p4__472__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__472__a;
    __Vfunc_aes_mul_gf2p4__472__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__472__b;
    __Vfunc_aes_mul_gf2p4__472__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__472__c;
    __Vfunc_aes_mul_gf2p4__472__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__473__Vfuncout;
    __Vfunc_aes_mul_gf2p2__473__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__473__g;
    __Vfunc_aes_mul_gf2p2__473__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__473__d;
    __Vfunc_aes_mul_gf2p2__473__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__473__f;
    __Vfunc_aes_mul_gf2p2__473__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__473__a;
    __Vfunc_aes_mul_gf2p2__473__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__473__b;
    __Vfunc_aes_mul_gf2p2__473__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__473__c;
    __Vfunc_aes_mul_gf2p2__473__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__474__Vfuncout;
    __Vfunc_aes_mul_gf2p2__474__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__474__g;
    __Vfunc_aes_mul_gf2p2__474__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__474__d;
    __Vfunc_aes_mul_gf2p2__474__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__474__f;
    __Vfunc_aes_mul_gf2p2__474__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__474__a;
    __Vfunc_aes_mul_gf2p2__474__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__474__b;
    __Vfunc_aes_mul_gf2p2__474__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__474__c;
    __Vfunc_aes_mul_gf2p2__474__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__475__Vfuncout;
    __Vfunc_aes_mul_gf2p2__475__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__475__g;
    __Vfunc_aes_mul_gf2p2__475__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__475__d;
    __Vfunc_aes_mul_gf2p2__475__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__475__f;
    __Vfunc_aes_mul_gf2p2__475__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__475__a;
    __Vfunc_aes_mul_gf2p2__475__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__475__b;
    __Vfunc_aes_mul_gf2p2__475__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__475__c;
    __Vfunc_aes_mul_gf2p2__475__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__478__Vfuncout;
    __Vfunc_aes_mul_gf2p4__478__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__478__gamma;
    __Vfunc_aes_mul_gf2p4__478__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__478__delta;
    __Vfunc_aes_mul_gf2p4__478__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__478__a;
    __Vfunc_aes_mul_gf2p4__478__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__478__b;
    __Vfunc_aes_mul_gf2p4__478__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__478__c;
    __Vfunc_aes_mul_gf2p4__478__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__479__Vfuncout;
    __Vfunc_aes_mul_gf2p2__479__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__479__g;
    __Vfunc_aes_mul_gf2p2__479__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__479__d;
    __Vfunc_aes_mul_gf2p2__479__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__479__f;
    __Vfunc_aes_mul_gf2p2__479__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__479__a;
    __Vfunc_aes_mul_gf2p2__479__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__479__b;
    __Vfunc_aes_mul_gf2p2__479__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__479__c;
    __Vfunc_aes_mul_gf2p2__479__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__480__Vfuncout;
    __Vfunc_aes_mul_gf2p2__480__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__480__g;
    __Vfunc_aes_mul_gf2p2__480__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__480__d;
    __Vfunc_aes_mul_gf2p2__480__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__480__f;
    __Vfunc_aes_mul_gf2p2__480__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__480__a;
    __Vfunc_aes_mul_gf2p2__480__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__480__b;
    __Vfunc_aes_mul_gf2p2__480__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__480__c;
    __Vfunc_aes_mul_gf2p2__480__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__481__Vfuncout;
    __Vfunc_aes_mul_gf2p2__481__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__481__g;
    __Vfunc_aes_mul_gf2p2__481__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__481__d;
    __Vfunc_aes_mul_gf2p2__481__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__481__f;
    __Vfunc_aes_mul_gf2p2__481__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__481__a;
    __Vfunc_aes_mul_gf2p2__481__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__481__b;
    __Vfunc_aes_mul_gf2p2__481__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__481__c;
    __Vfunc_aes_mul_gf2p2__481__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__484__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__484__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__484__g;
    __Vfunc_aes_scale_omega2_gf2p2__484__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__484__d;
    __Vfunc_aes_scale_omega2_gf2p2__484__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__485__Vfuncout;
    __Vfunc_aes_square_gf2p2__485__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__485__g;
    __Vfunc_aes_square_gf2p2__485__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__485__d;
    __Vfunc_aes_square_gf2p2__485__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__486__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__486__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__486__g;
    __Vfunc_aes_scale_omega2_gf2p2__486__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__486__d;
    __Vfunc_aes_scale_omega2_gf2p2__486__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__487__Vfuncout;
    __Vfunc_aes_square_gf2p2__487__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__487__g;
    __Vfunc_aes_square_gf2p2__487__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__487__d;
    __Vfunc_aes_square_gf2p2__487__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__488__Vfuncout;
    __Vfunc_aes_square_gf2p2__488__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__488__g;
    __Vfunc_aes_square_gf2p2__488__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__488__d;
    __Vfunc_aes_square_gf2p2__488__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__489__Vfuncout;
    __Vfunc_aes_square_gf2p2__489__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__489__g;
    __Vfunc_aes_square_gf2p2__489__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__489__d;
    __Vfunc_aes_square_gf2p2__489__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__492__Vfuncout;
    __Vfunc_aes_mul_gf2p2__492__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__492__g;
    __Vfunc_aes_mul_gf2p2__492__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__492__d;
    __Vfunc_aes_mul_gf2p2__492__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__492__f;
    __Vfunc_aes_mul_gf2p2__492__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__492__a;
    __Vfunc_aes_mul_gf2p2__492__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__492__b;
    __Vfunc_aes_mul_gf2p2__492__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__492__c;
    __Vfunc_aes_mul_gf2p2__492__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__493__Vfuncout;
    __Vfunc_aes_mul_gf2p2__493__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__493__g;
    __Vfunc_aes_mul_gf2p2__493__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__493__d;
    __Vfunc_aes_mul_gf2p2__493__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__493__f;
    __Vfunc_aes_mul_gf2p2__493__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__493__a;
    __Vfunc_aes_mul_gf2p2__493__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__493__b;
    __Vfunc_aes_mul_gf2p2__493__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__493__c;
    __Vfunc_aes_mul_gf2p2__493__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__496__Vfuncout;
    __Vfunc_aes_mul_gf2p2__496__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__496__g;
    __Vfunc_aes_mul_gf2p2__496__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__496__d;
    __Vfunc_aes_mul_gf2p2__496__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__496__f;
    __Vfunc_aes_mul_gf2p2__496__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__496__a;
    __Vfunc_aes_mul_gf2p2__496__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__496__b;
    __Vfunc_aes_mul_gf2p2__496__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__496__c;
    __Vfunc_aes_mul_gf2p2__496__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__497__Vfuncout;
    __Vfunc_aes_mul_gf2p2__497__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__497__g;
    __Vfunc_aes_mul_gf2p2__497__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__497__d;
    __Vfunc_aes_mul_gf2p2__497__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__497__f;
    __Vfunc_aes_mul_gf2p2__497__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__497__a;
    __Vfunc_aes_mul_gf2p2__497__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__497__b;
    __Vfunc_aes_mul_gf2p2__497__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__497__c;
    __Vfunc_aes_mul_gf2p2__497__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__500__Vfuncout;
    __Vfunc_aes_mul_gf2p2__500__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__500__g;
    __Vfunc_aes_mul_gf2p2__500__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__500__d;
    __Vfunc_aes_mul_gf2p2__500__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__500__f;
    __Vfunc_aes_mul_gf2p2__500__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__500__a;
    __Vfunc_aes_mul_gf2p2__500__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__500__b;
    __Vfunc_aes_mul_gf2p2__500__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__500__c;
    __Vfunc_aes_mul_gf2p2__500__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__501__Vfuncout;
    __Vfunc_aes_mul_gf2p2__501__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__501__g;
    __Vfunc_aes_mul_gf2p2__501__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__501__d;
    __Vfunc_aes_mul_gf2p2__501__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__501__f;
    __Vfunc_aes_mul_gf2p2__501__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__501__a;
    __Vfunc_aes_mul_gf2p2__501__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__501__b;
    __Vfunc_aes_mul_gf2p2__501__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__501__c;
    __Vfunc_aes_mul_gf2p2__501__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__502__Vfuncout;
    __Vfunc_aes_mul_gf2p4__502__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__502__gamma;
    __Vfunc_aes_mul_gf2p4__502__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__502__delta;
    __Vfunc_aes_mul_gf2p4__502__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__502__a;
    __Vfunc_aes_mul_gf2p4__502__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__502__b;
    __Vfunc_aes_mul_gf2p4__502__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__502__c;
    __Vfunc_aes_mul_gf2p4__502__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__503__Vfuncout;
    __Vfunc_aes_mul_gf2p2__503__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__503__g;
    __Vfunc_aes_mul_gf2p2__503__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__503__d;
    __Vfunc_aes_mul_gf2p2__503__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__503__f;
    __Vfunc_aes_mul_gf2p2__503__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__503__a;
    __Vfunc_aes_mul_gf2p2__503__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__503__b;
    __Vfunc_aes_mul_gf2p2__503__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__503__c;
    __Vfunc_aes_mul_gf2p2__503__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__504__Vfuncout;
    __Vfunc_aes_mul_gf2p2__504__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__504__g;
    __Vfunc_aes_mul_gf2p2__504__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__504__d;
    __Vfunc_aes_mul_gf2p2__504__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__504__f;
    __Vfunc_aes_mul_gf2p2__504__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__504__a;
    __Vfunc_aes_mul_gf2p2__504__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__504__b;
    __Vfunc_aes_mul_gf2p2__504__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__504__c;
    __Vfunc_aes_mul_gf2p2__504__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__505__Vfuncout;
    __Vfunc_aes_mul_gf2p2__505__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__505__g;
    __Vfunc_aes_mul_gf2p2__505__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__505__d;
    __Vfunc_aes_mul_gf2p2__505__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__505__f;
    __Vfunc_aes_mul_gf2p2__505__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__505__a;
    __Vfunc_aes_mul_gf2p2__505__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__505__b;
    __Vfunc_aes_mul_gf2p2__505__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__505__c;
    __Vfunc_aes_mul_gf2p2__505__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__508__Vfuncout;
    __Vfunc_aes_mul_gf2p4__508__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__508__gamma;
    __Vfunc_aes_mul_gf2p4__508__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__508__delta;
    __Vfunc_aes_mul_gf2p4__508__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__508__a;
    __Vfunc_aes_mul_gf2p4__508__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__508__b;
    __Vfunc_aes_mul_gf2p4__508__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__508__c;
    __Vfunc_aes_mul_gf2p4__508__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__509__Vfuncout;
    __Vfunc_aes_mul_gf2p2__509__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__509__g;
    __Vfunc_aes_mul_gf2p2__509__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__509__d;
    __Vfunc_aes_mul_gf2p2__509__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__509__f;
    __Vfunc_aes_mul_gf2p2__509__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__509__a;
    __Vfunc_aes_mul_gf2p2__509__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__509__b;
    __Vfunc_aes_mul_gf2p2__509__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__509__c;
    __Vfunc_aes_mul_gf2p2__509__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__510__Vfuncout;
    __Vfunc_aes_mul_gf2p2__510__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__510__g;
    __Vfunc_aes_mul_gf2p2__510__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__510__d;
    __Vfunc_aes_mul_gf2p2__510__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__510__f;
    __Vfunc_aes_mul_gf2p2__510__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__510__a;
    __Vfunc_aes_mul_gf2p2__510__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__510__b;
    __Vfunc_aes_mul_gf2p2__510__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__510__c;
    __Vfunc_aes_mul_gf2p2__510__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__511__Vfuncout;
    __Vfunc_aes_mul_gf2p2__511__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__511__g;
    __Vfunc_aes_mul_gf2p2__511__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__511__d;
    __Vfunc_aes_mul_gf2p2__511__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__511__f;
    __Vfunc_aes_mul_gf2p2__511__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__511__a;
    __Vfunc_aes_mul_gf2p2__511__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__511__b;
    __Vfunc_aes_mul_gf2p2__511__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__511__c;
    __Vfunc_aes_mul_gf2p2__511__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__514__Vfuncout;
    __Vfunc_aes_mul_gf2p4__514__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__514__gamma;
    __Vfunc_aes_mul_gf2p4__514__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__514__delta;
    __Vfunc_aes_mul_gf2p4__514__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__514__a;
    __Vfunc_aes_mul_gf2p4__514__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__514__b;
    __Vfunc_aes_mul_gf2p4__514__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__514__c;
    __Vfunc_aes_mul_gf2p4__514__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__515__Vfuncout;
    __Vfunc_aes_mul_gf2p2__515__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__515__g;
    __Vfunc_aes_mul_gf2p2__515__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__515__d;
    __Vfunc_aes_mul_gf2p2__515__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__515__f;
    __Vfunc_aes_mul_gf2p2__515__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__515__a;
    __Vfunc_aes_mul_gf2p2__515__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__515__b;
    __Vfunc_aes_mul_gf2p2__515__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__515__c;
    __Vfunc_aes_mul_gf2p2__515__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__516__Vfuncout;
    __Vfunc_aes_mul_gf2p2__516__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__516__g;
    __Vfunc_aes_mul_gf2p2__516__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__516__d;
    __Vfunc_aes_mul_gf2p2__516__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__516__f;
    __Vfunc_aes_mul_gf2p2__516__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__516__a;
    __Vfunc_aes_mul_gf2p2__516__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__516__b;
    __Vfunc_aes_mul_gf2p2__516__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__516__c;
    __Vfunc_aes_mul_gf2p2__516__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__517__Vfuncout;
    __Vfunc_aes_mul_gf2p2__517__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__517__g;
    __Vfunc_aes_mul_gf2p2__517__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__517__d;
    __Vfunc_aes_mul_gf2p2__517__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__517__f;
    __Vfunc_aes_mul_gf2p2__517__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__517__a;
    __Vfunc_aes_mul_gf2p2__517__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__517__b;
    __Vfunc_aes_mul_gf2p2__517__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__517__c;
    __Vfunc_aes_mul_gf2p2__517__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__520__Vfuncout;
    __Vfunc_aes_mul_gf2p4__520__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__520__gamma;
    __Vfunc_aes_mul_gf2p4__520__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__520__delta;
    __Vfunc_aes_mul_gf2p4__520__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__520__a;
    __Vfunc_aes_mul_gf2p4__520__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__520__b;
    __Vfunc_aes_mul_gf2p4__520__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__520__c;
    __Vfunc_aes_mul_gf2p4__520__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__521__Vfuncout;
    __Vfunc_aes_mul_gf2p2__521__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__521__g;
    __Vfunc_aes_mul_gf2p2__521__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__521__d;
    __Vfunc_aes_mul_gf2p2__521__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__521__f;
    __Vfunc_aes_mul_gf2p2__521__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__521__a;
    __Vfunc_aes_mul_gf2p2__521__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__521__b;
    __Vfunc_aes_mul_gf2p2__521__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__521__c;
    __Vfunc_aes_mul_gf2p2__521__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__522__Vfuncout;
    __Vfunc_aes_mul_gf2p2__522__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__522__g;
    __Vfunc_aes_mul_gf2p2__522__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__522__d;
    __Vfunc_aes_mul_gf2p2__522__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__522__f;
    __Vfunc_aes_mul_gf2p2__522__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__522__a;
    __Vfunc_aes_mul_gf2p2__522__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__522__b;
    __Vfunc_aes_mul_gf2p2__522__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__522__c;
    __Vfunc_aes_mul_gf2p2__522__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__523__Vfuncout;
    __Vfunc_aes_mul_gf2p2__523__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__523__g;
    __Vfunc_aes_mul_gf2p2__523__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__523__d;
    __Vfunc_aes_mul_gf2p2__523__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__523__f;
    __Vfunc_aes_mul_gf2p2__523__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__523__a;
    __Vfunc_aes_mul_gf2p2__523__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__523__b;
    __Vfunc_aes_mul_gf2p2__523__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__523__c;
    __Vfunc_aes_mul_gf2p2__523__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__526__Vfuncout;
    __Vfunc_aes_mul_gf2p4__526__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__526__gamma;
    __Vfunc_aes_mul_gf2p4__526__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__526__delta;
    __Vfunc_aes_mul_gf2p4__526__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__526__a;
    __Vfunc_aes_mul_gf2p4__526__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__526__b;
    __Vfunc_aes_mul_gf2p4__526__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__526__c;
    __Vfunc_aes_mul_gf2p4__526__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__527__Vfuncout;
    __Vfunc_aes_mul_gf2p2__527__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__527__g;
    __Vfunc_aes_mul_gf2p2__527__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__527__d;
    __Vfunc_aes_mul_gf2p2__527__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__527__f;
    __Vfunc_aes_mul_gf2p2__527__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__527__a;
    __Vfunc_aes_mul_gf2p2__527__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__527__b;
    __Vfunc_aes_mul_gf2p2__527__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__527__c;
    __Vfunc_aes_mul_gf2p2__527__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__528__Vfuncout;
    __Vfunc_aes_mul_gf2p2__528__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__528__g;
    __Vfunc_aes_mul_gf2p2__528__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__528__d;
    __Vfunc_aes_mul_gf2p2__528__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__528__f;
    __Vfunc_aes_mul_gf2p2__528__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__528__a;
    __Vfunc_aes_mul_gf2p2__528__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__528__b;
    __Vfunc_aes_mul_gf2p2__528__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__528__c;
    __Vfunc_aes_mul_gf2p2__528__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__529__Vfuncout;
    __Vfunc_aes_mul_gf2p2__529__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__529__g;
    __Vfunc_aes_mul_gf2p2__529__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__529__d;
    __Vfunc_aes_mul_gf2p2__529__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__529__f;
    __Vfunc_aes_mul_gf2p2__529__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__529__a;
    __Vfunc_aes_mul_gf2p2__529__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__529__b;
    __Vfunc_aes_mul_gf2p2__529__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__529__c;
    __Vfunc_aes_mul_gf2p2__529__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__532__Vfuncout;
    __Vfunc_aes_mul_gf2p4__532__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__532__gamma;
    __Vfunc_aes_mul_gf2p4__532__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__532__delta;
    __Vfunc_aes_mul_gf2p4__532__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__532__a;
    __Vfunc_aes_mul_gf2p4__532__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__532__b;
    __Vfunc_aes_mul_gf2p4__532__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__532__c;
    __Vfunc_aes_mul_gf2p4__532__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__533__Vfuncout;
    __Vfunc_aes_mul_gf2p2__533__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__533__g;
    __Vfunc_aes_mul_gf2p2__533__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__533__d;
    __Vfunc_aes_mul_gf2p2__533__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__533__f;
    __Vfunc_aes_mul_gf2p2__533__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__533__a;
    __Vfunc_aes_mul_gf2p2__533__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__533__b;
    __Vfunc_aes_mul_gf2p2__533__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__533__c;
    __Vfunc_aes_mul_gf2p2__533__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__534__Vfuncout;
    __Vfunc_aes_mul_gf2p2__534__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__534__g;
    __Vfunc_aes_mul_gf2p2__534__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__534__d;
    __Vfunc_aes_mul_gf2p2__534__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__534__f;
    __Vfunc_aes_mul_gf2p2__534__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__534__a;
    __Vfunc_aes_mul_gf2p2__534__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__534__b;
    __Vfunc_aes_mul_gf2p2__534__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__534__c;
    __Vfunc_aes_mul_gf2p2__534__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__535__Vfuncout;
    __Vfunc_aes_mul_gf2p2__535__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__535__g;
    __Vfunc_aes_mul_gf2p2__535__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__535__d;
    __Vfunc_aes_mul_gf2p2__535__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__535__f;
    __Vfunc_aes_mul_gf2p2__535__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__535__a;
    __Vfunc_aes_mul_gf2p2__535__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__535__b;
    __Vfunc_aes_mul_gf2p2__535__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__535__c;
    __Vfunc_aes_mul_gf2p2__535__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__538__Vfuncout;
    __Vfunc_aes_mul_gf2p4__538__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__538__gamma;
    __Vfunc_aes_mul_gf2p4__538__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__538__delta;
    __Vfunc_aes_mul_gf2p4__538__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__538__a;
    __Vfunc_aes_mul_gf2p4__538__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__538__b;
    __Vfunc_aes_mul_gf2p4__538__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__538__c;
    __Vfunc_aes_mul_gf2p4__538__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__539__Vfuncout;
    __Vfunc_aes_mul_gf2p2__539__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__539__g;
    __Vfunc_aes_mul_gf2p2__539__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__539__d;
    __Vfunc_aes_mul_gf2p2__539__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__539__f;
    __Vfunc_aes_mul_gf2p2__539__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__539__a;
    __Vfunc_aes_mul_gf2p2__539__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__539__b;
    __Vfunc_aes_mul_gf2p2__539__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__539__c;
    __Vfunc_aes_mul_gf2p2__539__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__540__Vfuncout;
    __Vfunc_aes_mul_gf2p2__540__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__540__g;
    __Vfunc_aes_mul_gf2p2__540__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__540__d;
    __Vfunc_aes_mul_gf2p2__540__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__540__f;
    __Vfunc_aes_mul_gf2p2__540__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__540__a;
    __Vfunc_aes_mul_gf2p2__540__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__540__b;
    __Vfunc_aes_mul_gf2p2__540__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__540__c;
    __Vfunc_aes_mul_gf2p2__540__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__541__Vfuncout;
    __Vfunc_aes_mul_gf2p2__541__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__541__g;
    __Vfunc_aes_mul_gf2p2__541__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__541__d;
    __Vfunc_aes_mul_gf2p2__541__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__541__f;
    __Vfunc_aes_mul_gf2p2__541__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__541__a;
    __Vfunc_aes_mul_gf2p2__541__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__541__b;
    __Vfunc_aes_mul_gf2p2__541__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__541__c;
    __Vfunc_aes_mul_gf2p2__541__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__544__Vfuncout;
    __Vfunc_aes_mul_gf2p4__544__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__544__gamma;
    __Vfunc_aes_mul_gf2p4__544__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__544__delta;
    __Vfunc_aes_mul_gf2p4__544__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__544__a;
    __Vfunc_aes_mul_gf2p4__544__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__544__b;
    __Vfunc_aes_mul_gf2p4__544__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__544__c;
    __Vfunc_aes_mul_gf2p4__544__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__545__Vfuncout;
    __Vfunc_aes_mul_gf2p2__545__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__545__g;
    __Vfunc_aes_mul_gf2p2__545__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__545__d;
    __Vfunc_aes_mul_gf2p2__545__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__545__f;
    __Vfunc_aes_mul_gf2p2__545__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__545__a;
    __Vfunc_aes_mul_gf2p2__545__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__545__b;
    __Vfunc_aes_mul_gf2p2__545__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__545__c;
    __Vfunc_aes_mul_gf2p2__545__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__546__Vfuncout;
    __Vfunc_aes_mul_gf2p2__546__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__546__g;
    __Vfunc_aes_mul_gf2p2__546__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__546__d;
    __Vfunc_aes_mul_gf2p2__546__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__546__f;
    __Vfunc_aes_mul_gf2p2__546__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__546__a;
    __Vfunc_aes_mul_gf2p2__546__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__546__b;
    __Vfunc_aes_mul_gf2p2__546__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__546__c;
    __Vfunc_aes_mul_gf2p2__546__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__547__Vfuncout;
    __Vfunc_aes_mul_gf2p2__547__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__547__g;
    __Vfunc_aes_mul_gf2p2__547__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__547__d;
    __Vfunc_aes_mul_gf2p2__547__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__547__f;
    __Vfunc_aes_mul_gf2p2__547__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__547__a;
    __Vfunc_aes_mul_gf2p2__547__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__547__b;
    __Vfunc_aes_mul_gf2p2__547__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__547__c;
    __Vfunc_aes_mul_gf2p2__547__c = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d) 
                    << 2U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x00fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                                                 >> 8U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                               >> 0x0000000aU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                    << 2U) ^ (0x03fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                                                 >> 6U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
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
                                    ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__) 
                                   << 4U)) | (0x0000000fU 
                                              & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__)));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0) 
                                    << 4U) ^ (0xfffffff0U 
                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                                                 >> 0x00000010U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                               >> 0x00000012U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x000ffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                                                 >> 0x0000000cU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                               >> 0x0000000eU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
                                    << 2U) ^ (0x0003fffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                                                 >> 0x0000000eU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                               >> 0x00000010U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o 
                = vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o;
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & ((0x3ffffffcU & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                                   >> 2U)) 
                                   ^ (0x003ffffcU & 
                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                                       >> 0x0000000aU)))) 
                   | (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                                                 >> 0x00000014U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                                        >> 0x00000018U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by) 
                                    << 4U) ^ (0x0000fff0U 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
                                                 >> 0x00000010U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__ 
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
                vlSelfRef.__Vfunc_aes_mvm__440__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__440__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__440__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__440__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__440__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__440__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__440__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__440__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__440__vec_b 
                    = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                      [0U][0U] >> 8U));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__440__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__440__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__440__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__440__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__440__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_b 
                        = (0x000000ffU & (0x63U ^ (
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                    [0U][0U] 
                                                    << 0x00000018U) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                      [0U][0U] 
                                                      >> 8U))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__441__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__441__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__441__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__441__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__441__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [0U][0U] 
                                          >> 8U));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__442__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__442__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__442__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__442__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__442__Vfuncout))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__443__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__443__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__443__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__443__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__443__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__443__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__443__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__443__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__443__vec_b 
                    = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                      [1U][0U] >> 8U));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__443__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__443__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__443__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__443__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__443__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [1U][0U] 
                                          >> 8U));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__444__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__444__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__444__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__444__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__444__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [1U][0U] 
                                          >> 8U));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__445__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__445__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__445__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__445__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__445__Vfuncout))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__452__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__452__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__452__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__452__gamma)));
    __Vfunc_aes_square_gf2p2__453__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__452__gamma));
    __Vfunc_aes_square_gf2p2__453__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__453__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__453__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__453__Vfuncout = __Vfunc_aes_square_gf2p2__453__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__452__b = __Vfunc_aes_square_gf2p2__453__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__452__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__454__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__452__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__454__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__454__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__454__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__454__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__454__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__454__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__455__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__452__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__455__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__455__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__455__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__455__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__455__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__455__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__452__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__452__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__452__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__456__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__456__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__456__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__456__gamma)));
    __Vfunc_aes_square_gf2p2__457__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__456__gamma));
    __Vfunc_aes_square_gf2p2__457__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__457__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__457__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__457__Vfuncout = __Vfunc_aes_square_gf2p2__457__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__456__b = __Vfunc_aes_square_gf2p2__457__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__456__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__458__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__456__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__458__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__458__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__458__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__458__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__458__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__458__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__459__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__456__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__459__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__459__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__459__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__459__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__459__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__459__Vfuncout)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                    << 4U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma));
        }
    } else {
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o = 0U;
    }
    __Vfunc_aes_square_scale_gf2p4_gf2p2__456__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__456__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__456__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__472__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__472__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                            >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__472__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1764538079728421700ull);
    __Vfunc_aes_mul_gf2p2__473__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__472__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__473__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__472__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__473__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__473__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__473__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__473__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__473__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__473__d)));
    __Vfunc_aes_mul_gf2p2__473__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__473__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__473__d)));
    __Vfunc_aes_mul_gf2p2__473__f = ((((IData)(__Vfunc_aes_mul_gf2p2__473__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__473__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__473__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__473__b)));
    __Vfunc_aes_mul_gf2p2__473__Vfuncout = __Vfunc_aes_mul_gf2p2__473__f;
    __Vfunc_aes_mul_gf2p4__472__a = __Vfunc_aes_mul_gf2p2__473__Vfuncout;
    __Vfunc_aes_mul_gf2p2__474__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__472__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__472__delta)));
    __Vfunc_aes_mul_gf2p2__474__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__472__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__472__gamma)));
    __Vfunc_aes_mul_gf2p2__474__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__474__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__474__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__474__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__474__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__474__d)));
    __Vfunc_aes_mul_gf2p2__474__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__474__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__474__d)));
    __Vfunc_aes_mul_gf2p2__474__f = ((((IData)(__Vfunc_aes_mul_gf2p2__474__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__474__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__474__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__474__b)));
    __Vfunc_aes_mul_gf2p2__474__Vfuncout = __Vfunc_aes_mul_gf2p2__474__f;
    __Vfunc_aes_mul_gf2p4__472__b = __Vfunc_aes_mul_gf2p2__474__Vfuncout;
    __Vfunc_aes_mul_gf2p2__475__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__472__delta));
    __Vfunc_aes_mul_gf2p2__475__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__472__gamma));
    __Vfunc_aes_mul_gf2p2__475__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__475__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__475__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__475__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__475__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__475__d)));
    __Vfunc_aes_mul_gf2p2__475__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__475__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__475__d)));
    __Vfunc_aes_mul_gf2p2__475__f = ((((IData)(__Vfunc_aes_mul_gf2p2__475__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__475__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__475__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__475__b)));
    __Vfunc_aes_mul_gf2p2__475__Vfuncout = __Vfunc_aes_mul_gf2p2__475__f;
    __Vfunc_aes_mul_gf2p4__472__c = __Vfunc_aes_mul_gf2p2__475__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__472__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__472__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__476__g 
                        = __Vfunc_aes_mul_gf2p4__472__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__476__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__476__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__476__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__476__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__476__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__476__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__472__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__472__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__477__g 
                        = __Vfunc_aes_mul_gf2p4__472__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__477__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__477__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__477__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__477__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__477__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__477__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__472__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__472__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__472__Vfuncout;
    __Vfunc_aes_mul_gf2p4__478__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__478__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__478__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12147656243713941434ull);
    __Vfunc_aes_mul_gf2p2__479__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__478__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__479__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__478__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__479__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__479__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__479__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__479__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__479__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__479__d)));
    __Vfunc_aes_mul_gf2p2__479__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__479__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__479__d)));
    __Vfunc_aes_mul_gf2p2__479__f = ((((IData)(__Vfunc_aes_mul_gf2p2__479__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__479__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__479__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__479__b)));
    __Vfunc_aes_mul_gf2p2__479__Vfuncout = __Vfunc_aes_mul_gf2p2__479__f;
    __Vfunc_aes_mul_gf2p4__478__a = __Vfunc_aes_mul_gf2p2__479__Vfuncout;
    __Vfunc_aes_mul_gf2p2__480__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__478__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__478__delta)));
    __Vfunc_aes_mul_gf2p2__480__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__478__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__478__gamma)));
    __Vfunc_aes_mul_gf2p2__480__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__480__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__480__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__480__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__480__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__480__d)));
    __Vfunc_aes_mul_gf2p2__480__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__480__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__480__d)));
    __Vfunc_aes_mul_gf2p2__480__f = ((((IData)(__Vfunc_aes_mul_gf2p2__480__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__480__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__480__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__480__b)));
    __Vfunc_aes_mul_gf2p2__480__Vfuncout = __Vfunc_aes_mul_gf2p2__480__f;
    __Vfunc_aes_mul_gf2p4__478__b = __Vfunc_aes_mul_gf2p2__480__Vfuncout;
    __Vfunc_aes_mul_gf2p2__481__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__478__delta));
    __Vfunc_aes_mul_gf2p2__481__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__478__gamma));
    __Vfunc_aes_mul_gf2p2__481__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__481__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__481__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__481__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__481__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__481__d)));
    __Vfunc_aes_mul_gf2p2__481__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__481__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__481__d)));
    __Vfunc_aes_mul_gf2p2__481__f = ((((IData)(__Vfunc_aes_mul_gf2p2__481__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__481__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__481__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__481__b)));
    __Vfunc_aes_mul_gf2p2__481__Vfuncout = __Vfunc_aes_mul_gf2p2__481__f;
    __Vfunc_aes_mul_gf2p4__478__c = __Vfunc_aes_mul_gf2p2__481__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__478__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__478__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__482__g 
                        = __Vfunc_aes_mul_gf2p4__478__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__482__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__482__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__482__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__482__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__482__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__482__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__478__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__478__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__483__g 
                        = __Vfunc_aes_mul_gf2p4__478__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__483__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__483__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__483__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__483__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__483__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__483__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__478__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__478__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__478__Vfuncout;
    __Vfunc_aes_mul_gf2p2__496__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__496__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__496__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__496__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__496__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__496__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__496__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__496__d)));
    __Vfunc_aes_mul_gf2p2__496__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__496__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__496__d)));
    __Vfunc_aes_mul_gf2p2__496__f = ((((IData)(__Vfunc_aes_mul_gf2p2__496__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__496__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__496__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__496__b)));
    __Vfunc_aes_mul_gf2p2__496__Vfuncout = __Vfunc_aes_mul_gf2p2__496__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__496__Vfuncout;
    __Vfunc_aes_mul_gf2p2__497__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__497__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__497__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__497__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__497__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__497__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__497__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__497__d)));
    __Vfunc_aes_mul_gf2p2__497__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__497__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__497__d)));
    __Vfunc_aes_mul_gf2p2__497__f = ((((IData)(__Vfunc_aes_mul_gf2p2__497__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__497__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__497__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__497__b)));
    __Vfunc_aes_mul_gf2p2__497__Vfuncout = __Vfunc_aes_mul_gf2p2__497__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__497__Vfuncout;
    __Vfunc_aes_mul_gf2p2__500__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__500__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__500__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__500__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__500__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__500__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__500__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__500__d)));
    __Vfunc_aes_mul_gf2p2__500__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__500__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__500__d)));
    __Vfunc_aes_mul_gf2p2__500__f = ((((IData)(__Vfunc_aes_mul_gf2p2__500__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__500__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__500__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__500__b)));
    __Vfunc_aes_mul_gf2p2__500__Vfuncout = __Vfunc_aes_mul_gf2p2__500__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__500__Vfuncout;
    __Vfunc_aes_mul_gf2p2__501__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__501__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__501__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__501__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__501__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__501__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__501__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__501__d)));
    __Vfunc_aes_mul_gf2p2__501__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__501__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__501__d)));
    __Vfunc_aes_mul_gf2p2__501__f = ((((IData)(__Vfunc_aes_mul_gf2p2__501__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__501__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__501__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__501__b)));
    __Vfunc_aes_mul_gf2p2__501__Vfuncout = __Vfunc_aes_mul_gf2p2__501__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__501__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__u_aes_sb_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (1U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.data_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? (0x63U ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                     [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                     [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                     [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                     [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                     [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                     [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                     [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                     [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__446__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__446__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__446__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__446__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__446__Vfuncout)))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__447__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__447__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__447__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__447__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__447__Vfuncout))
                             : (0x63U ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                         [0U] = 0x58U;
                        vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                         [1U] = 0x2dU;
                        vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                         [2U] = 0x9eU;
                        vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                         [3U] = 0x0bU;
                        vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                         [4U] = 0xdcU;
                        vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                         [5U] = 4U;
                        vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                         [6U] = 3U;
                        vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                         [7U] = 0x24U;
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_b 
                            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c = 0U;
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                           >> 7U) & 
                                          vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                          [0U])));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                   >> 6U)))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                   >> 5U)))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                   >> 4U)))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                   >> 3U)))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                   >> 2U)))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                   >> 1U)))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                           [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0x03fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 >> 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0x07fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0x0ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0x1ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0x3ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0x7ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                           [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0xfffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0x07fffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0x0ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0x1ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0x3ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0x7ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                           [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0x0ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0x1ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0x3ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0x7ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                           [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                 << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0x1ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0x3ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0x7ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                  [3U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0x3fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0x7fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                  [2U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0x7fffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                  [1U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                  [0U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__448__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__448__vec_b) 
                                                        << 7U))))));
                        vlSelfRef.__Vfunc_aes_mvm__448__Vfuncout 
                            = vlSelfRef.__Vfunc_aes_mvm__448__vec_c;
                    }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__448__Vfuncout)))));
    vlSelfRef.mask_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                            [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                            [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                            [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                            [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                            [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                            [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                            [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                            [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__449__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__449__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__449__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__449__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__449__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__449__Vfuncout))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__450__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__450__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__450__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__450__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__450__Vfuncout))
                             : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__451__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__451__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__451__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__451__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__451__Vfuncout))));
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
    __Vfunc_aes_square_gf2p2__485__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                               >> 2U) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__485__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__485__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__485__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__485__Vfuncout = __Vfunc_aes_square_gf2p2__485__d;
    __Vfunc_aes_scale_omega2_gf2p2__484__g = __Vfunc_aes_square_gf2p2__485__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__484__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__484__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__484__g)));
    __Vfunc_aes_scale_omega2_gf2p2__484__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__484__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__484__Vfuncout;
    __Vfunc_aes_square_gf2p2__487__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                               >> 2U) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__487__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__487__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__487__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__487__Vfuncout = __Vfunc_aes_square_gf2p2__487__d;
    __Vfunc_aes_scale_omega2_gf2p2__486__g = __Vfunc_aes_square_gf2p2__487__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__486__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__486__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__486__g)));
    __Vfunc_aes_scale_omega2_gf2p2__486__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__486__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__486__Vfuncout;
    __Vfunc_aes_mul_gf2p4__502__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__502__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__502__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6814291591259725102ull);
    __Vfunc_aes_mul_gf2p2__503__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__502__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__503__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__502__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__503__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__503__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__503__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__503__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__503__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__503__d)));
    __Vfunc_aes_mul_gf2p2__503__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__503__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__503__d)));
    __Vfunc_aes_mul_gf2p2__503__f = ((((IData)(__Vfunc_aes_mul_gf2p2__503__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__503__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__503__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__503__b)));
    __Vfunc_aes_mul_gf2p2__503__Vfuncout = __Vfunc_aes_mul_gf2p2__503__f;
    __Vfunc_aes_mul_gf2p4__502__a = __Vfunc_aes_mul_gf2p2__503__Vfuncout;
    __Vfunc_aes_mul_gf2p2__504__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__502__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__502__delta)));
    __Vfunc_aes_mul_gf2p2__504__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__502__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__502__gamma)));
    __Vfunc_aes_mul_gf2p2__504__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__504__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__504__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__504__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__504__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__504__d)));
    __Vfunc_aes_mul_gf2p2__504__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__504__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__504__d)));
    __Vfunc_aes_mul_gf2p2__504__f = ((((IData)(__Vfunc_aes_mul_gf2p2__504__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__504__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__504__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__504__b)));
    __Vfunc_aes_mul_gf2p2__504__Vfuncout = __Vfunc_aes_mul_gf2p2__504__f;
    __Vfunc_aes_mul_gf2p4__502__b = __Vfunc_aes_mul_gf2p2__504__Vfuncout;
    __Vfunc_aes_mul_gf2p2__505__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__502__delta));
    __Vfunc_aes_mul_gf2p2__505__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__502__gamma));
    __Vfunc_aes_mul_gf2p2__505__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__505__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__505__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__505__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__505__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__505__d)));
    __Vfunc_aes_mul_gf2p2__505__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__505__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__505__d)));
    __Vfunc_aes_mul_gf2p2__505__f = ((((IData)(__Vfunc_aes_mul_gf2p2__505__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__505__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__505__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__505__b)));
    __Vfunc_aes_mul_gf2p2__505__Vfuncout = __Vfunc_aes_mul_gf2p2__505__f;
    __Vfunc_aes_mul_gf2p4__502__c = __Vfunc_aes_mul_gf2p2__505__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__502__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__502__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__506__g 
                        = __Vfunc_aes_mul_gf2p4__502__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__506__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__506__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__506__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__506__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__506__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__506__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__502__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__502__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__507__g 
                        = __Vfunc_aes_mul_gf2p4__502__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__507__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__507__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__507__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__507__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__507__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__507__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__502__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__502__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__502__Vfuncout;
    __Vfunc_aes_mul_gf2p4__520__delta = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 4U));
    __Vfunc_aes_mul_gf2p4__520__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__520__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15016191212949079784ull);
    __Vfunc_aes_mul_gf2p2__521__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__520__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__521__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__520__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__521__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__521__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__521__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__521__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__521__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__521__d)));
    __Vfunc_aes_mul_gf2p2__521__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__521__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__521__d)));
    __Vfunc_aes_mul_gf2p2__521__f = ((((IData)(__Vfunc_aes_mul_gf2p2__521__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__521__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__521__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__521__b)));
    __Vfunc_aes_mul_gf2p2__521__Vfuncout = __Vfunc_aes_mul_gf2p2__521__f;
    __Vfunc_aes_mul_gf2p4__520__a = __Vfunc_aes_mul_gf2p2__521__Vfuncout;
    __Vfunc_aes_mul_gf2p2__522__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__520__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__520__delta)));
    __Vfunc_aes_mul_gf2p2__522__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__520__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__520__gamma)));
    __Vfunc_aes_mul_gf2p2__522__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__522__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__522__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__522__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__522__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__522__d)));
    __Vfunc_aes_mul_gf2p2__522__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__522__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__522__d)));
    __Vfunc_aes_mul_gf2p2__522__f = ((((IData)(__Vfunc_aes_mul_gf2p2__522__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__522__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__522__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__522__b)));
    __Vfunc_aes_mul_gf2p2__522__Vfuncout = __Vfunc_aes_mul_gf2p2__522__f;
    __Vfunc_aes_mul_gf2p4__520__b = __Vfunc_aes_mul_gf2p2__522__Vfuncout;
    __Vfunc_aes_mul_gf2p2__523__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__520__delta));
    __Vfunc_aes_mul_gf2p2__523__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__520__gamma));
    __Vfunc_aes_mul_gf2p2__523__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__523__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__523__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__523__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__523__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__523__d)));
    __Vfunc_aes_mul_gf2p2__523__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__523__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__523__d)));
    __Vfunc_aes_mul_gf2p2__523__f = ((((IData)(__Vfunc_aes_mul_gf2p2__523__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__523__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__523__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__523__b)));
    __Vfunc_aes_mul_gf2p2__523__Vfuncout = __Vfunc_aes_mul_gf2p2__523__f;
    __Vfunc_aes_mul_gf2p4__520__c = __Vfunc_aes_mul_gf2p2__523__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__520__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__520__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__524__g 
                        = __Vfunc_aes_mul_gf2p4__520__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__524__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__524__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__524__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__524__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__524__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__524__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__520__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__520__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__525__g 
                        = __Vfunc_aes_mul_gf2p4__520__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__525__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__525__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__525__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__525__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__525__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__525__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__520__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__520__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__520__Vfuncout;
    __Vfunc_aes_mul_gf2p4__526__delta = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p4__526__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__526__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 218193596915062843ull);
    __Vfunc_aes_mul_gf2p2__527__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__526__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__527__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__526__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__527__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__527__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__527__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__527__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__527__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__527__d)));
    __Vfunc_aes_mul_gf2p2__527__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__527__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__527__d)));
    __Vfunc_aes_mul_gf2p2__527__f = ((((IData)(__Vfunc_aes_mul_gf2p2__527__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__527__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__527__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__527__b)));
    __Vfunc_aes_mul_gf2p2__527__Vfuncout = __Vfunc_aes_mul_gf2p2__527__f;
    __Vfunc_aes_mul_gf2p4__526__a = __Vfunc_aes_mul_gf2p2__527__Vfuncout;
    __Vfunc_aes_mul_gf2p2__528__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__526__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__526__delta)));
    __Vfunc_aes_mul_gf2p2__528__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__526__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__526__gamma)));
    __Vfunc_aes_mul_gf2p2__528__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__528__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__528__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__528__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__528__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__528__d)));
    __Vfunc_aes_mul_gf2p2__528__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__528__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__528__d)));
    __Vfunc_aes_mul_gf2p2__528__f = ((((IData)(__Vfunc_aes_mul_gf2p2__528__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__528__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__528__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__528__b)));
    __Vfunc_aes_mul_gf2p2__528__Vfuncout = __Vfunc_aes_mul_gf2p2__528__f;
    __Vfunc_aes_mul_gf2p4__526__b = __Vfunc_aes_mul_gf2p2__528__Vfuncout;
    __Vfunc_aes_mul_gf2p2__529__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__526__delta));
    __Vfunc_aes_mul_gf2p2__529__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__526__gamma));
    __Vfunc_aes_mul_gf2p2__529__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__529__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__529__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__529__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__529__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__529__d)));
    __Vfunc_aes_mul_gf2p2__529__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__529__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__529__d)));
    __Vfunc_aes_mul_gf2p2__529__f = ((((IData)(__Vfunc_aes_mul_gf2p2__529__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__529__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__529__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__529__b)));
    __Vfunc_aes_mul_gf2p2__529__Vfuncout = __Vfunc_aes_mul_gf2p2__529__f;
    __Vfunc_aes_mul_gf2p4__526__c = __Vfunc_aes_mul_gf2p2__529__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__526__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__526__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__530__g 
                        = __Vfunc_aes_mul_gf2p4__526__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__530__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__530__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__530__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__530__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__530__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__530__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__526__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__526__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__531__g 
                        = __Vfunc_aes_mul_gf2p4__526__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__531__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__531__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__531__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__531__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__531__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__531__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__526__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__526__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__526__Vfuncout;
    __Vfunc_aes_mul_gf2p4__538__delta = (0x0000000fU 
                                         & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__538__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__538__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15851762772837159471ull);
    __Vfunc_aes_mul_gf2p2__539__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__538__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__539__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__538__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__539__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__539__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__539__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__539__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__539__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__539__d)));
    __Vfunc_aes_mul_gf2p2__539__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__539__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__539__d)));
    __Vfunc_aes_mul_gf2p2__539__f = ((((IData)(__Vfunc_aes_mul_gf2p2__539__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__539__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__539__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__539__b)));
    __Vfunc_aes_mul_gf2p2__539__Vfuncout = __Vfunc_aes_mul_gf2p2__539__f;
    __Vfunc_aes_mul_gf2p4__538__a = __Vfunc_aes_mul_gf2p2__539__Vfuncout;
    __Vfunc_aes_mul_gf2p2__540__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__538__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__538__delta)));
    __Vfunc_aes_mul_gf2p2__540__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__538__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__538__gamma)));
    __Vfunc_aes_mul_gf2p2__540__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__540__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__540__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__540__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__540__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__540__d)));
    __Vfunc_aes_mul_gf2p2__540__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__540__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__540__d)));
    __Vfunc_aes_mul_gf2p2__540__f = ((((IData)(__Vfunc_aes_mul_gf2p2__540__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__540__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__540__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__540__b)));
    __Vfunc_aes_mul_gf2p2__540__Vfuncout = __Vfunc_aes_mul_gf2p2__540__f;
    __Vfunc_aes_mul_gf2p4__538__b = __Vfunc_aes_mul_gf2p2__540__Vfuncout;
    __Vfunc_aes_mul_gf2p2__541__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__538__delta));
    __Vfunc_aes_mul_gf2p2__541__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__538__gamma));
    __Vfunc_aes_mul_gf2p2__541__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__541__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__541__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__541__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__541__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__541__d)));
    __Vfunc_aes_mul_gf2p2__541__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__541__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__541__d)));
    __Vfunc_aes_mul_gf2p2__541__f = ((((IData)(__Vfunc_aes_mul_gf2p2__541__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__541__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__541__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__541__b)));
    __Vfunc_aes_mul_gf2p2__541__Vfuncout = __Vfunc_aes_mul_gf2p2__541__f;
    __Vfunc_aes_mul_gf2p4__538__c = __Vfunc_aes_mul_gf2p2__541__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__538__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__538__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__542__g 
                        = __Vfunc_aes_mul_gf2p4__538__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__542__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__542__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__542__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__542__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__542__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__542__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__538__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__538__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__543__g 
                        = __Vfunc_aes_mul_gf2p4__538__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__543__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__543__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__543__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__543__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__543__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__543__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__538__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__538__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__538__Vfuncout;
    __Vfunc_aes_mul_gf2p4__508__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__508__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__508__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2239141835085550509ull);
    __Vfunc_aes_mul_gf2p2__509__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__508__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__509__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__508__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__509__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__509__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__509__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__509__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__509__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__509__d)));
    __Vfunc_aes_mul_gf2p2__509__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__509__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__509__d)));
    __Vfunc_aes_mul_gf2p2__509__f = ((((IData)(__Vfunc_aes_mul_gf2p2__509__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__509__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__509__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__509__b)));
    __Vfunc_aes_mul_gf2p2__509__Vfuncout = __Vfunc_aes_mul_gf2p2__509__f;
    __Vfunc_aes_mul_gf2p4__508__a = __Vfunc_aes_mul_gf2p2__509__Vfuncout;
    __Vfunc_aes_mul_gf2p2__510__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__508__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__508__delta)));
    __Vfunc_aes_mul_gf2p2__510__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__508__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__508__gamma)));
    __Vfunc_aes_mul_gf2p2__510__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__510__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__510__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__510__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__510__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__510__d)));
    __Vfunc_aes_mul_gf2p2__510__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__510__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__510__d)));
    __Vfunc_aes_mul_gf2p2__510__f = ((((IData)(__Vfunc_aes_mul_gf2p2__510__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__510__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__510__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__510__b)));
    __Vfunc_aes_mul_gf2p2__510__Vfuncout = __Vfunc_aes_mul_gf2p2__510__f;
    __Vfunc_aes_mul_gf2p4__508__b = __Vfunc_aes_mul_gf2p2__510__Vfuncout;
    __Vfunc_aes_mul_gf2p2__511__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__508__delta));
    __Vfunc_aes_mul_gf2p2__511__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__508__gamma));
    __Vfunc_aes_mul_gf2p2__511__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__511__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__511__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__511__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__511__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__511__d)));
    __Vfunc_aes_mul_gf2p2__511__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__511__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__511__d)));
    __Vfunc_aes_mul_gf2p2__511__f = ((((IData)(__Vfunc_aes_mul_gf2p2__511__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__511__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__511__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__511__b)));
    __Vfunc_aes_mul_gf2p2__511__Vfuncout = __Vfunc_aes_mul_gf2p2__511__f;
    __Vfunc_aes_mul_gf2p4__508__c = __Vfunc_aes_mul_gf2p2__511__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__508__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__508__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__512__g 
                        = __Vfunc_aes_mul_gf2p4__508__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__512__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__512__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__512__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__512__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__512__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__512__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__508__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__508__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__513__g 
                        = __Vfunc_aes_mul_gf2p4__508__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__513__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__513__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__513__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__513__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__513__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__513__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__508__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__508__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__508__Vfuncout;
    __Vfunc_aes_mul_gf2p4__514__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__514__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__514__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13322905221665442218ull);
    __Vfunc_aes_mul_gf2p2__515__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__514__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__515__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__514__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__515__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__515__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__515__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__515__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__515__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__515__d)));
    __Vfunc_aes_mul_gf2p2__515__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__515__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__515__d)));
    __Vfunc_aes_mul_gf2p2__515__f = ((((IData)(__Vfunc_aes_mul_gf2p2__515__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__515__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__515__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__515__b)));
    __Vfunc_aes_mul_gf2p2__515__Vfuncout = __Vfunc_aes_mul_gf2p2__515__f;
    __Vfunc_aes_mul_gf2p4__514__a = __Vfunc_aes_mul_gf2p2__515__Vfuncout;
    __Vfunc_aes_mul_gf2p2__516__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__514__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__514__delta)));
    __Vfunc_aes_mul_gf2p2__516__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__514__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__514__gamma)));
    __Vfunc_aes_mul_gf2p2__516__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__516__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__516__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__516__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__516__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__516__d)));
    __Vfunc_aes_mul_gf2p2__516__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__516__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__516__d)));
    __Vfunc_aes_mul_gf2p2__516__f = ((((IData)(__Vfunc_aes_mul_gf2p2__516__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__516__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__516__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__516__b)));
    __Vfunc_aes_mul_gf2p2__516__Vfuncout = __Vfunc_aes_mul_gf2p2__516__f;
    __Vfunc_aes_mul_gf2p4__514__b = __Vfunc_aes_mul_gf2p2__516__Vfuncout;
    __Vfunc_aes_mul_gf2p2__517__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__514__delta));
    __Vfunc_aes_mul_gf2p2__517__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__514__gamma));
    __Vfunc_aes_mul_gf2p2__517__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__517__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__517__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__517__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__517__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__517__d)));
    __Vfunc_aes_mul_gf2p2__517__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__517__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__517__d)));
    __Vfunc_aes_mul_gf2p2__517__f = ((((IData)(__Vfunc_aes_mul_gf2p2__517__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__517__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__517__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__517__b)));
    __Vfunc_aes_mul_gf2p2__517__Vfuncout = __Vfunc_aes_mul_gf2p2__517__f;
    __Vfunc_aes_mul_gf2p4__514__c = __Vfunc_aes_mul_gf2p2__517__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__514__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__514__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__518__g 
                        = __Vfunc_aes_mul_gf2p4__514__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__518__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__518__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__518__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__518__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__518__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__518__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__514__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__514__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__519__g 
                        = __Vfunc_aes_mul_gf2p4__514__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__519__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__519__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__519__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__519__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__519__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__519__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__514__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__514__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__514__Vfuncout;
    __Vfunc_aes_mul_gf2p4__532__delta = (0x0000000fU 
                                         & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__532__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__532__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5147101049529418783ull);
    __Vfunc_aes_mul_gf2p2__533__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__532__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__533__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__532__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__533__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__533__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__533__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__533__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__533__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__533__d)));
    __Vfunc_aes_mul_gf2p2__533__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__533__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__533__d)));
    __Vfunc_aes_mul_gf2p2__533__f = ((((IData)(__Vfunc_aes_mul_gf2p2__533__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__533__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__533__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__533__b)));
    __Vfunc_aes_mul_gf2p2__533__Vfuncout = __Vfunc_aes_mul_gf2p2__533__f;
    __Vfunc_aes_mul_gf2p4__532__a = __Vfunc_aes_mul_gf2p2__533__Vfuncout;
    __Vfunc_aes_mul_gf2p2__534__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__532__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__532__delta)));
    __Vfunc_aes_mul_gf2p2__534__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__532__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__532__gamma)));
    __Vfunc_aes_mul_gf2p2__534__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__534__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__534__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__534__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__534__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__534__d)));
    __Vfunc_aes_mul_gf2p2__534__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__534__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__534__d)));
    __Vfunc_aes_mul_gf2p2__534__f = ((((IData)(__Vfunc_aes_mul_gf2p2__534__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__534__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__534__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__534__b)));
    __Vfunc_aes_mul_gf2p2__534__Vfuncout = __Vfunc_aes_mul_gf2p2__534__f;
    __Vfunc_aes_mul_gf2p4__532__b = __Vfunc_aes_mul_gf2p2__534__Vfuncout;
    __Vfunc_aes_mul_gf2p2__535__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__532__delta));
    __Vfunc_aes_mul_gf2p2__535__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__532__gamma));
    __Vfunc_aes_mul_gf2p2__535__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__535__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__535__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__535__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__535__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__535__d)));
    __Vfunc_aes_mul_gf2p2__535__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__535__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__535__d)));
    __Vfunc_aes_mul_gf2p2__535__f = ((((IData)(__Vfunc_aes_mul_gf2p2__535__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__535__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__535__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__535__b)));
    __Vfunc_aes_mul_gf2p2__535__Vfuncout = __Vfunc_aes_mul_gf2p2__535__f;
    __Vfunc_aes_mul_gf2p4__532__c = __Vfunc_aes_mul_gf2p2__535__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__532__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__532__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__536__g 
                        = __Vfunc_aes_mul_gf2p4__532__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__536__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__536__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__536__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__536__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__536__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__536__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__532__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__532__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__537__g 
                        = __Vfunc_aes_mul_gf2p4__532__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__537__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__537__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__537__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__537__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__537__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__537__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__532__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__532__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__532__Vfuncout;
    __Vfunc_aes_mul_gf2p4__544__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__544__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__544__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4555651209489420284ull);
    __Vfunc_aes_mul_gf2p2__545__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__544__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__545__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__544__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__545__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__545__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__545__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__545__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__545__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__545__d)));
    __Vfunc_aes_mul_gf2p2__545__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__545__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__545__d)));
    __Vfunc_aes_mul_gf2p2__545__f = ((((IData)(__Vfunc_aes_mul_gf2p2__545__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__545__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__545__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__545__b)));
    __Vfunc_aes_mul_gf2p2__545__Vfuncout = __Vfunc_aes_mul_gf2p2__545__f;
    __Vfunc_aes_mul_gf2p4__544__a = __Vfunc_aes_mul_gf2p2__545__Vfuncout;
    __Vfunc_aes_mul_gf2p2__546__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__544__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__544__delta)));
    __Vfunc_aes_mul_gf2p2__546__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__544__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__544__gamma)));
    __Vfunc_aes_mul_gf2p2__546__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__546__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__546__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__546__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__546__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__546__d)));
    __Vfunc_aes_mul_gf2p2__546__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__546__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__546__d)));
    __Vfunc_aes_mul_gf2p2__546__f = ((((IData)(__Vfunc_aes_mul_gf2p2__546__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__546__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__546__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__546__b)));
    __Vfunc_aes_mul_gf2p2__546__Vfuncout = __Vfunc_aes_mul_gf2p2__546__f;
    __Vfunc_aes_mul_gf2p4__544__b = __Vfunc_aes_mul_gf2p2__546__Vfuncout;
    __Vfunc_aes_mul_gf2p2__547__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__544__delta));
    __Vfunc_aes_mul_gf2p2__547__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__544__gamma));
    __Vfunc_aes_mul_gf2p2__547__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__547__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__547__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__547__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__547__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__547__d)));
    __Vfunc_aes_mul_gf2p2__547__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__547__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__547__d)));
    __Vfunc_aes_mul_gf2p2__547__f = ((((IData)(__Vfunc_aes_mul_gf2p2__547__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__547__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__547__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__547__b)));
    __Vfunc_aes_mul_gf2p2__547__Vfuncout = __Vfunc_aes_mul_gf2p2__547__f;
    __Vfunc_aes_mul_gf2p4__544__c = __Vfunc_aes_mul_gf2p2__547__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__544__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__544__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__548__g 
                        = __Vfunc_aes_mul_gf2p4__544__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__548__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__548__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__548__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__548__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__548__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__548__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__544__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__544__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__549__g 
                        = __Vfunc_aes_mul_gf2p4__544__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__549__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__549__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__549__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__549__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__549__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__549__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__544__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__544__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__544__Vfuncout;
    __Vfunc_aes_mul_gf2p2__492__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__492__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__492__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__492__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__492__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__492__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__492__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__492__d)));
    __Vfunc_aes_mul_gf2p2__492__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__492__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__492__d)));
    __Vfunc_aes_mul_gf2p2__492__f = ((((IData)(__Vfunc_aes_mul_gf2p2__492__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__492__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__492__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__492__b)));
    __Vfunc_aes_mul_gf2p2__492__Vfuncout = __Vfunc_aes_mul_gf2p2__492__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__492__Vfuncout;
    __Vfunc_aes_mul_gf2p2__493__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__493__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__493__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__493__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__493__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__493__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__493__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__493__d)));
    __Vfunc_aes_mul_gf2p2__493__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__493__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__493__d)));
    __Vfunc_aes_mul_gf2p2__493__f = ((((IData)(__Vfunc_aes_mul_gf2p2__493__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__493__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__493__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__493__b)));
    __Vfunc_aes_mul_gf2p2__493__Vfuncout = __Vfunc_aes_mul_gf2p2__493__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__493__Vfuncout;
    __Vfunc_aes_square_gf2p2__488__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                              ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                 >> 2U)));
    __Vfunc_aes_square_gf2p2__488__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__488__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__488__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__488__Vfuncout = __Vfunc_aes_square_gf2p2__488__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__488__Vfuncout;
    __Vfunc_aes_square_gf2p2__489__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                              ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__489__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__489__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__489__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__489__Vfuncout = __Vfunc_aes_square_gf2p2__489__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__489__Vfuncout;
}

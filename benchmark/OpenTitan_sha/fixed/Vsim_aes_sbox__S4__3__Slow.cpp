// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__342__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__342__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__342__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__342__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__342__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__343__Vfuncout;
    __Vfunc_aes_square_gf2p2__343__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__343__g;
    __Vfunc_aes_square_gf2p2__343__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__343__d;
    __Vfunc_aes_square_gf2p2__343__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__346__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__346__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__346__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__346__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__346__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__347__Vfuncout;
    __Vfunc_aes_square_gf2p2__347__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__347__g;
    __Vfunc_aes_square_gf2p2__347__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__347__d;
    __Vfunc_aes_square_gf2p2__347__d = 0;
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
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__362__Vfuncout;
    __Vfunc_aes_mul_gf2p4__362__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__362__gamma;
    __Vfunc_aes_mul_gf2p4__362__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__362__delta;
    __Vfunc_aes_mul_gf2p4__362__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__362__a;
    __Vfunc_aes_mul_gf2p4__362__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__362__b;
    __Vfunc_aes_mul_gf2p4__362__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__362__c;
    __Vfunc_aes_mul_gf2p4__362__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__363__Vfuncout;
    __Vfunc_aes_mul_gf2p2__363__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__363__g;
    __Vfunc_aes_mul_gf2p2__363__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__363__d;
    __Vfunc_aes_mul_gf2p2__363__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__363__f;
    __Vfunc_aes_mul_gf2p2__363__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__363__a;
    __Vfunc_aes_mul_gf2p2__363__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__363__b;
    __Vfunc_aes_mul_gf2p2__363__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__363__c;
    __Vfunc_aes_mul_gf2p2__363__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__364__Vfuncout;
    __Vfunc_aes_mul_gf2p2__364__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__364__g;
    __Vfunc_aes_mul_gf2p2__364__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__364__d;
    __Vfunc_aes_mul_gf2p2__364__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__364__f;
    __Vfunc_aes_mul_gf2p2__364__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__364__a;
    __Vfunc_aes_mul_gf2p2__364__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__364__b;
    __Vfunc_aes_mul_gf2p2__364__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__364__c;
    __Vfunc_aes_mul_gf2p2__364__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__365__Vfuncout;
    __Vfunc_aes_mul_gf2p2__365__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__365__g;
    __Vfunc_aes_mul_gf2p2__365__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__365__d;
    __Vfunc_aes_mul_gf2p2__365__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__365__f;
    __Vfunc_aes_mul_gf2p2__365__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__365__a;
    __Vfunc_aes_mul_gf2p2__365__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__365__b;
    __Vfunc_aes_mul_gf2p2__365__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__365__c;
    __Vfunc_aes_mul_gf2p2__365__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__368__Vfuncout;
    __Vfunc_aes_mul_gf2p4__368__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__368__gamma;
    __Vfunc_aes_mul_gf2p4__368__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__368__delta;
    __Vfunc_aes_mul_gf2p4__368__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__368__a;
    __Vfunc_aes_mul_gf2p4__368__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__368__b;
    __Vfunc_aes_mul_gf2p4__368__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__368__c;
    __Vfunc_aes_mul_gf2p4__368__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__369__Vfuncout;
    __Vfunc_aes_mul_gf2p2__369__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__369__g;
    __Vfunc_aes_mul_gf2p2__369__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__369__d;
    __Vfunc_aes_mul_gf2p2__369__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__369__f;
    __Vfunc_aes_mul_gf2p2__369__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__369__a;
    __Vfunc_aes_mul_gf2p2__369__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__369__b;
    __Vfunc_aes_mul_gf2p2__369__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__369__c;
    __Vfunc_aes_mul_gf2p2__369__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__370__Vfuncout;
    __Vfunc_aes_mul_gf2p2__370__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__370__g;
    __Vfunc_aes_mul_gf2p2__370__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__370__d;
    __Vfunc_aes_mul_gf2p2__370__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__370__f;
    __Vfunc_aes_mul_gf2p2__370__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__370__a;
    __Vfunc_aes_mul_gf2p2__370__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__370__b;
    __Vfunc_aes_mul_gf2p2__370__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__370__c;
    __Vfunc_aes_mul_gf2p2__370__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__371__Vfuncout;
    __Vfunc_aes_mul_gf2p2__371__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__371__g;
    __Vfunc_aes_mul_gf2p2__371__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__371__d;
    __Vfunc_aes_mul_gf2p2__371__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__371__f;
    __Vfunc_aes_mul_gf2p2__371__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__371__a;
    __Vfunc_aes_mul_gf2p2__371__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__371__b;
    __Vfunc_aes_mul_gf2p2__371__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__371__c;
    __Vfunc_aes_mul_gf2p2__371__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__374__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__374__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__374__g;
    __Vfunc_aes_scale_omega2_gf2p2__374__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__374__d;
    __Vfunc_aes_scale_omega2_gf2p2__374__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__375__Vfuncout;
    __Vfunc_aes_square_gf2p2__375__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__375__g;
    __Vfunc_aes_square_gf2p2__375__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__375__d;
    __Vfunc_aes_square_gf2p2__375__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__376__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__376__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__376__g;
    __Vfunc_aes_scale_omega2_gf2p2__376__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__376__d;
    __Vfunc_aes_scale_omega2_gf2p2__376__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__377__Vfuncout;
    __Vfunc_aes_square_gf2p2__377__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__377__g;
    __Vfunc_aes_square_gf2p2__377__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__377__d;
    __Vfunc_aes_square_gf2p2__377__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__378__Vfuncout;
    __Vfunc_aes_square_gf2p2__378__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__378__g;
    __Vfunc_aes_square_gf2p2__378__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__378__d;
    __Vfunc_aes_square_gf2p2__378__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__379__Vfuncout;
    __Vfunc_aes_square_gf2p2__379__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__379__g;
    __Vfunc_aes_square_gf2p2__379__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__379__d;
    __Vfunc_aes_square_gf2p2__379__d = 0;
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
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__382__Vfuncout;
    __Vfunc_aes_mul_gf2p2__382__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__382__g;
    __Vfunc_aes_mul_gf2p2__382__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__382__d;
    __Vfunc_aes_mul_gf2p2__382__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__382__f;
    __Vfunc_aes_mul_gf2p2__382__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__382__a;
    __Vfunc_aes_mul_gf2p2__382__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__382__b;
    __Vfunc_aes_mul_gf2p2__382__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__382__c;
    __Vfunc_aes_mul_gf2p2__382__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__383__Vfuncout;
    __Vfunc_aes_mul_gf2p2__383__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__383__g;
    __Vfunc_aes_mul_gf2p2__383__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__383__d;
    __Vfunc_aes_mul_gf2p2__383__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__383__f;
    __Vfunc_aes_mul_gf2p2__383__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__383__a;
    __Vfunc_aes_mul_gf2p2__383__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__383__b;
    __Vfunc_aes_mul_gf2p2__383__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__383__c;
    __Vfunc_aes_mul_gf2p2__383__c = 0;
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
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__386__Vfuncout;
    __Vfunc_aes_mul_gf2p2__386__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__386__g;
    __Vfunc_aes_mul_gf2p2__386__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__386__d;
    __Vfunc_aes_mul_gf2p2__386__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__386__f;
    __Vfunc_aes_mul_gf2p2__386__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__386__a;
    __Vfunc_aes_mul_gf2p2__386__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__386__b;
    __Vfunc_aes_mul_gf2p2__386__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__386__c;
    __Vfunc_aes_mul_gf2p2__386__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__387__Vfuncout;
    __Vfunc_aes_mul_gf2p2__387__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__387__g;
    __Vfunc_aes_mul_gf2p2__387__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__387__d;
    __Vfunc_aes_mul_gf2p2__387__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__387__f;
    __Vfunc_aes_mul_gf2p2__387__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__387__a;
    __Vfunc_aes_mul_gf2p2__387__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__387__b;
    __Vfunc_aes_mul_gf2p2__387__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__387__c;
    __Vfunc_aes_mul_gf2p2__387__c = 0;
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
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__390__Vfuncout;
    __Vfunc_aes_mul_gf2p2__390__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__390__g;
    __Vfunc_aes_mul_gf2p2__390__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__390__d;
    __Vfunc_aes_mul_gf2p2__390__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__390__f;
    __Vfunc_aes_mul_gf2p2__390__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__390__a;
    __Vfunc_aes_mul_gf2p2__390__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__390__b;
    __Vfunc_aes_mul_gf2p2__390__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__390__c;
    __Vfunc_aes_mul_gf2p2__390__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__391__Vfuncout;
    __Vfunc_aes_mul_gf2p2__391__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__391__g;
    __Vfunc_aes_mul_gf2p2__391__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__391__d;
    __Vfunc_aes_mul_gf2p2__391__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__391__f;
    __Vfunc_aes_mul_gf2p2__391__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__391__a;
    __Vfunc_aes_mul_gf2p2__391__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__391__b;
    __Vfunc_aes_mul_gf2p2__391__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__391__c;
    __Vfunc_aes_mul_gf2p2__391__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__392__Vfuncout;
    __Vfunc_aes_mul_gf2p4__392__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__392__gamma;
    __Vfunc_aes_mul_gf2p4__392__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__392__delta;
    __Vfunc_aes_mul_gf2p4__392__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__392__a;
    __Vfunc_aes_mul_gf2p4__392__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__392__b;
    __Vfunc_aes_mul_gf2p4__392__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__392__c;
    __Vfunc_aes_mul_gf2p4__392__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__393__Vfuncout;
    __Vfunc_aes_mul_gf2p2__393__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__393__g;
    __Vfunc_aes_mul_gf2p2__393__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__393__d;
    __Vfunc_aes_mul_gf2p2__393__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__393__f;
    __Vfunc_aes_mul_gf2p2__393__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__393__a;
    __Vfunc_aes_mul_gf2p2__393__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__393__b;
    __Vfunc_aes_mul_gf2p2__393__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__393__c;
    __Vfunc_aes_mul_gf2p2__393__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__394__Vfuncout;
    __Vfunc_aes_mul_gf2p2__394__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__394__g;
    __Vfunc_aes_mul_gf2p2__394__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__394__d;
    __Vfunc_aes_mul_gf2p2__394__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__394__f;
    __Vfunc_aes_mul_gf2p2__394__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__394__a;
    __Vfunc_aes_mul_gf2p2__394__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__394__b;
    __Vfunc_aes_mul_gf2p2__394__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__394__c;
    __Vfunc_aes_mul_gf2p2__394__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__395__Vfuncout;
    __Vfunc_aes_mul_gf2p2__395__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__395__g;
    __Vfunc_aes_mul_gf2p2__395__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__395__d;
    __Vfunc_aes_mul_gf2p2__395__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__395__f;
    __Vfunc_aes_mul_gf2p2__395__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__395__a;
    __Vfunc_aes_mul_gf2p2__395__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__395__b;
    __Vfunc_aes_mul_gf2p2__395__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__395__c;
    __Vfunc_aes_mul_gf2p2__395__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__398__Vfuncout;
    __Vfunc_aes_mul_gf2p4__398__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__398__gamma;
    __Vfunc_aes_mul_gf2p4__398__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__398__delta;
    __Vfunc_aes_mul_gf2p4__398__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__398__a;
    __Vfunc_aes_mul_gf2p4__398__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__398__b;
    __Vfunc_aes_mul_gf2p4__398__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__398__c;
    __Vfunc_aes_mul_gf2p4__398__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__399__Vfuncout;
    __Vfunc_aes_mul_gf2p2__399__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__399__g;
    __Vfunc_aes_mul_gf2p2__399__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__399__d;
    __Vfunc_aes_mul_gf2p2__399__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__399__f;
    __Vfunc_aes_mul_gf2p2__399__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__399__a;
    __Vfunc_aes_mul_gf2p2__399__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__399__b;
    __Vfunc_aes_mul_gf2p2__399__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__399__c;
    __Vfunc_aes_mul_gf2p2__399__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__400__Vfuncout;
    __Vfunc_aes_mul_gf2p2__400__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__400__g;
    __Vfunc_aes_mul_gf2p2__400__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__400__d;
    __Vfunc_aes_mul_gf2p2__400__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__400__f;
    __Vfunc_aes_mul_gf2p2__400__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__400__a;
    __Vfunc_aes_mul_gf2p2__400__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__400__b;
    __Vfunc_aes_mul_gf2p2__400__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__400__c;
    __Vfunc_aes_mul_gf2p2__400__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__401__Vfuncout;
    __Vfunc_aes_mul_gf2p2__401__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__401__g;
    __Vfunc_aes_mul_gf2p2__401__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__401__d;
    __Vfunc_aes_mul_gf2p2__401__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__401__f;
    __Vfunc_aes_mul_gf2p2__401__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__401__a;
    __Vfunc_aes_mul_gf2p2__401__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__401__b;
    __Vfunc_aes_mul_gf2p2__401__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__401__c;
    __Vfunc_aes_mul_gf2p2__401__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__404__Vfuncout;
    __Vfunc_aes_mul_gf2p4__404__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__404__gamma;
    __Vfunc_aes_mul_gf2p4__404__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__404__delta;
    __Vfunc_aes_mul_gf2p4__404__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__404__a;
    __Vfunc_aes_mul_gf2p4__404__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__404__b;
    __Vfunc_aes_mul_gf2p4__404__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__404__c;
    __Vfunc_aes_mul_gf2p4__404__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__405__Vfuncout;
    __Vfunc_aes_mul_gf2p2__405__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__405__g;
    __Vfunc_aes_mul_gf2p2__405__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__405__d;
    __Vfunc_aes_mul_gf2p2__405__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__405__f;
    __Vfunc_aes_mul_gf2p2__405__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__405__a;
    __Vfunc_aes_mul_gf2p2__405__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__405__b;
    __Vfunc_aes_mul_gf2p2__405__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__405__c;
    __Vfunc_aes_mul_gf2p2__405__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__406__Vfuncout;
    __Vfunc_aes_mul_gf2p2__406__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__406__g;
    __Vfunc_aes_mul_gf2p2__406__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__406__d;
    __Vfunc_aes_mul_gf2p2__406__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__406__f;
    __Vfunc_aes_mul_gf2p2__406__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__406__a;
    __Vfunc_aes_mul_gf2p2__406__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__406__b;
    __Vfunc_aes_mul_gf2p2__406__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__406__c;
    __Vfunc_aes_mul_gf2p2__406__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__407__Vfuncout;
    __Vfunc_aes_mul_gf2p2__407__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__407__g;
    __Vfunc_aes_mul_gf2p2__407__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__407__d;
    __Vfunc_aes_mul_gf2p2__407__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__407__f;
    __Vfunc_aes_mul_gf2p2__407__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__407__a;
    __Vfunc_aes_mul_gf2p2__407__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__407__b;
    __Vfunc_aes_mul_gf2p2__407__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__407__c;
    __Vfunc_aes_mul_gf2p2__407__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__410__Vfuncout;
    __Vfunc_aes_mul_gf2p4__410__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__410__gamma;
    __Vfunc_aes_mul_gf2p4__410__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__410__delta;
    __Vfunc_aes_mul_gf2p4__410__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__410__a;
    __Vfunc_aes_mul_gf2p4__410__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__410__b;
    __Vfunc_aes_mul_gf2p4__410__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__410__c;
    __Vfunc_aes_mul_gf2p4__410__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__411__Vfuncout;
    __Vfunc_aes_mul_gf2p2__411__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__411__g;
    __Vfunc_aes_mul_gf2p2__411__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__411__d;
    __Vfunc_aes_mul_gf2p2__411__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__411__f;
    __Vfunc_aes_mul_gf2p2__411__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__411__a;
    __Vfunc_aes_mul_gf2p2__411__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__411__b;
    __Vfunc_aes_mul_gf2p2__411__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__411__c;
    __Vfunc_aes_mul_gf2p2__411__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__412__Vfuncout;
    __Vfunc_aes_mul_gf2p2__412__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__412__g;
    __Vfunc_aes_mul_gf2p2__412__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__412__d;
    __Vfunc_aes_mul_gf2p2__412__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__412__f;
    __Vfunc_aes_mul_gf2p2__412__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__412__a;
    __Vfunc_aes_mul_gf2p2__412__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__412__b;
    __Vfunc_aes_mul_gf2p2__412__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__412__c;
    __Vfunc_aes_mul_gf2p2__412__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__413__Vfuncout;
    __Vfunc_aes_mul_gf2p2__413__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__413__g;
    __Vfunc_aes_mul_gf2p2__413__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__413__d;
    __Vfunc_aes_mul_gf2p2__413__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__413__f;
    __Vfunc_aes_mul_gf2p2__413__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__413__a;
    __Vfunc_aes_mul_gf2p2__413__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__413__b;
    __Vfunc_aes_mul_gf2p2__413__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__413__c;
    __Vfunc_aes_mul_gf2p2__413__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__416__Vfuncout;
    __Vfunc_aes_mul_gf2p4__416__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__416__gamma;
    __Vfunc_aes_mul_gf2p4__416__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__416__delta;
    __Vfunc_aes_mul_gf2p4__416__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__416__a;
    __Vfunc_aes_mul_gf2p4__416__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__416__b;
    __Vfunc_aes_mul_gf2p4__416__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__416__c;
    __Vfunc_aes_mul_gf2p4__416__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__417__Vfuncout;
    __Vfunc_aes_mul_gf2p2__417__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__417__g;
    __Vfunc_aes_mul_gf2p2__417__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__417__d;
    __Vfunc_aes_mul_gf2p2__417__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__417__f;
    __Vfunc_aes_mul_gf2p2__417__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__417__a;
    __Vfunc_aes_mul_gf2p2__417__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__417__b;
    __Vfunc_aes_mul_gf2p2__417__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__417__c;
    __Vfunc_aes_mul_gf2p2__417__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__418__Vfuncout;
    __Vfunc_aes_mul_gf2p2__418__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__418__g;
    __Vfunc_aes_mul_gf2p2__418__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__418__d;
    __Vfunc_aes_mul_gf2p2__418__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__418__f;
    __Vfunc_aes_mul_gf2p2__418__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__418__a;
    __Vfunc_aes_mul_gf2p2__418__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__418__b;
    __Vfunc_aes_mul_gf2p2__418__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__418__c;
    __Vfunc_aes_mul_gf2p2__418__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__419__Vfuncout;
    __Vfunc_aes_mul_gf2p2__419__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__419__g;
    __Vfunc_aes_mul_gf2p2__419__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__419__d;
    __Vfunc_aes_mul_gf2p2__419__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__419__f;
    __Vfunc_aes_mul_gf2p2__419__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__419__a;
    __Vfunc_aes_mul_gf2p2__419__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__419__b;
    __Vfunc_aes_mul_gf2p2__419__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__419__c;
    __Vfunc_aes_mul_gf2p2__419__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__422__Vfuncout;
    __Vfunc_aes_mul_gf2p4__422__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__422__gamma;
    __Vfunc_aes_mul_gf2p4__422__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__422__delta;
    __Vfunc_aes_mul_gf2p4__422__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__422__a;
    __Vfunc_aes_mul_gf2p4__422__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__422__b;
    __Vfunc_aes_mul_gf2p4__422__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__422__c;
    __Vfunc_aes_mul_gf2p4__422__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__423__Vfuncout;
    __Vfunc_aes_mul_gf2p2__423__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__423__g;
    __Vfunc_aes_mul_gf2p2__423__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__423__d;
    __Vfunc_aes_mul_gf2p2__423__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__423__f;
    __Vfunc_aes_mul_gf2p2__423__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__423__a;
    __Vfunc_aes_mul_gf2p2__423__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__423__b;
    __Vfunc_aes_mul_gf2p2__423__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__423__c;
    __Vfunc_aes_mul_gf2p2__423__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__424__Vfuncout;
    __Vfunc_aes_mul_gf2p2__424__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__424__g;
    __Vfunc_aes_mul_gf2p2__424__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__424__d;
    __Vfunc_aes_mul_gf2p2__424__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__424__f;
    __Vfunc_aes_mul_gf2p2__424__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__424__a;
    __Vfunc_aes_mul_gf2p2__424__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__424__b;
    __Vfunc_aes_mul_gf2p2__424__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__424__c;
    __Vfunc_aes_mul_gf2p2__424__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__425__Vfuncout;
    __Vfunc_aes_mul_gf2p2__425__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__425__g;
    __Vfunc_aes_mul_gf2p2__425__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__425__d;
    __Vfunc_aes_mul_gf2p2__425__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__425__f;
    __Vfunc_aes_mul_gf2p2__425__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__425__a;
    __Vfunc_aes_mul_gf2p2__425__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__425__b;
    __Vfunc_aes_mul_gf2p2__425__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__425__c;
    __Vfunc_aes_mul_gf2p2__425__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__428__Vfuncout;
    __Vfunc_aes_mul_gf2p4__428__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__428__gamma;
    __Vfunc_aes_mul_gf2p4__428__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__428__delta;
    __Vfunc_aes_mul_gf2p4__428__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__428__a;
    __Vfunc_aes_mul_gf2p4__428__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__428__b;
    __Vfunc_aes_mul_gf2p4__428__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__428__c;
    __Vfunc_aes_mul_gf2p4__428__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__429__Vfuncout;
    __Vfunc_aes_mul_gf2p2__429__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__429__g;
    __Vfunc_aes_mul_gf2p2__429__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__429__d;
    __Vfunc_aes_mul_gf2p2__429__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__429__f;
    __Vfunc_aes_mul_gf2p2__429__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__429__a;
    __Vfunc_aes_mul_gf2p2__429__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__429__b;
    __Vfunc_aes_mul_gf2p2__429__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__429__c;
    __Vfunc_aes_mul_gf2p2__429__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__430__Vfuncout;
    __Vfunc_aes_mul_gf2p2__430__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__430__g;
    __Vfunc_aes_mul_gf2p2__430__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__430__d;
    __Vfunc_aes_mul_gf2p2__430__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__430__f;
    __Vfunc_aes_mul_gf2p2__430__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__430__a;
    __Vfunc_aes_mul_gf2p2__430__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__430__b;
    __Vfunc_aes_mul_gf2p2__430__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__430__c;
    __Vfunc_aes_mul_gf2p2__430__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__431__Vfuncout;
    __Vfunc_aes_mul_gf2p2__431__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__431__g;
    __Vfunc_aes_mul_gf2p2__431__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__431__d;
    __Vfunc_aes_mul_gf2p2__431__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__431__f;
    __Vfunc_aes_mul_gf2p2__431__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__431__a;
    __Vfunc_aes_mul_gf2p2__431__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__431__b;
    __Vfunc_aes_mul_gf2p2__431__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__431__c;
    __Vfunc_aes_mul_gf2p2__431__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__434__Vfuncout;
    __Vfunc_aes_mul_gf2p4__434__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__434__gamma;
    __Vfunc_aes_mul_gf2p4__434__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__434__delta;
    __Vfunc_aes_mul_gf2p4__434__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__434__a;
    __Vfunc_aes_mul_gf2p4__434__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__434__b;
    __Vfunc_aes_mul_gf2p4__434__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__434__c;
    __Vfunc_aes_mul_gf2p4__434__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__435__Vfuncout;
    __Vfunc_aes_mul_gf2p2__435__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__435__g;
    __Vfunc_aes_mul_gf2p2__435__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__435__d;
    __Vfunc_aes_mul_gf2p2__435__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__435__f;
    __Vfunc_aes_mul_gf2p2__435__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__435__a;
    __Vfunc_aes_mul_gf2p2__435__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__435__b;
    __Vfunc_aes_mul_gf2p2__435__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__435__c;
    __Vfunc_aes_mul_gf2p2__435__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__436__Vfuncout;
    __Vfunc_aes_mul_gf2p2__436__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__436__g;
    __Vfunc_aes_mul_gf2p2__436__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__436__d;
    __Vfunc_aes_mul_gf2p2__436__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__436__f;
    __Vfunc_aes_mul_gf2p2__436__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__436__a;
    __Vfunc_aes_mul_gf2p2__436__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__436__b;
    __Vfunc_aes_mul_gf2p2__436__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__436__c;
    __Vfunc_aes_mul_gf2p2__436__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__437__Vfuncout;
    __Vfunc_aes_mul_gf2p2__437__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__437__g;
    __Vfunc_aes_mul_gf2p2__437__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__437__d;
    __Vfunc_aes_mul_gf2p2__437__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__437__f;
    __Vfunc_aes_mul_gf2p2__437__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__437__a;
    __Vfunc_aes_mul_gf2p2__437__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__437__b;
    __Vfunc_aes_mul_gf2p2__437__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__437__c;
    __Vfunc_aes_mul_gf2p2__437__c = 0;
    // Body
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b 
        = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                  >> 4U) ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b 
        = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                 ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                    >> 2U)));
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
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__u_aes_sb_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (1U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
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
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__330__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__330__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__330__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__330__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__330__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__330__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__330__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__330__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__330__vec_b 
                    = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                       [0U][3U]);
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__330__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__330__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__330__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__330__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__330__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_b 
                        = (0x000000ffU & (0x63U ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [0U][3U]));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__331__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__331__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__331__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__331__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__331__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_b 
                        = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [0U][3U]);
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__332__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__332__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__332__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__332__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__332__Vfuncout))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__333__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__333__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__333__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__333__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__333__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__333__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__333__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__333__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__333__vec_b 
                    = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                       [1U][3U]);
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__333__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__333__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__333__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__333__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__333__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_b 
                        = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [1U][3U]);
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__334__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__334__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__334__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__334__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__334__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_b 
                        = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [1U][3U]);
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__335__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__335__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__335__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__335__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__335__Vfuncout))));
    __Vfunc_aes_mul_gf2p2__382__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__382__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__382__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__382__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__382__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__382__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__382__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__382__d)));
    __Vfunc_aes_mul_gf2p2__382__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__382__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__382__d)));
    __Vfunc_aes_mul_gf2p2__382__f = ((((IData)(__Vfunc_aes_mul_gf2p2__382__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__382__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__382__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__382__b)));
    __Vfunc_aes_mul_gf2p2__382__Vfuncout = __Vfunc_aes_mul_gf2p2__382__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__382__Vfuncout;
    __Vfunc_aes_mul_gf2p2__383__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__383__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__383__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__383__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__383__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__383__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__383__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__383__d)));
    __Vfunc_aes_mul_gf2p2__383__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__383__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__383__d)));
    __Vfunc_aes_mul_gf2p2__383__f = ((((IData)(__Vfunc_aes_mul_gf2p2__383__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__383__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__383__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__383__b)));
    __Vfunc_aes_mul_gf2p2__383__Vfuncout = __Vfunc_aes_mul_gf2p2__383__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__383__Vfuncout;
    __Vfunc_aes_mul_gf2p4__362__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__362__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                            >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__362__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14544711970543570384ull);
    __Vfunc_aes_mul_gf2p2__363__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__362__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__363__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__362__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__363__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__363__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__363__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__363__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__363__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__363__d)));
    __Vfunc_aes_mul_gf2p2__363__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__363__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__363__d)));
    __Vfunc_aes_mul_gf2p2__363__f = ((((IData)(__Vfunc_aes_mul_gf2p2__363__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__363__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__363__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__363__b)));
    __Vfunc_aes_mul_gf2p2__363__Vfuncout = __Vfunc_aes_mul_gf2p2__363__f;
    __Vfunc_aes_mul_gf2p4__362__a = __Vfunc_aes_mul_gf2p2__363__Vfuncout;
    __Vfunc_aes_mul_gf2p2__364__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__362__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__362__delta)));
    __Vfunc_aes_mul_gf2p2__364__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__362__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__362__gamma)));
    __Vfunc_aes_mul_gf2p2__364__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__364__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__364__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__364__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__364__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__364__d)));
    __Vfunc_aes_mul_gf2p2__364__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__364__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__364__d)));
    __Vfunc_aes_mul_gf2p2__364__f = ((((IData)(__Vfunc_aes_mul_gf2p2__364__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__364__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__364__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__364__b)));
    __Vfunc_aes_mul_gf2p2__364__Vfuncout = __Vfunc_aes_mul_gf2p2__364__f;
    __Vfunc_aes_mul_gf2p4__362__b = __Vfunc_aes_mul_gf2p2__364__Vfuncout;
    __Vfunc_aes_mul_gf2p2__365__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__362__delta));
    __Vfunc_aes_mul_gf2p2__365__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__362__gamma));
    __Vfunc_aes_mul_gf2p2__365__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__365__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__365__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__365__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__365__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__365__d)));
    __Vfunc_aes_mul_gf2p2__365__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__365__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__365__d)));
    __Vfunc_aes_mul_gf2p2__365__f = ((((IData)(__Vfunc_aes_mul_gf2p2__365__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__365__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__365__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__365__b)));
    __Vfunc_aes_mul_gf2p2__365__Vfuncout = __Vfunc_aes_mul_gf2p2__365__f;
    __Vfunc_aes_mul_gf2p4__362__c = __Vfunc_aes_mul_gf2p2__365__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__362__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__362__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__366__g 
                        = __Vfunc_aes_mul_gf2p4__362__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__366__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__366__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__366__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__366__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__366__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__366__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__362__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__362__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__367__g 
                        = __Vfunc_aes_mul_gf2p4__362__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__367__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__367__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__367__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__367__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__367__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__367__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__362__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__362__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__362__Vfuncout;
    __Vfunc_aes_mul_gf2p4__368__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__368__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__368__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11439678968253633951ull);
    __Vfunc_aes_mul_gf2p2__369__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__368__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__369__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__368__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__369__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__369__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__369__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__369__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__369__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__369__d)));
    __Vfunc_aes_mul_gf2p2__369__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__369__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__369__d)));
    __Vfunc_aes_mul_gf2p2__369__f = ((((IData)(__Vfunc_aes_mul_gf2p2__369__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__369__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__369__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__369__b)));
    __Vfunc_aes_mul_gf2p2__369__Vfuncout = __Vfunc_aes_mul_gf2p2__369__f;
    __Vfunc_aes_mul_gf2p4__368__a = __Vfunc_aes_mul_gf2p2__369__Vfuncout;
    __Vfunc_aes_mul_gf2p2__370__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__368__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__368__delta)));
    __Vfunc_aes_mul_gf2p2__370__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__368__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__368__gamma)));
    __Vfunc_aes_mul_gf2p2__370__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__370__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__370__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__370__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__370__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__370__d)));
    __Vfunc_aes_mul_gf2p2__370__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__370__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__370__d)));
    __Vfunc_aes_mul_gf2p2__370__f = ((((IData)(__Vfunc_aes_mul_gf2p2__370__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__370__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__370__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__370__b)));
    __Vfunc_aes_mul_gf2p2__370__Vfuncout = __Vfunc_aes_mul_gf2p2__370__f;
    __Vfunc_aes_mul_gf2p4__368__b = __Vfunc_aes_mul_gf2p2__370__Vfuncout;
    __Vfunc_aes_mul_gf2p2__371__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__368__delta));
    __Vfunc_aes_mul_gf2p2__371__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__368__gamma));
    __Vfunc_aes_mul_gf2p2__371__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__371__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__371__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__371__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__371__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__371__d)));
    __Vfunc_aes_mul_gf2p2__371__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__371__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__371__d)));
    __Vfunc_aes_mul_gf2p2__371__f = ((((IData)(__Vfunc_aes_mul_gf2p2__371__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__371__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__371__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__371__b)));
    __Vfunc_aes_mul_gf2p2__371__Vfuncout = __Vfunc_aes_mul_gf2p2__371__f;
    __Vfunc_aes_mul_gf2p4__368__c = __Vfunc_aes_mul_gf2p2__371__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__368__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__368__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__372__g 
                        = __Vfunc_aes_mul_gf2p4__368__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__372__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__372__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__372__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__372__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__372__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__372__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__368__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__368__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__373__g 
                        = __Vfunc_aes_mul_gf2p4__368__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__373__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__373__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__373__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__373__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__373__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__373__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__368__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__368__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__368__Vfuncout;
    __Vfunc_aes_mul_gf2p2__386__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__386__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__386__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__386__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__386__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__386__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__386__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__386__d)));
    __Vfunc_aes_mul_gf2p2__386__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__386__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__386__d)));
    __Vfunc_aes_mul_gf2p2__386__f = ((((IData)(__Vfunc_aes_mul_gf2p2__386__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__386__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__386__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__386__b)));
    __Vfunc_aes_mul_gf2p2__386__Vfuncout = __Vfunc_aes_mul_gf2p2__386__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__386__Vfuncout;
    __Vfunc_aes_mul_gf2p2__387__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__387__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__387__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__387__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__387__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__387__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__387__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__387__d)));
    __Vfunc_aes_mul_gf2p2__387__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__387__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__387__d)));
    __Vfunc_aes_mul_gf2p2__387__f = ((((IData)(__Vfunc_aes_mul_gf2p2__387__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__387__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__387__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__387__b)));
    __Vfunc_aes_mul_gf2p2__387__Vfuncout = __Vfunc_aes_mul_gf2p2__387__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__387__Vfuncout;
    __Vfunc_aes_mul_gf2p2__390__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__390__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__390__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__390__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__390__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__390__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__390__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__390__d)));
    __Vfunc_aes_mul_gf2p2__390__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__390__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__390__d)));
    __Vfunc_aes_mul_gf2p2__390__f = ((((IData)(__Vfunc_aes_mul_gf2p2__390__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__390__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__390__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__390__b)));
    __Vfunc_aes_mul_gf2p2__390__Vfuncout = __Vfunc_aes_mul_gf2p2__390__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__390__Vfuncout;
    __Vfunc_aes_mul_gf2p2__391__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__391__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__391__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__391__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__391__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__391__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__391__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__391__d)));
    __Vfunc_aes_mul_gf2p2__391__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__391__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__391__d)));
    __Vfunc_aes_mul_gf2p2__391__f = ((((IData)(__Vfunc_aes_mul_gf2p2__391__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__391__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__391__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__391__b)));
    __Vfunc_aes_mul_gf2p2__391__Vfuncout = __Vfunc_aes_mul_gf2p2__391__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__391__Vfuncout;
    vlSelfRef.data_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? (0x63U ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                     [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                     [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                     [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                     [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                     [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                     [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                     [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                     [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__336__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__336__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__336__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__336__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__336__Vfuncout)))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__337__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__337__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__337__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__337__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__337__Vfuncout))
                             : (0x63U ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                         [0U] = 0x58U;
                        vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                         [1U] = 0x2dU;
                        vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                         [2U] = 0x9eU;
                        vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                         [3U] = 0x0bU;
                        vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                         [4U] = 0xdcU;
                        vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                         [5U] = 4U;
                        vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                         [6U] = 3U;
                        vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                         [7U] = 0x24U;
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_b 
                            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c = 0U;
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                           >> 7U) & 
                                          vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                          [0U])));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                   >> 6U)))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                   >> 5U)))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                   >> 4U)))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                   >> 3U)))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                   >> 2U)))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                   >> 1U)))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                           [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0x03fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 >> 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0x07fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0x0ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0x1ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0x3ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0x7ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                           [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0xfffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0x07fffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0x0ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0x1ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0x3ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0x7ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                           [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0x0ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0x1ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0x3ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0x7ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                           [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                 << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0x1ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0x3ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0x7ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                  [3U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0x3fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0x7fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                  [2U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0x7fffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                  [1U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                  [0U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__338__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__338__vec_b) 
                                                        << 7U))))));
                        vlSelfRef.__Vfunc_aes_mvm__338__Vfuncout 
                            = vlSelfRef.__Vfunc_aes_mvm__338__vec_c;
                    }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__338__Vfuncout)))));
    vlSelfRef.mask_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                            [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                            [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                            [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                            [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                            [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                            [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                            [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                            [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__339__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__339__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__339__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__339__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__339__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__339__Vfuncout))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__340__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__340__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__340__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__340__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__340__Vfuncout))
                             : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__341__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__341__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__341__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__341__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__341__Vfuncout))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__342__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__342__gamma)));
    __Vfunc_aes_square_gf2p2__343__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__342__gamma));
    __Vfunc_aes_square_gf2p2__343__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__343__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__343__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__343__Vfuncout = __Vfunc_aes_square_gf2p2__343__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__b = __Vfunc_aes_square_gf2p2__343__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__344__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__342__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__344__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__344__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__344__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__344__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__344__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__344__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__345__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__342__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__345__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__345__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__345__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__345__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__345__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__345__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__342__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__342__Vfuncout;
    __Vfunc_aes_mul_gf2p4__350__delta = (0x0000000fU 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__363__03a336__KET__);
    __Vfunc_aes_mul_gf2p4__350__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                            >> 4U));
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
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__346__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__346__gamma)));
    __Vfunc_aes_square_gf2p2__347__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__346__gamma));
    __Vfunc_aes_square_gf2p2__347__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__347__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__347__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__347__Vfuncout = __Vfunc_aes_square_gf2p2__347__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__b = __Vfunc_aes_square_gf2p2__347__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__348__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__346__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__348__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__348__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__348__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__348__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__348__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__348__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__349__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__346__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__349__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__349__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__349__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__349__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__349__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__349__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__346__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__346__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__378__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                              ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                 >> 2U)));
    __Vfunc_aes_square_gf2p2__378__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__378__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__378__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__378__Vfuncout = __Vfunc_aes_square_gf2p2__378__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__378__Vfuncout;
    __Vfunc_aes_square_gf2p2__379__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                              ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__379__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__379__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__379__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__379__Vfuncout = __Vfunc_aes_square_gf2p2__379__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__379__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__375__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                               >> 2U) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__375__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__375__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__375__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__375__Vfuncout = __Vfunc_aes_square_gf2p2__375__d;
    __Vfunc_aes_scale_omega2_gf2p2__374__g = __Vfunc_aes_square_gf2p2__375__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__374__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__374__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__374__g)));
    __Vfunc_aes_scale_omega2_gf2p2__374__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__374__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__374__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__377__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                               >> 2U) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__377__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__377__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__377__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__377__Vfuncout = __Vfunc_aes_square_gf2p2__377__d;
    __Vfunc_aes_scale_omega2_gf2p2__376__g = __Vfunc_aes_square_gf2p2__377__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__376__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__376__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__376__g)));
    __Vfunc_aes_scale_omega2_gf2p2__376__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__376__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__376__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__392__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__392__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__392__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15513149916968242979ull);
    __Vfunc_aes_mul_gf2p2__393__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__392__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__393__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__392__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__393__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__393__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__393__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__393__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__393__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__393__d)));
    __Vfunc_aes_mul_gf2p2__393__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__393__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__393__d)));
    __Vfunc_aes_mul_gf2p2__393__f = ((((IData)(__Vfunc_aes_mul_gf2p2__393__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__393__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__393__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__393__b)));
    __Vfunc_aes_mul_gf2p2__393__Vfuncout = __Vfunc_aes_mul_gf2p2__393__f;
    __Vfunc_aes_mul_gf2p4__392__a = __Vfunc_aes_mul_gf2p2__393__Vfuncout;
    __Vfunc_aes_mul_gf2p2__394__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__392__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__392__delta)));
    __Vfunc_aes_mul_gf2p2__394__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__392__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__392__gamma)));
    __Vfunc_aes_mul_gf2p2__394__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__394__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__394__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__394__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__394__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__394__d)));
    __Vfunc_aes_mul_gf2p2__394__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__394__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__394__d)));
    __Vfunc_aes_mul_gf2p2__394__f = ((((IData)(__Vfunc_aes_mul_gf2p2__394__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__394__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__394__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__394__b)));
    __Vfunc_aes_mul_gf2p2__394__Vfuncout = __Vfunc_aes_mul_gf2p2__394__f;
    __Vfunc_aes_mul_gf2p4__392__b = __Vfunc_aes_mul_gf2p2__394__Vfuncout;
    __Vfunc_aes_mul_gf2p2__395__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__392__delta));
    __Vfunc_aes_mul_gf2p2__395__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__392__gamma));
    __Vfunc_aes_mul_gf2p2__395__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__395__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__395__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__395__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__395__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__395__d)));
    __Vfunc_aes_mul_gf2p2__395__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__395__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__395__d)));
    __Vfunc_aes_mul_gf2p2__395__f = ((((IData)(__Vfunc_aes_mul_gf2p2__395__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__395__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__395__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__395__b)));
    __Vfunc_aes_mul_gf2p2__395__Vfuncout = __Vfunc_aes_mul_gf2p2__395__f;
    __Vfunc_aes_mul_gf2p4__392__c = __Vfunc_aes_mul_gf2p2__395__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__392__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__392__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__396__g 
                        = __Vfunc_aes_mul_gf2p4__392__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__396__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__396__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__396__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__396__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__396__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__396__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__392__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__392__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__397__g 
                        = __Vfunc_aes_mul_gf2p4__392__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__397__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__397__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__397__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__397__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__397__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__397__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__392__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__392__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__392__Vfuncout;
    __Vfunc_aes_mul_gf2p4__410__delta = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 4U));
    __Vfunc_aes_mul_gf2p4__410__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__410__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1427771129658949642ull);
    __Vfunc_aes_mul_gf2p2__411__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__410__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__411__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__410__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__411__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__411__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__411__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__411__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__411__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__411__d)));
    __Vfunc_aes_mul_gf2p2__411__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__411__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__411__d)));
    __Vfunc_aes_mul_gf2p2__411__f = ((((IData)(__Vfunc_aes_mul_gf2p2__411__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__411__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__411__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__411__b)));
    __Vfunc_aes_mul_gf2p2__411__Vfuncout = __Vfunc_aes_mul_gf2p2__411__f;
    __Vfunc_aes_mul_gf2p4__410__a = __Vfunc_aes_mul_gf2p2__411__Vfuncout;
    __Vfunc_aes_mul_gf2p2__412__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__410__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__410__delta)));
    __Vfunc_aes_mul_gf2p2__412__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__410__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__410__gamma)));
    __Vfunc_aes_mul_gf2p2__412__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__412__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__412__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__412__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__412__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__412__d)));
    __Vfunc_aes_mul_gf2p2__412__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__412__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__412__d)));
    __Vfunc_aes_mul_gf2p2__412__f = ((((IData)(__Vfunc_aes_mul_gf2p2__412__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__412__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__412__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__412__b)));
    __Vfunc_aes_mul_gf2p2__412__Vfuncout = __Vfunc_aes_mul_gf2p2__412__f;
    __Vfunc_aes_mul_gf2p4__410__b = __Vfunc_aes_mul_gf2p2__412__Vfuncout;
    __Vfunc_aes_mul_gf2p2__413__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__410__delta));
    __Vfunc_aes_mul_gf2p2__413__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__410__gamma));
    __Vfunc_aes_mul_gf2p2__413__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__413__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__413__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__413__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__413__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__413__d)));
    __Vfunc_aes_mul_gf2p2__413__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__413__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__413__d)));
    __Vfunc_aes_mul_gf2p2__413__f = ((((IData)(__Vfunc_aes_mul_gf2p2__413__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__413__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__413__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__413__b)));
    __Vfunc_aes_mul_gf2p2__413__Vfuncout = __Vfunc_aes_mul_gf2p2__413__f;
    __Vfunc_aes_mul_gf2p4__410__c = __Vfunc_aes_mul_gf2p2__413__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__410__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__410__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__414__g 
                        = __Vfunc_aes_mul_gf2p4__410__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__414__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__414__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__414__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__414__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__414__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__414__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__410__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__410__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__415__g 
                        = __Vfunc_aes_mul_gf2p4__410__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__415__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__415__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__415__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__415__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__415__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__415__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__410__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__410__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__410__Vfuncout;
    __Vfunc_aes_mul_gf2p4__416__delta = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p4__416__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__416__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10374532840520723866ull);
    __Vfunc_aes_mul_gf2p2__417__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__416__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__417__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__416__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__417__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__417__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__417__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__417__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__417__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__417__d)));
    __Vfunc_aes_mul_gf2p2__417__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__417__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__417__d)));
    __Vfunc_aes_mul_gf2p2__417__f = ((((IData)(__Vfunc_aes_mul_gf2p2__417__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__417__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__417__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__417__b)));
    __Vfunc_aes_mul_gf2p2__417__Vfuncout = __Vfunc_aes_mul_gf2p2__417__f;
    __Vfunc_aes_mul_gf2p4__416__a = __Vfunc_aes_mul_gf2p2__417__Vfuncout;
    __Vfunc_aes_mul_gf2p2__418__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__416__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__416__delta)));
    __Vfunc_aes_mul_gf2p2__418__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__416__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__416__gamma)));
    __Vfunc_aes_mul_gf2p2__418__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__418__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__418__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__418__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__418__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__418__d)));
    __Vfunc_aes_mul_gf2p2__418__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__418__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__418__d)));
    __Vfunc_aes_mul_gf2p2__418__f = ((((IData)(__Vfunc_aes_mul_gf2p2__418__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__418__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__418__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__418__b)));
    __Vfunc_aes_mul_gf2p2__418__Vfuncout = __Vfunc_aes_mul_gf2p2__418__f;
    __Vfunc_aes_mul_gf2p4__416__b = __Vfunc_aes_mul_gf2p2__418__Vfuncout;
    __Vfunc_aes_mul_gf2p2__419__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__416__delta));
    __Vfunc_aes_mul_gf2p2__419__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__416__gamma));
    __Vfunc_aes_mul_gf2p2__419__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__419__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__419__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__419__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__419__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__419__d)));
    __Vfunc_aes_mul_gf2p2__419__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__419__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__419__d)));
    __Vfunc_aes_mul_gf2p2__419__f = ((((IData)(__Vfunc_aes_mul_gf2p2__419__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__419__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__419__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__419__b)));
    __Vfunc_aes_mul_gf2p2__419__Vfuncout = __Vfunc_aes_mul_gf2p2__419__f;
    __Vfunc_aes_mul_gf2p4__416__c = __Vfunc_aes_mul_gf2p2__419__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__416__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__416__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__420__g 
                        = __Vfunc_aes_mul_gf2p4__416__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__420__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__420__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__420__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__420__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__420__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__420__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__416__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__416__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__421__g 
                        = __Vfunc_aes_mul_gf2p4__416__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__421__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__421__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__421__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__421__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__421__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__421__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__416__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__416__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__416__Vfuncout;
    __Vfunc_aes_mul_gf2p4__428__delta = (0x0000000fU 
                                         & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__428__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__428__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2598652879468459349ull);
    __Vfunc_aes_mul_gf2p2__429__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__428__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__429__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__428__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__429__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__429__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__429__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__429__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__429__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__429__d)));
    __Vfunc_aes_mul_gf2p2__429__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__429__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__429__d)));
    __Vfunc_aes_mul_gf2p2__429__f = ((((IData)(__Vfunc_aes_mul_gf2p2__429__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__429__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__429__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__429__b)));
    __Vfunc_aes_mul_gf2p2__429__Vfuncout = __Vfunc_aes_mul_gf2p2__429__f;
    __Vfunc_aes_mul_gf2p4__428__a = __Vfunc_aes_mul_gf2p2__429__Vfuncout;
    __Vfunc_aes_mul_gf2p2__430__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__428__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__428__delta)));
    __Vfunc_aes_mul_gf2p2__430__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__428__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__428__gamma)));
    __Vfunc_aes_mul_gf2p2__430__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__430__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__430__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__430__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__430__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__430__d)));
    __Vfunc_aes_mul_gf2p2__430__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__430__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__430__d)));
    __Vfunc_aes_mul_gf2p2__430__f = ((((IData)(__Vfunc_aes_mul_gf2p2__430__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__430__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__430__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__430__b)));
    __Vfunc_aes_mul_gf2p2__430__Vfuncout = __Vfunc_aes_mul_gf2p2__430__f;
    __Vfunc_aes_mul_gf2p4__428__b = __Vfunc_aes_mul_gf2p2__430__Vfuncout;
    __Vfunc_aes_mul_gf2p2__431__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__428__delta));
    __Vfunc_aes_mul_gf2p2__431__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__428__gamma));
    __Vfunc_aes_mul_gf2p2__431__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__431__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__431__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__431__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__431__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__431__d)));
    __Vfunc_aes_mul_gf2p2__431__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__431__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__431__d)));
    __Vfunc_aes_mul_gf2p2__431__f = ((((IData)(__Vfunc_aes_mul_gf2p2__431__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__431__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__431__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__431__b)));
    __Vfunc_aes_mul_gf2p2__431__Vfuncout = __Vfunc_aes_mul_gf2p2__431__f;
    __Vfunc_aes_mul_gf2p4__428__c = __Vfunc_aes_mul_gf2p2__431__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__428__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__428__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__432__g 
                        = __Vfunc_aes_mul_gf2p4__428__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__432__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__432__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__432__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__432__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__432__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__432__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__428__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__428__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__433__g 
                        = __Vfunc_aes_mul_gf2p4__428__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__433__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__433__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__433__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__433__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__433__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__433__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__428__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__428__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__428__Vfuncout;
    __Vfunc_aes_mul_gf2p4__398__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__398__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__398__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9042686136219081629ull);
    __Vfunc_aes_mul_gf2p2__399__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__398__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__399__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__398__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__399__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__399__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__399__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__399__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__399__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__399__d)));
    __Vfunc_aes_mul_gf2p2__399__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__399__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__399__d)));
    __Vfunc_aes_mul_gf2p2__399__f = ((((IData)(__Vfunc_aes_mul_gf2p2__399__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__399__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__399__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__399__b)));
    __Vfunc_aes_mul_gf2p2__399__Vfuncout = __Vfunc_aes_mul_gf2p2__399__f;
    __Vfunc_aes_mul_gf2p4__398__a = __Vfunc_aes_mul_gf2p2__399__Vfuncout;
    __Vfunc_aes_mul_gf2p2__400__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__398__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__398__delta)));
    __Vfunc_aes_mul_gf2p2__400__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__398__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__398__gamma)));
    __Vfunc_aes_mul_gf2p2__400__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__400__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__400__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__400__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__400__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__400__d)));
    __Vfunc_aes_mul_gf2p2__400__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__400__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__400__d)));
    __Vfunc_aes_mul_gf2p2__400__f = ((((IData)(__Vfunc_aes_mul_gf2p2__400__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__400__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__400__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__400__b)));
    __Vfunc_aes_mul_gf2p2__400__Vfuncout = __Vfunc_aes_mul_gf2p2__400__f;
    __Vfunc_aes_mul_gf2p4__398__b = __Vfunc_aes_mul_gf2p2__400__Vfuncout;
    __Vfunc_aes_mul_gf2p2__401__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__398__delta));
    __Vfunc_aes_mul_gf2p2__401__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__398__gamma));
    __Vfunc_aes_mul_gf2p2__401__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__401__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__401__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__401__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__401__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__401__d)));
    __Vfunc_aes_mul_gf2p2__401__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__401__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__401__d)));
    __Vfunc_aes_mul_gf2p2__401__f = ((((IData)(__Vfunc_aes_mul_gf2p2__401__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__401__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__401__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__401__b)));
    __Vfunc_aes_mul_gf2p2__401__Vfuncout = __Vfunc_aes_mul_gf2p2__401__f;
    __Vfunc_aes_mul_gf2p4__398__c = __Vfunc_aes_mul_gf2p2__401__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__398__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__398__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__402__g 
                        = __Vfunc_aes_mul_gf2p4__398__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__402__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__402__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__402__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__402__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__402__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__402__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__398__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__398__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__403__g 
                        = __Vfunc_aes_mul_gf2p4__398__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__403__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__403__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__403__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__403__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__403__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__403__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__398__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__398__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__398__Vfuncout;
    __Vfunc_aes_mul_gf2p4__404__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__404__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__404__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8494390584017098892ull);
    __Vfunc_aes_mul_gf2p2__405__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__404__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__405__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__404__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__405__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__405__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__405__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__405__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__405__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__405__d)));
    __Vfunc_aes_mul_gf2p2__405__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__405__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__405__d)));
    __Vfunc_aes_mul_gf2p2__405__f = ((((IData)(__Vfunc_aes_mul_gf2p2__405__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__405__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__405__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__405__b)));
    __Vfunc_aes_mul_gf2p2__405__Vfuncout = __Vfunc_aes_mul_gf2p2__405__f;
    __Vfunc_aes_mul_gf2p4__404__a = __Vfunc_aes_mul_gf2p2__405__Vfuncout;
    __Vfunc_aes_mul_gf2p2__406__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__404__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__404__delta)));
    __Vfunc_aes_mul_gf2p2__406__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__404__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__404__gamma)));
    __Vfunc_aes_mul_gf2p2__406__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__406__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__406__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__406__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__406__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__406__d)));
    __Vfunc_aes_mul_gf2p2__406__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__406__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__406__d)));
    __Vfunc_aes_mul_gf2p2__406__f = ((((IData)(__Vfunc_aes_mul_gf2p2__406__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__406__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__406__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__406__b)));
    __Vfunc_aes_mul_gf2p2__406__Vfuncout = __Vfunc_aes_mul_gf2p2__406__f;
    __Vfunc_aes_mul_gf2p4__404__b = __Vfunc_aes_mul_gf2p2__406__Vfuncout;
    __Vfunc_aes_mul_gf2p2__407__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__404__delta));
    __Vfunc_aes_mul_gf2p2__407__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__404__gamma));
    __Vfunc_aes_mul_gf2p2__407__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__407__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__407__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__407__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__407__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__407__d)));
    __Vfunc_aes_mul_gf2p2__407__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__407__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__407__d)));
    __Vfunc_aes_mul_gf2p2__407__f = ((((IData)(__Vfunc_aes_mul_gf2p2__407__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__407__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__407__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__407__b)));
    __Vfunc_aes_mul_gf2p2__407__Vfuncout = __Vfunc_aes_mul_gf2p2__407__f;
    __Vfunc_aes_mul_gf2p4__404__c = __Vfunc_aes_mul_gf2p2__407__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__404__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__404__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__408__g 
                        = __Vfunc_aes_mul_gf2p4__404__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__408__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__408__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__408__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__408__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__408__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__408__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__404__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__404__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__409__g 
                        = __Vfunc_aes_mul_gf2p4__404__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__409__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__409__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__409__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__409__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__409__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__409__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__404__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__404__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__404__Vfuncout;
    __Vfunc_aes_mul_gf2p4__422__delta = (0x0000000fU 
                                         & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__422__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__422__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10567512763627180821ull);
    __Vfunc_aes_mul_gf2p2__423__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__422__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__423__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__422__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__423__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__423__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__423__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__423__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__423__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__423__d)));
    __Vfunc_aes_mul_gf2p2__423__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__423__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__423__d)));
    __Vfunc_aes_mul_gf2p2__423__f = ((((IData)(__Vfunc_aes_mul_gf2p2__423__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__423__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__423__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__423__b)));
    __Vfunc_aes_mul_gf2p2__423__Vfuncout = __Vfunc_aes_mul_gf2p2__423__f;
    __Vfunc_aes_mul_gf2p4__422__a = __Vfunc_aes_mul_gf2p2__423__Vfuncout;
    __Vfunc_aes_mul_gf2p2__424__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__422__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__422__delta)));
    __Vfunc_aes_mul_gf2p2__424__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__422__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__422__gamma)));
    __Vfunc_aes_mul_gf2p2__424__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__424__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__424__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__424__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__424__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__424__d)));
    __Vfunc_aes_mul_gf2p2__424__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__424__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__424__d)));
    __Vfunc_aes_mul_gf2p2__424__f = ((((IData)(__Vfunc_aes_mul_gf2p2__424__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__424__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__424__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__424__b)));
    __Vfunc_aes_mul_gf2p2__424__Vfuncout = __Vfunc_aes_mul_gf2p2__424__f;
    __Vfunc_aes_mul_gf2p4__422__b = __Vfunc_aes_mul_gf2p2__424__Vfuncout;
    __Vfunc_aes_mul_gf2p2__425__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__422__delta));
    __Vfunc_aes_mul_gf2p2__425__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__422__gamma));
    __Vfunc_aes_mul_gf2p2__425__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__425__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__425__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__425__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__425__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__425__d)));
    __Vfunc_aes_mul_gf2p2__425__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__425__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__425__d)));
    __Vfunc_aes_mul_gf2p2__425__f = ((((IData)(__Vfunc_aes_mul_gf2p2__425__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__425__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__425__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__425__b)));
    __Vfunc_aes_mul_gf2p2__425__Vfuncout = __Vfunc_aes_mul_gf2p2__425__f;
    __Vfunc_aes_mul_gf2p4__422__c = __Vfunc_aes_mul_gf2p2__425__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__422__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__422__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__426__g 
                        = __Vfunc_aes_mul_gf2p4__422__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__426__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__426__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__426__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__426__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__426__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__426__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__422__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__422__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__427__g 
                        = __Vfunc_aes_mul_gf2p4__422__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__427__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__427__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__427__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__427__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__427__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__427__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__422__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__422__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__422__Vfuncout;
    __Vfunc_aes_mul_gf2p4__434__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__434__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__434__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6361462269383662219ull);
    __Vfunc_aes_mul_gf2p2__435__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__434__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__435__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__434__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__435__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__435__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__435__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__435__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__435__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__435__d)));
    __Vfunc_aes_mul_gf2p2__435__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__435__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__435__d)));
    __Vfunc_aes_mul_gf2p2__435__f = ((((IData)(__Vfunc_aes_mul_gf2p2__435__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__435__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__435__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__435__b)));
    __Vfunc_aes_mul_gf2p2__435__Vfuncout = __Vfunc_aes_mul_gf2p2__435__f;
    __Vfunc_aes_mul_gf2p4__434__a = __Vfunc_aes_mul_gf2p2__435__Vfuncout;
    __Vfunc_aes_mul_gf2p2__436__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__434__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__434__delta)));
    __Vfunc_aes_mul_gf2p2__436__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__434__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__434__gamma)));
    __Vfunc_aes_mul_gf2p2__436__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__436__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__436__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__436__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__436__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__436__d)));
    __Vfunc_aes_mul_gf2p2__436__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__436__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__436__d)));
    __Vfunc_aes_mul_gf2p2__436__f = ((((IData)(__Vfunc_aes_mul_gf2p2__436__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__436__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__436__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__436__b)));
    __Vfunc_aes_mul_gf2p2__436__Vfuncout = __Vfunc_aes_mul_gf2p2__436__f;
    __Vfunc_aes_mul_gf2p4__434__b = __Vfunc_aes_mul_gf2p2__436__Vfuncout;
    __Vfunc_aes_mul_gf2p2__437__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__434__delta));
    __Vfunc_aes_mul_gf2p2__437__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__434__gamma));
    __Vfunc_aes_mul_gf2p2__437__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__437__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__437__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__437__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__437__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__437__d)));
    __Vfunc_aes_mul_gf2p2__437__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__437__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__437__d)));
    __Vfunc_aes_mul_gf2p2__437__f = ((((IData)(__Vfunc_aes_mul_gf2p2__437__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__437__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__437__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__437__b)));
    __Vfunc_aes_mul_gf2p2__437__Vfuncout = __Vfunc_aes_mul_gf2p2__437__f;
    __Vfunc_aes_mul_gf2p4__434__c = __Vfunc_aes_mul_gf2p2__437__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__434__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__434__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__438__g 
                        = __Vfunc_aes_mul_gf2p4__434__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__438__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__438__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__438__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__438__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__438__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__438__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__434__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__434__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__439__g 
                        = __Vfunc_aes_mul_gf2p4__434__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__439__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__439__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__439__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__439__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__439__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__439__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__434__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__434__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__434__Vfuncout;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__0\n"); );
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
    __Vfunc_aes_mul_gf2p4__460__delta = (0x0000000fU 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__55__03a28__KET__);
    __Vfunc_aes_mul_gf2p4__460__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                            >> 4U));
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
    __Vfunc_aes_square_scale_gf2p4_gf2p2__456__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__456__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__456__Vfuncout;
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
}
